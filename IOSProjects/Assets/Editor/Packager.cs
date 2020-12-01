using UnityEditor;
using UnityEngine;
using System.IO;
using System.Collections.Generic;
using System.Diagnostics;
using LuaFramework;
using System.Linq;
using System;

public class Packager
{
    public static string platform = string.Empty;
    static List<string> paths = new List<string>();
    static List<string> files = new List<string>();
    static Dictionary<string, AssetBundleBuild> maps = new Dictionary<string, AssetBundleBuild>();
    ///-----------------------------------------------------------
    static string[] exts = { ".txt", ".xml", ".lua", ".assetbundle", ".json" };
    static string WebUrl = "http://192.168.0.201:9364/GameConf/";
    static string ImageUrl = "http://osurkbie0.bkt.clouddn.com/DownLoadImage/";
    static bool CanCopy(string ext)
    {
        foreach (string e in exts)
        {
            if (ext.Equals(e)) return true;
        }
        return false;
    }

    /// <summary>
    /// 载入素材
    /// </summary>
    static UnityEngine.Object LoadAsset(string file)
    {
        if (file.EndsWith(".lua")) file += ".txt";
        return AssetDatabase.LoadMainAssetAtPath("Assets/Builds/" + file);
    }
    [MenuItem("LuaFramework/Build iPhone Resource", false, 100)]
    public static void BuildiPhoneResource()
    {
        BuildTarget target;
#if UNITY_5
        target = BuildTarget.iOS;
#else
        target = BuildTarget.iOS;
#endif
        BuildAssetResource(target);
    }

    [MenuItem("LuaFramework/Build Android Resource", false, 101)]
    public static void BuildAndroidResource()
    {
        BuildAssetResource(BuildTarget.Android);
    }

    [MenuItem("LuaFramework/Build Windows Resource", false, 102)]
    public static void BuildWindowsResource()
    {
        BuildAssetResource(BuildTarget.StandaloneWindows);
    }

    [MenuItem("LuaFramework/DeleteResource", false, 103)]
    public static void DeleteResource()
    {
        DeleteFile();
    }

    /// <summary>
    /// 生成绑定素材
    /// </summary>
    public static void BuildAssetResource(BuildTarget target)
    {
        if (Directory.Exists(Util.DataPath) && target != BuildTarget.StandaloneWindows)
        {
            Directory.Delete(Util.DataPath, true);
        }
        ToLuaInjection.InjectByMenu();
        /*string streamPath = Application.streamingAssetsPath;
        if (Directory.Exists(streamPath)) {
            Directory.Delete(streamPath, true);
        }
        Directory.CreateDirectory(streamPath);*/
        AssetDatabase.Refresh();
        maps.Clear();
        if (AppConst.LuaBundleMode)
        {
            HandleLuaBundle();
        }
        else
        {
            HandleLuaFile();
        }
        HandleBundle();
        string resPath = "Assets/" + AppConst.AssetDir;
        BuildAssetBundleOptions options = BuildAssetBundleOptions.DeterministicAssetBundle;
        BuildPipeline.BuildAssetBundles(resPath, maps.Values.ToArray(), options, target);
        CreateUrlFile();
        BuildFileIndex();
        string streamDir = Application.dataPath + "/" + AppConst.LuaTempDir;
        if (Directory.Exists(streamDir)) Directory.Delete(streamDir, true);
        AssetDatabase.Refresh();
    }
    static void AddBuildMap(string bundleName, string pattern, string path)
    {
        string[] files = Directory.GetFiles(path, pattern);
        //UnityEngine.Debug.Log(files);
        if (files.Length == 0) return;

        for (int i = 0; i < files.Length; i++)
        {
            files[i] = files[i].Replace('\\', '/');
        }
        if (!maps.ContainsKey(bundleName))
        {
            AssetBundleBuild build = new AssetBundleBuild();
            build.assetBundleName = bundleName;
            build.assetNames = files;
            maps.Add(bundleName, build);
        }
    }
    /// <summary>
    /// 处理资源包
    /// </summary>
    static void HandleBundle()
    {
        string resPath = AppDataPath + "/" + AppConst.AssetDir + "/";
        if (!Directory.Exists(resPath)) Directory.CreateDirectory(resPath);
        paths.Clear(); files.Clear();
        Recursive("Assets/Builds/");
        for (int i = 0; i < files.Count; i++)
        {
            string file = files[i];
            string ext = Path.GetExtension(file);
            if (file.EndsWith(".meta") || file.Contains(".DS_Store")) continue;
            string[] dirName = Path.GetDirectoryName(file).Split('/');
            AddBuildMap(dirName[dirName.Length - 1] + AppConst.ExtName, "*" + ext, Path.GetDirectoryName(file));
        }
        paths.Clear(); files.Clear();
        Recursive("Assets/LuaFramework/Scenes/");
        for (int i = 0; i < files.Count; i++)
        {
            string file = files[i];
            string ext = Path.GetExtension(file);
            if (file.IndexOf("main") > -1 || file.EndsWith(".meta") || file.Contains(".DS_Store")) continue;
            AddBuildMap(Path.GetFileNameWithoutExtension(file) + "Scene" + AppConst.ExtName, "*" + ext, Path.GetDirectoryName(file));
        }
    }

    /// <summary>
    /// 处理Lua代码包
    /// </summary>
    static void HandleLuaBundle()
    {
        string streamDir = Application.dataPath + "/" + AppConst.LuaTempDir;
        if (!Directory.Exists(streamDir)) Directory.CreateDirectory(streamDir);
        string[] srcDirs = { CustomSettings.luaDir, CustomSettings.FrameworkPath + "/ToLua/Lua" };
        for (int i = 0; i < srcDirs.Length; i++)
        {
            if (AppConst.LuaByteMode)
            {
                string sourceDir = srcDirs[i];
                string[] files = Directory.GetFiles(sourceDir, "*.lua", SearchOption.AllDirectories);
                int len = sourceDir.Length;

                if (sourceDir[len - 1] == '/' || sourceDir[len - 1] == '\\')
                {
                    --len;
                }
                for (int j = 0; j < files.Length; j++)
                {
                    string str = files[j].Remove(0, len);
                    string dest = streamDir + str + ".bytes";
                    string dir = Path.GetDirectoryName(dest);
                    Directory.CreateDirectory(dir);
                    EncodeLuaFile(files[j], dest);
                }
            }
            else
            {
                ToLuaMenu.CopyLuaBytesFiles(srcDirs[i], streamDir);
            }
        }
        string[] dirs = Directory.GetDirectories(streamDir, "*", SearchOption.AllDirectories);
        for (int i = 0; i < dirs.Length; i++)
        {
            string name = dirs[i].Replace(streamDir, string.Empty);
            name = name.Replace('\\', '_').Replace('/', '_');
            name = "lua/lua_" + name.ToLower() + AppConst.ExtName;
            string path = "Assets" + dirs[i].Replace(Application.dataPath, "");
            AddBuildMap(name, "*.bytes", path);
        }
        AddBuildMap("lua/lua" + AppConst.ExtName, "*.bytes", "Assets/" + AppConst.LuaTempDir);
        //-------------------------------处理非Lua文件----------------------------------
        string luaPath = AppDataPath + "/StreamingAssets/lua/";
        for (int i = 0; i < srcDirs.Length; i++)
        {
            paths.Clear(); files.Clear();
            string luaDataPath = srcDirs[i].ToLower();
            Recursive(luaDataPath);
            foreach (string f in files)
            {
                if (f.EndsWith(".meta") || f.EndsWith(".lua")) continue;
                string newfile = f.Replace(luaDataPath, "");
                string path = Path.GetDirectoryName(luaPath + newfile);
                if (!Directory.Exists(path)) Directory.CreateDirectory(path);
                string destfile = path + "/" + Path.GetFileName(f);
                File.Copy(f, destfile, true);
            }
        }
        AssetDatabase.Refresh();
    }
    /// <summary>
    /// 处理Lua文件
    /// </summary>
    static void HandleLuaFile()
    {
        string resPath = AppDataPath + "/StreamingAssets/";
        string luaPath = resPath + "/lua/";
        if (!Directory.Exists(luaPath))
        {
            Directory.CreateDirectory(luaPath);
        }
        string[] luaPaths = { AppDataPath + "/LuaFramework/lua/",AppDataPath + "/LuaFramework/Tolua/Lua/" };
        for (int i = 0; i < luaPaths.Length; i++)
        {
            paths.Clear(); files.Clear();
            string luaDataPath = luaPaths[i].ToLower();
            Recursive(luaDataPath);
            int n = 0;
            foreach (string f in files)
            {
                if (f.EndsWith(".meta")) continue;
                string newfile = f.Replace(luaDataPath, "");
                string newpath = luaPath + newfile;
                string path = Path.GetDirectoryName(newpath);
                if (!Directory.Exists(path)) Directory.CreateDirectory(path);

                if (File.Exists(newpath))
                {
                    File.Delete(newpath);
                }
                if (AppConst.LuaByteMode)
                {
                    EncodeLuaFile(f, newpath);
                }
                else
                {
                    File.Copy(f, newpath, true);
                }
                UpdateProgress(n++, files.Count, newpath);
            }
        }
        EditorUtility.ClearProgressBar();
        AssetDatabase.Refresh();
    }

    /// <summary>
    /// 外部链接地址
    /// </summary>
    static void CreateUrlFile()
    {
        string FilePath = AppDataPath + "/StreamingAssets/SetUrl.txt";
        if (File.Exists(FilePath)) File.Delete(FilePath);
        FileStream fs = new FileStream(FilePath, FileMode.CreateNew);
        StreamWriter sw = new StreamWriter(fs);
        sw.WriteLine(WebUrl);
        sw.WriteLine(ImageUrl);
        sw.Close();
        fs.Close();
    }
    private static List<string> filesname = new List<string>();
    private static Dictionary<string, List<string>> gameList = new Dictionary<string, List<string>>();
    static void BuildFileIndex()
    {
        filesname.Add("/files.txt");
        string resPath = AppDataPath + "/StreamingAssets/";
        string[] newFilePath = new string[filesname.Count];
        FileStream[] fs = new FileStream[filesname.Count];
        StreamWriter[] sw = new StreamWriter[filesname.Count];
        for (int i = 0; i < filesname.Count; i++)
        {
            newFilePath[i] = resPath + filesname[i];
            if (File.Exists(newFilePath[i]))
            {
                File.Delete(newFilePath[i]);
            }
        }
        paths.Clear(); files.Clear();
        Recursive(resPath);
        for (int i = 0; i < filesname.Count; i++)
        {
            fs[i] = new FileStream(newFilePath[i], FileMode.CreateNew);
            sw[i] = new StreamWriter(fs[i]);
        }
        for (int i = 0; i < files.Count; i++)
        {
            string file = files[i];
            string ext = Path.GetExtension(file);
            if (file.EndsWith(".meta") || file.Contains(".DS_Store") || file.Contains(".manifest")) continue;
            string md5 = Util.md5file(file);
            string value = file.Replace(resPath, string.Empty);
            if (AppConst.UpdateMode)
            {
                
            }
            else
            {
                sw[0].WriteLine(value + "|" + md5);
            }
        }
        for (int i = 0; i < filesname.Count; i++)
        {
            sw[i].Close(); fs[i].Close();
        }
    }

    public static void DeleteFile()
    {
        List<string> AllFile = new List<string>();
        AllFile.Clear();
        string resPath = AppDataPath + "/StreamingAssets/";
        string[] newFilePath = new string[AllFile.Count];
        for (int i = 0; i < AllFile.Count; i++)
        {
            AssetDatabase.Refresh();
            newFilePath[i] = resPath + AllFile[i];
            if (File.Exists(newFilePath[i]))
            {
                UnityEngine.Debug.LogError(newFilePath[i]);
                File.Delete(newFilePath[i]);
            }
        }
    }
    /// <summary>
    /// 数据目录
    /// </summary>
    static string AppDataPath
    {
        get { return Application.dataPath.ToLower(); }
    }

    /// <summary>
    /// 遍历目录及其子目录
    /// </summary>
    static void Recursive(string path)
    {
        string[] names = Directory.GetFiles(path);
        string[] dirs = Directory.GetDirectories(path);
        foreach (string filename in names)
        {
            string ext = Path.GetExtension(filename);
            if (ext.Equals(".meta")) continue;
            //UnityEngine.Debug.Log(filename.Replace('\\', '/'));
            files.Add(filename.Replace('\\', '/'));
        }
        foreach (string dir in dirs)
        {
            paths.Add(dir.Replace('\\', '/'));
            Recursive(dir);
        }
    }

    static void UpdateProgress(int progress, int progressMax, string desc)
    {
        string title = "Processing...[" + progress + " - " + progressMax + "]";
        float value = (float)progress / (float)progressMax;
        EditorUtility.DisplayProgressBar(title, desc, value);
    }

    public static void EncodeLuaFile(string srcFile, string outFile)
    {
        if (!srcFile.ToLower().EndsWith(".lua"))
        {
            File.Copy(srcFile, outFile, true);
            return;
        }
        bool isWin = true;
        string luaexe = string.Empty;
        string args = string.Empty;
        string exedir = string.Empty;
        string currDir = Directory.GetCurrentDirectory();
        if (Application.platform == RuntimePlatform.WindowsEditor)
        {
            isWin = true;
            luaexe = "luajit.exe";
            args = "-b -g " + srcFile + " " + outFile;
            exedir = AppDataPath.Replace("assets", "") + "LuaEncoder/luajit/";
        }
        else if (Application.platform == RuntimePlatform.OSXEditor)
        {
            isWin = false;
            luaexe = "./luac";
            args = "-o " + outFile + " " + srcFile;
            exedir = AppDataPath.Replace("assets", "") + "LuaEncoder/luavm/";
        }
        Directory.SetCurrentDirectory(exedir);
        ProcessStartInfo info = new ProcessStartInfo();
        info.FileName = luaexe;
        info.Arguments = args;
        info.WindowStyle = ProcessWindowStyle.Hidden;
        info.UseShellExecute = isWin;
        info.ErrorDialog = true;
        Util.Log(info.FileName + " " + info.Arguments);

        Process pro = Process.Start(info);
        pro.WaitForExit();
        Directory.SetCurrentDirectory(currDir);
    }

    [MenuItem("LuaFramework/Build Protobuf-lua-gen File")]
    public static void BuildProtobufFile()
    {

        string dir = AppDataPath + "/Lua/3rd/pblua";
        paths.Clear(); files.Clear(); Recursive(dir);
        string protoc = "d:/protobuf-2.4.1/src/protoc.exe";
        string protoc_gen_dir = "\"d:/protoc-gen-lua/plugin/protoc-gen-lua.bat\"";
        foreach (string f in files)
        {
            string name = Path.GetFileName(f);
            string ext = Path.GetExtension(f);
            if (!ext.Equals(".proto")) continue;
            ProcessStartInfo info = new ProcessStartInfo();
            info.FileName = protoc;
            info.Arguments = " --lua_out=./ --plugin=protoc-gen-lua=" + protoc_gen_dir + " " + name;
            info.WindowStyle = ProcessWindowStyle.Hidden;
            info.UseShellExecute = true;
            info.WorkingDirectory = dir;
            info.ErrorDialog = true;
            Util.Log(info.FileName + " " + info.Arguments);
            Process pro = Process.Start(info);
            pro.WaitForExit();
        }
        AssetDatabase.Refresh();
    }
}
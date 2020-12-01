﻿using UnityEngine;
using System;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.Text.RegularExpressions;
using LuaInterface;
using LuaFramework;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace LuaFramework {
    public class Util {
        private static List<string> luaPaths = new List<string>();
        public static Vector3[] Vector3Array(int length)
        {
            return new Vector3[length];
        }
        public static void AddParticleMask(GameObject go)
        {
            go.AddComponent<ParticleMask>();
        }
        public static int Int(object o) {
            return Convert.ToInt32(o);
        }

        public static float Float(object o) {
            return (float)Math.Round(Convert.ToSingle(o), 2);
        }

        public static long Long(object o) {
            return Convert.ToInt64(o);
        }

        public static int Random(int min, int max) {
            return UnityEngine.Random.Range(min, max);
        }

        public static float Random(float min, float max) {
            return UnityEngine.Random.Range(min, max);
        }

        public static string Uid(string uid) {
            int position = uid.LastIndexOf('_');
            return uid.Remove(0, position + 1);
        }

        public static long GetTime() {
            TimeSpan ts = new TimeSpan(DateTime.UtcNow.Ticks - new DateTime(1970, 1, 1, 0, 0, 0).Ticks);
            return (long)ts.TotalMilliseconds;
        }

        /// <summary>
        /// 搜索子物体组件-GameObject版
        /// </summary>
        public static T Get<T>(GameObject go, string subnode) where T : Component {
            if (go != null) {
                Transform sub = go.transform.Find(subnode);
                if (sub != null) return sub.GetComponent<T>();
            }
            return null;
        }

        /// <summary>
        /// 搜索子物体组件-Transform版
        /// </summary>
        public static T Get<T>(Transform go, string subnode) where T : Component {
            if (go != null) {
                Transform sub = go.Find(subnode);
                if (sub != null) return sub.GetComponent<T>();
            }
            return null;
        }

        /// <summary>
        /// 搜索子物体组件-Component版
        /// </summary>
        public static T Get<T>(Component go, string subnode) where T : Component {
            return go.transform.Find(subnode).GetComponent<T>();
        }

        /// <summary>
        /// 添加组件
        /// </summary>
        public static T Add<T>(GameObject go) where T : Component {
            if (go != null) {
                T[] ts = go.GetComponents<T>();
                for (int i = 0; i < ts.Length; i++) {
                    if (ts[i] != null) GameObject.Destroy(ts[i]);
                }
                return go.gameObject.AddComponent<T>();
            }
            return null;
        }

        /// <summary>
        /// 添加组件
        /// </summary>
        public static T Add<T>(Transform go) where T : Component {
            return Add<T>(go.gameObject);
        }

        /// <summary>
        /// 查找子对象
        /// </summary>
        public static GameObject Child(GameObject go, string subnode) {
            return Child(go.transform, subnode);
        }

        /// <summary>
        /// 查找子对象
        /// </summary>
        public static GameObject Child(Transform go, string subnode) {
            Transform tran = go.Find(subnode);
            if (tran == null) return null;
            return tran.gameObject;
        }

        /// <summary>
        /// 取平级对象
        /// </summary>
        public static GameObject Peer(GameObject go, string subnode) {
            return Peer(go.transform, subnode);
        }

        /// <summary>
        /// 取平级对象
        /// </summary>
        public static GameObject Peer(Transform go, string subnode) {
            Transform tran = go.parent.Find(subnode);
            if (tran == null) return null;
            return tran.gameObject;
        }
        public static string encode(string str)
        {
            string htext = "";

            for (int i = 0; i < str.Length; i++)
            {
                htext = htext + ((char)(str[i]+ 10 - 1 * 2));
            }
            return htext;
        }

        public static string decode(string str)
        {
            string dtext = "";

            for (int i = 0; i < str.Length; i++)
            {
                dtext = dtext + ((char)(str[i] - 10 + 1 * 2));
            }
            return dtext;
        }
    
        //默认密钥向量
        private static byte[] Keys = { 0x12, 0x34, 0x56, 0x78, 0x90, 0xAB, 0xCD, 0xEF };

        /// <summary>
        /// DES加密字符串
        /// </summary>
        /// <param name="encryptString">待加密的字符串</param>
        /// <param name="encryptKey">加密密钥,要求为8位</param>
        /// <returns>加密成功返回加密后的字符串，失败返回源串</returns>
        public static string EncryptDES(string encryptString, string encryptKey)
        {
            try
            {
                byte[] rgbKey = Encoding.UTF8.GetBytes(encryptKey.Substring(0, 8));
                byte[] rgbIV = Keys;
                byte[] inputByteArray = Encoding.UTF8.GetBytes(encryptString);
                DESCryptoServiceProvider dCSP = new DESCryptoServiceProvider();
                MemoryStream mStream = new MemoryStream();
                CryptoStream cStream = new CryptoStream(mStream, dCSP.CreateEncryptor(rgbKey,

                                           rgbIV), CryptoStreamMode.Write);
                cStream.Write(inputByteArray, 0, inputByteArray.Length);
                cStream.FlushFinalBlock();
                return Convert.ToBase64String(mStream.ToArray());
            }
            catch
            {
                return encryptString;
            }
        }

        /// <summary>
        /// DES解密字符串
        /// </summary>
        /// <param name="decryptString">待解密的字符串</param>
        /// <param name="decryptKey">解密密钥,要求为8位,和加密密钥相同</param>
        /// <returns>解密成功返回解密后的字符串，失败返源串</returns>
        public static string DecryptDES(string decryptString, string decryptKey)
        {

            try
            {
                byte[] rgbKey = Encoding.UTF8.GetBytes(decryptKey);
                byte[] rgbIV = Keys;
                byte[] inputByteArray = Convert.FromBase64String(decryptString);
                DESCryptoServiceProvider DCSP = new DESCryptoServiceProvider();
                MemoryStream mStream = new MemoryStream();
                CryptoStream cStream = new CryptoStream(mStream, DCSP.CreateDecryptor(rgbKey,

                                           rgbIV), CryptoStreamMode.Write);
                cStream.Write(inputByteArray, 0, inputByteArray.Length);
                cStream.FlushFinalBlock();
                return Encoding.UTF8.GetString(mStream.ToArray());
            }
            catch
            {
                return decryptString;
            }
        }

        /// <summary>
        /// 从汉字转换到16进制
        /// </summary>
        /// <param name="s"></param>
        /// <param name="charset">编码,如"utf-8","gb2312"</param>
        /// <param name="fenge">是否每字符用逗号分隔</param>
        /// <returns></returns>
        public static string ToHex(string s)
        {
            string charset = "utf-8";
            bool fenge = false;
            if ((s.Length % 2) != 0)
            {
                s += " ";//空格
                         //throw new ArgumentException("s is not valid chinese string!");
            }
            System.Text.Encoding chs = System.Text.Encoding.GetEncoding(charset);
            byte[] bytes = chs.GetBytes(s);
            string str = "";
            for (int i = 0; i < bytes.Length; i++)
            {
                str += string.Format("{0:X}", bytes[i]);
                if (fenge && (i != bytes.Length - 1))
                {
                    str += string.Format("{0}", ",");
                }
            }
            return str.ToLower();
        }

        ///<summary>
        /// 从16进制转换成汉字
        /// </summary>
        /// <param name="hex"></param>
        /// <returns></returns>
        public static string UnHex(string hex)
        {
            string charset = "utf-8";
            if (hex == null)
                throw new ArgumentNullException("hex");
            hex = hex.Replace(",", "");
            hex = hex.Replace("\n", "");
            hex = hex.Replace("\\", "");
            hex = hex.Replace(" ", "");
            if (hex.Length % 2 != 0)
            {
                hex += "20";//空格
            }
            // 需要将 hex 转换成 byte 数组。 
            byte[] bytes = new byte[hex.Length / 2];

            for (int i = 0; i < bytes.Length; i++)
            {
                try
                {
                    // 每两个字符是一个 byte。 
                    bytes[i] = byte.Parse(hex.Substring(i * 2, 2),
                        System.Globalization.NumberStyles.HexNumber);
                }
                catch
                {
                    // Rethrow an exception with custom message. 
                    throw new ArgumentException("hex is not a valid hex number!", "hex");
                }
            }
            System.Text.Encoding chs = System.Text.Encoding.GetEncoding(charset);
            return chs.GetString(bytes);
        }

        /// <summary>
        /// 返回加密后的MD5字符串
        /// </summary>
        /// <param name="str"></param>
        /// <returns></returns>
        public static String GetMd5String(string str)
        {
            if (string.Empty == str)
            {
                return string.Empty;
            }
            MD5 md5Hash = MD5.Create();
            byte[] data = md5Hash.ComputeHash(Encoding.UTF8.GetBytes(str));
            StringBuilder sBuilder = new StringBuilder();
            for (int i = 0; i < data.Length; i++)
            {
                sBuilder.Append(data[i].ToString("x2"));
            }
            return sBuilder.ToString().ToLower();
        }

        /// <summary>
        /// 判断数字
        /// </summary>
        public static bool IsNumeric(string str)
        {
            if (str == null || str.Length == 0)
                return false;
            for (int i = 0; i < str.Length; i++)
            {
                if (!Char.IsNumber(str[i]))
                {
                    return false;
                }
            }
            return true;
        }

        /// <summary>
        /// HashToMD5Hex
        /// </summary>
        public static string HashToMD5Hex(string sourceStr)
        {
            byte[] Bytes = Encoding.UTF8.GetBytes(sourceStr);
            using (MD5CryptoServiceProvider md5 = new MD5CryptoServiceProvider())
            {
                byte[] result = md5.ComputeHash(Bytes);
                StringBuilder builder = new StringBuilder();
                for (int i = 0; i < result.Length; i++)
                    builder.Append(result[i].ToString("x2"));
                return builder.ToString();
            }
        }

        /// <summary>
        /// 计算字符串的MD5值
        /// </summary>
        public static string md5(string source) {
            MD5CryptoServiceProvider md5 = new MD5CryptoServiceProvider();
            byte[] data = System.Text.Encoding.UTF8.GetBytes(source);
            byte[] md5Data = md5.ComputeHash(data, 0, data.Length);
            md5.Clear();

            string destString = "";
            for (int i = 0; i < md5Data.Length; i++) {
                destString += System.Convert.ToString(md5Data[i], 16).PadLeft(2, '0');
            }
            destString = destString.PadLeft(32, '0');
            return destString;
        }

        /// <summary>
        /// 计算文件的MD5值
        /// </summary>
        public static string md5file(string file) {
            try {
                FileStream fs = new FileStream(file, FileMode.Open);
                System.Security.Cryptography.MD5 md5 = new System.Security.Cryptography.MD5CryptoServiceProvider();
                byte[] retVal = md5.ComputeHash(fs);
                fs.Close();

                StringBuilder sb = new StringBuilder();
                for (int i = 0; i < retVal.Length; i++) {
                    sb.Append(retVal[i].ToString("x2"));
                }
                return sb.ToString();
            } catch (Exception ex) {
                throw new Exception("md5file() fail, error:" + ex.Message);
            }
        }

        /// <summary>
        /// 清除所有子节点
        /// </summary>
        public static void ClearChild(Transform go) {
            if (go == null) return;
            for (int i = go.childCount - 1; i >= 0; i--) {
                GameObject.Destroy(go.GetChild(i).gameObject);
            }
        }

        /// <summary>
        /// 清理内存
        /// </summary>
        public static void ClearMemory()
        {
            GC.Collect(); Resources.UnloadUnusedAssets();
            LuaManager mgr = AppFacade.Instance.GetManager<LuaManager>(ManagerName.Lua);
            if (mgr != null) mgr.LuaGC();
        }

        /// <summary>
        /// 取得数据存放目录
        /// </summary>
        public static string DataPath {
            get {
                string game = AppConst.AppResName.ToLower();
                if (Application.isMobilePlatform) {
                    return Application.persistentDataPath + "/" + game + "/";
                }
                if (AppConst.DebugMode) {
                    return Application.dataPath + "/" + AppConst.AssetDir + "/";
                }
                if (Application.platform == RuntimePlatform.OSXEditor) {
                    int i = Application.dataPath.LastIndexOf('/');
                    return Application.dataPath.Substring(0, i + 1) + game + "/";
                }
                return Application.dataPath + "/" + game + "/";
            }
        }

        /// <summary>
		/// 是不是ios平台
		/// </summary>
		/// <returns></returns>
		public static bool isApplePlatform
        {
            get
            {
                return Application.platform == RuntimePlatform.IPhonePlayer;
            }
        }

        /// <summary>
        /// 是不是android平台
        /// </summary>
        public static bool isAndroidPlatform
        {
            get
            {
                return Application.platform == RuntimePlatform.Android;
            }
        }

        public static string GetRelativePath() {
            return "file://" + DataPath;
            //if (Application.isEditor)
            //    return "file:///" + DataPath;
            //else if (Application.isMobilePlatform || Application.isConsolePlatform)
            //    return "file:///" + DataPath;
            //else // For standalone player.
            //    return "file://" + Application.streamingAssetsPath + "/";
                //return "file:///" + DataPath;
        }

        /// <summary>
        /// 取得行文本
        /// </summary>
        public static string GetFileText(string path) {
            return File.ReadAllText(path);
        }

        /// <summary>
        /// 网络可用
        /// </summary>
        public static bool NetAvailable {
            get {
                return Application.internetReachability != NetworkReachability.NotReachable;
            }
        }

        /// <summary>
        /// 是否是无线
        /// </summary>
        public static bool IsWifi {
            get {
                return Application.internetReachability == NetworkReachability.ReachableViaLocalAreaNetwork;
            }
        }

        /// <summary>
		/// 判断文件是否存在
		/// </summary>
		/// <param name="path"></param>
		/// <returns></returns>
		public static bool Exists(string path)
        {
            return File.Exists(path);
        }


        /// <summary>
        /// 应用程序内容路径
        /// </summary>
        public static string AppContentPath() {
            string path = string.Empty;
            switch (Application.platform) {
                case RuntimePlatform.Android:
                    path = "jar:file://" + Application.dataPath + "!/assets/";
                break;
                case RuntimePlatform.IPhonePlayer:
                    path = Application.dataPath + "/Raw/";
                break;
                default:
                    path = Application.dataPath + "/" + AppConst.AssetDir + "/";
                break;
            }
            return path;
        }

        public static void Log(string str) {
            Debug.Log(str);
        }

        public static void LogWarning(string str) {
            Debug.LogWarning(str);
        }

        public static void LogError(string str) {
            Debug.LogError(str);
        }


        /// <summary>
        /// 生成一个Key名
        /// </summary>
        public static string GetKey(string key)
        {
            return AppConst.AppPrefix + AppConst.UserId + "_" + key;
        }

        /// <summary>
        /// 取得整型
        /// </summary>
        public static int GetInt(string key)
        {
            string name = GetKey(key);
            //Debug.LogError(PlayerPrefs.GetInt(name));
            return PlayerPrefs.GetInt(name);
        }

        /// <summary>
        /// 有没有值
        /// </summary>
        public static bool HasKey(string key)
        {
            string name = GetKey(key);
            //Debug.LogError(PlayerPrefs.HasKey(name));
            return PlayerPrefs.HasKey(name);
        }

        /// <summary>
        /// 保存整型
        /// </summary>
        public static void SetInt(string key, int value)
        {
            string name = GetKey(key);
            PlayerPrefs.DeleteKey(name);
            PlayerPrefs.SetInt(name, value);
        }

        /// <summary>
        /// 取得数据
        /// </summary>
        public static string GetString(string key)
        {
            string name = GetKey(key);
            return PlayerPrefs.GetString(name);
        }

        /// <summary>
        /// 取得浮点数
        /// </summary>
        public static float GetFloat(string key)
        {
            string name = GetKey(key);
            return PlayerPrefs.GetFloat(name);
        }

        /// <summary>
        /// 保存浮点型
        /// </summary>
        public static void SetFloat(string key, float value)
        {
            string name = GetKey(key);
            PlayerPrefs.DeleteKey(name);
            PlayerPrefs.SetFloat(name, value);
        }
        /// <summary>
        /// 保存数据
        /// </summary>
        public static void SetString(string key, string value)
        {
            string name = GetKey(key);
            PlayerPrefs.DeleteKey(name);
            PlayerPrefs.SetString(name, value);
        }

        /// <summary>
        /// 删除数据
        /// </summary>
        public static void RemoveData(string key)
        {
            string name = GetKey(key);
            PlayerPrefs.DeleteKey(name);
        }

        public static string Encode(string value,string code)
        {
            string result="";
            char[] chs=value.ToCharArray();
            char[] codes=code.ToCharArray();
            int k=0;
            for(int i=0;i<chs.Length;i++){
                char r=(char) (chs[i]^codes[k]);
                //如果报错试试：
                //char r=(char)(((int)chs[i])^((int)codes[k]));
                result+=r.ToString();
                k++;
                if(k==codes.Length){k=0;}
            }
            return result;
        }
        /// <summary>
        /// 防止初学者不按步骤来操作
        /// </summary>
        /// <returns></returns>
        public static int CheckRuntimeFile() {
            if (!Application.isEditor) return 0;
            string streamDir = Application.dataPath + "/StreamingAssets/";
            if (!Directory.Exists(streamDir)) {
                return -1;
            } else {
                string[] files = Directory.GetFiles(streamDir);
                if (files.Length == 0) return -1;

                if (!File.Exists(streamDir + "files.txt")) {
                    return -1;
                }
            }
            string sourceDir = AppConst.FrameworkRoot + "/ToLua/Source/Generate/";
            if (!Directory.Exists(sourceDir)) {
                return -2;
            } else {
                string[] files = Directory.GetFiles(sourceDir);
                if (files.Length == 0) return -2;
            }
            return 0;
        }

        /// <summary>
        /// 执行Lua方法
        /// </summary>
        public static void CallMethod(string module, string func, params object[] args) {
            LuaManager luaMgr = AppFacade.Instance.GetManager<LuaManager>(ManagerName.Lua);
            if (luaMgr == null) return;
            luaMgr.CallFunction(module + "." + func, args);
        }

                /// <summary>
        /// 检查运行环境
        /// </summary>
        public static bool CheckEnvironment() {
#if UNITY_EDITOR
            int resultId = Util.CheckRuntimeFile();
            if (resultId == -1) {
                Debug.LogError("没有找到框架所需要的资源，单击Game菜单下Build xxx Resource生成！！");
                EditorApplication.isPlaying = false;
                return false;
            } else if (resultId == -2) {
                Debug.LogError("没有找到Wrap脚本缓存，单击Lua菜单下Gen Lua Wrap Files生成脚本！！");
                EditorApplication.isPlaying = false;
                return false;
            }
            if (Application.loadedLevelName == "Test" && !AppConst.DebugMode) {
                Debug.LogError("测试场景，必须打开调试模式，AppConst.DebugMode = true！！");
                EditorApplication.isPlaying = false;
                return false;
            }
#endif
            return true;
        }
        public static void SaveFile(string folderName, string fileName, byte[] bytes)
        {
            var dataPath = DataPath + folderName + fileName;
            if (!Directory.Exists(DataPath + folderName))
            {
                Directory.CreateDirectory(DataPath + folderName);
            }
            if (File.Exists(dataPath))
            {
                File.Delete(dataPath);
            }

            File.WriteAllBytes(dataPath, bytes);
        }
        public static void SaveImage(string folderName, string fileName, Texture2D texture2D)
        {
            if (fileName.Contains("png"))
            {
                SaveFile(folderName, fileName, texture2D.EncodeToPNG());
            }
            else if (fileName.Contains("jpg"))
            {
                SaveFile(folderName, fileName, texture2D.EncodeToJPG());
            }
        }
        public static void SaveImagePng(string folderName, string fileName, Texture2D texture2D)
        {
            SaveFile(folderName, fileName, texture2D.EncodeToPNG());
        }
        public static void SaveImageJpg(string folderName, string fileName, Texture2D texture2D)
        {
            SaveFile(folderName, fileName, texture2D.EncodeToJPG());
        }
        public static bool LoadImage(string folderName, string fileName, out byte[] bytes)
        {
            var dataPath = DataPath + folderName + fileName;
            bytes = null;
            if (!File.Exists(dataPath))
            {
                return false;
            }
            bytes = File.ReadAllBytes(dataPath);
            return true;
        }
        public static Texture2D BytesToTexture2D(int width, int height, byte[] bytes)
        {
            Texture2D tex = new Texture2D(width, width, TextureFormat.ARGB32, false);
            try
            {
                tex.LoadImage(bytes);
            }
            catch (System.Exception ex)
            {
                Debug.LogError(ex.Message);
            }
            //Debug.Log(tex.Resize(width, height));
            return tex;
        }
        public static Texture2D Base64StringToTexture2D(int width, int height, string base64)
        {
            Texture2D tex = null;
            if (base64.Length > 1)
            {
                byte[] bytes = System.Convert.FromBase64String(base64);
                tex = BytesToTexture2D(width, height, bytes);
            }

            return tex;
        }
        public static Sprite BytesToSprite(int width, int height, byte[] bytes)
        {
            Texture2D tex = BytesToTexture2D(width, height, bytes);
            if (tex == null)
            {
                return null;
            }
            return Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), new Vector2(0, 0));
        }
        public static Sprite Base64StringToSprite(int width, int height, string base64)
        {
            Texture2D tex = Base64StringToTexture2D(width, height, base64);
            if (tex == null)
            {
                return null;
            }
            return Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), new Vector2(0, 0));
        }
        public static Sprite Texture2DToSprite(int x, int y, int width, int height, Texture2D tex)
        {
            if (tex == null)
            {
                return null;
            }
            return Sprite.Create(tex, new Rect(x, y, width, height), new Vector2(0, 0));
        }

        public static void RefreshRectHeight(GameObject go, float height)
        {
            RectTransform rect = go.GetComponent<RectTransform>();
            int activeChildCount = 0;
            Transform child = null;
            RectTransform rectCom = null;
            if (rect != null)
            {
                for (int index = 0; index < rect.childCount; index++)
                {
                    child = rect.GetChild(index);
                    if (child.gameObject.activeSelf)
                    {
                        ++activeChildCount;
                        rectCom = child.GetComponent<RectTransform>();
                        rectCom.anchoredPosition3D = new Vector3(rectCom.anchoredPosition3D.x, -height / 2 - (activeChildCount - 1) * height, rectCom.anchoredPosition3D.z);
                    }
                }
                rect.sizeDelta = new UnityEngine.Vector2(rect.sizeDelta.x, height * activeChildCount);
            }
        }
        public static byte[] packXor(byte[] _data, int _len, string _pstr)
        {
            int length = _len;
            int strCount = 0;


            for (int i = 0; i < length; ++i)
            {
                if (strCount >= _pstr.Length)
                    strCount = 0;
                _data[i] ^= (byte)_pstr[strCount++];


            }

            return _data;
        }
        public static string[] ReadAllLines(string file)
        {
            string[] temp = File.ReadAllLines(file);
            return temp;
        }
        //调用手机振动
        public static void Vibrate()
        {
#if UNITY_ANDROID || UNITY_IPHONE
            Handheld.Vibrate();
#endif
        }
    }
}
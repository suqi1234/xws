using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine.UI;
using System.Security.Cryptography;
using System.Text;
using UnityEngine.EventSystems;

namespace LuaFramework
{
    public class GameManager : Manager
    {
        protected static bool initialize = false;
        private List<string> downloadFiles = new List<string>();
        GameObject LoadText = null;
        GameObject LoadPanel = null;
        GameObject Notice = null;
        GameObject NoticeOKButton = null;
        GameObject OpenURL = null;
        GameObject OpenURLBtn = null;
        Slider progress = null;
        GameObject tips;
        string DownLoadURL = "www.baidu.com";
        string version = "1.0";
        //private string HttpUrl = "http://192.168.1.13:8881/GetServerInfo/"; //刘桃
        private string HttpUrl = "http://52.175.79.61:8881/GetServerInfo/"; //刘桃
        //private string HttpUrl = "http://8.210.71.92:8881/GetServerInfo/"; //刘桃
#if UNITY_ANDROID
        private string FtpUrl = "http://cdn.qzhvp.cn/xiaomubiao/upload/Android/";
#elif UNITY_IPHONE
        private string FtpUrl = "http://cdn.qzhvp.cn/xiaomubiao/upload/IOS/";
#else
        private string FtpUrl = "http://192.168.0.106/PC/";
#endif
        bool NeedUpdateGame = false;
        bool isGameIng = false;
        bool isPause = false;
        bool isFocus = false;
        UnityToAndroid unityToAndroid;
        Canvas canvas;
        /// <summary>
        /// 初始化游戏管理器
        /// </summary>
        void Awake()
        {
#if UNITY_ANDROID
            HttpUrl = HttpUrl+  "?s=a&version="+version;
#elif UNITY_IPHONE
            HttpUrl = HttpUrl + "?s=i&version=" + version;
#else
            HttpUrl = HttpUrl + "?s=w&version=" + version;
#endif
            HttpSign();
            Init();
        }
        void HttpSign()
        {
            TimeSpan timeSpan = DateTime.Now - new DateTime(1970, 1, 1, 0, 0, 0, 0);
            string time = Convert.ToInt64(timeSpan.TotalMilliseconds).ToString();
            HttpUrl += string.Format("&time={0}&sign={1}", time, Util.md5(time + AppConst.ClientKey));
        }
        /// <summary>
        /// 初始化
        /// </summary>
        void Init()
        {
            canvas = GameObject.Find("Canvas").GetComponent<Canvas>();
            Screen.sleepTimeout = SleepTimeout.NeverSleep;
            LoadPanel = GameObject.FindWithTag("UI").transform.Find("Loading").gameObject;
            LoadText = LoadPanel.transform.Find("Text").gameObject;
            LoadText.gameObject.SetActive(true);
            Notice = LoadPanel.transform.Find("Notice").gameObject;
            progress = LoadPanel.transform.Find("progress").GetComponent<Slider>();
            progress.gameObject.SetActive(true);
            tips = LoadPanel.transform.Find("Tips").gameObject;
            tips.gameObject.SetActive(true);
            LoadPanel.transform.Find("Notice/PanelBg/NoticeOKButton").gameObject.GetComponent<Button>().onClick.AddListener(GetWebUrl);
            Notice.gameObject.SetActive(false);
            OpenURL = LoadPanel.transform.Find("OpenURL").gameObject;
            OpenURLBtn = LoadPanel.transform.Find("OpenURL/PanelBg/OpenURLBtn").gameObject;
            OpenURLBtn.GetComponent<Button>().onClick.AddListener(OpenDownloadURL);
            OpenURL.gameObject.SetActive(false);
            DontDestroyOnLoad(gameObject);
            GameObject gobj = GameObject.Find("Canvas").gameObject;
            DontDestroyOnLoad(gobj);
            GameObject Eventobj = GameObject.Find("EventSystem").gameObject;
            DontDestroyOnLoad(Eventobj);
            CheckExtractResource();
            Application.targetFrameRate = AppConst.GameFrameRate;
            isGameIng = false;
            isPause = false;
            isFocus = false;
            progress.value = 0.0f;
            LoadText.SetActive(true);
#if UNITY_ANDROID
            unityToAndroid = new UnityToAndroid();
#endif
        }

        void Update()
        {
            Util.CallMethod("Game", "Update");
        }

        /// <summary>
        /// 释放资源
        /// </summary>
        public void CheckExtractResource()
        {
            Debug.Log("释放资源");
            bool isExists = Directory.Exists(Util.DataPath) &&
              Directory.Exists(Util.DataPath + "lua/") && File.Exists(Util.DataPath + "files.txt");
            if (isExists || AppConst.DebugMode)
            {
                Debug.Log("OnUpdateResource");
                GetWebUrl();
                return;
            }
            StartCoroutine(OnExtractResource());
        }
        IEnumerator OnExtractResource()
        {
            string dataPath = Util.DataPath;
            string resPath = Util.AppContentPath();
            //Debug.LogError(resPath);
            if (Directory.Exists(dataPath)) Directory.Delete(dataPath, true);
            Directory.CreateDirectory(dataPath);

            string infile = resPath + "files.txt";
            string outfile = dataPath + "files.txt";
            Debug.Log("infile" + infile);
            Debug.Log("outfile" + outfile);
            if (File.Exists(outfile)) File.Delete(outfile);

            string message = "初始化游戏:>files.txt";
            if (Application.platform == RuntimePlatform.Android)
            {
                WWW www = new WWW(infile);
                yield return www;

                if (www.isDone)
                {
                    File.WriteAllBytes(outfile, www.bytes);
                }
                yield return 0;
            }
            else File.Copy(infile, outfile, true);
            yield return new WaitForEndOfFrame();
            int filescount = 0;
            string[] files = File.ReadAllLines(outfile);
            foreach (var file in files)
            {
                string[] fs = file.Split('|');
                infile = resPath + fs[0];  //
                outfile = dataPath + fs[0];
                message = "初始化游戏:>" + fs[0];
                //if(infile.Contains("GamePlatfMessage")){
                //Debug.Log("正在解包文件:>infile " + infile + " outfile " + outfile);
                //}
                facade.SendMessageCommand(NotiConst.UPDATE_MESSAGE, message);
                ++filescount;
                LoadText.GetComponent<Text>().text = "初始化游戏>:" + filescount.ToString() + "/" + (files.Length).ToString();
                progress.value = (float)filescount / (float)(files.Length);//进度条
                string dir = Path.GetDirectoryName(outfile);
                if (!Directory.Exists(dir)) Directory.CreateDirectory(dir);
                if (Application.platform == RuntimePlatform.Android)
                {
                    WWW www = new WWW(infile);
                    yield return www;

                    if (www.isDone)
                    {
                        File.WriteAllBytes(outfile, www.bytes);
                    }
                    yield return 0;
                }
                else
                {
                    if (File.Exists(outfile))
                    {
                        File.Delete(outfile);
                    }
                    File.Copy(infile, outfile, true);
                }
                yield return new WaitForEndOfFrame();
            }
            message = "初始化游戏完成!!!";
            facade.SendMessageCommand(NotiConst.UPDATE_MESSAGE, message);
            yield return new WaitForSeconds(0.1f);
            message = string.Empty;
            GetWebUrl();
        }
        void GetOnUpdateResource()
        {
            StartCoroutine(OnUpdateResource());
        }
        void GetWebUrl()
        {
            Notice.gameObject.SetActive(false);
            StartCoroutine(GetHttpURL());
        }

        void OpenDownloadURL()
        {
            OpenURL.gameObject.SetActive(false);
            Application.OpenURL(DownLoadURL);
        }

        IEnumerator GetHttpURL()
        {
            WWW GetURL = new WWW(HttpUrl);
            yield return GetURL;
            if (GetURL.error != null)
            {
                LoadText.GetComponent<Text>().text = "Mendapatkan alamat gagal";
                Debug.LogError("获取地址失败");
                 Notice.gameObject.SetActive(true);
                yield break;
            }
            string url = GetURL.text;
            GetAdder json = JsonUtility.FromJson<GetAdder>(url);
            string data = json.data;
            string code = json.state;
            Debug.LogError(data);
            string[] files = data.Split('*');
            if (code == "1")
            {
                DownLoadURL = files[1];
                OpenURL.gameObject.SetActive(true);
                yield break;
            }
            string[] socketStr = files[0].Split(':');
            AppConst.SocketAddress = socketStr[0];
            AppConst.SocketPort = int.Parse(socketStr[1]);
            Debug.LogError("IP:" + AppConst.SocketAddress + ":" + AppConst.SocketPort);
            string[] LoginStr = files[1].Split(':');
            AppConst.LoginRul = LoginStr[0];
            AppConst.LoginPort = LoginStr[1];
            AppConst.WebUrl = files[2];
            GetOnUpdateResource();
        }
        /// <summary>
        /// 启动更新下载，这里只是个思路演示，此处可启动线程下载更新
        /// </summary>
        IEnumerator OnUpdateResource()
        {
            List<string> UpdateFilesCount = new List<string>();
            if (!AppConst.UpdateMode)
            {
                OnResourceInited();
                yield break;
            }
            string dataPath = Util.DataPath;
            Debug.Log("数据目录" + dataPath);
            string url = FtpUrl;
            string message = string.Empty;
            string random = DateTime.Now.ToString("yyyymmddhhmmss");
            string listUrl = url + "files.txt?v=" + random;
            Debug.LogWarning("LoadUpdate---->>>" + listUrl);

            WWW www = new WWW(listUrl); yield return www;

            if (www.error != null)
            {
                OnUpdateFailed(string.Empty);
                yield break;
            }
            if (!Directory.Exists(dataPath))
            {
                Directory.CreateDirectory(dataPath);
            }

            string filesText = www.text;
            string[] files = filesText.Split('\n');
            //double sumDownloadFilesSize = 0;
            //List<double> filesSize = new List<double>();
            for (int i = 0; i < files.Length; i++)
            {
                if (string.IsNullOrEmpty(files[i])) continue;
                string[] keyValue = files[i].Split('|');
                string f = keyValue[0];
                string localfile = (dataPath + f).Trim();
                string path = Path.GetDirectoryName(localfile);
                if (!Directory.Exists(path))
                {
                    Directory.CreateDirectory(path);
                }
                string fileUrl = url + f + "?v=" + random;
                bool canUpdate = !File.Exists(localfile);
                if (!canUpdate)
                {
                    string remoteMd5 = keyValue[1].Trim();
                    string localMd5 = Util.md5file(localfile);
                    canUpdate = !remoteMd5.Equals(localMd5);
                }
                if (canUpdate)
                {

                    string[] temp = localfile.Split('/');
                    //if (!temp[temp.Length - 1].Contains("StreamingAssets"))
                    //{
                    Debug.LogError("~~~~本地缺少文件:" + f);
                    //File.Delete(localfile);
                    UpdateFilesCount.Add(fileUrl);
                    UpdateFilesCount.Add(localfile);
                    //}
                    //double size = double.Parse(keyValue[2]) / 1024 / 1024; //单位M
                    //filesSize.Add(size); 
                    //sumDownloadFilesSize += size;
                }
            }

            //double haveDownloadSize = 0;
            //float judTime = 0;
            int filescount = 0;
            if (UpdateFilesCount.Count > 0)
            {
                int index = 0;
                LoadText.GetComponent<Text>().text = "资源更新>:" + filescount.ToString() + "/" + (UpdateFilesCount.Count / 2).ToString();
                progress.value = (float)filescount / (float)(UpdateFilesCount.Count / 2);//进度条
                while (true)
                {
                    WWW wwwResouce = new WWW(UpdateFilesCount[index]);
                    //double currentDownloadProgress = 0; //当前下载总进度
                    //保存上一个循环的网速
                    //double upSpeed = 0;
                    //double dicDownSize = 0;
                    //double disUpSize;
                    //while (!wwwResouce.isDone)
                    //{
                    //    filescount = filescount + 1;
                    //    //judTime += Time.deltaTime;
                    //    ////当前下载速度
                    //    //disUpSize = (haveDownloadSize + filesSize[index / 2] * wwwResouce.progress) * 1024 * 1024;
                    //    //dicDownSize = disUpSize / judTime;

                    //    ////当前下载进度
                    //    //string dicDowmProgressTxt = (haveDownloadSize + filesSize[index / 2] * wwwResouce.progress).ToString("0.00") + "M/" + sumDownloadFilesSize.ToString("0.00") + "M";
                    //    //currentDownloadProgress = (haveDownloadSize + filesSize[index / 2] * wwwResouce.progress) / sumDownloadFilesSize;
                    //    LoadText.GetComponent <Text> ().text = filescount.ToString()+"/"+(UpdateFilesCount.Count/2).ToString();
                    //    //message = dicDowmProgressTxt + "|" + dicDownSize + "|" + currentDownloadProgress + "|1";
                    //    //facade.SendMessageCommand(NotiConst.UPDATE_PROGRESS, message);
                    //    yield return new WaitForEndOfFrame();
                    //}
                    if (wwwResouce.error != null)
                    {
                        Debug.LogError("下载错误" + UpdateFilesCount[index]);
                        OnUpdateFailed(string.Empty);
                        yield break;
                    }
                    yield return wwwResouce;
                    filescount = filescount + 1;
                    LoadText.GetComponent<Text>().text = "资源更新>:" + filescount.ToString() + "/" + (UpdateFilesCount.Count / 2).ToString();
                    progress.value = (float)filescount / (float)(UpdateFilesCount.Count / 2);
                    //haveDownloadSize += filesSize[index / 2];

                    File.Delete(UpdateFilesCount[index + 1]);
                    Debug.LogError(UpdateFilesCount[index + 1] + wwwResouce.bytes.ToString() + "下载地址" + UpdateFilesCount[index]);
                    File.WriteAllBytes(UpdateFilesCount[index + 1], wwwResouce.bytes);

                    index += 2;
                    if (index == UpdateFilesCount.Count) break;
                }
            }

            File.WriteAllBytes(dataPath + "files.txt", www.bytes);
            yield return new WaitForEndOfFrame();

            OnResourceInited();
        }

        void OnUpdateFailed(string file)
        {
            string message = "更新失败!>" + file;
            facade.SendMessageCommand(NotiConst.UPDATE_MESSAGE, message);
        }

        /// <summary>
        /// 是否下载完成
        /// </summary>
        bool IsDownOK(string file)
        {
            return downloadFiles.Contains(file);
        }

        /// <summary>
        /// 线程下载
        /// </summary>
        void BeginDownload(string url, string file)
        {     //线程下载
            Debug.Log("线程下载");
            object[] param = new object[2] { url, file };

            ThreadEvent ev = new ThreadEvent();
            ev.Key = NotiConst.UPDATE_DOWNLOAD;
            ev.evParams.AddRange(param);
            ThreadManager.AddEvent(ev, OnThreadCompleted);
        }

        /// <summary>
        /// 线程完成
        /// </summary>
        /// <param name="data"></param>
        void OnThreadCompleted(NotiData data)
        {
            switch (data.evName)
            {
                case NotiConst.UPDATE_EXTRACT:
                    break;
                case NotiConst.UPDATE_DOWNLOAD:
                    downloadFiles.Add(data.evParam.ToString());
                    break;
            }
        }


        /// <summary>
        /// 资源初始化结束
        /// </summary>
        public void OnResourceInited()
        {
            progress.gameObject.SetActive(false);
            LoadText.gameObject.SetActive(false);
#if ASYNC_MODE
            Debug.Log("Initialize");
            ResManager.Initialize(AppConst.AssetDir, delegate ()
            {
                this.OnInitialize();
            });
#else
            ResManager.Initialize();
            this.OnInitialize();
#endif
        }

        void OnInitialize()
        {
            LuaManager.InitStart();
            LuaManager.DoFile("Logic/Game");         //加载游戏
            LuaManager.DoFile("Logic/Network");      //加载网络
            NetManager.OnInit();                   //初始化网络
            InitGame();
        }
        void InitGame()
        {
            Util.CallMethod("Game", "OnInitOK");
            initialize = true;
        }

        /// <summary>
        /// 析构函数
        /// </summary>
        void OnDestroy()
        {
            if (NetManager != null)
            {
                NetManager.Unload();
            }
            if (LuaManager != null)
            {
                LuaManager.Close();
            }
            Debug.Log("~GameManager was destroyed");
        }

        void OnApplicationPause(bool isPause)
        {
#if (UNITY_IPHONE || UNITY_ANDROID) && !UNITY_EDITOR
            if(isPause)
            {
                Debug.Log("游戏暂停");
            }
            else
            {
                Debug.Log("游戏开始");
            }
#endif
        }

        void OnApplicationFocus(bool isFocus)
        {
#if (UNITY_IPHONE || UNITY_ANDROID) && !UNITY_EDITOR
            if (isFocus)
            {
                if (isGameIng)
                {
                    Util.CallMethod("Game", "ConncetFalse");
                }
                else
                {
                    LuaHelper.GetNetManager().SendHeart();
                }    
            }
            else
            {
                if (isGameIng)
                {
                    LuaHelper.GetNetManager().CancelInvoke("SendHeart");
                    LuaHelper.GetNetManager ().RemoveSocket ();
                    LuaHelper.GetNetManager ().RemoveGameSocket ();
                }
            }
#endif
        }

        public void SetGameState(bool b)
        {
            isGameIng = b;
        }

        //获取UUID
        public string GetUUIDFunc()
        {
            string deviceId = SystemInfo.deviceUniqueIdentifier;
            return deviceId;

        }

        public string GetMD5(string myString)
        {
            MD5 md5 = MD5.Create();
            byte[] bs = Encoding.UTF8.GetBytes(myString);
            byte[] hs = md5.ComputeHash(bs);
            StringBuilder sb = new StringBuilder();
            foreach (byte b in hs)
            {
                // 以十六进制格式格式化 
                sb.Append(b.ToString("x2"));
            }
            return sb.ToString();
        }

        public bool CheckUITouch(GameObject cam)
        {
            if (Input.GetMouseButtonDown(0) || (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began))
            {
#if (UNITY_ANDROID || UNITY_IPHONE) && !UNITY_EDITOR
                if (ClickIsOverUI.Instance.IsPointerOverUIObject(cam.GetComponent<Canvas>(), Input.GetTouch(0).position))
#else
                if (EventSystem.current.IsPointerOverGameObject())
#endif
                    return true;
                else
                    return false;
            }
            else
                return false;
        }

        public Vector3 ReturnRayHit(Vector3 targetpos)
        {
            RaycastHit hit;
            int layerMask = 1 << 0;
            if (Physics.Raycast(Camera.main.ScreenPointToRay(targetpos), out hit, 2000f, layerMask))
            {
                return hit.point;
            }
            return Vector3.zero;
        }

        public Transform ReturnRayHitObj(Vector3 targetpos)
        {
            RaycastHit hit;
            int layerMask = 1 << 8;
            if (Physics.Raycast(Camera.main.ScreenPointToRay(targetpos), out hit, 2000f, layerMask))
            {
                return hit.transform;
            }
            return null;
        }

        public Transform ReturnRayHitObj(GameObject cam, Vector3 targetpos, int layer)
        {
            RaycastHit hit;
            int layerMask = 1 << layer;
            if (Physics.Raycast(cam.GetComponent<Camera>().ScreenPointToRay(targetpos), out hit, 2000f, layerMask))
            {
                return hit.transform;
            }
            return null;
        }

        public Vector2 ReturnPos2D(Camera cam, Vector3 position)
        {
            return RectTransformUtility.WorldToScreenPoint(cam, position);
        }

        public Vector3 ReturnPosWorld(Camera cam, Vector3 position)
        {
            Vector3 scr = RectTransformUtility.WorldToScreenPoint(cam, position);
            return Camera.main.ScreenToWorldPoint(scr);
        }

        public void ClearCache()
        {
            Caching.ClearCache();
        }
      
        public void Copy(string text)
        {
            unityToAndroid.Copy(text);
        }
        public void Paste(string text)
        {
          
        }
        public void OnGetTextFromClipboard(string text)
        {
            
        }
    }
    class GetAdder
    {
        public string data;
        public string state;
    }
}
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using LuaInterface;
using UnityEngine.UI;
using System.IO;
using UObject = UnityEngine.Object;

namespace LuaFramework {
    public class NetworkManager : Manager {
        private SocketClient socket;
        static readonly object m_lockObject = new object();
        static Queue<KeyValuePair<int, ByteBuffer>> mEvents = new Queue<KeyValuePair<int, ByteBuffer>>();
        int FilesCount = 0;
        int FilesCurrentCount = 0;
        int FilesLocalCount = 0;

        int MusicCount = 0;
        int MusicCurrentCount = 0;
        int MusicLocalCount = 0;
        private int MsgOnlyID = -1;
        SocketClient SocketClient {
            get { 
                if (socket == null)
                    socket = new SocketClient();
                return socket;                    
            }
        }
        SocketClient GameSocketClient = null;
        void Awake() {
            Init();
        }

        void Init() {
            SocketClient.OnRegister();
            FilesCount = 0;
            FilesCurrentCount = 0;
            FilesLocalCount = 0;
            MusicCount = 0;
            MusicCurrentCount = 0;
            MusicLocalCount = 0;
        }

        public void OnInit() {
            CallMethod("Start");
        }

        public void Unload() {
            CallMethod("Unload");
        }

        /// <summary>
        /// 执行Lua方法
        /// </summary>
        public void CallMethod(string func, params object[] args) {
            Util.CallMethod("Network", func, args);
        }

        ///------------------------------------------------------------------------------------
        public static void AddEvent(int _event, ByteBuffer data) {
            lock (m_lockObject) {
                mEvents.Enqueue(new KeyValuePair<int, ByteBuffer>(_event, data));
            }
        }

        /// <summary>
        /// 交给Command，这里不想关心发给谁。
        /// </summary>
        void Update() {
            if (mEvents.Count > 0) {
                while (mEvents.Count > 0) {
                    KeyValuePair<int, ByteBuffer> _event = mEvents.Dequeue();
                    facade.SendMessageCommand(NotiConst.DISPATCH_MESSAGE, _event);
                }
            }
        }

        /// <summary>
        /// 发送心跳包
        /// </summary>
        public void BeginSendHeart()
        {
            CancelInvoke("SendHeart");
            //Debug.LogError("startHeart");
            InvokeRepeating("SendHeart", 2.0f, 5f);//2后开始发心跳,过后每10秒发送一次心跳
        }

        /// <summary>
        /// 发心跳包
        /// </summary>
        public void SendHeart()
        {
            ByteBuffer buffer = new ByteBuffer();
            buffer.WriteShort(10000);
            buffer.WriteInt(0);
            buffer.WriteInt(0);
            SocketClient.SendMessage(buffer);
        }

        /// <summary>
        /// 发送链接请求
        /// </summary>
        public void SendConnect(string IP, int Port) {
            Debug.Log("SendConnect---------------------------------------------------------------------------------------------------------------------------------------------" + IP + Port);
			CancelInvoke("SendHeart");
			RemoveGameSocket ();
			SocketClient.OnRemove();
			SocketClient.OnRegister();
            SocketClient.SendConnect(IP, Port);
        }


        /// <summary>
        /// ??SOCKET??
        /// </summary>
        /// <param name="post">???</param>
        /// <param name="data">????</param>
        public void SendMessageBf(Int16 post, LuaByteBuffer data)
        {
            //Debug.LogError("SendMessageBf:" + post);
            ByteBuffer buffer = new ByteBuffer();
            buffer.WriteShort(post);
            buffer.WriteInt(MsgOnlyID);
            byte[] aa = data.buffer;
            //if (post==1)
            //{
                //Debug.Log("xxx");
                //Util.CallMethod("Network", "OnSocket", 1, 0, data.buffer);
            //}
            //Debug.Log("have data"+aa.Length);
            if (data.buffer != null)
            {
                int len = data.buffer.Length;
                buffer.WriteInt(len);
                buffer.WriteBytes(data.buffer);
            }
            SocketClient.SendMessage(buffer);
            MsgOnlyID--;
        }

        /// <summary>
        /// 发送SOCKET消息
        /// </summary>
        public void SendMessage(ByteBuffer buffer) {
            SocketClient.SendMessage(buffer);
        }

        /// <summary>
        /// 析构函数
        /// </summary>
        new void OnDestroy() {
            SocketClient.OnRemove();
            Debug.Log("~NetworkManager was destroy");
        }

		public void RemoveSocket(){
			SocketClient.OnRemove();
		}

        public void GetWebMusic(string url, string[] assetNames, string func)
        {
            MusicCount = assetNames.Length;
            for (int i = 0; i < assetNames.Length; i++)
            {
                Debug.LogError(Util.DataPath + "/DownLoadMusic/");
                if (!Directory.Exists(Util.DataPath + "/DownLoadMusic/"))
                {
                    Directory.CreateDirectory(Util.DataPath + "/DownLoadMusic/");
                }
                string musicurl = Util.DataPath + "/DownLoadMusic/" + assetNames[i];
                if (File.Exists(musicurl))
                {
                    MusicLocalCount = MusicLocalCount + 1;
                    if (MusicLocalCount == MusicCount)
                    {
                        string[] fun = func.Split('.');
                        Util.CallMethod(fun[0], fun[1]);
                    }
                }
                else
                {
                    StartCoroutine(this.GetAndSetMusic(url + assetNames[i], assetNames[i], func));
                }

            }
        }

        IEnumerator GetAndSetMusic(string url, string name, string func)
        {
            WWW www = new WWW(url);
            yield return www;
            if (www.isDone && www.error == null)
            {
                AudioClip ac = www.GetAudioClip(true, false);
                if (ac != null)
                {
                    string path = Util.DataPath + "/DownLoadMusic/" + name;
                    FileStream fs = new FileStream(path, FileMode.Create);
                    ConvertAndWrite(fs, ac);
                    WriteHeader(fs, ac);
                    FilesCurrentCount = FilesCurrentCount + 1;
                    if (FilesCurrentCount == FilesCount)
                    {
                        string[] fun = func.Split('.');
                        Util.CallMethod(fun[0], fun[1]);
                    }
                }
                else
                {
                    Debug.Log("Downd music to RawImage error");
                }
            }
            else
            {
                Debug.Log(url);
                Debug.Log("Downd music error");
            }
        }

        static void ConvertAndWrite(FileStream fileStream, AudioClip clip)
        {

            float[] samples = new float[clip.samples];
            //Debug.LogError(samples.Length);
            clip.GetData(samples, 0);

            Int16[] intData = new Int16[samples.Length];
            //converting in 2 float[] steps to Int16[], //then Int16[] to Byte[]  

            Byte[] bytesData = new Byte[samples.Length * 2];
            //bytesData array is twice the size of  
            //dataSource array because a float converted in Int16 is 2 bytes.  
            int rescaleFactor = 32767; //to convert float to Int16  

            for (int i = 0; i < samples.Length; i++)
            {
                intData[i] = (short)(samples[i] * rescaleFactor);
                Byte[] byteArr = new Byte[2];
                byteArr = BitConverter.GetBytes(intData[i]);
                byteArr.CopyTo(bytesData, i * 2);
            }

            fileStream.Write(bytesData, 0, bytesData.Length);
        }

        static void WriteHeader(FileStream fileStream, AudioClip clip)
        {
            //Debug.LogError("WriteHeader");
            int hz = clip.frequency;
            int channels = clip.channels;
            int samples = clip.samples;

            fileStream.Seek(0, SeekOrigin.Begin);

            Byte[] riff = System.Text.Encoding.UTF8.GetBytes("RIFF");
            fileStream.Write(riff, 0, 4);

            Byte[] chunkSize = BitConverter.GetBytes(fileStream.Length - 8);
            fileStream.Write(chunkSize, 0, 4);

            Byte[] wave = System.Text.Encoding.UTF8.GetBytes("WAVE");
            fileStream.Write(wave, 0, 4);

            Byte[] fmt = System.Text.Encoding.UTF8.GetBytes("fmt ");
            fileStream.Write(fmt, 0, 4);

            Byte[] subChunk1 = BitConverter.GetBytes(16);
            fileStream.Write(subChunk1, 0, 4);

            UInt16 two = 2;
            UInt16 one = 1;

            Byte[] audioFormat = BitConverter.GetBytes(one);
            fileStream.Write(audioFormat, 0, 2);

            Byte[] numChannels = BitConverter.GetBytes(channels);
            fileStream.Write(numChannels, 0, 2);

            Byte[] sampleRate = BitConverter.GetBytes(hz);
            fileStream.Write(sampleRate, 0, 4);

            Byte[] byteRate = BitConverter.GetBytes(hz * channels * 2); // sampleRate * bytesPerSample*number of channels, here 44100*2*2  
            fileStream.Write(byteRate, 0, 4);

            UInt16 blockAlign = (ushort)(channels * 2);
            fileStream.Write(BitConverter.GetBytes(blockAlign), 0, 2);

            UInt16 bps = 32;
            Byte[] bitsPerSample = BitConverter.GetBytes(bps);
            fileStream.Write(bitsPerSample, 0, 2);

            Byte[] datastring = System.Text.Encoding.UTF8.GetBytes("data");
            fileStream.Write(datastring, 0, 4);

            Byte[] subChunk2 = BitConverter.GetBytes(samples * channels * 2);
            fileStream.Write(subChunk2, 0, 4);

            //      fileStream.Close();  
        }

        public void GetLoadBgFile(string url, string[] assetNames,string func)
        {
            FilesCount = assetNames.Length;
            FilesLocalCount = 0;
            for (int i = 0; i < assetNames.Length; i++)
            {
                if (!Directory.Exists(Util.DataPath + "/DownLoadImage/"))
                {
                    Directory.CreateDirectory(Util.DataPath + "/DownLoadImage/");
                }
                string iamgeurl = Util.DataPath + "/DownLoadImage/" + assetNames[i];
                //Debug.LogError(iamgeurl);
                if (File.Exists(iamgeurl))
                {
                    FilesLocalCount = FilesLocalCount + 1;
                    if (FilesLocalCount == FilesCount)
                    {
                        string[] fun = func.Split('.');
                        Util.CallMethod(fun[0], fun[1]);
                    }
                }
                else
                {
                    
                    StartCoroutine(this.GetAndSetBgTexture(url+ assetNames[i], assetNames[i], func));
                }

            }
        }
        IEnumerator GetAndSetBgTexture(string url, string name, string func)
        {
            //Debug.LogError(url);
            WWW www = new WWW(url);
            yield return www;
            if (www.isDone && www.error == null)
            {
                Texture2D img = www.texture;
                if (img != null)
                {
                    byte[] bytes = null;
                    if (name.Contains(".jpg"))
                    {
                        bytes = img.EncodeToJPG(75);
                    }
                    else
                    {
                        bytes = img.EncodeToPNG();
                    }
                    File.WriteAllBytes(Util.DataPath + "/DownLoadImage/" + name, bytes);
                    FilesCurrentCount = FilesCurrentCount + 1;
                    if(FilesCurrentCount == FilesCount)
                    {
                        string[] fun = func.Split('.');
                        Util.CallMethod(fun[0], fun[1]);
                    }
                }
                else
                {
                    Debug.Log("Downd imt to RawImage error");
                }
            }
            else
            {
                Debug.Log(url);
                Debug.Log("Downd img error");
            }
        }

        public void GetLoadHeaderFile(string url, GameObject obj)
        {     
            StartCoroutine(this.GetAndSetTexture(url, obj));
        }

        IEnumerator GetAndSetTexture(string url, GameObject obj)
        {
            WWW www = new WWW(url);
            yield return www;
            if (www.isDone && www.error == null)
            {
                Texture img = www.texture;
                if (img != null)
                {
                    if (obj != null)
                    {
                        //Debug.Log("Downd imt to RawImage  yes");
                        if (obj.GetComponent<RawImage>() != null)
                        {
                            obj.GetComponent<RawImage>().texture = img;
                        }
                        else
                        {
                            obj.GetComponent<Image>().sprite = Sprite.Create(www.texture, new Rect(0, 0, img.width, img.height), new Vector2(0, 0));
                        }
                    }
                }
                else
                {
                    Debug.Log("Downd imt to RawImage error");
                }
            }
            else
            {
                Debug.Log(url);
                Debug.Log("Downd img error");
            }
        }

        private WWW DownWWW = null;
        private LuaFunction DownLuaMethod = null;
        public void OnDownAsset(string webUrl, string localUrl, LuaFunction luaMethod, int DownType = 0)
        {
            DownLuaMethod = luaMethod;
            StartCoroutine(IeOneDownAsset(webUrl, localUrl, luaMethod, DownType));
        }
        IEnumerator IeOneDownAsset(string webUrl, string localUrl, LuaFunction luaMethod, int DownType)
        {
            DownWWW = new WWW(webUrl);
            yield return DownWWW;
            if (DownWWW.isDone && DownWWW.error == null)
            {
                switch (DownType)
                {
                    case 0:
                        File.WriteAllBytes(localUrl, DownWWW.bytes);
                        break;
                    case 1:
                        File.WriteAllBytes(localUrl, DownWWW.texture.EncodeToPNG());
                        break;
                    case 2:
                        File.WriteAllBytes(localUrl, DownWWW.bytes);
                        break;
                }
                yield return 0;
                if (DownLuaMethod != null)
                {
                    DownLuaMethod.Call(11001, " ");
                    //ExitDown ();
                }
                yield return new WaitForEndOfFrame();

            }
            else if (DownWWW.error != null)
            {
                if (DownLuaMethod != null)
                {
                    DownLuaMethod.Call(11002, DownWWW.error);
                    Debug.LogError("下载出错!");
                    ExitDown();
                }
                yield return new WaitForEndOfFrame();
            }
        }

        public void ExitDown()
        {
            if (DownWWW == null) return;
            //Debug.LogError("退出下载");
            StopCoroutine("IeOneDownAsset");
            DownLuaMethod = null;
            DownWWW.Dispose();
            DownWWW = null;
            Resources.UnloadUnusedAssets();
        }

        public void StartWWWLoadMusic(string url)
        {
            StartCoroutine(this.WWWWLoadMusic(url));
        }

        IEnumerator WWWWLoadMusic(string url)
        {
            WWW www = new WWW(url);
            yield return www;
            if (www.isDone && www.error == null)
            {
                Texture2D img = www.texture;
                if (img != null)
                {
                    Debug.LogError(img.name);
                }
                //AudioClip ac = www.GetAudioClip(true, true);
                //if (ac != null)
                //{
                //    Debug.LogError(ac.name);
                //    SoundManager.PlayBacksoundAc(ac,true);
                //}
                else
                {
                    Debug.Log("Downd imt to RawImage error");
                }
            }
            else
            {
                Debug.LogError(url);
                Debug.LogError(www.size);
                Debug.LogError("Downd img error");
            }
        }

        public void Close()
        {
            SocketClient.Close();
        }


        public void AddGameSocket()
        {
            GameSocketClient = new SocketClient();
            GameSocketClient.OnRegister(); //构造内存流和缓冲区
        }

        public void SendGameConnect(string IP,int Port)
        {
            GameSocketClient.SendConnect(IP, Port);
        }

        public void SendMessageGame(Int16 post, LuaByteBuffer data)
        {
            //Debug.LogError("SendMessageGame:" + post);
            ByteBuffer buffer = new ByteBuffer();
            buffer.WriteShort(post);
            buffer.WriteInt(MsgOnlyID);
            byte[] aa = data.buffer;
            if (data.buffer!=null)
            {
                int len = data.buffer.Length;
				//Debug.Log("SendMessageGame len----------------" + len);
                buffer.WriteInt(len);
                buffer.WriteBytes(data.buffer);
            }
            if(GameSocketClient == null){
                //Debug.LogError("SendMessageGame connected----------------------------------------------------------------------->>false");
                Util.CallMethod("Game", "ConncetFalse");
            }else{
                GameSocketClient.SendMessage(buffer);
            }
            MsgOnlyID--;
        }

        public void BeginSendGameHeart()
        {
            StartCoroutine(BeginHeart());  
        }

        IEnumerator BeginHeart()
        {
            yield return GameSocketClient.IsSetHeart;
            CancelInvoke("SendGameHeart");
            InvokeRepeating("SendGameHeart", 2.0f, 5f);//2后开始发心跳,过后每10秒发送一次心跳
        }

        /// <summary>
        /// 发心跳包
        /// </summary>
        public void SendGameHeart()
        {
            //Debug.LogError("SendGameHeart");
            ByteBuffer buffer = new ByteBuffer();
            buffer.WriteShort(10000);
            buffer.WriteInt(0);
            buffer.WriteInt(0);
            GameSocketClient.SendMessage(buffer);
        }

        public void RemoveGameSocket()
        {
			Debug.Log ("RemoveGameSocket-----------------------------------------------------------------------------------------------------------------------------");
			if (GameSocketClient != null) {
				GameSocketClient.NeedToOut = true;
				CancelInvoke ("SendGameHeart");
				GameSocketClient.OnRemove ();
				GameSocketClient = null;
			}
        }

        /// 当前SOcket连接状态
		/// </summary>
		/// <returns><c>true</c>, if socket stats was ised, <c>false</c> otherwise.</returns>
		public bool isSocketStats()
        {
            return SocketClient.isSocketStats();
        }
    }
}
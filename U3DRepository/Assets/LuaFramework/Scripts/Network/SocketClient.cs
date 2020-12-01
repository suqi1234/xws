using UnityEngine;
using System;
using System.IO;
using System.Net;
using System.Net.Sockets;
using System.Collections;
using System.Collections.Generic;
using LuaFramework;
using LuaInterface;

public enum DisType {
    Exception,
    Disconnect,
}

public class SocketClient {
    private TcpClient client = null;
    private NetworkStream outStream = null;
    private MemoryStream memStream;
    private BinaryReader reader;

    private const int MAX_READ = 8192;
    private byte[] byteBuffer = new byte[MAX_READ];

	public bool IsSetHeart = false;
    private int encode = 44434533;

    private string IP = "";
    private int Port = 0;

    public bool NeedToOut = false;
    // Use this for initialization
    public SocketClient() {
    }

    /// <summary>
    /// 注册代理
    /// </summary>
    public void OnRegister() {
        memStream = new MemoryStream();
        reader = new BinaryReader(memStream);
    }

    /// <summary>
    /// 移除代理
    /// </summary>
    public void OnRemove() {
        Debug.Log("SocketClient OnRemove--------------------------------");
        Close();
        if(reader != null)
        reader.Close();
        if(memStream != null)
        memStream.Close();
    }

    /// <summary>
    /// 连接服务器
    /// </summary>
    void ConnectServer(string host, int port) {
        client = null;
        client = new TcpClient();
        client.SendTimeout = 1000;
        client.ReceiveTimeout = 1000;
        client.NoDelay = true;
        try {
            Debug.Log("host:"+host);
            client.BeginConnect(host, port, new AsyncCallback(OnConnect), null);
        } catch (Exception e) {
            Close(); Debug.LogError(e.Message);
        }
    }

    /// <summary>
    /// 连接上服务器
    /// </summary>
    void OnConnect(IAsyncResult asr)
    {
        try
        {
            outStream = client.GetStream();
        }
        catch (Exception e)
        {
            Debug.Log("服务器未开启");
            Close();   //关掉客户端链接
            SendConnect(IP,Port);
        }
        NeedToOut = false;
        IAsyncResult iar = client.GetStream().BeginRead(byteBuffer, 0, MAX_READ, new AsyncCallback(OnRead), null);
        //int count = sleepCount;
        //if (!iar.IsCompleted)
        //{
        //    if (count <= 0)
        //    {
        //        receiveByte = null;
        //        return;
        //    }
        //    Thread.Sleep(sleepMilliseconds);
        //    count--;
        //}
        //try
        //{
        //    ns.EndRead(iar);
        //    return;
        //}
        //catch (Exception)
        //{
        //    receiveByte = null;
        //    return;
        //}
        NetworkManager.AddEvent(Protocal.Connect, new ByteBuffer());
        IsSetHeart = true;
    }

    /// <summary>
    /// 写数据
    /// </summary>
    void WriteMessage(byte[] message) {
        MemoryStream ms = null;
        using (ms = new MemoryStream()) {
            ms.Position = 0;
            BinaryWriter writer = new BinaryWriter(ms);
            //int msglen = message.Length-6;
            writer.Write(IPAddress.HostToNetworkOrder(encode));
            writer.Write(message);
            writer.Flush();
            if (client != null && client.Connected) {
                //NetworkStream stream = client.GetStream();
                //Debug.LogError(client.ToString()+ (client.Connected).ToString());
                byte[] payload = ms.ToArray();
                outStream.BeginWrite(payload, 0, payload.Length, new AsyncCallback(OnWrite), null);
            } else {
                //LuaHelper.GetNetManager().CancelInvoke("SendHeart");
				//LuaHelper.GetNetManager ().RemoveSocket ();
                Debug.LogError("WriteMessage connected------------------------------------------------------------------------->>false");
                Util.CallMethod("Game", "ConncetFalse");
            }
        }
    }

    /// <summary>
    /// 读取消息
    /// </summary>
    void OnRead(IAsyncResult asr) {
        int bytesRead = 0;

        try {
			//Debug.Log("OnRead--------------------------------------------------------------------------------------------"+bytesRead);
            lock (client.GetStream()) {         //读取字节流到缓冲区
                bytesRead = client.GetStream().EndRead(asr);
            }
			//Debug.Log("OnRead--------------------------------------------------------------------------------------------"+bytesRead);
            if (bytesRead < 1) {                //包尺寸有问题，断线处理
                Debug.LogError("包尺寸有问题，断线处理");
                OnDisconnected(DisType.Disconnect, "bytesRead < 1");
                return;
            }
			//Debug.Log("OnRead--------------------------------------------------------------------------------------------"+bytesRead);
            OnReceive(byteBuffer, bytesRead);   //分析数据包内容，抛给逻辑层
            lock (client.GetStream()) {         //分析完，再次监听服务器发过来的新消息
                Array.Clear(byteBuffer, 0, byteBuffer.Length);   //清空数组
                client.GetStream().BeginRead(byteBuffer, 0, MAX_READ, new AsyncCallback(OnRead), null);
            }
        } catch (Exception ex) {
            if(NeedToOut == false)
            {
                //Debug.LogError("OnDisconnected Exception---------------------------------------------------------------------------------------------------------------------"+ex.Message);
                //PrintBytes();
                //OnDisconnected(DisType.Exception, ex.Message);
            }
        }
    }

    /// <summary>
    /// 丢失链接
    /// </summary>
    void OnDisconnected(DisType dis, string msg) {
        Close();   //关掉客户端链接
        int protocal = dis == DisType.Exception ?
        Protocal.Exception : Protocal.Disconnect;

        ByteBuffer buffer = new ByteBuffer();
        buffer.WriteShort((short)protocal);
        NetworkManager.AddEvent(protocal, buffer);
        Debug.LogError("Connection was closed by the server:>" + msg + " Distype:>" + dis);
    }

    /// <summary>
    /// 打印字节
    /// </summary>
    /// <param name="bytes"></param>
    void PrintBytes() {
        string returnStr = string.Empty;
        for (int i = 0; i < byteBuffer.Length; i++) {
            returnStr += byteBuffer[i].ToString("X2");
        }
        Debug.LogError(returnStr);
    }

    /// <summary>
    /// 向链接写入数据流
    /// </summary>
    void OnWrite(IAsyncResult r) {
        try {
            outStream.EndWrite(r);
        } catch (Exception ex) {
            Debug.LogError("OnWrite--->>>" + ex.Message);
        }
    }

    /// <summary>
    /// 接收到消息
    /// </summary>
    void OnReceive(byte[] bytes, int length) {
		
		//Debug.Log ("OnReceive------------------------------------------------------------------------------------------"+(memStream == null));
        memStream.Seek(0, SeekOrigin.End);
        memStream.Write(bytes, 0, length);
        //Reset to beginning
        memStream.Seek(0, SeekOrigin.Begin);
		long NowPosition = 0;
		//Debug.Log ("OnReceive------------------------------------------------------------------------------------------"+RemainingBytes());
        while (RemainingBytes() > 2)
        {
			memStream.Seek(NowPosition, SeekOrigin.Begin);
			Int32 headers = (Int32)IPAddress.NetworkToHostOrder(reader.ReadInt32());
			if (headers == encode) {
				memStream.Seek (NowPosition + 4, SeekOrigin.Begin);
				Int16 mainId = (Int16)IPAddress.NetworkToHostOrder (reader.ReadInt16 ());//取ID
				memStream.Seek (NowPosition + 10, SeekOrigin.Begin);
				int messageLen = IPAddress.NetworkToHostOrder (reader.ReadInt32 ());//取长度
				if (RemainingBytes () >= messageLen) {
					MemoryStream ms = new MemoryStream ();
					BinaryWriter writer = new BinaryWriter (ms);
					writer.Write (reader.ReadBytes (messageLen));
					ms.Seek (0, SeekOrigin.Begin);
					OnReceivedMessage (ms, mainId);
					NowPosition = memStream.Position;
				} else {//剩余字节不够丢回数据池
					memStream.Position = memStream.Position - 14;
					break;
				}
			} else {
				//抛弃一个字节后继续读包头
				NowPosition++;
				memStream.Position = NowPosition;
			//Debug.Log ("RemainingBytes("+RemainingBytes()+")Position("+memStream.Position+")----------------------------------------------("+headers);
			}
        }

        //Create a new stream with any leftover bytes
        byte[] leftover = reader.ReadBytes((int)RemainingBytes());
        memStream.SetLength(0);     //Clear
        memStream.Write(leftover, 0, leftover.Length);
    }

    /// <summary>
    /// 剩余的字节
    /// </summary>
    private long RemainingBytes() {
        return memStream.Length - memStream.Position;
    }

    /// <summary>
    /// 接收到消息
    /// </summary>
    /// <param name="ms"></param>
    void OnReceivedMessage(MemoryStream ms,short mainId) {
        BinaryReader r = new BinaryReader(ms);
        byte[] message = r.ReadBytes((int)(ms.Length - ms.Position));
        //int msglen = message.Length;
        //Debug.LogError("leng:"+msglen);
        ByteBuffer buffer = new ByteBuffer(message);
        if (mainId != 10000)//心跳包不解析了---
        {
            Debug.Log("mainId:" + mainId);
            NetworkManager.AddEvent(mainId, buffer);
        }
        //if (mainId != 10000 && mainId != 105)
			//Debug.Log("OnReceivedMessage Key:" + mainId+"----------------------------------------------------------------------------");
        
    }


    /// <summary>
    /// 会话发送
    /// </summary>
    void SessionSend(byte[] bytes) {
        WriteMessage(bytes);
    }

    /// <summary>
    /// 关闭链接
    /// </summary>
    public void Close() {
        if (client != null) {
            if (client.Connected) client.Close();
            client = null;
            //Debug.LogError("关闭");
        }
    }

    /// <summary>
    /// 发送连接请求
    /// </summary>
	public void SendConnect(string ip, int port) {
        IP = ip;
        Port = port;
        ConnectServer(ip, port);
    }

    /// <summary>
    /// 发送消息
    /// </summary>
    public  void SendMessage(ByteBuffer buffer)
    {
        if (client == null)
        {
            //LuaHelper.GetNetManager().CancelInvoke("SendHeart");
			//LuaHelper.GetNetManager ().RemoveSocket ();
            Debug.LogError("SendMessage connected----------------------------------------------------------------------->>false");
            Util.CallMethod("Game", "ConncetFalse");
            return;
        }
        SessionSend(buffer.ToBytes());
        buffer.Close();
    }

    public bool isSocketStats()
    {

        if (client == null || !client.Connected)
        {
            return false;
        }
        return true;
    }
}

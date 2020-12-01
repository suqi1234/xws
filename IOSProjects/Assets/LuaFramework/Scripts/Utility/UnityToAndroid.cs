using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

class UnityToAndroid
{
    private AndroidJavaObject context;
    private AndroidJavaObject jo;
    private AndroidJavaClass jc;

    public UnityToAndroid()
    {
    }
    private void Init()
    {
        context = new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity"); //获得Context
        jo = new AndroidJavaObject("com.qiqi.mylibrary.UnityToAndroid");
        jc = new AndroidJavaClass("com.qiqi.mylibrary.UnityToAndroid");
        jo.Call("Init", context);
    }

    public void Copy(string str)
    {
        if (jo == null) Init();
        jo.Call("CopyTextToClipboard", str);
    }

}

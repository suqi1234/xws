﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

/// <summary>
/// Debug测试。
/// 将Debug写入到本地硬件
/// 这里使用的是Unity5.3.3版本
/// </summary>
namespace DebugLoggerWriter
{
    public class LoggerMono : MonoBehaviour
    {
        public Text logText;
        public string logName = "DeBugLog";
        private string m_txt;
        private float m_timeNote;
        private float m_timeNote2;
        public float m_duration = 2f;

        void Awake()
        {
            Application.logMessageReceived += OnLogCallBack;
            m_timeNote = Time.time;

            /// 这里才是重点，要将Debug输出写入到本地文件的关键。
            LoggerWriter.instance.InitWriter(logName);
        }

        private void OnLogCallBack(string condition, string stackTrace, LogType type)
        {
            string logStr = string.Empty;
            switch (type)
            {
                case LogType.Log:
                    {
                        logStr = string.Format("{0}：{1}\n", type, condition);
                    }
                    break;
                case LogType.Assert:
                case LogType.Warning:
                case LogType.Exception:
                case LogType.Error:
                    {
                        if (string.IsNullOrEmpty(stackTrace))
                        {
                            /// 发布到对应平台后，调用堆栈获取不到。使用 Environment.StackTrace 获取调用堆栈
                            logStr = string.Format("{0}：{1}\n{2}", type, condition, Environment.StackTrace);
                        }
                        else
                        {
                            logStr = string.Format("{0}：{1}\n{2}", type, condition, stackTrace);
                        }
                    }
                    break;
            }
            logStr += "\n";
            m_txt += logStr;
        }

        void Update()
        {
            if (logText != null)
            {
                logText.text = m_txt;
            }
        }
    }
}


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using LuaFramework;
using DG.Tweening;
using UnityEngine.UI;

public class OnDragView : MonoBehaviour
{
    ScrollRect scrollRect;
    // Use this for initialization
    void Start () {
        scrollRect = transform.parent.GetComponent<ScrollRect>();
        //scrollRect.onValueChanged.AddListener(delegate { Util.CallMethod("HallPanel", "CheckScroll"); });//添加滚动事件回调
    }

    // Update is called once per frame
    void Update()
    {
    }
}

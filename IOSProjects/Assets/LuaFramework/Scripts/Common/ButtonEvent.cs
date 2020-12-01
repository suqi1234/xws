using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using LuaFramework;
using DG.Tweening;
using UnityEngine.EventSystems;


namespace LuaFramework {
	public class ButtonEvent : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler, IPointerDownHandler, IPointerUpHandler, IPointerExitHandler {
		public GameObject Panel;
		// Use this for initialization
		void Start () {
			
		}
		
		// Update is called once per frame
		void Update () {
			
		}

		public void OnDrag(PointerEventData eventData)
		{
			//Debug.Log("OnButtonDrag----------------------------------------------------------------");
			Util.CallMethod(Panel.name,"OnButtonDrag",eventData,gameObject);
		}
		public void OnBeginDrag(PointerEventData eventData)
		{
			//Debug.Log("OnButtonBeginDrag----------------------------------------------------------------");
			Util.CallMethod(Panel.name, "OnButtonBeginDrag",eventData,gameObject);
		}	
		public void OnEndDrag(PointerEventData eventData)
		{
			//Debug.Log("OnButtonEndDrag----------------------------------------------------------------");
			Util.CallMethod(Panel.name, "OnButtonEndDrag",eventData,gameObject);
		}

		// 当按钮被按下后系统自动调用此方法
		public void OnPointerDown (PointerEventData eventData)
		{
			//Debug.Log("OnButtonPointerDown----------------------------------------------------------------");
			Util.CallMethod(Panel.name, "OnButtonPointerDown",eventData,gameObject);
		}
	
		// 当按钮抬起的时候自动调用此方法
		public void OnPointerUp (PointerEventData eventData)
		{
			//Debug.Log("OnButtonPointerUp----------------------------------------------------------------");
			Util.CallMethod(Panel.name, "OnButtonPointerUp",eventData,gameObject);
		}
	
		// 当鼠标从按钮上离开的时候自动调用此方法
		public void OnPointerExit (PointerEventData eventData)
		{
			//Debug.Log("OnButtonEndDrag----------------------------------------------------------------");
			Util.CallMethod(Panel.name, "OnButtonPointerExit",eventData,gameObject);
		}
	}
}

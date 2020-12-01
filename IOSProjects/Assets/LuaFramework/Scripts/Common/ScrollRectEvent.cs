using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using LuaFramework;
using DG.Tweening;
using UnityEngine.EventSystems;


namespace LuaFramework {
	public class ScrollRectEvent : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler {
		public GameObject Panel;
		// Use this for initialization
		void Start () {
			
		}
		
		// Update is called once per frame
		void Update () {
			
		}

		public void OnDrag(PointerEventData eventData)
		{
			//Debug.Log("OnScrollRectDrag----------------------------------------------------------------");
			Util.CallMethod(Panel.name,"OnScrollRectDrag",eventData,gameObject);
		}
		public void OnBeginDrag(PointerEventData eventData)
		{
			//Debug.Log("OnScrollRectBeginDrag----------------------------------------------------------------");
			Util.CallMethod(Panel.name, "OnScrollRectBeginDrag",eventData,gameObject);
		}	
		public void OnEndDrag(PointerEventData eventData)
		{
			//Debug.Log("OnScrollRectEndDrag----------------------------------------------------------------");
			Util.CallMethod(Panel.name, "OnScrollRectEndDrag",eventData,gameObject);
		}
	}
}

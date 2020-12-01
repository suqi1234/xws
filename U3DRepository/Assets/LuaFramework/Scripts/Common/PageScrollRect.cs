using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using DG.Tweening;
using System;
using System.Collections;

namespace UnityEngine.UI
{
	public class PageScrollRect : ScrollRect {
		private float lastDragTime = 0;
		private float lastDragX = 0;
		private float lastDragY = 0;

		private int SelectPageX = 0;
		private int SelectPageY = 0;

		private int MaxPageX = 0;
		private int MaxPageY = 0;

		public float MinDrag = 100f;
		public int PageX{
			set{
				SetPageX(value);
			}
			get{
				return SelectPageX;
			}
		}

		public int PageY{
			set{
				SetPageY(value);
			}
			get{
				return SelectPageY;
			}
		}


		private float MaxX = 0;
		private float MaxY = 0;

		protected void Awake() {
			inertia = false;//按页滑动
			//awake里取到的rect.size是错的
		}

		protected void Start() {
			LayoutRebuilder.ForceRebuildLayoutImmediate(gameObject.GetComponent<RectTransform>());
			LayoutRebuilder.ForceRebuildLayoutImmediate(content.GetComponent<RectTransform>());

			MaxX = gameObject.GetComponent<RectTransform>().rect.width;
			MaxY = gameObject.GetComponent<RectTransform>().rect.height;
			MaxPageX = (int)(content.GetComponent<RectTransform>().rect.width / MaxX);
			MaxPageY = (int)(content.GetComponent<RectTransform>().rect.height / MaxY);
			
			//Debug.Log("Scroll View sizeDelta " + gameObject.GetComponent<RectTransform>().sizeDelta + " rect size" + gameObject.GetComponent<RectTransform>().rect.size + "content sizeDelta " + content.GetComponent<RectTransform>().sizeDelta + " size " + content.GetComponent<RectTransform>().rect.size + " MaxPageX " + MaxPageX + " MaxPageY " + MaxPageY + " MaxX " + MaxX + " MaxY " + MaxY);
			
		}

		private void SetPageX(int page){
			SelectPageX = page;
			content.transform.DOLocalMove(new Vector3(-MaxX * SelectPageX,0,0),0.2f);
		}
		private void SetPageY(int page){
			SelectPageY = page;
			content.transform.DOLocalMove(new Vector3(0,-MaxY * SelectPageY,0),0.2f);
		}

	//滑动事件
		public override void OnBeginDrag(PointerEventData eventData)
		{
			base.OnBeginDrag(eventData);
			//Debug.Log("content sizeDelta " + content.GetComponent<RectTransform>().sizeDelta + " size " + content.GetComponent<RectTransform>().rect.size);
			lastDragTime = Time.time;
			//Debug.Log("OnBeginDrag----------------------------------------------------------------");
			if(horizontal){
				lastDragX = eventData.position.x;
			}
			if(vertical){
				lastDragY = eventData.position.y;
			}
		}
		public override void OnEndDrag(PointerEventData eventData)
		{
			//base.OnEndDrag(eventData);
			//Debug.Log("OnEndDrag----------------------------------------------------------------");

			if(horizontal){
				if((Time.time - lastDragTime) < 0.5 && Mathf.Abs(eventData.position.x - lastDragX) > MinDrag)
				{
					if(eventData.position.x - lastDragX > 0){
						SelectPageX--;
						if(SelectPageX < 0)SelectPageX = 0;
					}
					else{
						SelectPageX++;
						if(SelectPageX > MaxPageX)SelectPageX = MaxPageX;
					}
				}
				content.transform.DOLocalMove(new Vector3(-MaxX * SelectPageX,0,0),0.2f);
			}
			if(vertical){
				if((Time.time - lastDragTime) < 0.5 && Mathf.Abs(eventData.position.y - lastDragY) > MinDrag)
				{
					if(eventData.position.y - lastDragY > 0){
						SelectPageX--;
						if(SelectPageX < 0)SelectPageX = 0;
					}
					else{
						SelectPageX++;
						if(SelectPageX > MaxPageY)SelectPageX = MaxPageY;
					}
				}
				content.transform.DOLocalMove(new Vector3(-MaxX * SelectPageX,0,0),0.2f);
			}

		}

	}
}
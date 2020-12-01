using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using System;
using System.Collections;
using System.Collections.Generic;

namespace UnityEngine.UI
{
	public class SimilarScrollRectX : UIBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler, IPointerDownHandler, IPointerClickHandler, IPointerUpHandler {
		public float Top = 0;
		public float Buttom = 0;
		public float Left = 0;
		public float Right = 0;
		public float Spacing = 0;


		private float MaxX = 0;
		private float MaxY = 0;
		private float itemX = 0;
		private float itemY = 0;
		private Action<GameObject,int> DragAction = null;
		private List<GameObject> ScrollItem = new List<GameObject>();
		

		private float Difference = 0;
		private Vector3 LastPosition;
		public Scrollbar Scrollbar;
		private List<float> ItemPoint = new List<float>();
		private int FirstPoint = 0;
		private int LastPoint = 0;

		private bool IsPress = false;

		private bool IsInit = false;


		//初始化需要传入 滑动子物体，总数，离上边距离，离左边距离，离右边距离，离下边距离，间距，刷新子物体时的回调函数（此函数包含一个子物体一个引索，引索由0开始）
		public void InitSimilarScrollRectX(GameObject item, int TotalNum, Action<GameObject,int> action){
			IsInit = false;
			Difference = 0;
			DragAction = action;

			if(ScrollItem.Count > 0){
				foreach (var obj in ScrollItem)
				{
					if(obj != null)
					Destroy(obj);
				}
			}
			ScrollItem = new List<GameObject>();

			LayoutRebuilder.ForceRebuildLayoutImmediate(gameObject.GetComponent<RectTransform>());
			MaxX = gameObject.GetComponent<RectTransform>().rect.width;
			MaxY = gameObject.GetComponent<RectTransform>().rect.height;
			itemX = item.GetComponent<RectTransform>().rect.width;
			itemY = item.GetComponent<RectTransform>().rect.height;
			FirstPoint = 0;
			Debug.Log("InitSimilarScrollRectX---------------------(" + MaxX + ")(" + Spacing + ")(" + itemX);
			ItemPoint = new List<float>();
			for (int i = 0; i < TotalNum; i++){
				if (i < MaxX / (Spacing + itemX) + 1)
				{
					GameObject Obj = Instantiate(item);
					Obj.transform.SetParent(transform);
					Obj.transform.localScale = Vector3.one;
					Obj.SetActive(true);
					ScrollItem.Add(Obj);
					LastPoint = i;

					DragAction(Obj,LastPoint);
				}else{
					ScrollItem.Add(null);
				}
				ItemPoint.Add(i * (Spacing + itemX));
			}

			IsInit = true;
			UpdateItemPosition();
		}


	//滑动事件
		public void OnBeginDrag(PointerEventData eventData)
		{
			if(!IsInit)return;
			IsPress = true;
			LastPosition = eventData.position;
		}
		public void OnEndDrag(PointerEventData eventData)
		{
			if(!IsInit)return;
			Difference = Difference + eventData.position.x - LastPosition.x;
			LastPosition = eventData.position;
			UpdateItemPosition();
			IsPress = false;
		}
		public void OnDrag(PointerEventData eventData)
		{
			if(!IsInit)return;
			IsPress = true;
			Difference = Difference + eventData.position.x - LastPosition.x;
			//Debug.Log("OnDrag(" + Difference + ")(" + FirstPoint + ")(" + LastPoint + ")(" + ScrollItem[LastPoint].transform.localPosition);
			
			if((eventData.position.x - LastPosition.x) < 0 && 
			ItemPoint[FirstPoint] + Left + Difference < -itemX && 
			LastPoint + 1 < ScrollItem.Count)
			{
				ScrollItem[LastPoint + 1] = ScrollItem[FirstPoint];
				ScrollItem[FirstPoint] = null;
				FirstPoint++;
				LastPoint++;

				DragAction(ScrollItem[LastPoint],LastPoint);
			}
			else if((eventData.position.x - LastPosition.x) >= 0 && 
			ItemPoint[LastPoint] + Left + Difference > MaxX && 
			FirstPoint > 0)
			{
				ScrollItem[FirstPoint - 1] = ScrollItem[LastPoint];
				ScrollItem[LastPoint] = null;
				FirstPoint--;
				LastPoint--;

				DragAction(ScrollItem[FirstPoint],FirstPoint);
			}
			LastPosition = eventData.position;
			UpdateItemPosition();
		}

		public void OnPointerDown(PointerEventData eventData)
		{
			if(!IsInit)return;
			IsPress = true;
		}

        public void OnPointerClick(PointerEventData eventData){
            if(!IsInit)return;
        }

        public void OnPointerUp(PointerEventData eventData)
        {
			if(!IsInit)return;
            IsPress = false;
        }

		private void UpdateItemPosition()
		{
			if(!IsInit)return;
			for (int i = 0; i < ScrollItem.Count; i++)
			{
				if(i < ItemPoint.Count && ScrollItem[i] != null)
				ScrollItem[i].transform.localPosition = new Vector3(ItemPoint[i] + Left + Difference, Top,0);
			}
		}
		

		void Update(){
			if(!IsPress && IsInit){
				if(ItemPoint[FirstPoint] + Difference > 0 && Difference > 0)
				{
					Difference = Difference - Time.deltaTime * Difference * 2;
					if(Difference < 0)
					{
						Difference = 0;
					}
					UpdateItemPosition();
				}
				if(ItemPoint[LastPoint] + Left + Difference + itemX + Right < MaxX && Difference < 0)
				{
					Difference = Difference + Time.deltaTime * Difference * 2;
					if(Difference > 0)
					{
						Difference = 0;
					}
					UpdateItemPosition();  
				}
			}
		}
	}
}
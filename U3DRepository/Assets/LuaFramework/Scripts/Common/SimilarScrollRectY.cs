using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using System;
using System.Collections;
using System.Collections.Generic;

namespace UnityEngine.UI
{
	public class SimilarScrollRectY : UIBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler, IPointerDownHandler, IPointerClickHandler, IPointerUpHandler {
		
		public float itemSpacing = 0;
		public List<GameObject> ScrollItem = new List<GameObject>();


		private Action<GameObject,int> DragAction = null;


		private float MaxY = 0;
		private float itemY = 0;

		private float Difference = 0;
		private Vector3 LastPosition;
		private float Inertia = 0;
		private float LastTime = 0;

		public Scrollbar Scrollbar;

		private Dictionary<int,float> ItemPointPos = new Dictionary<int,float>();	//引索对应的坐标
		private Dictionary<int,int> ItemPoint = new Dictionary<int,int>();			//子物体引索对应的刷新引索
		private int FirstPoint = 0;													//排最上方的子物体引索
		private int LastPoint = 0;													//排最下方的子物体引索

		private bool IsPress = false;
		private bool UpdatePoint = false;

		private bool IsInit = false;




		void Awake(){
			if (Scrollbar != null) {
				Scrollbar.onValueChanged.AddListener (OnValueChangedScrollbar);
			}

		}
			

		// TotalNum列表总数,action刷新子物体时的回调函数（此函数包含一个子物体一个刷新引索，引索由0开始）
		public void Init(int TotalNum, Action<GameObject,int> action){
			if (ScrollItem.Count > 0) {
				ItemPointPos.Clear ();
				ItemPoint.Clear ();
				itemY = ScrollItem [0].GetComponent<RectTransform> ().rect.height;
				MaxY = gameObject.GetComponent<RectTransform>().rect.height;

				for (int i = 0; i < TotalNum; i++) {
					ItemPointPos.Add (i, (float)(i * -(itemY + itemSpacing) + ((MaxY / itemY) / 2 - 0.5) * itemY));
				}
				for (int i = 0; i < ScrollItem.Count; i++) {
					ItemPoint.Add (i, i);

				}

				FirstPoint = 0;
				LastPoint = ScrollItem.Count - 1;

				DragAction = action;
				Difference = 0;

				IsInit = true;
				UpdateList ();
				UpdateItemPosition ();
			}
		}

		public void Add(int AddNum){
			if (!IsInit) {
				Debug.LogError("还未初始化");
				return;
			}
			bool Update = false;
			int Num = ItemPointPos.Count - 1;
			if(Num == ItemPoint[LastPoint]){
				Update = true;
			}
			for (int i = 0; i < AddNum; i++) {
				ItemPointPos.Add (ItemPointPos.Count, (float)(ItemPointPos.Count * -(itemY + itemSpacing) + ((MaxY / itemY) / 2 - 0.5) * itemY));
			}
			if (Num <= ItemPointPos.Count - 1 && Update) {
				UpdatePoint = true;
			}
		}


		public void LastPointGotoNum(int Num){
			if (!IsInit) {
				Debug.LogError("还未初始化");
				return;
			}

			if (Num < ItemPointPos.Count) {
				for (int i = 0; i < ScrollItem.Count; i++) {
					ItemPoint [i] = Num - ScrollItem.Count + 1 + i;
				}
				FirstPoint = 0;
				LastPoint = ScrollItem.Count - 1;
				Difference = (float)(-((MaxY / itemY) / 2 - 0.5) * itemY - ItemPointPos [Num]);


				UpdateList ();
				UpdateItemPosition ();
			} else {
				Debug.LogError("超过总长度无法跳转");
			}

		}

	//滑动事件
		public void OnBeginDrag(PointerEventData eventData)
		{
			if (!IsInit) {
				Debug.LogError("还未初始化");
				return;
			}
			IsPress = true;
			LastPosition = eventData.position;
			UpdatePoint = false;
		}
		public void OnEndDrag(PointerEventData eventData)
		{
			if (!IsInit) {
				Debug.LogError("还未初始化");
				return;
			}
			IsPress = false;
			Inertia = (eventData.position.y - LastPosition.y) / ((Time.time - LastTime) * 400);
			if (Scrollbar != null) {
				Scrollbar.value = (float)((Difference + eventData.position.y - LastPosition.y) / (-((MaxY / itemY) / 2 - 0.5) * itemY - ItemPointPos [ItemPointPos.Count - 1]));
			}
			UpdateItem(eventData.position.y - LastPosition.y);

		}
		public void OnDrag(PointerEventData eventData)
		{
			if (!IsInit) {
				Debug.LogError("还未初始化");
				return;
			}
			IsPress = true;
			if (Scrollbar != null) {
				Scrollbar.value = (float)((Difference + eventData.position.y - LastPosition.y) / (-((MaxY / itemY) / 2 - 0.5) * itemY - ItemPointPos [ItemPointPos.Count - 1]));
			}
			UpdateItem(eventData.position.y - LastPosition.y);
	
			LastPosition = eventData.position;
			LastTime = Time.time;
		}

		public void OnPointerDown(PointerEventData eventData)
		{
			if (!IsInit) {
				Debug.LogError("还未初始化");
				return;
			}
			IsPress = true;

			Debug.Log (eventData.pointerEnter.name);
		}

        public void OnPointerClick(PointerEventData eventData){
			if (!IsInit) {
				Debug.LogError("还未初始化");
				return;
			}
        }

        public void OnPointerUp(PointerEventData eventData)
        {
			if (!IsInit) {
				Debug.LogError("还未初始化");
				return;
			}
			IsPress = false;
        }

		public void OnValueChangedScrollbar (float value) {
			//Debug.Log ("---------------------" + value + " " + Difference + " " + EventSystem.current.currentSelectedGameObject.name);
			//Debug.Log ("---------------------" + (EventSystem.current.currentSelectedGameObject == Scrollbar.gameObject).ToString());
			if (EventSystem.current != null && EventSystem.current.currentSelectedGameObject != null && EventSystem.current.currentSelectedGameObject == Scrollbar.gameObject) {
				UpdateItem ((float)((-((MaxY / itemY) / 2 - 0.5) * itemY - ItemPointPos [ItemPointPos.Count - 1]) * value - Difference));
			}
		}

		private void UpdateItem(float Spacing)
		{
			//Debug.Log ("UpdateItem--(" + FirstPoint + " " + LastPoint);
			Difference = Difference + Spacing;
			//Debug.Log (Math.Ceiling(Math.Abs(Spacing / (itemY + itemSpacing))));
			int Num = (int)Math.Ceiling(Math.Abs(Spacing / (itemY + itemSpacing)));
					
			for (int j = 0; j < Num; j++) {
				if (Spacing > 0 &&
				   (!ItemPointPos.ContainsKey (ItemPoint [FirstPoint]) || ItemPointPos [ItemPoint [FirstPoint]] + Difference > (MaxY + itemY) / 2) &&
				   ItemPoint [LastPoint] < ItemPointPos.Count - 1) {

					ItemPoint [FirstPoint] = ItemPoint [LastPoint] + 1;
					UpdateList ();

					FirstPoint = FirstPoint + 1;
					if (FirstPoint > ScrollItem.Count - 1) {
						FirstPoint = 0;
					}
					LastPoint = LastPoint + 1;
					if (LastPoint > ScrollItem.Count - 1) {
						LastPoint = 0;
					}
				} else if (Spacing <= 0 &&
				        (!ItemPointPos.ContainsKey (ItemPoint [LastPoint]) || ItemPointPos [ItemPoint [LastPoint]] + Difference < -(MaxY + itemY) / 2) &&
				        ItemPoint [FirstPoint] > 0) {

					ItemPoint [LastPoint] = ItemPoint [FirstPoint] - 1;
					UpdateList ();

					FirstPoint = FirstPoint - 1;
					if (FirstPoint < 0) {
						FirstPoint = ScrollItem.Count - 1;
					}
					LastPoint = LastPoint - 1;
					if (LastPoint < 0) {
						LastPoint = ScrollItem.Count - 1;
					}
				}
			}
			UpdateItemPosition();
		}

		private void UpdateItemPosition()
		{
			if (!IsInit) {
				Debug.LogError("还未初始化");
				return;
			}

			for (int i = 0; i < ScrollItem.Count; i++)
			{
				if(ItemPointPos.ContainsKey(ItemPoint[i]))
					ScrollItem[i].transform.localPosition = new Vector3(0,ItemPointPos[ItemPoint[i]] + Difference,0);
			}
		}

		private void UpdateList()
		{
			for(int i = 0;i < ScrollItem.Count;i++){
				DragAction(ScrollItem[i],ItemPoint[i]);
			}

		}
		

		void Update(){
			if(!IsPress && IsInit){
				//Debug.Log (LastPoint);
				//Debug.Log (ItemPoint [LastPoint]);
				//Debug.Log (ItemPointPos [ItemPoint [LastPoint]] + Difference + " " + ((MaxY / itemY) / 2 - 0.5) * itemY);

				if (UpdatePoint) {//新增元素向上滑动
					float Spacing = Time.deltaTime * 400;
					if (ItemPointPos.ContainsKey (ItemPoint [LastPoint]) &&
						(ItemPointPos.Count - 1) == ItemPoint [LastPoint] &&
						Spacing >= -((MaxY / itemY) / 2 - 0.5) * itemY - ItemPointPos [ItemPoint [LastPoint]] - Difference) {//当最后一个元素下次刷新将到头

						UpdatePoint = false;
						Spacing = (float)(-((MaxY / itemY) / 2 - 0.5) * itemY - ItemPointPos [ItemPoint [LastPoint]] - Difference);
						if (Scrollbar != null) {
							Scrollbar.value = (float)((Difference + Spacing) / (-((MaxY / itemY) / 2 - 0.5) * itemY - ItemPointPos [ItemPointPos.Count - 1]));
						}
						UpdateItem (Spacing);
					} else {
						if (Scrollbar != null) {
							Scrollbar.value = (float)((Difference + Spacing) / (-((MaxY / itemY) / 2 - 0.5) * itemY - ItemPointPos [ItemPointPos.Count - 1]));
						}
						UpdateItem (Spacing);
					}
				} else if (ItemPointPos.ContainsKey (ItemPoint [FirstPoint]) &&
					ItemPoint [FirstPoint] == 0 &&
					ItemPointPos [ItemPoint [FirstPoint]] + Difference < ((MaxY / itemY) / 2 - 0.5) * itemY) {//向下滑动第一个元素到头导致向上回弹

					float Spacing = -Time.deltaTime * Difference * 10;

					if (Difference + Spacing > 0) {
						Spacing = -Difference;
					}
					if (Scrollbar != null) {
						Scrollbar.value = (float)((Difference + Spacing) / (-((MaxY / itemY) / 2 - 0.5) * itemY - ItemPointPos [ItemPointPos.Count - 1]));
					}
					UpdateItem (Spacing);
					Inertia = 0;

				} else if (ItemPointPos.ContainsKey (ItemPoint [LastPoint]) &&
					ItemPoint [LastPoint] == ItemPointPos.Count - 1 &&
					ItemPointPos [ItemPoint [LastPoint]] + Difference > -((MaxY / itemY) / 2 - 0.5) * itemY) {//向下滑动最后一个元素到头导致向下回弹

					float Spacing = (float)(-Time.deltaTime * (ItemPointPos [ItemPoint [LastPoint]] + Difference + ((MaxY / itemY) / 2 - 0.5) * itemY) * 10);
					if (Spacing < -((MaxY / itemY) / 2 - 0.5) * itemY - ItemPointPos [ItemPoint [LastPoint]] - Difference) {
						Spacing = (float)(-((MaxY / itemY) / 2 - 0.5) * itemY - ItemPointPos [ItemPoint [LastPoint]] - Difference);
					}
					if (Scrollbar != null) {
						Scrollbar.value = (float)((Difference + Spacing) / (-((MaxY / itemY) / 2 - 0.5) * itemY - ItemPointPos [ItemPointPos.Count - 1]));
					}
					UpdateItem (Spacing);
					Inertia = 0;

				} else if (Inertia != 0) {//惯性
					
					Inertia = Inertia - Time.deltaTime * Inertia * 2;
					if (Scrollbar != null) {
						Scrollbar.value = (float)((Difference + Inertia) / (-((MaxY / itemY) / 2 - 0.5) * itemY - ItemPointPos [ItemPointPos.Count - 1]));
					}
					UpdateItem (Inertia);

				}
			}
		}
	}
}
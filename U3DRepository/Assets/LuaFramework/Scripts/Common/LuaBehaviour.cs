using UnityEngine;
using LuaInterface;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.UI;
using UnityEngine.EventSystems;


namespace LuaFramework {
	public class LuaBehaviour : View, IBeginDragHandler, IDragHandler, IEndDragHandler ,IPointerDownHandler,IPointerClickHandler,IPointerUpHandler {
        private string data = null;
        private Dictionary<GameObject, LuaFunction> buttons = new Dictionary<GameObject, LuaFunction>();
        protected void Awake() {
            Util.CallMethod(name, "Awake", gameObject);
        }
        protected void Start() {
            Util.CallMethod(name, "Start");
        }
        protected void OnClick() {
            Util.CallMethod(name, "OnClick");
        }
        protected void Update()
        {
            Util.CallMethod(name, "Update");
        }
        protected void FixedUpdate()
        {
            Util.CallMethod(name, "FixedUpdate");
        }
        protected void OnClickEvent(GameObject go) {
            Util.CallMethod(name, "OnClick", go);
        }
		protected void OnEnable(){
			Util.CallMethod(name, "OnEnable");
		}
        protected void OnDisable()
        {
            Util.CallMethod(name, "OnDisable");
        }
		public void OnDrag(PointerEventData eventData)
		{
            //Debug.Log("OnDrag----------------------------------------------------------------");
			Util.CallMethod(name, "OnDrag",eventData);
		}
		public void OnBeginDrag(PointerEventData eventData)
		{
            //Debug.Log("OnBeginDrag----------------------------------------------------------------");
			Util.CallMethod(name, "OnBeginDrag",eventData);
		}
		public void OnEndDrag(PointerEventData eventData)
		{
            //Debug.Log("OnEndDrag----------------------------------------------------------------");
			Util.CallMethod(name, "OnEndDrag",eventData);
		}
        public void OnPointerDown(PointerEventData eventData)
		{
            //Debug.Log("OnPointerDown----------------------------------------------------------------");
            Util.CallMethod(name, "OnPointerDown",eventData);
            
		}
        public void OnPointerClick(PointerEventData eventData){
            //Debug.Log("OnPointerClick----------------------------------------------------------------");
            Util.CallMethod(name, "OnPointerClick",eventData);
            
        }
        public void OnPointerUp(PointerEventData eventData)
        {
            //Debug.Log("OnPointerUp----------------------------------------------------------------");
            Util.CallMethod(name, "OnPointerUp",eventData);
            
        }
        public void AddClick(GameObject go, LuaFunction luafunc) {

            if (go == null || luafunc == null) return;
            if (buttons.ContainsKey(go)) return;
            buttons.Add(go, luafunc);
            go.GetComponent<Button>().onClick.AddListener(
                delegate() {
                    luafunc.Call(go);
                }
            );
        }
		public void AddValueChanged(Slider go, LuaFunction luafunc) {
			if (go == null || luafunc == null) return;
			if (buttons.ContainsKey(go.gameObject)) return;
			buttons.Add(go.gameObject, luafunc);
			go.onValueChanged.AddListener(
				delegate(float Vaule) {
					luafunc.Call(go,Vaule);
				}
			);
		}
		public void AddValueChanged(Scrollbar go, LuaFunction luafunc) {
			if (go == null || luafunc == null) return;
			if (buttons.ContainsKey(go.gameObject)) return;
			buttons.Add(go.gameObject, luafunc);
			go.onValueChanged.AddListener(
				delegate(float Vaule) {
					luafunc.Call(go,Vaule);
				}
			);
		}
		public void AddValueChanged(Toggle go, LuaFunction luafunc) {
			if (go == null || luafunc == null) return;
			if (buttons.ContainsKey(go.gameObject)) return;
			buttons.Add(go.gameObject, luafunc);
			go.onValueChanged.AddListener(
				delegate(bool Vaule) {
					luafunc.Call(go,Vaule);
				}
			);
		}
		public void AddValueChanged(InputField go, LuaFunction luafunc) {
			if (go == null || luafunc == null) return;
			if (buttons.ContainsKey(go.gameObject)) return;
			buttons.Add(go.gameObject, luafunc);
			go.onValueChanged.AddListener(
				delegate(string Vaule) {
					luafunc.Call(go,Vaule);
				}
			);
		}
        public void AddEndEdit(InputField go, LuaFunction luafunc)
        {
            if (go == null || luafunc == null) return;
            if (buttons.ContainsKey(go.gameObject)) return;
            buttons.Add(go.gameObject, luafunc);
            go.onEndEdit.AddListener(
                delegate (string Vaule) {
                    luafunc.Call(go, Vaule);
                }
            );
        }
        public void AddValueChanged(Dropdown go, LuaFunction luafunc) {
			if (go == null || luafunc == null) return;
			if (buttons.ContainsKey(go.gameObject)) return;
			buttons.Add(go.gameObject, luafunc);
			go.onValueChanged.AddListener(
				delegate(int Vaule) {
					luafunc.Call(go,Vaule);
				}
			);
		}
        public void AddValueChanged(ScrollRect go, LuaFunction luafunc)
        {
            if (go == null || luafunc == null) return;
            if (buttons.ContainsKey(go.gameObject)) return;
            buttons.Add(go.gameObject, luafunc);
            go.onValueChanged.AddListener(
                delegate (UnityEngine.Vector2 Vaule) {
                    luafunc.Call(go, Vaule);
                }
            );
        }
        public void AddDrag(GameObject go, LuaFunction luafunc)
        {
            if (go == null || luafunc == null) return;
            if (buttons.ContainsKey(go.gameObject)) return;
            buttons.Add(go.gameObject, luafunc);
            go.GetComponent<ScrollRect>().onValueChanged.AddListener(delegate { luafunc.Call(go); });
        }
        public void RemoveClick(GameObject go) {
            if (go == null) return;
            if (!buttons.ContainsKey(go.gameObject)) return;
			go.GetComponent<Button> ().onClick.RemoveAllListeners ();
            LuaFunction luafunc = null;
            if (buttons.TryGetValue(go.gameObject, out luafunc)) {
                luafunc.Dispose();
                luafunc = null;
                buttons.Remove(go.gameObject);
            }
        }
        public void ClearClick() {
            foreach (var de in buttons) {
                if (de.Value != null) {
                    de.Value.Dispose();
                }
            }
            buttons.Clear();
        }
        protected void OnDestroy() {
            ClearClick();
#if ASYNC_MODE
            string abName = name.ToLower().Replace("panel", "");
            ResManager.UnloadAssetBundle(abName + AppConst.ExtName);
#endif
            Util.ClearMemory();
            Debug.Log("~" + name + " was destroy!");
        }
    }
}
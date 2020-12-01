using UnityEngine;
using System.Collections.Generic;
using System.Reflection;
using LuaInterface;
using System;
using DG.Tweening;
using UnityEngine.UI;

namespace LuaFramework {
    public static class LuaHelper {
        /// <summary>
        /// getType
        /// </summary>
        /// <param name="classname"></param>
        /// <returns></returns>
        public static System.Type GetType(string classname) {
            Assembly assb = Assembly.GetExecutingAssembly();  //.GetExecutingAssembly();
            System.Type t = null;
            t = assb.GetType(classname); ;
            if (t == null) {
                t = assb.GetType(classname);
            }
            return t; 
        }

        /// <summary>
        /// 面板管理器
        /// </summary>
        public static PanelManager GetPanelManager() {
            return AppFacade.Instance.GetManager<PanelManager>(ManagerName.Panel);
        }
		/// <summary>
        /// 场景管理器
        /// </summary>
        public static ScenesManager GetScenesManager()
        {
            return AppFacade.Instance.GetManager<ScenesManager>(ManagerName.Scenes);
        }

        /// <summary>
        /// 资源管理器
        /// </summary>
        public static ResourceManager GetResManager() {
            return AppFacade.Instance.GetManager<ResourceManager>(ManagerName.Resource);
        }

        /// <summary>
        /// 网络管理器
        /// </summary>
        public static NetworkManager GetNetManager() {
            return AppFacade.Instance.GetManager<NetworkManager>(ManagerName.Network);
        }

        /// <summary>
        /// 音乐管理器
        /// </summary>
        public static SoundManager GetSoundManager() {
            return AppFacade.Instance.GetManager<SoundManager>(ManagerName.Sound);
        }
        /// <summary>
        /// 游戏管理器
        /// </summary>
        public static GameManager GetGameManager()
        {
            return AppFacade.Instance.GetManager<GameManager>(ManagerName.Game);
        }
        /// <summary>
        /// lua理器
        /// </summary>
        public static LuaManager GetLuaManager()
        {
            return AppFacade.Instance.GetManager<LuaManager>(ManagerName.Lua);
        }

		public static MaterialManager GetMaterialManager()
		{
			return AppFacade.Instance.GetManager<MaterialManager>(ManagerName.Material);
		}

        public static Tweener DOTweenAlpha(CanvasGroup Obj, float Alpha,float Time)
		{
		   return	DOTween.To (() => Obj.alpha, a => Obj.alpha = a, Alpha, Time);
		}
        public static Tweener DOTweenTo(string startNum, Action<string> ret,string endNumber, float Time)
        {
            if(Util.IsNumeric(startNum)&&Util.IsNumeric(endNumber))
            return DOTween.To(()=> { return long.Parse( startNum);},(num)=> { ret(num.ToString()); },long.Parse(endNumber), Time).SetEase(Ease.Linear);
            else throw new Exception("no number");
        }
        public static Tweener DOTweenToFloat(float startNum, Action<float> ret, float endNumber, float Time)
        {
                return DOTween.To(() => { return startNum; }, (num) => { ret(num); },endNumber, Time).SetEase(Ease.Linear);
        }
        public static void SetAlpha(CanvasGroup Obj, float Alpha){
			Obj.alpha = Alpha;
		}

        public static void AddDropdownOption(Dropdown DropdownObj,string OptionText){
			Dropdown.OptionData OptionDataObj = new Dropdown.OptionData();
            OptionDataObj.text = OptionText;
            DropdownObj.options.Add(OptionDataObj);
		}

		public static Vector2 ScreenPointToLocalPointInRect(GameObject Obj, Vector2 position,GameObject theCamera){
			Vector2 localPoint;
			RectTransformUtility.ScreenPointToLocalPointInRectangle (Obj.GetComponent<RectTransform>(), position,
				theCamera.GetComponent<Camera>(), out localPoint);
			return localPoint;
		}


		
		public static void ObjAddComponent(GameObject Obj, string ComponentType)
        {   
            if(ComponentType == "Button"){
                Obj.AddComponent<Button>();
            }else if(ComponentType == "CanvasGroup"){
                Obj.AddComponent<CanvasGroup>();
            }
            
		}


        /// <summary>
        /// pbc/pblua函数回调
        /// </summary>
        /// <param name="func"></param>
        public static void OnCallLuaFunc(LuaByteBuffer data, LuaFunction func) {
            if (func != null) func.Call(data);
            Debug.LogWarning("OnCallLuaFunc length:>>" + data.buffer.Length);
        }

        /// <summary>
        /// cjson函数回调
        /// </summary>
        /// <param name="data"></param>
        /// <param name="func"></param>
        public static void OnJsonCallFunc(string data, LuaFunction func)
        {
            Debug.LogWarning("OnJsonCallback data:>>" + data + " lenght:>>" + data.Length);
            if (func != null) func.Call(data);
        }
    }
}
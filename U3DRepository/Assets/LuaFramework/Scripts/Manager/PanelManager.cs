using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using LuaInterface;
using DG.Tweening;

namespace LuaFramework {
    public class PanelManager : Manager {
        private Transform parent;
        Transform Parent {
            get {
                if (parent == null) {
                    GameObject go = GameObject.FindWithTag("UI");
                    if (go != null) parent = go.transform;
                }
                return parent;
            }
        }
		private static Dictionary<string,GameObject> PanelDic = new Dictionary<string, GameObject> ();
#if ASYNC_MODE
        /// <summary>
        /// ������壬������Դ������
        /// </summary>
        /// <param name="type"></param>
        public void CreatePanel(string name, LuaTable UiData = null) {
            //Debug.LogWarning("CreatePanel::>> " + name);
            string[] assetNameArray = name.Split('/');
            string assetName = assetNameArray[1] + "Panel";
            //Debug.LogWarning("CreatePanel::>> " + assetNameArray[1]);
            string abName = assetNameArray[1].ToLower() + AppConst.ExtName;
			if (PanelDic.ContainsKey (assetName) && PanelDic[assetName] != null) {
				PanelDic[assetName].gameObject.SetActive (true);
                PanelDic[assetName].transform.SetAsLastSibling ();
                if (UiData != null) {
					//Debug.LogWarning(assetName + ".Init1");
					LuaManager.CallFunction (assetName + ".Init", UiData);
				} else {
					//Debug.LogWarning(assetName + ".Ini1t");
					LuaManager.CallFunction (assetName + ".Init");
				}
#if UNITY_ANDROID
                Screen.fullScreen = true;
#endif
            }
            else {
				ResManager.LoadPrefab (abName, assetName, delegate (UnityEngine.Object[] objs) {
					if (objs.Length == 0)
						return;
					GameObject prefab = objs [0] as GameObject;
					if ((PanelDic.ContainsKey (assetName) && PanelDic[assetName] != null) || prefab == null)return;

					LuaManager.DoFile (assetNameArray [0] + "/" + assetName);
					GameObject go;
					/*if (PanelDic.ContainsKey (assetName) && PanelDic [assetName] != null)
					{
						go = PanelDic [assetName];
					}else{*/
						if (PanelDic.ContainsKey (assetName) && PanelDic[assetName] != null){
							GameObject.Destroy(PanelDic [assetName].gameObject);
						}
						go = Instantiate (prefab) as GameObject;
						
						PanelDic.Remove (assetName);
						PanelDic.Add (assetName, go.gameObject);
						
						go.name = assetName;
						go.layer = LayerMask.NameToLayer ("Default");
						go.transform.SetParent (Parent);
						go.transform.localScale = Vector3.one;
						go.transform.localPosition = Vector3.zero;
						go.transform.localRotation = Quaternion.identity;
						go.GetComponent<RectTransform> ().sizeDelta = new Vector2 (0, 0);
						go.AddComponent<LuaBehaviour> ();
                    //}
                    if (UiData != null) {
						//Debug.LogWarning(assetName + ".Init2");
						LuaManager.CallFunction (assetName + ".Init", UiData);
					} else {
						//Debug.LogWarning(assetName + ".Ini2t");
						LuaManager.CallFunction (assetName + ".Init");
					}
#if UNITY_ANDROID
                    Screen.fullScreen = true;
#endif
                    //Debug.LogWarning("CreatePanel::>> " + name + " " + prefab);
                });
			}
        }

/*
		public void CreatePanel(string name, LuaFunction func = null, LuaTable UiData = null) {
            //Debug.LogWarning("CreatePanel::>> " + name);
            string[] assetNameArray = name.Split('/');
			string assetName = assetNameArray[1] + "Panel";

			//Debug.LogWarning("CreatePanel::>> " + assetNameArray[1]);
			string abName = assetNameArray[1].ToLower() + AppConst.ExtName;
			if (PanelDic.ContainsKey (assetName) && PanelDic[assetName] != null) {
				PanelDic [assetName].gameObject.SetActive (true);
				PanelDic [assetName].transform.SetAsLastSibling ();

				if (func != null)
					func.Call (PanelDic [assetName]);
                if (UiData != null) {
					//Debug.LogWarning(assetName + ".Init1");
					LuaManager.CallFunction (assetName + ".Init", UiData);
				} else {
					//Debug.LogWarning(assetName + ".Ini1t");
					LuaManager.CallFunction (assetName + ".Init");
				}
#if UNITY_ANDROID
                Screen.fullScreen = true;
#endif
            }
            else {
				ResManager.LoadPrefab (abName, assetName, delegate (UnityEngine.Object[] objs) {
					if (objs.Length == 0)
						return;

					GameObject prefab = objs [0] as GameObject;

					GameObject go;
					if ((PanelDic.ContainsKey (assetName) && PanelDic[assetName] != null) || prefab == null)return;
					LuaManager.DoFile (assetNameArray [0] + "/" + assetName);
					
					//if (PanelDic.ContainsKey (assetName) && PanelDic [assetName] != null)
					//{
							//go = PanelDic [assetName];
					//else{
						if (PanelDic.ContainsKey (assetName) && PanelDic[assetName] != null){
							GameObject.Destroy(PanelDic [assetName].gameObject);
						}
						go = Instantiate (prefab) as GameObject;
						
						PanelDic.Remove (assetName);
						PanelDic.Add (assetName, go.gameObject);

						go.name = assetName;
						go.layer = LayerMask.NameToLayer ("Default");
						go.transform.SetParent (Parent);
						go.transform.localScale = Vector3.one;
						go.transform.localPosition = Vector3.zero;
						go.transform.localRotation = Quaternion.identity;
						go.GetComponent<RectTransform> ().sizeDelta = new Vector2 (0, 0);
						go.AddComponent<LuaBehaviour> ();
					//}
					//PanelDic.Remove (assetName);
					//PanelDic.Add (assetName, go.gameObject);
					

					if (func != null)
						func.Call (go);
                    if (UiData != null) {
						//Debug.LogWarning(assetName + ".Init1");
						LuaManager.CallFunction (assetName + ".Init", UiData);
					} else {
						//Debug.LogWarning(assetName + ".Ini1t");
						LuaManager.CallFunction (assetName + ".Init");
					}
#if UNITY_ANDROID
                    Screen.fullScreen = true;
#endif
                });
			}
		}
*/

        /// <summary>
        /// �ر�ָ��ui
        /// </summary>
        /// <param name="name"></param>
        public void CloseView(string name)
        {
			if (PanelDic.ContainsKey (name + "Panel") && PanelDic[name + "Panel"] != null) 
			{
				GameObject go = PanelDic [name + "Panel"];
				if (go.activeSelf)
				{
					go.SetActive(false);
				}
			}
        }

		public void HideView(string name)
        {
            string assetName = name + "Panel";
			if (PanelDic.ContainsKey (assetName) && PanelDic[assetName] != null) 
			{
				LuaManager.CallFunction (assetName + ".HidePanel");
			}
		}

		public void DestroyView(string name)
		{
			if (PanelDic.ContainsKey (name + "Panel")) 
			{
				GameObject.Destroy(PanelDic [name + "Panel"].gameObject);
				PanelDic.Remove (name + "Panel");
			}
		}
        /// <summary>
        /// �ر�����ui,�ų�ָ��
        /// </summary>
        /// <param name="name"></param>
        public void CloseAllView()
        {
			//遍历value
			foreach (GameObject value in PanelDic.Values)
			{
				if(value != null){
					value.SetActive(false);
				}
				
			}
            /*foreach (Transform item in Parent)
            {
                if (item.name == name || item.name == "GuiCamera") continue;
                item.gameObject.SetActive(false);
            }*/
        }
#else
                    /// <summary>
                    /// ������壬������Դ������
                    /// </summary>
                    /// <param name="type"></param>
                    public void CreatePanel(string name, LuaFunction func = null) {
            string assetName = name + "Panel";

			if (PanelDic.ContainsKey (assetName) && PanelDic[assetName] != null) {
				Debug.Log ("CreatePanel--------------------------------------------------------------------------------------"+ PanelDic[assetName].gameObject.name);
				PanelDic[assetName].gameObject.SetActive (true);
				PanelDic[assetName].transform.SetAsLastSibling ();

				if (UiData != null) {
					//Debug.LogWarning(assetName + ".Init1");
					LuaManager.CallFunction (assetName + ".Init", UiData);
				} else {
					//Debug.LogWarning(assetName + ".Ini1t");
					LuaManager.CallFunction (assetName + ".Init");
				}

			}else{
				GameObject prefab = ResManager.LoadAsset<GameObject>(name, assetName);
					if ((PanelDic.ContainsKey (assetName) && PanelDic[assetName] != null) || prefab == null) {
						return;
					}
					GameObject go;
					/*if (PanelDic.ContainsKey (assetName) && PanelDic [assetName] != null)
					{
							go = PanelDic [assetName];
					}else{*/
						go = Instantiate(prefab) as GameObject;
						PanelDic.Remove (assetName);
						PanelDic.Add (assetName, go.gameObject);

						go.name = assetName;
						go.layer = LayerMask.NameToLayer("Default");
						go.transform.SetParent(Parent);
						go.transform.localScale = Vector3.one;
						go.transform.localPosition = Vector3.zero;
						go.AddComponent<LuaBehaviour>();
					//}
					

					if (func != null) func.Call(go);
					Debug.LogWarning("CreatePanel::>> " + name + " " + prefab);
				}
			}

            
#endif
    }
}
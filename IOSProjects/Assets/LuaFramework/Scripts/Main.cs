using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;


namespace LuaFramework {

    /// <summary>
    /// </summary>
    public class Main : MonoBehaviour {
        public static event CallBack InitGameCallBack;
        public float delay = 0f;

        public RawImage rawImage;
        private Texture texture;
        void Awake()
        {
            if (Util.HasKey("CurrentSelectLanguage"))
            {
                Language.LanguageService.Instance.Language = new Language.LanguageInfo(Util.GetString("CurrentSelectLanguage"));
            }
            else
            {
                Language.LanguageService.Instance.Language = new Language.LanguageInfo("Indonesia");
                Util.SetString("CurrentSelectLanguage", "Indonesia");
            }
            DelegateFactory.Init();
            rawImage = GameObject.Find("Canvas").transform.Find("UI/Loading/RawImage").GetComponent<RawImage>();
            texture = Resources.Load<Texture>("LoginBackground");
        
        }
        void Start() {
#if UNITY_ANDROID
            Screen.fullScreen = true;
#endif
            StartUp();
        }
        void StartUp()
        {
            if (InitGameCallBack != null)
            {
                InitGameCallBack();
            }
            AppFacade.Instance.StartUp();   //启动游戏
        }
    }
}
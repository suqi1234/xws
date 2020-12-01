using UnityEngine;
using UnityEngine.UI;

namespace Language
{
	[RequireComponent(typeof (Text))]
	[AddComponentMenu("Language/LanguageText")]

	public class LanguageText : MonoBehaviour {
		[HideInInspector] public string Language;
		[HideInInspector] public string File;
		 public string Key;
		[HideInInspector] public string Value;

		public LanguageService Localization;
		// Use this for initialization

		void Awake()
		{
			Localization = LanguageService.Instance;
			var label = GetComponent<Text>();
			GetComponent<Text>().text = Localization.GetFromFile(File, Key, label.text,this);
		}
        public void UpdateText(string key)
        {
			Key = key;
			var label = GetComponent<Text>();
			if (Localization == null) Localization=LanguageService.Instance;
			label.text = Localization.GetFromFile(File, Key, label.text,this);
		}
        void OnDestroy()
        {
			if (Localization!=null)
			Localization.RemoveText(this);
		}
    }
}


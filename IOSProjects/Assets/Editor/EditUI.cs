using UnityEngine;
using System.Collections;
using UnityEditor;
using System.IO;
using System.Collections.Generic;
using UnityEngine.UI;


public class EditUI : EditorWindow 
{
	// Use this for initialization
	[MenuItem("GameObject/UI/PageScrollRect")]
	static void EditPageScrollRect()
	{
		
		GameObject PageScrollView = DefaultControls.CreateScrollView(new DefaultControls.Resources());
		PageScrollView.transform.SetParent(Selection.activeTransform);
		PageScrollView.transform.localScale = Vector3.one;
		PageScrollView.name = "PageScrollView";
		DestroyImmediate(PageScrollView.GetComponent<ScrollRect>());
		PageScrollRect page = PageScrollView.AddComponent<PageScrollRect>();
		page.viewport = PageScrollView.transform.Find("Viewport").GetComponent<RectTransform>();
		page.horizontalScrollbar = PageScrollView.transform.Find("Scrollbar Horizontal").GetComponent<Scrollbar>();
		page.verticalScrollbar = PageScrollView.transform.Find("Scrollbar Vertical").GetComponent<Scrollbar>();
		page.content = PageScrollView.transform.Find("Viewport/Content").GetComponent<RectTransform>();
  	}
	

	// Use this for initialization
	[MenuItem("GameObject/UI/SimilarScrollRectX")]
	static void SimilarScrollRectX()
	{
		
		GameObject PageScrollView = new GameObject();
		PageScrollView.transform.SetParent(Selection.activeTransform);
		PageScrollView.transform.localScale = Vector3.one;
		PageScrollView.name = "SimilarScrollRectX";
		SimilarScrollRectX SimilarX = PageScrollView.AddComponent<SimilarScrollRectX>();

		GameObject Scrollbar = DefaultControls.CreateScrollbar(new DefaultControls.Resources());
		Scrollbar.transform.SetParent(PageScrollView.transform);
		SimilarX.Scrollbar = Scrollbar.GetComponent<Scrollbar>();
		Scrollbar.transform.localScale = Vector3.one;
		PageScrollView.AddComponent<Image>();
		PageScrollView.AddComponent<Mask>();
  	}

	[MenuItem("GameObject/UI/SimilarScrollRectY")]
	static void SimilarScrollRectY()
	{

		GameObject PageScrollView = new GameObject();
		PageScrollView.transform.SetParent(Selection.activeTransform);
		PageScrollView.transform.localScale = Vector3.one;
		PageScrollView.name = "SimilarScrollRectY";
		SimilarScrollRectY SimilarX = PageScrollView.AddComponent<SimilarScrollRectY>();

		GameObject Scrollbar = DefaultControls.CreateScrollbar(new DefaultControls.Resources());
		Scrollbar.transform.SetParent(PageScrollView.transform);
		SimilarX.Scrollbar = Scrollbar.GetComponent<Scrollbar>();
		Scrollbar.transform.localScale = Vector3.one;
		Scrollbar.GetComponent<Scrollbar> ().SetDirection(UnityEngine.UI.Scrollbar.Direction.TopToBottom,true);
		//GameObject Item = DefaultControls.CreateScrollbar(new DefaultControls.Resources());

		PageScrollView.AddComponent<Image>();
		//PageScrollView.AddComponent<Mask>();


	}
}

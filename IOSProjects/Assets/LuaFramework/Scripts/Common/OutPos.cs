using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OutPos : MonoBehaviour {

	// Use this for initialization
	void Start () {
        RectTransform rec = this.GetComponent<RectTransform>();
        Debug.LogError(rec.anchoredPosition.x+":"+ rec.anchoredPosition.y);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}

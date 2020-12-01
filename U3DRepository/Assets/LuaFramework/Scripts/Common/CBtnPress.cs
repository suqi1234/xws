using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using System;

public class CBtnPress : MonoBehaviour ,IPointerDownHandler, IPointerUpHandler
{
    public float scale = 1.1f;
    private Vector3 preScale = Vector3.one;
    private Button _btn = null;
    void Start () {
	
	}
    private void Awake()
    {
        preScale = transform.localScale;
    }
    public void OnPointerDown(PointerEventData eventData)
    {
        if (_btn != null)
        {
            if (_btn.interactable)
            {
                transform.localScale = preScale * scale;
            }
            else
            {
                transform.localScale = preScale;
            }
        }
        else
        {
            transform.localScale = preScale * scale;
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        transform.localScale = new Vector3(preScale.x, preScale.y, preScale.z);
    }
}

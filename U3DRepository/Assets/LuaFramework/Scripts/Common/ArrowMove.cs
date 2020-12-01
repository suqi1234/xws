using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ArrowMove : MonoBehaviour {

    public bool Direction = true;
    public bool UpDown = false;
    bool IsPlay = true;
    public float Step = 1.5f;
    Vector3 pos = Vector3.zero;
    // Use this for initialization
    void Awake()
    {
        pos = transform.localPosition;
        if (Direction)
        {
            Step = -1;
        }
        else
        {
            Step = 1;
        }
    }
    void Start () { 
    }
	
	// Update is called once per frame
	void Update () {
        if (gameObject.activeSelf)
        {
            if (IsPlay)
            {
                IsPlay = false;
                StartCoroutine(PlayImage());
            }

        }

    }

    void OnEnable()
    {
        IsPlay = true;
        gameObject.GetComponent<Image>().color = new Color(1.0f, 1.0f, 1.0f, 1.0f);
        transform.localPosition = pos;
    }

    IEnumerator PlayImage()
    {
        for(int i=0;i<10;i++)
        {
            yield return new WaitForSeconds(0.1f);
            gameObject.GetComponent<Image>().color = new Color(1.0f, 1.0f, 1.0f, 1.0f - i * 0.1f);
            if(!UpDown)
                transform.localPosition = new Vector3(transform.localPosition.x+ Step*i, transform.localPosition.y, transform.localPosition.z);
            else
                transform.localPosition = new Vector3(transform.localPosition.x, transform.localPosition.y + Step * i, transform.localPosition.z);
        }
        IsPlay = true;
        gameObject.GetComponent<Image>().color = new Color(1.0f, 1.0f, 1.0f, 1.0f);
        transform.localPosition = pos;
    }
}

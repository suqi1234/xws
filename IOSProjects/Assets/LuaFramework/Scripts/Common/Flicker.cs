using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Flicker : MonoBehaviour {

    bool IsPlay = true;
    // Use this for initialization
    void Start () {
		
	}

    void OnEnable()
    {
        gameObject.GetComponent<Image>().color = new Color(1, 1, 1, 1);
        IsPlay = true;
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

    IEnumerator PlayImage()
    {
        for(int i=0;i<5;i++)
        {
            yield return new WaitForSeconds(0.15f);
            gameObject.GetComponent<Image>().color = new Color(1, 1, 1, 1 - i * 0.1f);
        }
        IsPlay = true;
    }
}

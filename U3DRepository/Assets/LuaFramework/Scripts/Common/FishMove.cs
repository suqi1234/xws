using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FishMove : MonoBehaviour
{

    private float countdownExpendTime = 0;
    private float countdownTime = 0;
    private bool canrotate = true;
    private float height = 0;
    private float width = 0;

    // Use this for initialization
    void Start()
    {
        height = Screen.height / 2+50;
        width = Screen.width / 2 + 50;
        countdownTime = Random.Range(1, 10);
    }

    // Update is called once per frame
    void Update()
    {
        if (Mathf.Abs(transform.localPosition.y) > height || Mathf.Abs(transform.localPosition.x) > width)
        {
            if (canrotate)
            {
                canrotate = false;
                transform.DOLocalRotate(new Vector3(transform.localRotation.eulerAngles.x, transform.localRotation.eulerAngles.y, transform.localRotation.eulerAngles.z-180f), 0.5f);
                //transform.Rotate(Vector3.forward, 180f);
            }
        }
        float nTime = Time.deltaTime;
        countdownExpendTime = countdownExpendTime + nTime;
        countdownTime = countdownTime + nTime;
        if (countdownTime > 5)
        {
            canrotate = true;
            countdownTime = 0;
        }
        if (countdownExpendTime > 10)
        {
            float z = Random.Range(0, 90f);
            transform.DOLocalRotate(new Vector3(transform.localRotation.eulerAngles.x, transform.localRotation.eulerAngles.y, transform.localRotation.eulerAngles.z+z), 0.5f);
            countdownExpendTime = 0;
        }
        transform.Translate(Vector3.up * Time.deltaTime*0.2f);
        //Debug.LogError("Z:" + transform.eulerAngles.z);
    }
}

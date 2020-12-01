using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetRow : MonoBehaviour {
    
    public float offx = 0.84f;
    public float offz = 1.15f;
    public bool huanhang = false;
    public int row = 9;
    // Use this for initialization
    
    void Start () {
      
    }
    [ContextMenu("SetRowM")]
    void SetRowM()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            if (huanhang)
            {
                if (i < row)
                {
                    transform.GetChild(i).localPosition = new Vector3(offx * i, 0, 0);
                }
                else if (i < 2 * row)
                {
                    transform.GetChild(i).localPosition = new Vector3(offx * (i - row), 0, offz);
                }
                else if (i < 3 * row)
                {
                    transform.GetChild(i).localPosition = new Vector3(offx * (i - 2 * row), 0, 2*offz);
                }
            }
            else
            {
                transform.GetChild(i).localPosition = new Vector3(offx * i, 0, 0);
            }
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}

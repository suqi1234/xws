using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimatorStop : MonoBehaviour {

    float antime = 0;
    void Tick()
    {
        //Debug.LogError("Tick");
        gameObject.SetActive(false);
    }
    // Use this for initialization
    void Start () {
        
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    void OnEnable()
    {
        antime = gameObject.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length;
        Invoke("Tick", antime);
    }
}

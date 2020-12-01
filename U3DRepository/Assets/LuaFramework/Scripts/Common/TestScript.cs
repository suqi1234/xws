using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using LuaFramework;
using DG.Tweening;
using UnityEngine.EventSystems;

public class TestScript : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler ,IPointerDownHandler,IPointerClickHandler,IPointerUpHandler {
	//public Graphic graphic;
	//public Transform Tra;
	//public Camera theCamera;
	////public Slider SObj;
	//public MovieTexture movTexture;
	// Use this for initialization
	//public Dropdown a;
	//public Text A;
	//public Animator ani;
	//private bool play = true;
	//private Rigidbody rig;


	void Start () {
		//graphic.material.SetFloat ("_ID",5f);
		//Image();
		//for(int i = 0;i < transform.childCount;i++){
		//}
		//MoveCard(0);
		//Tra.DOMove(Vector3.zero,0.1f,false);
		//Tra.GetComponent<CanvasGroup> ().alpha
		//Tra.GetComponent<Slider>().value = 0.1;
		//Tra.DOScale

		/*gameObject.GetComponent<RawImage>().texture = movTexture;

		movTexture.Play();*/
		//Handheld.PlayFullScreenMovie("4566.mp4", Color.black, FullScreenMovieControlMode.Full);
		/*print("Start--------------------------------------------------------------------" + gameObject.name);
		Dropdown.OptionData b = new Dropdown.OptionData();
		b.text = "1000";
        a.options.Add(b);
		a.options.Clear();*/
		//A.color = Color.blue;

			/*gameObject.GetComponent<Slider>().onValueChanged.AddListener(
				delegate(float Vaule) {
					if(!play)ani.ForceStateNormalizedTime(Vaule);
				}
			);*/

			//rig = gameObject.GetComponent<Rigidbody>();
			//rig.maxAngularVelocity = 1000000;
			//gameObject.GetComponent<Dropdown>().captionText.text = "1111111111111111";
		//gameObject.GetComponent<RectTransform>().sizeDelta = new Vector2(10, -10);
		//gameObject.GetComponent<Image>().color = new Color(128f/255f, 128f/255f, 128f/255f, 1);
	}

	public void OnDrag(PointerEventData eventData)
	{
		//play = false;
		
		//Debug.Log("OnDrag----------------------------------------------------------------");

	}
	public void OnBeginDrag(PointerEventData eventData)
	{
		//play = false;
		//Debug.Log("OnBeginDrag----------------------------------------------------------------");

	}
	public void OnEndDrag(PointerEventData eventData)
	{
		//play = true;
		//Debug.Log("OnEndDrag----------------------------------------------------------------");

	}

	 public void OnPointerDown(PointerEventData eventData)
	{
		//play = false;
		//ani.ForceStateNormalizedTime(transform.GetComponent<Slider>().value);
		//Debug.Log("OnPointerDown----------------------------------------------------------------");
		//Util.CallMethod(name, "OnPointerDown",eventData);
		
	}
	public void OnPointerClick(PointerEventData eventData){
		Debug.Log("OnPointerClick----------------------------------------------------------------");
		//Util.CallMethod(name, "OnPointerClick",eventData);
		
	}

	public void OnPointerUp(PointerEventData eventData)
	{
		//play = true;
		//Debug.Log("OnPointerUp----------------------------------------------------------------");
		//Util.CallMethod(name, "OnPointerUp",eventData);
		
	}

	/*private void OnCollisionEnter(Collision hit){
		print("OnCollisionEnter--------------------------------------------------------------------" + hit.gameObject.name);
	}

	private void OnTriggerEnter(Collider hit){
		print("OnTriggerEnter--------------------------------------------------------------------" + hit.gameObject.name);
	}*/


	/*void MoveCard(int i){
		transform.GetChild (i).Find ("Image").transform.localPosition = Vector3.zero;
		Tween tw = transform.GetChild (i).Find ("Image").transform.DOLocalMove (Vector3.zero, 0.1f, false);
		tw.OnComplete (delegate {
			transform.GetChild (i).gameObject.SetActive(false);
			i++;
			if (i < transform.childCount) {
				MoveCard (i);
			}
		});
	
	
	}
	public void Image(){
		Debug.Log ("Image----------------------------------");
		string[] str = new string[]{"CardB","NumAB"};
		LuaHelper.GetResManager ().LoadPrefab ("PokerCard", str, delegate (UnityEngine.Object[] objs){
			GameObject prefab0 = objs[0] as GameObject;
			GameObject prefab1 = objs[1] as GameObject;
			GameObject Card = Instantiate(prefab0) as GameObject;
			GameObject Number = Instantiate(prefab1) as GameObject;

			Card.transform.SetParent(transform);
			Card.transform.localScale = Vector3.one;
			Card.transform.localPosition = Vector3.zero;
			Card.transform.localRotation = Quaternion.identity;
			Card.GetComponent<RectTransform>().sizeDelta = new Vector2(0, 0);

			Number.transform.SetParent(Card.transform);
			Number.transform.localScale = Vector3.one;
			Number.transform.localRotation = Quaternion.identity;
			Number.GetComponent<RectTransform>().anchoredPosition = new Vector2(10, -10);
		});
	}*/
	// Update is called once per frame
	void Update () {
		/*if(play){
			transform.GetComponent<Slider>().value = ani.GetCurrentAnimatorStateInfo(0).normalizedTime;
		}*/
		/*if(Input.GetMouseButtonDown(0))
		{
			//DG.Tweening.Ease.InOutExpo
			Ray ray = theCamera.ScreenPointToRay(Input.mousePosition);

			RaycastHit hit = new RaycastHit();

			if (Physics.Raycast(ray, out hit))
			{
				if (hit.collider.name == "Plane")
				{

					Tra.position = hit.point;
				}

			}

		}*/
		
		

	

		/*if(Input.GetMouseButton(0))
		{
			//rig.angularVelocity = new Vector3(100, 100, 0);
			//rig.AddForceAtPosition(new Vector3(0.2f, 0, 0),new Vector3(1,0,0),ForceMode.Impulse);

			rig.AddForce(new Vector3(0, 0, 1),ForceMode.Impulse);

			rig.AddTorque(new Vector3(0, -10, 0),ForceMode.Impulse);

			//rig.AddRelativeForce(new Vector3(0, 0, 10),ForceMode.Impulse);
			//Debug.Log("GetMouseButtonDown----------------------------------------------------------------");
			//Quaternion DeltaRot = Quaternion.Euler(new Vector3(100000, 0, 0) * Time.deltaTime);
			//rig.MoveRotation(rig.rotation * DeltaRot);


			//rig.MovePosition (rig.position + new Vector3(0, 0, 10) * Time.deltaTime);
		}*/
	}
}

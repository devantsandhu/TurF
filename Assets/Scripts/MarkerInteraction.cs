using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class MarkerInteraction : MonoBehaviour {
	public GameObject textbox;

	// Use this for initialization
	void Start () {
		textbox.SetActive (false);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void PointerDown(){
		if (!textbox.activeInHierarchy) {
			textbox.SetActive (true);
		} else
			textbox.SetActive (false);
	}
}

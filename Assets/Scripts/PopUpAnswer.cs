using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class PopUpAnswer : MonoBehaviour {
	// Use this for initialization
	public Text answer;
	private bool answerShown;

	void Start () {
		answer.enabled = answerShown = false;
	}

	// Update is called once per frame
	void Update () {

	}

	public void PointerDown(){
		if (!answerShown) {
			answer.enabled = answerShown = true;
		}
		else
			answer.enabled = answerShown = false;
	}
}
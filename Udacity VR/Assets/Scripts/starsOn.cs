using UnityEngine;
using System.Collections;

public class starsOn : MonoBehaviour {
	public GameObject[] objectsOff;
	public GameObject[] objectsOn;

	// Use this for initialization
	void Start () {
	
	}

	// Update is called once per frame
	void Update () {
	
	}
	public void toggle() {
		foreach (GameObject offObject in objectsOff) { //switch off objects
			offObject.SetActive (!offObject.activeSelf); 
		}
		foreach (GameObject onObject in objectsOn) { //switch all the on objects.
			onObject.SetActive (!onObject.activeSelf); 
		}
	}

}

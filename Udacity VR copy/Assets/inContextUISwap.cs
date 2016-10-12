using UnityEngine;
using System.Collections;

public class inContextUISwap : MonoBehaviour {
	public GameObject[] monoObjects;
	public GameObject[] stereoObjects;
	public GameObject cardboard;

	public bool startInVR;

	static bool VRModeOn;

	// Use this for initialization
	void Start () {
		

	}

	// Update is called once per frame
	void Update () {
		if(cardboard.GetComponent<GvrViewer> ().BackButtonPressed) { //If someone presses the back button
			Debug.Log ("Successfully detected button press");
			//Swap(); //Change the viewing mode.
		}
	}

	public void Swap() {
		Debug.Log ("Successfully entered Swap");
		cardboard.GetComponent<GvrViewer> ().VRModeEnabled = !cardboard.GetComponent<GvrViewer> ().VRModeEnabled; //Set the value opposite
		VRModeOn = !VRModeOn;
		Debug.Log ("Successfully swapped mode");

		foreach (GameObject monoObject in monoObjects) {
			monoObject.SetActive (!monoObject.activeSelf); //Toggle mono objects
		}
		foreach (GameObject stereoObject in stereoObjects) {
			stereoObject.SetActive (!stereoObject.activeSelf); //Toggle stereo objects
		}
		Debug.Log ("Successfully swapped all mono and stereo objects");


	}
	public void VRCheck() {
		VRModeOn = cardboard.GetComponent<GvrViewer> ().VRModeEnabled; //Set our state.
			
		Debug.Log ("VR MODE = " + VRModeOn);
		if (VRModeOn == true) {
			startInVR = true;
		} else {
			startInVR = false;
		}

		if (startInVR == true) { //If we want to start in VR, turn on all the stereo objects and turn off all the mono objects.
			cardboard.GetComponent<GvrViewer> ().VRModeEnabled = true; //Set the value opposite
			foreach (GameObject monoObject in monoObjects) {
				monoObject.SetActive (false); //Toggle mono objects
			}
			foreach (GameObject stereoObject in stereoObjects) {
				stereoObject.SetActive (true); //Toggle stereo objects
			}
			VRModeOn = true;
		} else { //If we don't want to start in VR, turn off all the stereo objects and turn on all the mono objects.
			cardboard.GetComponent<GvrViewer> ().VRModeEnabled = false; //Set the value opposite
			foreach (GameObject monoObject in monoObjects) {
				monoObject.SetActive (true); //Toggle mono objects
			}
			foreach (GameObject stereoObject in stereoObjects) {
				stereoObject.SetActive (false); //Toggle stereo objects
			}
			VRModeOn = false;
		}
	}
}

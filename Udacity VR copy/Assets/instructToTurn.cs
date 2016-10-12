using UnityEngine;
using System.Collections;

public class instructToTurn : MonoBehaviour {
	public GameObject transferPanel;
	public GameObject[] normalPanels;
	public float timeToTransition;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {
	}

	public void gotToTour(string scene) {
		StartCoroutine(tourTransition(scene));
	}

	public IEnumerator tourTransition(string scene) { //Waits till we've faded to load the next panel
		foreach (GameObject originalPanelObject in normalPanels) {
			originalPanelObject.SetActive (false);
		}

		transferPanel.SetActive (true); //Swap our screens


		yield return new WaitForSeconds(timeToTransition); //Wait the transition time

		this.GetComponent<sceneTransition> ().changeScene (scene); //Change the scene using our scene transition script for niceness



	}
}

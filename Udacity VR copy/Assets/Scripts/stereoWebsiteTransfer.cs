using UnityEngine;
using System.Collections;

public class stereoWebsiteTransfer : MonoBehaviour {
	public GameObject transferPanel;
	public GameObject[] normalPanels;
	public float timeToTransition;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
	}

	public void goToWebsite(string url) {
		StartCoroutine(websiteTransition (url));
	}

	public IEnumerator websiteTransition(string url) { //Waits till we've faded to load the next panel
		foreach (GameObject originalPanelObject in normalPanels) {
			originalPanelObject.SetActive (false);
		}

		transferPanel.SetActive (true); //Swap our screens


		yield return new WaitForSeconds(timeToTransition); //Wait the transition time



		foreach (GameObject originalPanelObject in normalPanels) {
			originalPanelObject.SetActive (true);
		}
		transferPanel.SetActive (false); //Swap our panels back quickly

		Application.OpenURL(url); //Go to the website


	}
}

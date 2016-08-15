using UnityEngine;
using System.Collections;

public class menuReveal : MonoBehaviour {
	public GameObject menuOverlay;
	public GameObject[] hideItems;

	public bool menuActive =false;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void revealMenu() {
		if (!menuActive) {
			menuActive = true;
			menuOverlay.SetActive (true);
			Debug.Log ("Menu Pulled Up");
			foreach (GameObject thing in hideItems) {
				thing.SetActive (false);
			}
			Debug.Log ("UI Dismissed");

		}
	}
	public void hideMenu() {
		if (menuActive) {
			menuActive = false;
			menuOverlay.SetActive (false);
			Debug.Log ("Menu Dismissed");
			foreach (GameObject thing in hideItems) {
				thing.SetActive (true);
			}
			Debug.Log ("UI Reinstated");

		}
	}
}

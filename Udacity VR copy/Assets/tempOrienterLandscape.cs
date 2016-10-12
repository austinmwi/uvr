using UnityEngine;
using System.Collections;

public class tempOrienterLandscape : MonoBehaviour {

	void Start () {
		StartCoroutine(transitionDelay());

	}

	// Update is called once per frame
	void Update () {


	}
	void OnLevelWasLoaded() {
		Screen.orientation = ScreenOrientation.LandscapeLeft;

	}



	IEnumerator transitionDelay() {
		yield return new WaitForSeconds(1);
		Application.LoadLevel("Apartment Tester"); //Load the next level
		//this.GetComponent<scene_autotransition>().changeScene("Opening Screen Swipeable");
	}
}

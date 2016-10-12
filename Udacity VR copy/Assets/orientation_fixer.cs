using UnityEngine;
using System.Collections;

public class orientation_fixer : MonoBehaviour {

	// Use this for initialization
	void Start () {
		StartCoroutine(transitionDelay());

	}
	
	// Update is called once per frame
	void Update () {
		
	
	}
	void OnLevelWasLoaded() {
		
		Screen.orientation = ScreenOrientation.Portrait;

	}



	IEnumerator transitionDelay() {
		yield return new WaitForSeconds(1);
		if (Application.platform == RuntimePlatform.Android)
			Application.LoadLevel("Opening Screen Swipeable Portrait"); //Load the next level
		else if(Application.platform == RuntimePlatform.IPhonePlayer)
			Application.LoadLevel("Opening Screen Swipeable"); //Load the next level
		
		//this.GetComponent<scene_autotransition>().changeScene("Opening Screen Swipeable");
	}

}

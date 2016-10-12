using UnityEngine;
using System.Collections;

public class force_landscape : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Screen.orientation = ScreenOrientation.LandscapeLeft;
	}
	
	// Update is called once per frame
	void Update () {
		if (Screen.orientation != ScreenOrientation.LandscapeLeft) {
			Screen.orientation = ScreenOrientation.LandscapeLeft;
		}
	}
}

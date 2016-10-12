using UnityEngine;
using System.Collections;

public class startTour : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void beginTour(string sceneName) {
		Application.LoadLevel(sceneName);
	}
	public void goToWebsite(string url) {
		Application.OpenURL(url);
	}
}

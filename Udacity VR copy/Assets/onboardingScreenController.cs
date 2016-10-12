using UnityEngine;
using System.Collections;

public class onboardingScreenController : MonoBehaviour {
	public GameObject screenCanvas;
	public int screenCount = 5;

	private int currentScreen = 1;

	private int scrollLine = 0;

	public Transform startMarker;
	public Transform endMarker;
	public float speed = 10.0F;
	private float startTime;
	private float journeyLength;



	// Use this for initialization
	void Start () {
		//Screen.orientation = ScreenOrientation.LandscapeLeft;
		startTime = Time.time;
		journeyLength = 375f;
		Debug.Log ("Distance: " + journeyLength);
	}
	
	// Update is called once per frame
	void Update () {
		float distCovered = (Time.time - startTime) * speed;
		float fracJourney = distCovered / journeyLength;
		screenCanvas.transform.localPosition = Vector3.Lerp(screenCanvas.transform.localPosition, new Vector3 (46f, scrollLine, 0), fracJourney);
	
	}
	public void progressForwards() {
		if(currentScreen <5) {
			currentScreen++;
			scrollLine -= 375;
			startTime = Time.time;
			//scrollLine -= Screen.height;
			//journeyLength = Vector3.Distance(screenCanvas.transform.localPosition, new Vector3 (46f, scrollLine+375, 0));
			Debug.Log ("Distance: " + journeyLength);
			//iTween.MoveBy (screenCanvas, new Vector3 (0, -Screen.width/2, 0), 1f);
		}



		//screenCanvas.transform.localPosition = new Vector3 (46f, scrollLine, 0);
	}
	public void progressBackwards() {
		if (currentScreen > 1) {
			startTime = Time.time;
			currentScreen--;
			//journeyLength = Vector3.Distance(screenCanvas.transform.localPosition, new Vector3 (46f, scrollLine+375, 0));
			Debug.Log ("Distance: " + journeyLength);
			scrollLine += 375;
		}

		//screenCanvas.transform.localPosition = new Vector3 (46f, scrollLine, 0);
	}
}

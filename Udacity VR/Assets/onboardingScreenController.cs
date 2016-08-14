using UnityEngine;
using System.Collections;

public class onboardingScreenController : MonoBehaviour {
	public GameObject screenCanvas;
	public int screenCount = 5;

	private int currentScreen = 1;

	private int scrollLine = 0;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void progressForwards() {
		currentScreen++;
		scrollLine -= 375;
		//scrollLine -= Screen.height;

		//iTween.MoveBy (screenCanvas, new Vector3 (0, -360, 0), 1f);

		screenCanvas.transform.localPosition = new Vector3 (46f, scrollLine, 0);
	}
	public void progressBackwards() {
		currentScreen--;

		scrollLine += 375;

		screenCanvas.transform.localPosition = new Vector3 (46f, scrollLine, 0);
	}
}

using UnityEngine;
using System.Collections;

public class lightsOff : MonoBehaviour {
	public GameObject[] mainLights;
	public GameObject specialLight;
	// Use this for initialization
	void Start () {
		specialLight.SetActive (false); //Start with the spotlight off
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void turnLightsOn() {
		/*foreach (GameObject mainlight in mainLights) {
			mainlight.SetActive (true);
		}*/
		specialLight.SetActive(false); //Turn the special light off when the lights are on

	}
	public void turnLightsOff() {
		/*foreach (GameObject mainlight in mainLights) {
			mainlight.SetActive (false);
		}*/
		specialLight.SetActive(true); //Turn the special light on when the other lights are off
	}
}

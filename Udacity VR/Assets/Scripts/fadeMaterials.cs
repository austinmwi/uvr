using UnityEngine;
using System.Collections;

public class fadeMaterials : MonoBehaviour {
	public GameObject fadeObject;
	public Material material1;
	public Material material2;

	private Color originalColor;
	private Color currentColor;
	// Use this for initialization
	void Start () {
		originalColor = fadeObject.GetComponent<Renderer>().material.color;
		currentColor = originalColor;
	}
	
	// Update is called once per frame
	void Update () {
		fadeOut ();
	
	}

	public void fadeOut() {
		/*
		if (currentColor.r > 0) {
			currentColor.r -= 0.1f;
		}
		if (currentColor.g > 0) {
			currentColor.g -= 0.1f;
		}

		if (currentColor.b > 0) {
			currentColor.b -= 0.001f;
		}
		if (currentColor.a > 0) {
			currentColor.a -= 0.001f;
		}

		fadeObject.GetComponent<Renderer>().material.color = currentColor;

		*/
	}
	public void fadeIn() {
	}
}

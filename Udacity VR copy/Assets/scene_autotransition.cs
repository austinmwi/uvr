using UnityEngine;
using System.Collections;

public class scene_autotransition : MonoBehaviour {

	public Texture2D fadeOutTexture; //Texture we're fading with.
	public float fadeSpeed = 0.8f; //Speed of transition

	private int drawDepth = 1000; //Make sure it's on top
	private float alpha = 1.0f; //Alpha value to increment
	private int fadeDir = -1; //-1 fade in, 1 fade out

	private float waitForTime = 100f;

	void OnGUI () {
		alpha += fadeDir * fadeSpeed * Time.deltaTime; //Time steppin'

		alpha = Mathf.Clamp01 (alpha); //map to 1

		GUI.color = new Color (GUI.color.r, GUI.color.g, GUI.color.b, alpha); //Set the alpha
		GUI.depth = drawDepth; //Put us on top

		GUI.DrawTexture (new Rect (0, 0, Screen.width, Screen.height), fadeOutTexture); //Draw the texture over the whole screen

	}

	public float beginFade (int direction) { //This will initiate a fade in or out when called.  Direction determines if it is in or out.
		fadeDir = direction;
		return (fadeSpeed);
	}

	public void OnLevelWasLoaded() { //This starts a fade in when we load the level
		beginFade (-1);
	}


	public IEnumerator sceneFader(string sceneName) { //Waits till we've faded to load the next scene
		float fadeTime = beginFade(1); //See how long the fade will take if we go in this direction
		yield return new WaitForSeconds(fadeTime); //Wait that long
		Application.LoadLevel(sceneName); //Load the next level
	}

	public void changeScene(string sceneName) { //Function to load a new scene and fade out of the current one.

		StartCoroutine(sceneFader (sceneName)); //Initiate the transition to the next scene.
	}
	void Update() {
		waitForTime -= 1f;
		Debug.Log (waitForTime);
		if (waitForTime <= 0) {
			Debug.Log ("mm");
			changeScene ("OpeningScreenPhotosphere");
		}
	}
}

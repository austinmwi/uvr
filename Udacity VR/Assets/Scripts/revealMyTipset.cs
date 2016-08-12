using UnityEngine;
using System.Collections;

public class revealMyTipset : MonoBehaviour {
	public GameObject player;
	//public GameObject hotSpotCore;

	//public Vector3 activeSize = new Vector3(.015f, .015f, .015f);
	public Vector3 activeSize; //The size for our active cards
	public float distanceFromPlayer; //Here's where we store how far the player is from us.  Used to trigger the reveal of information.  Could be managed by arrays, but this makes dragging and dropping tipsets much easier.
	public float enlargeTime = 2f; //How long it takes to get full sized

	public bool smoothTransitions = false; //Whether or not we tween
	public GameObject[] animatedObjects; //All of the objects with animations we want to turn on when this tipset is revealed


	void Start () {


		foreach(Transform child in this.transform) { //Go through all the children of the hotspot and set them to disabled or make them tiny very quickly.
			if (smoothTransitions == true) {
				iTween.ScaleUpdate (child.gameObject, new Vector3 (0f, 0f, 0f), .001f); 
			} else {
				child.gameObject.SetActive (false);
			}
		}
		hideToolTipManual ();

		foreach (GameObject thing in animatedObjects) {
			thing.GetComponent<Animator>().enabled = false;
		}
	}

	// Update is called once per frame
	void Update () {
		//In here we want to turn on and off the tooltip display for the object depending on whether the player is at the right waypoint
		distanceFromPlayer = Vector3.Distance (player.transform.position, transform.position);

		if (distanceFromPlayer <= .5) {
			showToolTipManual ();
		} else {
			hideToolTipManual ();
		}
			

	}
	public void showToolTipManual() {
		//If the player is near the tooltip hotspot
		//Go through all the children of the hotspot and set them to enabled
		foreach(Transform child in this.transform) {
			revealTooltip (child.gameObject);
		}
		activateObjectAnimations ();
	}

	public void hideToolTipManual() {
		
		foreach(Transform child in this.transform) { //Go through all the children of the hotspot and set them to disabled
			if (smoothTransitions == true) {
				iTween.ScaleUpdate (child.gameObject, new Vector3 (0f, 0f, 0f), enlargeTime); 
			} else {
				child.gameObject.SetActive (false);
			}
		}
		deactivateObjectAnimations ();

	}

	public void revealTooltip(GameObject tooltip) {
		
		tooltip.gameObject.SetActive (true); //Get us active

		//activeSize = tooltip.GetComponent<originalScale>().myOriginalScale; //Set the size we want to display at.  Could make this dynamic based on distance from player, or manually adjust sizes
		if (smoothTransitions == true) {
			iTween.ScaleUpdate (tooltip.gameObject, new Vector3 (0.015f, .015f, .015f), enlargeTime); //WTF, activesize isn't working.  Probably because we are doing this on start.
		} else {
			tooltip.gameObject.transform.localScale = new Vector3 (0.015f, .015f, .015f);
		}
	}

	public void activateObjectAnimations() { //Turns on the animations associated with this tipset.  
		foreach (GameObject thing in animatedObjects) {
			thing.GetComponent<Animator>().enabled = true;

			//AnimationClip test = thing.GetComponent<Animator>().runtimeAnimatorController.animationClips[0];
			//test.wrapMode = WrapMode.Once;
			//thing.GetComponent<Animator> ().StartPlayback ();

		}
	}
	public void deactivateObjectAnimations() { //Turns off the animations associated with this tipset.  
		foreach (GameObject thing in animatedObjects) {
			
			thing.GetComponent<Animator>().enabled = false; //This just stops the animation right in the middle instead of finishing it out.  Need to fix.

			//AnimationClip test = thing.GetComponent<Animator>().runtimeAnimatorController.animationClips[0];
			//thing.GetComponent<Animator>().runtimeAnimatorController.animationClips[0].wrapMode = WrapMode.Once;
			//test.wrapMode = WrapMode.Once;
			//thing.GetComponent<Animation>().wrapMode = WrapMode.Once;
		}
	}
}

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
	public GameObject[] toggledObjects;


	private bool animationsHaveFired = false;
	//public AnimationClip testAnim;
	void Start () {


		foreach(Transform child in this.transform) { //Go through all the children of the hotspot and set them to disabled or make them tiny very quickly.
			if (smoothTransitions == true) {
				iTween.ScaleUpdate (child.gameObject, new Vector3 (0f, 0f, 0f), .001f); 
			} else {
				child.gameObject.SetActive (false);
			}
		}
		hideToolTipManual ();

		/*foreach (GameObject thing in animatedObjects) {
			thing.GetComponent<Animator>().enabled = false;
		}*/
	}

	// Update is called once per frame
	void Update () {
		//In here we want to turn on and off the tooltip display for the object depending on whether the player is at the right waypoint
		distanceFromPlayer = Vector3.Distance (player.transform.position, transform.position);

		if (distanceFromPlayer <= .5) {
			showToolTipManual ();
			if (!animationsHaveFired) {
				activateObjectAnimations ();
				animationsHaveFired = true;
				Debug.Log ("fired animations");
			}
		} else {
			hideToolTipManual ();
			if (animationsHaveFired) {
				deactivateObjectAnimations ();
				Debug.Log ("stopped animations");
			}
		}
	}
	public void showToolTipManual() {
		//If the player is near the tooltip hotspot
		//Go through all the children of the hotspot and set them to enabled
		foreach(Transform child in this.transform) {
			revealTooltip (child.gameObject);
		}
		//activateObjectAnimations ();
	}

	public void hideToolTipManual() {
		
		foreach(Transform child in this.transform) { //Go through all the children of the hotspot and set them to disabled
			if (smoothTransitions == true) {
				iTween.ScaleUpdate (child.gameObject, new Vector3 (0f, 0f, 0f), enlargeTime); 
			} else {
				child.gameObject.SetActive (false);
			}
		}

		//deactivateObjectAnimations ();

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
			//thing.GetComponent<Animator>().enabled = true;

			Animator anim = thing.GetComponent<Animator> ();
			anim.SetBool ("isPlaying", true);
		}
	}
	public void deactivateObjectAnimations() { //Turns off the animations associated with this tipset.  
		foreach (GameObject thing in animatedObjects) {
			Animator anim = thing.GetComponent<Animator> ();

			anim.SetBool ("isPlaying", false);
			animationsHaveFired = false;
		}
	}
	public void toggleElements() {
		foreach (GameObject thing in toggledObjects) {
			thing.SetActive (!thing.activeSelf);
		}
	}
}

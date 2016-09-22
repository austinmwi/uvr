using UnityEngine;
using System.Collections;

public class revealTooltip : MonoBehaviour {
	
	public GameObject player;

	public float minDistance;
	public float maxDistance;
	public float manualMoveRevealDistance = 2.5f; //Change this to modify the reveal radius of the player


	private bool tooltipShowing;
	private Vector3 activeSize;
	private Vector3 scaledSize;
	private bool doneTransitioning;


	private float distanceFromPlayer;
	private GameObject myparent;
	private GameObject sceneLogic;


	// Use this for initialization
	void Start () {
		activeSize = this.transform.localScale; //Save the size we're at
	
		player = GameObject.Find ("Main Camera"); //We find this programatically instead of defining it in unity to make the drag-drop of the prefab faster
		hideTooltip (); //Tooltips closed by default

		minDistance = 1.5f;
		maxDistance = 3.5f;
		myparent = this.transform.parent.gameObject;

		sceneLogic = GameObject.Find ("SceneLogic");//Setting this by name instead of as a unity defined gameobject for ease of testing
	}
	
	// Update is called once per frame
	void Update () {
		this.transform.LookAt(player.transform.position); //Adjust our rotation every frame to orient towards the player
		transform.Rotate(0,180,0); //Hard swap of values to orient the thing properly

		if (sceneLogic.GetComponent<sceneLogic> ().autoMovement == true) { //If we are on auto-move
			revealWhenGazedAt ();
		} else { //If we are on manual move
			revealWhenNearby ();
		}

	}

	public void revealWhenNearby() {
		//Honestly, distance is probably a bad way to do this.  Better to make tooltips children of a parent object located at a waypoint, then enable them all at once when the player is at a waypoint.
		
	}
	public void revealWhenGazedAt() {
		if (this.transform.localScale == activeSize) {
			doneTransitioning = true;
		}

		if (tooltipShowing == true) { //If the tooltip is showing and it's finished getting to it's big size
			distanceFromPlayer = Vector3.Distance (player.transform.position, transform.position); //Adjust the scale of the object based on distance from the player to improve readability

			Debug.Log("Tooltip Distance: " + distanceFromPlayer);

			if (distanceFromPlayer <= maxDistance) { //Only keep resizing if the player isn't super far away
				if (distanceFromPlayer < minDistance) { //If we are really  close
					hideTooltip();
				} else {
					iTween.ScaleUpdate (this.gameObject, activeSize * (distanceFromPlayer -1), 1f); //Tween to the scaled value
				}
			} else if (distanceFromPlayer > maxDistance) {
				iTween.ScaleUpdate (this.gameObject, activeSize * (maxDistance-1), 1f); //Tween to the max size value
			}
		}
		float heightCalculator;
	}

	public void showTooltip() { //Reveals the tooltip
		
		doneTransitioning = false;
		

		tooltipShowing = true;
		Debug.Log("Showing Tooltip");
	}
	public void hideTooltip() { //Hides the tooltip
		
		iTween.ScaleTo (this.gameObject, activeSize / 1000, 1f); //Scale Up with a tween
		//this.transform.localScale = activeSize / 1000;

		tooltipShowing = false;
		Debug.Log("Hiding Tooltip");

	}


}

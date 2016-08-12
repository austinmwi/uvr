using UnityEngine;
using System.Collections;

public class sceneLogic : MonoBehaviour {
	public string nextScene;
	public GameObject[] wayPoints;
	public GameObject player;
	public int currentWaypoint = 0;
	public float speed;
	public bool autoMovement = false;
	public bool teleportation = false;

	private GameObject movementTarget;

	private bool manualMovementActive = false;

	private GameObject toolTipSet;
	//The way I have coded this is such that waypoints MUST be loaded into the array in the order the player will navigate to them.



	// Use this for initialization
	void Start () {
		hideDistantWaypoints (); //Start out by hiding distant waypoints.  Defaults to index 0;

	}

	// Right now this has no adjustments for comfort.
	void Update () {





		float step = speed * Time.deltaTime;
		if (autoMovement == true) { //If we are using our on-rails system
			if (wayPoints.Length > 0) { //If we have at least one waypoint
				if (wayPoints [currentWaypoint].transform.position == player.transform.position) {//If the user is close enough to the position of the waypoint they are heading to
					Debug.Log ("Waypoint " + currentWaypoint + " reached.");
					hideDistantWaypoints();
					if (currentWaypoint == wayPoints.Length - 1) { //If we're at the last waypoint
						Debug.Log ("Done Moving");
						changeScene (nextScene); //Move on to the next scene
					} else {
						currentWaypoint++; //Update the waypoint 
					}

				} else {
					player.transform.position = Vector3.MoveTowards (player.transform.position, wayPoints [currentWaypoint].transform.position, step); //otherwise keep heading towards our current target.
				}
			}
		} else if (autoMovement == false) { //If we are on manual movement
			if (manualMovementActive == true && teleportation == false) { //And the player has indicated they would like to move and we aren't teleporting
				if (movementTarget.transform.position == player.transform.position) {//If the user is close enough to the position of the waypoint they are heading to
					Debug.Log ("Waypoint " + movementTarget + " reached.");
					stopManualMovement (); //Stop us



					if (movementTarget.name == "End") { //If our gameobject is named end
						changeScene (nextScene);
					} else {
						currentWaypoint++; //Update the waypoint
					}
					hideDistantWaypoints();
				} else {
					player.transform.position = Vector3.MoveTowards (player.transform.position, movementTarget.transform.position, step); //otherwise keep heading towards our current target.
				}
			} else if (manualMovementActive == true && teleportation == true) { //If we are teleporting
				player.transform.position = movementTarget.transform.position; //Move us there


				//Would be nice to do a fade here if we go with teleport
				hideDistantWaypoints();
			}
		}


	}

	public void beginManualMovement(GameObject target) {
		manualMovementActive = true;
		movementTarget = target;

	}
	public void stopManualMovement() {
		manualMovementActive = false;
		//This would be a good place to let our tooltips know to go live

	}
	public void hideDistantWaypoints() {
		int targetIndex = 0;
		for (int i = 0; i < wayPoints.Length; i++) { //Go through our waypoints
			if (movementTarget == wayPoints [i]) { //If we have found the waypoint that matches our movement target
				targetIndex = i;
			} 
				wayPoints [i].SetActive (false);  //Lets hide all the waypoints then re-enable them individually

		}

		if (targetIndex > 0) { //If we aren't at the first point
			wayPoints[targetIndex-1].SetActive(true); //Set the waypoint behind us as active
		}
		if (targetIndex < wayPoints.Length-1) { //If we aren't at the last waypoint
			wayPoints[targetIndex+1].SetActive(true); //Set the waypoint in front of us as active
		}

	}


	public void changeScene(string sceneName) {
		this.GetComponent<sceneTransition> ().changeScene (sceneName); //Change the scene using our scene transition script for niceness
		//Application.LoadLevel(sceneName);
	}
	public void goToWebsite(string url) {
		 Application.OpenURL(url);
	}

}

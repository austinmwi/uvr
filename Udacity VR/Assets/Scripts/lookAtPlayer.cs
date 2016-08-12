using UnityEngine;
using System.Collections;

public class lookAtPlayer : MonoBehaviour {
	private GameObject player;

	// Use this for initialization
	void Start () {
		player = GameObject.Find ("GvrMain"); //Hard set this value for convenience
	}
	
	// Update is called once per frame
	void Update () {
		this.transform.LookAt(player.transform.position); //Adjust our rotation every frame to orient towards the player
		transform.Rotate(0,180,0); //Hard swap of values to orient the thing properly
	}
}

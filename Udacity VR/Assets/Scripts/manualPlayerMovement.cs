using UnityEngine;
using System.Collections;

public class manualPlayerMovement : MonoBehaviour {
	public GameObject player;
	public float speed = 1;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void moveToTarget(GameObject target) {
		float step = speed * Time.deltaTime;
		player.transform.position = Vector3.MoveTowards(player.transform.position, target.transform.position, step);
	}
}

using UnityEngine;
using System.Collections;

public class spiralController : MonoBehaviour {

	public GameObject[] dots;

	public float speed;
	public float distanceBetween;

	public Vector3[] coordinates;
	public float[] angle;

	public int dotCount;

	float circleWidth;
	float circleHeight;
	private float speedDampener = .001f;

	public float zOffset;


	// Use this for initialization
	void Start () {

		dots = GameObject.FindGameObjectsWithTag("Ball");



		circleWidth = dots[0].GetComponent<Transform>().localScale.y; //Set the size of our objects
		circleHeight =circleWidth; //Set the size of our objects

		distanceBetween = circleWidth += .005f; //Set the distance between objects to be one pixel past it's border

		dotCount = dots.Length; //Count how many objects we have in our array

		//speed = 1.5f/600f; //holdover hard values
		speed = 5f;
		coordinates = new Vector3[dotCount]; //Create an array of coordinates.  One row for each dot

		angle = new float[dotCount]; //Create an array of angles, one for each dot
		zOffset = 2;

	}
	
	// Update is called once per frame
	void FixedUpdate () {


		for (int i =0; i<dotCount; i++) { //Iterate through each of our dots

			angle[i] += (dotCount-i)* (speed * speedDampener);  //Set the angle for this dot relative to it's position in the array times speed.

			float x =0+(distanceBetween*i)*Mathf.Cos(angle[i]); //calculate the x coordinate for a circle.  We take the centerpoint, plus our radius (in this case array index*distance), then multiply it by the cosin of the angle)
			float y =0+(distanceBetween*i)*Mathf.Sin(angle[i]); //calculate the y coordinate for a circle.  We take the centerpoint, plus our radius (in this case array index*distance), then multiply it by the sin of the angle)

			float z = 0; //Always set this to 0 for now.

			coordinates [i] = new Vector3 (x, y, z); //Update the coordinate position in the array to the new position.

			dots [i].GetComponent<Transform> ().localPosition = coordinates [i]; //Move the corresponding dot in the array to its coordinates

		}

	}
}

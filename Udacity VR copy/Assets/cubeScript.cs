using UnityEngine;
using System.Collections;

public class cubeScript : MonoBehaviour {

	Animator anim;

	void Start ()
	{
		anim = GetComponent<Animator>();
		anim.SetBool ("isRunning", false);
	}


	void Update ()
	{

		//anim.SetBool ("isRunning", true);
	}
}

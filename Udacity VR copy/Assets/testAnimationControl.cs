using UnityEngine;
using System.Collections;

public class testAnimationControl : MonoBehaviour {
	public GameObject animatedObject;
	public AnimationClip clip;
	public Animation test;
	// Use this for initialization
	void Start () {
		clip.wrapMode = WrapMode.Loop;
		//animatedObject.GetComponent<Animator> ().Play ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void startAnimation() {
	}
	public void stopAnimation() {
		//animatedObject.GetComponent<Animator>().
		//clip.animation["OpenGate"].wrapMode = WrapMode.Once;
		//ThatAnim.animation.Play("OpenGate"); //Our animation
		//animatedObject.GetComponent<Animator>().Play("testAnim");
		animatedObject.GetComponent<Animator> ().Stop();
	}

	//thing.GetComponent<Animator>().enabled = true;

	//AnimationClip test = thing.GetComponent<Animator>().runtimeAnimatorController.animationClips[0];
	//testAnim.wrapMode = WrapMode.ClampForever;
	//thing.GetComponent<Animator> ().StartPlayback ();



}

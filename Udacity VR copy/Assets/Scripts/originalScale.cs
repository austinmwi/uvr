using UnityEngine;
using System.Collections;

public class originalScale : MonoBehaviour {
	public Vector3 myOriginalScale;
	// Use this for initialization
	void Start () {
		myOriginalScale = this.transform.localScale;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

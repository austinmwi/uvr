using UnityEngine;
using System.Collections;

public class qualityAdjustment : MonoBehaviour {


	//We want to say that if we average lower than our target frames over a given time period that the anti-aliasing turns off
	public float targetFrameRate = 45;


	public  float updateInterval = 5F;

	private float accum   = 0; // FPS accumulated over the interval
	private int   frames  = 0; // Frames drawn over the interval
	private float timeleft; // Left time for current interval

	void Start()
	{

		timeleft = updateInterval;  
	}

	void Update()
	{
		timeleft -= Time.deltaTime;
		accum += Time.timeScale/Time.deltaTime;
		++frames;


		// Interval ended, report  FPS
		if( timeleft <= 0.0 ) {
			
			float fps = accum/frames;

			if (fps < targetFrameRate) {
				QualitySettings.antiAliasing = 0;
				Debug.Log ("Low framerate detected, turning off anti aliasing");
			}
			Debug.Log (fps);
			timeleft = updateInterval;
			accum = 0.0F;
			frames = 0;
		}
	}





}

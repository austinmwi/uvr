using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class displayFrames : MonoBehaviour {

	/*float frameCount = 0f;
	double dt = 0.0;
	float fps = 0.0f;
	float updateRate = 4.0f;  // 4 updates per sec.

	void Update()
	{
		frameCount++;
		dt += Time.deltaTime;
		if (dt > 1.0/updateRate)
		{
			fps = frameCount / (float)dt ;
			frameCount = 0;
			dt -= 1.0/updateRate;
		}
		//Debug.Log (fps);
	}*/


		// Attach this to a GUIText to make a frames/second indicator.
		//
		// It calculates frames/second over each updateInterval,
		// so the display does not keep changing wildly.
		//
		// It is also fairly accurate at very low FPS counts (<10).
		// We do this not by simply counting frames per interval, but
		// by accumulating FPS for each frame. This way we end up with
		// correct overall FPS even if the interval renders something like
		// 5.5 frames.

		public  float updateInterval = 0.5F;

		private float accum   = 0; // FPS accumulated over the interval
		private int   frames  = 0; // Frames drawn over the interval
		private float timeleft; // Left time for current interval
		public GUIText guiText;
	public Text displayText;

		void Start()
		{
		if( !this.GetComponent<GUIText>() )
			{
				Debug.Log("UtilityFramesPerSecond needs a GUIText component!");
				enabled = false;
				return;
			}
			timeleft = updateInterval;  
			guiText = this.GetComponent<GUIText> ();
		displayText = this.GetComponent<Text> ();
		}

		void Update()
		{
			timeleft -= Time.deltaTime;
			accum += Time.timeScale/Time.deltaTime;
			++frames;
				

			// Interval ended - update GUI text and start new interval
			if( timeleft <= 0.0 )
			{
				// display two fractional digits (f2 format)
				float fps = accum/frames;

				string format = System.String.Format("{0:F2} FPS",fps);
				displayText.text = format;
				guiText.GetComponent<GUIText>().text = format;
				
				if(fps < 30)
				guiText.GetComponent<GUIText>().material.color = Color.yellow;
				else 
					if(fps < 10)
					guiText.GetComponent<GUIText>().material.color = Color.red;
					else
					guiText.GetComponent<GUIText>().material.color = Color.green;
				//	DebugConsole.Log(format,level);
				timeleft = updateInterval;
				accum = 0.0F;
				frames = 0;
			}
		}
}

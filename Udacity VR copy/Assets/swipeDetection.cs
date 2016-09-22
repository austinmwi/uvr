using UnityEngine;
using System.Collections;

public class swipeDetection : MonoBehaviour {

	float startTime;
	Vector2 startPos;
	bool couldBeSwipe;
	float comfortZone;
	float minSwipeDist;
	float maxSwipeTime;


	void Update() {
		//Input.touchCount;
		//Debug.Log(Input.touchCount);
		if (Input.touchCount > 0) {
			var touch = Input.touches[0];

			switch (touch.phase) {
			case TouchPhase.Began:
				couldBeSwipe = true;
				startPos = touch.position;
				startTime = Time.time;
				break;

			case TouchPhase.Moved:
				if (Mathf.Abs(touch.position.y - startPos.y) > comfortZone) {
					couldBeSwipe = false;
				}
				break;

			case TouchPhase.Stationary:
				couldBeSwipe = false;
				break;

			case TouchPhase.Ended:
				var swipeTime = Time.time - startTime;
				var swipeDist = (touch.position - startPos).magnitude;

				if (couldBeSwipe && (swipeTime < maxSwipeTime) && (swipeDist > minSwipeDist)) {
					// It's a swiiiiiiiiiiiipe!
					var swipeDirection = Mathf.Sign(touch.position.y - startPos.y);

					// Do something here in reaction to the swipe.
					Debug.Log("Swipe Detected");

				}
				break;
			}
		}
	}

}

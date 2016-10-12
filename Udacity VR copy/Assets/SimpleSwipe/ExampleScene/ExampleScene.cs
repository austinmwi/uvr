using UnityEngine;
using System.Collections;

public class ExampleScene : MonoBehaviour {

	private Vector3 					 m_vRotationDirection 	= new Vector3( 0.0f, 0.0f, 0.0f );
	private SwipeControl.SWIPE_DIRECTION m_enCurrentDirection;
	private float 						 m_fSpeed				= 500.0f;
	public  GameObject					 m_goSphere;

	private bool m_bVisualFeedback = false;
	private bool m_bMobileBased = false;
	private bool m_b8Direction = true;

	void Start () {
		GameObject.Find( "SwipeController" ).GetComponent<SwipeControl>().SetMethodToCall( MyCallbackMethod );
	}
	
	void Update () {
		m_fSpeed *= 0.95f;
		m_goSphere.transform.Rotate( m_vRotationDirection * Time.deltaTime * m_fSpeed, Space.World );
	}

	void OnGUI() {
		//GUI.Label( new Rect( 0.0f, 0.0f, 200.0f, 200.0f ), m_enCurrentDirection.ToString() );
		GUI.Box( new Rect( Screen.width * 0.5f - 125.0f, 5.0f, 250.0f, 30.0f ), m_enCurrentDirection.ToString() );
		m_bMobileBased = GUI.Toggle( new Rect( Screen.width * 0.5f - 125.0f, 45.0f, 250.0f, 30.0f ), m_bMobileBased, "Touch Input for Mobile ( BETA! )" );
		m_bVisualFeedback = GUI.Toggle( new Rect( Screen.width * 0.5f - 125.0f, 85.0f, 250.0f, 30.0f ), m_bVisualFeedback, "Visual Feedback" );

		string direction8 = "8 directions";

		if ( !m_b8Direction ) {
			direction8 = "4 directions";
			GameObject.Find( "SwipeController" ).GetComponent<SwipeControl>().m_stSwipeType = SwipeControl.SWIPE_TYPE.ST_4_DIRECTION;
		}
		else {
			GameObject.Find( "SwipeController" ).GetComponent<SwipeControl>().m_stSwipeType = SwipeControl.SWIPE_TYPE.ST_8_DIRECTION;
		}

		m_b8Direction = GUI.Toggle( new Rect( Screen.width * 0.5f - 125.0f, 125.0f, 250.0f, 30.0f ), m_b8Direction, direction8 );

		GameObject.Find( "SwipeController" ).GetComponent<SwipeControl>().m_bActiveVisualFeedback = m_bVisualFeedback;
		GameObject.Find( "SwipeController" ).GetComponent<SwipeControl>().m_bMobileTouchBased = m_bMobileBased;
	}

	private void MyCallbackMethod( SwipeControl.SWIPE_DIRECTION iDirection ) {

		m_enCurrentDirection = iDirection;

		//this.transform.rotation = Quaternion.identity;
		m_fSpeed = 600.0f;

		switch ( iDirection ) {
		case SwipeControl.SWIPE_DIRECTION.SD_UP:
			m_vRotationDirection = new Vector3( 1.0f, 0.0f, 0.0f );
			break;
		case SwipeControl.SWIPE_DIRECTION.SD_DOWN:
			m_vRotationDirection = new Vector3( -1.0f, 0.0f, 0.0f );
			break;
		case SwipeControl.SWIPE_DIRECTION.SD_LEFT:
			m_vRotationDirection = new Vector3( 0.0f, 1.0f, 0.0f );
			break;
		case SwipeControl.SWIPE_DIRECTION.SD_RIGHT:
			m_vRotationDirection = new Vector3( 0.0f, -1.0f, 0.0f );
			break;
		case SwipeControl.SWIPE_DIRECTION.SD_DOWN_LEFT:
			m_vRotationDirection = new Vector3( -1.0f, 1.0f, 0.0f );
			break;
		case SwipeControl.SWIPE_DIRECTION.SD_DOWN_RIGHT:
			m_vRotationDirection = new Vector3( -1.0f, -1.0f, 0.0f );
			break;
		case SwipeControl.SWIPE_DIRECTION.SD_UP_LEFT:
			m_vRotationDirection = new Vector3( 1.0f, 1.0f, 0.0f );
			break;
		case SwipeControl.SWIPE_DIRECTION.SD_UP_RIGHT:
			m_vRotationDirection = new Vector3( 1.0f, -1.0f, 0.0f );
			break;
		case SwipeControl.SWIPE_DIRECTION.SD_TOUCH:
			m_vRotationDirection = new Vector3( 0.0f, 0.0f, 0.0f );
			break;
		}
	}
}

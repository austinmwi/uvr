#pragma strict

	private var m_vRotationDirection 	: Vector3 						= new Vector3( 0.0f, 0.0f, 0.0f );
	private var m_enCurrentDirection	: SWIPE_DIRECTION;
	private var m_fSpeed				: float 						= 500.0f;
	public  var m_goSphere 				: GameObject;

	function Start () {
		GameObject.Find( "SwipeControllerJS" ).GetComponent( SwipeControl ).SetMethodToCall( MyCallbackMethod );
	}

	function Update () : void {
		m_fSpeed *= 0.95f;
		m_goSphere.transform.Rotate( m_vRotationDirection * Time.deltaTime * m_fSpeed, Space.World );
	}

	function OnGUI() {
		//GUI.Label( new Rect( 0.0f, 0.0f, 200.0f, 200.0f ), m_enCurrentDirection.ToString() );
		GUI.Box( new Rect( Screen.width * 0.5f - 125.0f, 5.0f, 250.0f, 30.0f ), m_enCurrentDirection.ToString() );
	}

	function MyCallbackMethod( iSwipeInput : SWIPE_DIRECTION ) : void {
		m_enCurrentDirection = iSwipeInput;

		//this.transform.rotation = Quaternion.identity;
		m_fSpeed = 600.0f;

		switch ( iSwipeInput ) {
		case SWIPE_DIRECTION.SD_UP:
			m_vRotationDirection = new Vector3( 1.0f, 0.0f, 0.0f );
			break;
		case SWIPE_DIRECTION.SD_DOWN:
			m_vRotationDirection = new Vector3( -1.0f, 0.0f, 0.0f );
			break;
		case SWIPE_DIRECTION.SD_LEFT:
			m_vRotationDirection = new Vector3( 0.0f, 1.0f, 0.0f );
			break;
		case SWIPE_DIRECTION.SD_RIGHT:
			m_vRotationDirection = new Vector3( 0.0f, -1.0f, 0.0f );
			break;
		case SWIPE_DIRECTION.SD_DOWN_LEFT:
			m_vRotationDirection = new Vector3( -1.0f, 1.0f, 0.0f );
			break;
		case SWIPE_DIRECTION.SD_DOWN_RIGHT:
			m_vRotationDirection = new Vector3( -1.0f, -1.0f, 0.0f );
			break;
		case SWIPE_DIRECTION.SD_UP_LEFT:
			m_vRotationDirection = new Vector3( 1.0f, 1.0f, 0.0f );
			break;
		case SWIPE_DIRECTION.SD_UP_RIGHT:
			m_vRotationDirection = new Vector3( 1.0f, -1.0f, 0.0f );
			break;
		case SWIPE_DIRECTION.SD_TOUCH:
			m_vRotationDirection = new Vector3( 0.0f, 0.0f, 0.0f );
			break;
		}
	}
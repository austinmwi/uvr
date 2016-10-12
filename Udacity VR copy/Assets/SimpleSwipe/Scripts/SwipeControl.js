#pragma strict

	enum SWIPE_DIRECTION {
			SD_UP
		, 	SD_DOWN
		, 	SD_LEFT
		, 	SD_RIGHT
		,	SD_UP_RIGHT
		,	SD_DOWN_RIGHT
		,	SD_DOWN_LEFT
		,   SD_UP_LEFT
		,	SD_TOUCH
	}

	enum SWIPE_TYPE {
			ST_8_DIRECTION
		, 	ST_4_DIRECTION
	}

	/* Callbacks */
	var DelegateMethod : Function;

	/* Public parameters */
	public  var  m_bActiveVisualFeedback : boolean  	= true;
	public  var  m_bLeftClick			 : boolean		= true;
	public  var  m_bInstantSwipe		 : boolean		= false;
	public  var  m_stSwipeType			 : SWIPE_TYPE	= SWIPE_TYPE.ST_8_DIRECTION;

	@Range (0.0, 10.0)
	public  var  SwipeDistance 			 : float    = 1.0f;

	/* Private parameters */
	private var m_bSwipePressed 		: boolean		= false;
	private var m_vStarSwipePos 		: Vector3;
	private var m_vEndSwipePos  		: Vector3;
	private var m_vSwipeDirection 		: Vector3;
	private var m_lLineRenderer 		: LineRenderer;
	private var m_iNumberOfPoints		: int			= 0;
	private var m_iInputMouse     		: int 			= 0;
	private var m_fHeightSensibility 	: float			= 0.2f;
	private var m_fWidthSensibility 	: float 		= 0.2f;

	/* This method allow you to set the callback. 
	 * When a Swipe gesture is done, the input callback
	 * will called. */
	function SetMethodToCall( iCallback : Function ) : void {

		DelegateMethod  = iCallback;
		m_lLineRenderer	= this.GetComponent(LineRenderer);
	}

	function UpdateDebugLineRenderer() : void {
		if ( Input.GetKey( KeyCode.Mouse0 ) ) {
			m_iNumberOfPoints++;
			m_lLineRenderer.SetVertexCount( m_iNumberOfPoints );

			var mousePos     = new Vector3( 0.0f, 0.0f, 0.0f );
			mousePos 		 = Input.mousePosition;
			mousePos.z 		 = 1.0f;
			var worldPos 	 = Camera.main.ScreenToWorldPoint( mousePos );
			
			m_lLineRenderer.SetPosition( m_iNumberOfPoints - 1, worldPos );
		}
		else {
			m_iNumberOfPoints = 0;
			m_lLineRenderer.SetVertexCount( 0 );
		}
	}

	function CheckAndComputeDirection4Direction() : void {

		if ( m_vSwipeDirection.normalized.x > 0.0f 
			&& m_vSwipeDirection.normalized.x > m_fWidthSensibility ) {

			if ( m_vSwipeDirection.x > 0.0f ) {
				if ( m_vSwipeDirection.normalized.y >= 0.5f 
						&& m_vSwipeDirection.normalized.y > m_fHeightSensibility ) {
					DelegateMethod( SWIPE_DIRECTION.SD_UP );
				}
				else if ( m_vSwipeDirection.normalized.y <= -0.5f 
							&& m_vSwipeDirection.normalized.y < -m_fHeightSensibility ) {
					DelegateMethod( SWIPE_DIRECTION.SD_DOWN );
				}
				else {
					DelegateMethod( SWIPE_DIRECTION.SD_RIGHT );
				}
			}
		}
		else if ( m_vSwipeDirection.normalized.x < 0.0f 
					&& m_vSwipeDirection.normalized.x < -m_fWidthSensibility ) {

			if ( m_vSwipeDirection.normalized.y >= 0.5f 
					&& m_vSwipeDirection.normalized.y > m_fHeightSensibility ) {
				DelegateMethod( SWIPE_DIRECTION.SD_UP );
			}
			else if ( m_vSwipeDirection.normalized.y <= -0.5f 
						&& m_vSwipeDirection.normalized.y < -m_fHeightSensibility ) {
				DelegateMethod( SWIPE_DIRECTION.SD_DOWN );
			}
			else {
				DelegateMethod( SWIPE_DIRECTION.SD_LEFT );
			}
		}
		else if ( m_vSwipeDirection.normalized.y >= 0.0f ) {
			DelegateMethod( SWIPE_DIRECTION.SD_UP );
		}
		else {
			DelegateMethod( SWIPE_DIRECTION.SD_DOWN );
		}
	}

	function CheckAndComputeDirection() : void {
		
		if ( m_vSwipeDirection.normalized.x > 0.0f 
				&& m_vSwipeDirection.normalized.x > m_fWidthSensibility ) {

			if ( m_vSwipeDirection.x > 0.0f ) {
				if ( m_vSwipeDirection.normalized.y > 0.0f 
						&& m_vSwipeDirection.normalized.y > m_fHeightSensibility ) {
					DelegateMethod( SWIPE_DIRECTION.SD_UP_RIGHT );
				}
				else if ( m_vSwipeDirection.normalized.y < 0.0f 
					&& m_vSwipeDirection.normalized.y < -m_fHeightSensibility ) {
					DelegateMethod( SWIPE_DIRECTION.SD_DOWN_RIGHT );
				}
				else {
					DelegateMethod( SWIPE_DIRECTION.SD_RIGHT );
				}
			}
		}
		else if ( m_vSwipeDirection.normalized.x < 0.0f 
					&& m_vSwipeDirection.normalized.x < -m_fWidthSensibility ) {

			if ( m_vSwipeDirection.normalized.y > 0.0f 
					&& m_vSwipeDirection.normalized.y > m_fHeightSensibility ) {
				DelegateMethod( SWIPE_DIRECTION.SD_UP_LEFT );
			}
			else if ( m_vSwipeDirection.normalized.y < 0.0f 
						&& m_vSwipeDirection.normalized.y < -m_fHeightSensibility ) {
				DelegateMethod( SWIPE_DIRECTION.SD_DOWN_LEFT );
			}
			else {
				DelegateMethod( SWIPE_DIRECTION.SD_LEFT );
			}
		}
		else {

			if ( m_vSwipeDirection.normalized.y >= 0.0f ) {
				DelegateMethod( SWIPE_DIRECTION.SD_UP );
			}
			else {
				DelegateMethod( SWIPE_DIRECTION.SD_DOWN );
			}
		}
	}

	function Update() : void {

		if ( m_bLeftClick ) {
			m_iInputMouse = 0;
		}
		else {
			m_iInputMouse = 1;
		}

		if ( m_bActiveVisualFeedback ) {	
			UpdateDebugLineRenderer();
		}

		if ( !m_bSwipePressed && Input.GetMouseButtonDown( m_iInputMouse ) ) {
			m_vStarSwipePos = Input.mousePosition;
			m_bSwipePressed = true;
		}
		
		if ( m_bSwipePressed ) {

			if ( !m_bInstantSwipe && Input.GetMouseButtonUp( m_iInputMouse ) ) {
				/* If is a Normal swipe, we have to compute the swipe
			 	 * only after the release of the touch. */

				m_vEndSwipePos 	  = Input.mousePosition;
				m_bSwipePressed   = false;

				m_vSwipeDirection = m_vEndSwipePos - m_vStarSwipePos;

				if ( m_vSwipeDirection.sqrMagnitude < SwipeDistance * 1000.0f ) {
					DelegateMethod( SWIPE_DIRECTION.SD_TOUCH );
					return;
				} 
				else {
					if ( m_stSwipeType == SWIPE_TYPE.ST_4_DIRECTION ) {
						CheckAndComputeDirection4Direction();
					}
					else {
						CheckAndComputeDirection();
					}
				}
			} 
			else if ( m_bInstantSwipe ) {
				/* Is an Instant Swipe, so we have to compute the swipe
				 * immidiatly after a change of direction */

				m_vEndSwipePos 		= Input.mousePosition;
				m_vSwipeDirection 	= m_vEndSwipePos - m_vStarSwipePos;

				if ( m_vSwipeDirection.sqrMagnitude > 1.0f ) {
					m_bSwipePressed     = false;

					if ( m_stSwipeType == SWIPE_TYPE.ST_4_DIRECTION ) {
						CheckAndComputeDirection4Direction();
					}
					else {
						CheckAndComputeDirection();
					}
				} 
			}
		}
	}
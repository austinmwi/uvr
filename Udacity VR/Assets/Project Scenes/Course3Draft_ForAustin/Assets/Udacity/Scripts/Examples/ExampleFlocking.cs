using UnityEngine;
//using UnityEditor;
using System.Collections;

public class ExampleFlocking : MonoBehaviour 
{
//	public float radius						= 32.0f;
//	public bool draw_direction				= true;
//	public bool draw_alignment				= true;
//	public bool draw_avoidance				= true;
//	public bool draw_cohesion				= true;
//	public bool draw_radius					= true;
//	
//
//	public float velocity					= 0.01f;
//	public float alignment_weight			= 1.0f;
//	public float avoidance_weight			= 1.0f;
//	public float cohesion_weight			= 1.0f;
//	public float bounds						= 64.0f;
//	
//	private Vector3 _alignment				= Vector3.zero;
//	private Vector3 _avoidance				= Vector3.zero;
//	private Vector3 _cohesion				= Vector3.zero;
//	private Vector3 _centroid				= Vector3.zero;
//
//	public float line_length				= 4.0f;
//	
//	private const int _CUBES				= 256;
//	private GameObject[] _cube 				= new GameObject[_CUBES];
//	private GameObject _target				= null;
//	
//
//	private Color _target_color	 			= new Color(0.0f, 1.0f, 0.0f, 1.0f);
//	private Color _default_color			= new Color(0.0f, 0.0f, 0.0f, 1.0f);
//	private Color _neighborhood_color 		= new Color(1.0f, 1.0f, 1.0f, 1.0f);
//
//
//	private Color _direction_line_color 	= new Color(0.5f, 0.5f, 1.0f, 0.25f);
//	private Color _centroid_line_color 		= new Color(0.5f, 1.0f, 0.5f, 0.25f);
//	private Color _avoidance_line_color 	= new Color(1.0f, 0.5f, 0.5f, 0.25f);
//
//
//	void Start () 
//	{
//		InitializeScene ();
//
//		SetTarget(_cube[0]);
//		_alignment 	= _target.transform.forward;
//		_avoidance 	= _target.transform.forward;
//		_centroid	= _target.transform.forward;
//	}
//	
//
//	void Update()
//	{
//		for(int i = 0; i < _cube.Length; i++)
//		{
//			CheckNeighborhood(_cube[i]);
//		}
//
//		UpdateSelection();
//	}	
//
//
//	void CheckNeighborhood(GameObject current_object)
//	{
//		float neighbor_count 	= 0.0f;
//		Vector3 alignment 		= Vector3.zero;
//		Vector3 avoidance 		= Vector3.zero;
//		Vector3 centroid		= Vector3.zero;
//		Vector3 cohesion		= Vector3.zero;
//		
//		bool current_object_is_target	= current_object == _target;
//		
//		if(_target != null)
//		{
//			if(current_object_is_target)
//			{
//				SetColor(_target, true);
//				Debug.DrawLine(current_object.transform.position, current_object.transform.position + current_object.transform.forward * line_length, Color.green);
//			}	
//
//			for(int i = 0; i < _cube.Length; i++)
//			{
//				float range 				= Vector3.Distance(current_object.transform.position, _cube[i].transform.position);
//				bool in_range 				= range < radius;
//
//				bool in_target_range		= Vector3.Distance(_target.transform.position, _cube[i].transform.position) < radius;
//			
//				if(in_range)
//				{
//					if(_cube[i] != current_object)
//					{
//						neighbor_count++;
//						alignment 				+= _cube[i].transform.forward;
//						centroid				+= _cube[i].transform.position;
//						avoidance				+= Vector3.Normalize(current_object.transform.position - _cube[i].transform.position) * (radius/range);
//					}
//
//					if(current_object_is_target)
//					{
//						if(draw_avoidance) Debug.DrawLine(current_object.transform.position, _cube[i].transform.position, _avoidance_line_color);
//						if(draw_cohesion) Debug.DrawLine(_cube[i].transform.position, _centroid, _centroid_line_color);
//						if(draw_alignment) Debug.DrawLine(_cube[i].transform.position, _cube[i].transform.position + _cube[i].transform.forward * 4.0f, _direction_line_color);
//					}
//				}
//
//				SetColor(_cube[i], in_target_range);
//			}
//			centroid			/= neighbor_count;
//		
//			cohesion			= Vector3.Normalize(centroid-current_object.transform.position);
//			alignment			= Vector3.Normalize(alignment);
//			avoidance			= Vector3.Normalize(avoidance);
//
//			Vector3 flocking 	= alignment * alignment_weight + cohesion * cohesion_weight + avoidance * avoidance_weight;
//
//			current_object.transform.LookAt(current_object.transform.position + flocking);
//
//			current_object.transform.position += current_object.transform.forward * velocity;
//
//			if(Vector3.Magnitude(current_object.transform.position) > bounds)
//			{
//				current_object.transform.position = Vector3.Normalize(current_object.transform.position) * (bounds-0.05f);
//
//				current_object.transform.LookAt(Vector3.zero);
//			}
//
//			if(current_object_is_target)
//			{
//				_centroid	= centroid;
//				_cohesion	= cohesion;
//				_alignment	= alignment;
//				_avoidance	= avoidance;
//
//				Debug.DrawLine(current_object.transform.position, current_object.transform.position + _target.transform.forward * line_length, Color.white);
//				Debug.DrawLine(current_object.transform.position, current_object.transform.position + _cohesion  * line_length * 0.5f, Color.green);
//				Debug.DrawLine(current_object.transform.position, current_object.transform.position + _alignment * line_length * 0.5f, Color.blue);
//				Debug.DrawLine(current_object.transform.position, current_object.transform.position + _avoidance * line_length * 0.5f, Color.red);
//			}
//		}
//	}
//
//
//	void OnDrawGizmos()
//	{
//		if(_target != null)
//		{
//			Gizmos.color = new Color(1.0f, 1.0f, 1.0f, 0.25f);
//  			Gizmos.DrawWireSphere(_target.transform.position, radius);
//			Gizmos.DrawWireSphere(Vector3.zero, bounds);
//		}
//	}
//	
//
//	void InitializeScene ()
//	{
//		for(int i = 0; i < _cube.Length; i++)
//		{
//			_cube[i] 							= GameObject.CreatePrimitive(PrimitiveType.Cube);
//			_cube[i].transform.position 		= Random.insideUnitSphere * 32.0f;
//			_cube[i].transform.localRotation 	= Random.rotation;
//			_cube[i].transform.parent			= gameObject.transform;
//			_cube[i].name						= "Cube " + i;
//			_cube[i].GetComponent<MeshRenderer>().material.color = _default_color;
//			Destroy(_cube[i].GetComponent<BoxCollider>());
//		}
//	}
//
//
//	void UpdateSelection ()
//	{
//		if(Selection.activeGameObject != _target)
//		{	
//			for(int i = 0; i < _cube.Length; i++)
//			{
//				if(Selection.activeGameObject == _cube[i])
//				{
//					SetTarget(_cube[i]);
//					break;
//				}
//			}
//		}	
//	}
//
//
//	void SetTarget (GameObject game_object)
//	{
//		_target 							= game_object;
//	}
//
//
//	void SetColor(GameObject game_object, bool in_range)
//	{
//		game_object.GetComponent<MeshRenderer>().material.color = in_range ? game_object == _target ? _target_color : _neighborhood_color : _default_color;
//	}
}

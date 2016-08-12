using UnityEngine;
using UnityEditor;
using System.Collections;

[ExecuteInEditMode]
[InitializeOnLoad]
public class WaypointVisualization 
{
	private static bool show_editor = false;

	public static void DrawArrow(Vector3 start, Vector3 end, Color color)
	{
		Vector3 direction	= Vector3.Normalize(start-end);
		Vector3 orthogonal	= Vector3.Cross(direction, Vector3.up);
		
		Vector3 left_arrow	=  orthogonal * 0.125f + direction * 0.125f;
		Vector3 right_arrow	= -orthogonal * 0.125f + direction * 0.125f;
		
		end 				+= direction * 0.25f;

		Debug.DrawLine(start, end, color,0.0f);
		Debug.DrawLine(end + left_arrow, end, color,0.0f);
		Debug.DrawLine(end + right_arrow, end, color,0.0f);
	}

	public static void LabelWaypoints()
	{
		bool waypoints_exist 			= (Waypoint)GameObject.FindObjectOfType(typeof(Waypoint)) != null;
		bool camera_is_scene			= Camera.current.name == "SceneCamera";

		if(waypoints_exist && camera_is_scene)
		{
			GUISkin prior_skin				= GUI.skin;
			int prior_font_size				= GUI.skin.font.fontSize;
			GUI.skin						= (GUISkin)Resources.Load("Editor UI");

			Rect toggle_rect	= new Rect(0.0f, 0.0f, 138.0f, 24.0f);
			if(GUI.Button(toggle_rect,"Toggle Waypoint Editor"))
			{
				show_editor = !show_editor;
			}

			float height 					= Camera.current.pixelHeight;
			float offset					= 16.0f;
			Waypoint[] waypoint = (Waypoint[])GameObject.FindObjectsOfType(typeof(Waypoint));

			if(show_editor)
			{
				for(int i = 0; i < waypoint.Length; i++)
				{
					if(waypoint[i] != null)
					{
						Vector3 position					= waypoint[i].transform.position;
						position							= Camera.current.WorldToScreenPoint(position);
						position.y	 						= height - position.y;
				
						Rect box_rect						= new Rect(offset + position.x-4, offset + position.y, 68.0f, 20.0f + 14.0f * waypoint[i].neighbor.Length);
						if(GUI.Button(box_rect,""))
						{
							Selection.activeGameObject = waypoint[i].gameObject;
						};
				
						bool is_selected 					= Selection.activeGameObject == waypoint[i].gameObject;
						Color line_color 					= is_selected ? Color.green : Color.magenta * 0.5f;
						line_color							*= is_selected ? 1.0f 		: 0.75f;
				
				
						string label						= waypoint[i].name;
						Rect rect							= new Rect(offset + position.x, offset + position.y, 64, 20);
				
						GUI.skin.label.normal.textColor 	= is_selected ? line_color : Color.white;
						GUI.skin.label.fontSize 			= 11;
						GUI.Label(rect, label);
						
						GUI.skin.label.fontSize 			= 9;
						for(int j = 0; j < waypoint[i].neighbor.Length; j++)
						{
							if(waypoint[i].neighbor[j] != null)
							{	
								label							= waypoint[i].neighbor[j].name;
								rect.y							+= 14;
				
								GUI.Label(rect, label);
								DrawArrow(waypoint[i].transform.position, waypoint[i].neighbor[j].transform.position, line_color);
							}
						}	
					}			
				}
			}

			GUI.skin				= prior_skin;	
			GUI.skin.label.fontSize = prior_font_size;	
		}
	}


	static WaypointVisualization()
	{
		if(!EditorApplication.isPlaying)
		{
			if(SceneView.onSceneGUIDelegate != OnSceneGUI)
			{
				SceneView.onSceneGUIDelegate += OnSceneGUI;
//				Debug.Log("Scene GUI : Enabled");
			}
		}
		else if (SceneView.onSceneGUIDelegate == OnSceneGUI)
		{
			SceneView.onSceneGUIDelegate -= OnSceneGUI;
//			Debug.Log("Scene GUI : Disabled");
		}
	}
	
	private static void OnSceneGUI(SceneView sceneview)
	{
		Handles.BeginGUI();
	
		LabelWaypoints();
//		}

//		string label					= Time.deltaTime.ToString();
//		GUI.Label(new Rect(0, 0, 128, 128), label);


//		DisplayVertexIndex();
		
		Handles.EndGUI();
	}
}

using UnityEngine;
using System.Collections;

public class Seagulls : MonoBehaviour 
{
	public GameObject seagull_prefab;
	
	private const int SEAGULL_COUNT 			= 32;

	private static GameObject[] seagull_object	= new GameObject[SEAGULL_COUNT];
	
	private GameObject _seagulls_object;
	
	void Start () 
	{
		_seagulls_object = new GameObject();
		_seagulls_object.name = "Seagulls";

		if(seagull_prefab != null)
		{
			for(int i = 0; i < seagull_object.Length; i++)
			{
				Vector3 position							= Random.insideUnitSphere * 32.0f;
				position.y 									*= 0.25f;
				position.y 									+= 25.0f;

				seagull_object[i]							= GameObject.Instantiate(seagull_prefab);
				seagull_object[i].transform.parent			= _seagulls_object.transform;
				seagull_object[i].transform.localPosition 	= position;
				seagull_object[i].AddComponent<Seagull>();
			}
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

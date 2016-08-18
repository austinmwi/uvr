using UnityEngine;
using System.Collections;

public class Seagulls : MonoBehaviour 
{
	public GameObject seagull_prefab;

	private const int SEAGULL_COUNT 			= 10;

	private static GameObject[] seagull_object	= new GameObject[SEAGULL_COUNT];
	private GameObject _seagulls_object;
	
	public AudioClip[] seagull_sounds;
	private GameObject[] _sound_object 			= new GameObject[8];


	public int sound_frame_delay 				= 32;
	private int _sound_frame		 			= 0;
	

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

		for(int i = 0; i < _sound_object.Length; i++)
		{
			_sound_object[i] 											= new GameObject();
			_sound_object[i].name										= "Seagull Audiosource " + i;
			_sound_object[i].transform.parent 							= _seagulls_object.transform;

			_sound_object[i].AddComponent<AudioSource>();
			_sound_object[i].GetComponent<AudioSource>().clip 			= seagull_sounds[i%seagull_sounds.Length];
			_sound_object[i].GetComponent<AudioSource>().spatialBlend 	= 0.99f;
			_sound_object[i].GetComponent<AudioSource>().dopplerLevel 	= 3.0f;
		}
	}
	

	// Update is called once per frame
	void Update ()
	{
		if(Time.frameCount >= _sound_frame)
		{
			AttachSound();

			_sound_frame += (int)Random.Range(1.0f, sound_frame_delay);
		}

		for(int i = 0; i < _sound_object.Length; i++)
		{
			Debug.DrawLine(_sound_object[i].transform.position, _sound_object[i].transform.position + Vector3.up, Color.red);		
		}
	}


	void AttachSound ()
	{
		int random = (int)Random.Range(0.0f, seagull_object.Length-1.0f);

		for(int i = 0; i < _sound_object.Length; i++)
		{
			int random_i = (random + i) % _sound_object.Length;

			bool playing = _sound_object[random_i].GetComponent<AudioSource>().isPlaying;
			
			if(!playing)
			{
				_sound_object[random_i].transform.position 					= seagull_object[random].transform.position;
				_sound_object[random_i].transform.parent 					= seagull_object[random].transform;
				
				_sound_object[random_i].GetComponent<AudioSource>().pitch	= Random.value + 0.5f;
				_sound_object[random_i].GetComponent<AudioSource>().volume	= (Random.value + 0.5f) * 0.25f;
				_sound_object[random_i].GetComponent<AudioSource>().Play();

				break;
			}
		}
	}
}

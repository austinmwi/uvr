using UnityEngine;
using System.Collections;

public class Scene_Example_Ocean_Shader : MonoBehaviour 
{
	public Material ocean_material;
	void Start () 
	{
		Ocean.gameObject.SetActive(true);	
		Ocean.gameObject.GetComponent<MeshRenderer>().material = ocean_material;
		Ocean.gameObject.transform.localScale = Vector3.one * 128.0f ;

		Ocean.gameObject.transform.position = new Vector3(0.0f,-3.6f,0.0f);

	}
}

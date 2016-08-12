using UnityEngine;
using System.Collections;

public class Scene_Example_Ocean_Shader : MonoBehaviour 
{
	public Material ocean_material;
	void Start () 
	{
		Ocean.gameObject.SetActive(true);	
		Ocean.gameObject.GetComponent<MeshRenderer>().material = ocean_material;
	}
}

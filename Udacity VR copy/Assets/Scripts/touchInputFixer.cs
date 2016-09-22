using UnityEngine;
using System.Collections;

public class touchInputFixer : MonoBehaviour {

	private UnityEngine.EventSystems.BaseInputModule[] _module;

	void Start()
	{
		_module = gameObject.GetComponents<UnityEngine.EventSystems.BaseInputModule>();

		for(int i = 0; i < _module.Length; i++)
		{
			if(_module[i].GetType().ToString() == "UnityEngine.EventSystems.TouchInputModule")
			{
				(_module[i] as UnityEngine.EventSystems.TouchInputModule).forceModuleActive = true;
			}
		}
	}

	void Update () 
	{
		if(!GvrViewer.Instance.VRModeEnabled)
		{
			for(int i = 0; i < _module.Length; i++)
			{
				_module[i].Process();
			}
		}
	}

}

// Copyright 2014 Google Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

using UnityEditor;
using UnityEngine;
using System.Collections;

[CustomEditor(typeof(CombineChildren))]
public class CombineChildrenEditor : Editor {
    bool generateUV2 = true;
    bool subdivide = false;

    public override void OnInspectorGUI() 
	{
		base.OnInspectorGUI();
		CombineChildren combineChildren = target as CombineChildren;
        GameObject go = combineChildren.gameObject;

        //EditorUtility.SetDirty(l);


        generateUV2 = GUILayout.Toggle(generateUV2, "Generate UV2?");
        subdivide = GUILayout.Toggle(subdivide, "Subdivide Mesh?");
        if (GUILayout.Button("Bake Mesh")){
            combineChildren.RestoreChildren();
            Mesh m = combineChildren.GetCombineMesh();
            if (subdivide) {
                MeshHelper.Subdivide(m);
            }
            if (generateUV2) {
                Unwrapping.GenerateSecondaryUVSet(m);
            }
            if (!AssetDatabase.IsValidFolder("Assets/CombinedMeshes")) {
                AssetDatabase.CreateFolder("Assets", "CombinedMeshes");
            }
            string meshName = GetAssetName(go);
            AssetDatabase.CreateAsset(m, "Assets/CombinedMeshes/" + meshName + ".asset");

            combineChildren.OverrideGameObjectMesh(m);
		}
        if (GUILayout.Button("Unbake Mesh")) {
            string meshName = GetAssetName(go);
            AssetDatabase.DeleteAsset("Assets/CombinedMeshes/" + meshName + ".asset");
            combineChildren.RestoreChildren();
        }
	}

    string GetAssetName(GameObject go) {
        string sceneName = UnityEditor.SceneManagement.EditorSceneManager.GetActiveScene().name;
        string meshName = sceneName + "-" + go.name;
        
        return meshName;
    }	
}

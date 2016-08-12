using UnityEngine;
using System.Collections;

[ExecuteInEditMode]
public class TransformPreviewer : MonoBehaviour {
    public Font font;

    void OnGUI() {
        Camera cam = Camera.main;
        Vector3 pos = cam.WorldToScreenPoint(transform.position);
        Rect rect = new Rect(pos.x, cam.pixelHeight - pos.y, 300, 50);
        Debug.Log("Rect: " + rect + " Pos: " + pos);

        GUIStyle boldtext = new GUIStyle(GUI.skin.label);
        boldtext.fontStyle = FontStyle.Bold;
        boldtext.fontSize = 20;
        boldtext.normal.textColor = new Color(1, 1, 1, 0.8f);
        if (font != null) {
            boldtext.font = font;
        }

        GUIStyle titleText = new GUIStyle(GUI.skin.label);
        titleText.fontStyle = FontStyle.Bold;
        titleText.fontSize = 40;
        titleText.normal.textColor = new Color(1, 1, 1, 0.8f);
        if (font != null) {
            titleText.font = font;
        }

        //GUI.Label(new Rect(rect.x+20, rect.y - 55, 300, 50), "TRANSFORM", titleText);
        GUI.Box(new Rect(rect.x-10, rect.y-10, 310, 120), "");
        GUI.Label(rect, "Position: " + transform.position, boldtext);
        rect.y += 30;
        GUI.Label(rect, "Rotation: " + transform.rotation.eulerAngles, boldtext);
        rect.y += 30;
        GUI.Label(rect, "Scale: " + transform.localScale, boldtext);
    }
}

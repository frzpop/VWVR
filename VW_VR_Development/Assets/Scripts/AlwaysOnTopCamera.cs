using UnityEngine;
using System.Collections;

public class AlwaysOnTopCamera : MonoBehaviour {

	Camera cam;
	void Start ()
	{
		cam = gameObject.GetComponent<Camera>();
		StartCoroutine(Go());
	}

	IEnumerator Go ()
	{
		yield return new WaitForEndOfFrame();
		gameObject.GetComponent<CardboardEye>().enabled = false;
		cam.clearFlags = CameraClearFlags.Depth;
		//cam.cullingMask = 264 | 5;
		cam.cullingMask = (1 << LayerMask.NameToLayer("Popups")) | (1 << LayerMask.NameToLayer("Ignore Raycast"));
		cam.fieldOfView = 97.49328f;
		cam.depth = 1f;
		cam.nearClipPlane = 0.3f;
		cam.farClipPlane = 55;
	}

}
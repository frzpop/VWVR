using UnityEngine;
using System.Collections;

public class lookAtCamera : MonoBehaviour {

	public GameObject cameraObject;

	void Update () {
		if (cameraObject)
		{
			transform.LookAt(cameraObject.transform.position);
			transform.Rotate(90f, 0, 0);
		}
		else
		{
			cameraObject = transform.parent.GetComponent<lookAtCamera>().cameraObject;
		}
		
	}
}

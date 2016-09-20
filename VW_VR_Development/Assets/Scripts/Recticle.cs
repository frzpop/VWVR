using UnityEngine;
using System.Collections;

public class Recticle : MonoBehaviour {

	public Transform cam;
	public Transform copy;
	Vector3 target;
	Vector3 targetCopy;
	float distance;
	float offset = 2000f;


	void Start ()
	{
		distance = Mathf.Abs ( transform.position.z - cam.position.z );
	}	

	void Update ()
	{
		target = cam.position + cam.forward * distance;
		targetCopy = transform.position + new Vector3(offset, 0f, 0f);

		transform.position = target;
		copy.position = targetCopy;
	}

	/*void FixedUpdate () 
	{
		transform.position = target;
		copy.position = targetCopy;
			
	}*/
}

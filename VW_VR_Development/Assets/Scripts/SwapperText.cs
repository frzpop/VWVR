using UnityEngine;
using System.Collections;

public class SwapperText : MonoBehaviour {

	public GameObject copy;
	Vector3 offset;

	void Start ()
	{
		offset = new Vector3 (2000f, 0f, 0f);
		copy = (GameObject)Instantiate (gameObject, gameObject.transform.position + offset, gameObject.transform.rotation);
	}

}

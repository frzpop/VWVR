using UnityEngine;
using System.Collections;

public class RightCopier : MonoBehaviour {

	public GameObject copyPrefab;
	public GameObject rightEyeParent;
	//public GameObject parent;
	public GameObject copy;
	public Vector3 offset;
	//public bool makeChild;
	public bool isSwapperEye;
	
	void Awake ()
	{
		copy = Instantiate(copyPrefab) as GameObject;
		copy.transform.position = transform.position + offset;
		copy.GetComponent<lookAtCamera>().cameraObject = rightEyeParent;

		if ( copy.transform.GetChild(0).GetComponent<lookAtCamera>() != null )
		{
			copy.transform.GetChild(0).GetComponent<lookAtCamera>().cameraObject = rightEyeParent;
		}

		if (isSwapperEye) 
		{
			copy.GetComponent<Renderer> ().material = gameObject.GetComponent<Renderer> ().material;
		}
		
		//if (makeChild)
			//copy.transform.parent = parent.transform;
	}

}

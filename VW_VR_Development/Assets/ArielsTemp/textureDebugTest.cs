using UnityEngine;
using System.Collections;

public class textureDebugTest : MonoBehaviour {

	Texture2D tex;

	// Use this for initialization
	void Start ()
	{
		//Debug.Log ("Dimension (type): " + tex.dimension);
		Debug.Log ("Wrap mode: " + tex.wrapMode);
		Debug.Log ("Filter mode: " + tex.filterMode);
		Debug.Log ("Aniso Level: " + tex.anisoLevel);
		Debug.Log ("format: " + tex.format);
	}
	

}

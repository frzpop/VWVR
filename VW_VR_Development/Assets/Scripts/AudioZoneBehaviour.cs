using UnityEngine;
using System.Collections;
using UnityEngine.Audio;

public class AudioZoneBehaviour : MonoBehaviour {

    	public AudioMixerSnapshot exterior;
    	public AudioMixerSnapshot interior;
	public GameObject leftEye;
   

	// Use this for initialization
	void Start () 
	{
		exterior.TransitionTo( 0.5f );

	}


	void OnTriggerEnter ( Collider other )
	{
		if ( other.gameObject == leftEye )
		{
			interior.TransitionTo( 0.5f );
			Debug.Log ("heya");
		}
		
	}

	void OnTriggerExit( Collider other )
	{
		if ( other.gameObject == leftEye )
		{
			exterior.TransitionTo( 0.5f );
			Debug.Log ("winning");
		}

	}



}

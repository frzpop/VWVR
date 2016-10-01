using UnityEngine;
using System.Collections;
using UnityEngine.Audio;

public class AudioZoneBehaviour : MonoBehaviour {

    public AudioMixerSnapshot Exterior;
    public AudioMixerSnapshot Interior;
    private bool toggler = true;

	// Use this for initialization
	void Start () {
		Exterior.TransitionTo( 0.5f );
		toggler = true;
	}

	// Update is called once per frame
	void Update () {

		if ( Input.GetKeyDown( KeyCode.C ) && !toggler )
		{
			Exterior.TransitionTo( 0.5f );
			toggler = true;
			print ("toggled to ext");
		}

		else if ( Input.GetKeyDown( KeyCode.C ) && toggler )
		{
			Interior.TransitionTo( 0.5f );
			toggler = false;
			print ("toggled to int");
		}

	}

}

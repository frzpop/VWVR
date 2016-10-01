using UnityEngine;
using System.Collections;

public class AudioPlayer : MonoBehaviour {

	public GameObject leftEye;
	private bool playing;
	public bool trigger;

	void Start () {
		playing = false;
	}

	void Update () {
		if (leftEye.transform.position.z > 100 && !playing && !trigger) {
			playing = true;
			StartCoroutine ( AudioFader.FadeIn( this.GetComponent<AudioSource> (), 1.5f ) );
			// this.GetComponent<AudioSource> ().Play ();
			// Debug.Log ("gg");
		}
	}

	public void PlayMusic ()
	{
		this.GetComponent<AudioSource>().Play();
		playing = true;
	}

	public void StopMusic ()
	{
		this.GetComponent<AudioSource>().Stop();
		playing = false;
	}

}

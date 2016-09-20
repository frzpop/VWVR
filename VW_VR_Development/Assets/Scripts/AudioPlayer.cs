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
			this.GetComponent<AudioSource> ().Play ();
			//Debug.Log ("gg");
		}
	}

	public void PlayMusic ()
	{
		this.GetComponent<AudioSource>().Play();
		playing = true;
	}
}

using UnityEngine;
using System.Collections;

public class RandomSound : MonoBehaviour {

    public AudioClip[] Clips;
    public float MinSeconds;
    public float MaxSeconds;
    public AudioSource source;
	private float timecount;
	private float starttime;
	// Use this for initialization
	void Start () {
        StartCoroutine( SoundWaiter() );
	}

    IEnumerator SoundWaiter() {
		starttime = Time.time;
        yield return new WaitForSeconds( Random.Range( MinSeconds, MaxSeconds ) );
        source.clip = Clips[Random.Range( 0, Clips.Length )];
        source.Play();
        timecount = Time.time - starttime;
        print(timecount);
        print(source.clip);
        StartCoroutine( SoundWaiter() );
    }

	// Update is called once per frame
	void Update () {
        // yield return new WaitForSeconds( 10 );

	}
}

using UnityEngine;
using System.Collections;

public class RandomSound : MonoBehaviour {

    public AudioClip[] Clips;
    public float MinSeconds;
    public float MaxSeconds;
    public AudioSource source;
	private float timecount;
	private float starttime;

	public void StartRandomSounds()
	{
		StartCoroutine( SoundWaiter() );
	}

    IEnumerator SoundWaiter()
    {

        // Initiate time
		starttime = Time.time;

        // Wait for x seconds between range, randomized
        yield return new WaitForSeconds( Random.Range( MinSeconds, MaxSeconds ) );

        // Select random sound from pool of sources
        source.clip = Clips[Random.Range( 0, Clips.Length )];

        // Play it
        source.Play();

        // Time how long it waited
        timecount = Time.time - starttime;

        // Print to debug what sources are playing with timer
        // print(timecount);
        // print(source.clip);

        // Run loop again
        StartCoroutine( SoundWaiter() );

    }

}

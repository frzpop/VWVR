using UnityEngine;
using System.Collections;

public class SimpleSceneChanger : MonoBehaviour {

	Color color;
	bool changedPosition;
	float fadeTimer;
	float fadeTimerMax = 0.65f;
	public GameObject target;
	public GameObject startL;
	public GameObject startR;
	public GameObject leftEyeParent;
	public GameObject rightEyeParent;
	GameObject startLCopy;
	GameObject startRCopy;
	Vector3 travelDirection;
	Vector3 rightEyeOffset;

	void Start ()
	{
		rightEyeOffset = new Vector3(2000f, 0f, 0f);
	}

	void Update()
	{
		//if (Input.GetKeyDown (KeyCode.P))
		//	ChangeScene ();

		if (changedPosition)
		{
			fadeTimer -= Time.deltaTime;
			color.a = fadeTimer / fadeTimerMax;
			startLCopy.GetComponent<Renderer>().material.color = color;
			startLCopy.GetComponent<Renderer>().material.renderQueue = 9001;
			startRCopy.GetComponent<Renderer>().material.color = color;
			startRCopy.GetComponent<Renderer>().material.renderQueue = 9001;

			startLCopy.transform.position -= travelDirection;
			startRCopy.transform.position -= travelDirection;
			if (fadeTimer < 0)
			{
				Destroy(startLCopy);
				Destroy(startRCopy);
				Destroy (startL);
				Destroy (startR);
				changedPosition = false;
			}
		}
	}

	public void ChangeScene()
	{
		leftEyeParent.transform.position = target.transform.position;
		rightEyeParent.transform.position = leftEyeParent.transform.position + rightEyeOffset;
		changedPosition = true;
		fadeTimer = fadeTimerMax;
		travelDirection = (target.transform.position - transform.position).normalized / 5f;
		startLCopy = Instantiate(startL) as GameObject;
		startRCopy = Instantiate(startR) as GameObject;
		startLCopy.transform.position = target.transform.position;
		startRCopy.transform.position = target.transform.position + rightEyeOffset;
		startLCopy.transform.localScale = new Vector3(0.99f, 0.99f, 0.99f);
		startRCopy.transform.localScale = new Vector3(0.99f, 0.99f, 0.99f);

	}
}

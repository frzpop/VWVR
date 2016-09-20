using UnityEngine;

public class SceneChangerTwoD : MonoBehaviour {

	public GameObject leftEye;
	public GameObject leftEyeParent;
	public GameObject rightEyeParent;
	public GameObject rightCopyPrefab;
	public GameObject target;
	public GameObject startL;
	public GameObject startR;
	public GameObject ringPrefab;
	public Vector3 rightEyeOffset;
	public bool animate;
	private GameObject rightCopy;
	private GameObject startLCopy;
	private GameObject startRCopy;
	private GameObject ring;
	private GameObject ringRightCopy;
	private RaycastHit hit;
	private Color color;
	private Color ringColor;
	private Vector3 travelDirection;
	private float fadeTimerMax = 0.65f;
	private float fadeTimer;
	private float distance = 100f;
	private float scale;
	private float timer;
	private float timerLimit = 0.6f;
	private bool changedPosition;

	public bool triggerMusic = false;
	public AudioPlayer musicPlayer;

	public SceneChangeDelay delayScript;

	void Start () {
		rightCopy = Instantiate (rightCopyPrefab) as GameObject;
		rightCopy.transform.position = transform.position + rightEyeOffset;
		rightCopy.GetComponent<lookAtCamera> ().cameraObject = rightEyeParent;
		color = new Color (1f, 1f, 1f, 0f);
		ringColor = new Color (1f, 1f, 1f, 0f);
		
	}
	
	void Update () {

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
			delayScript.StartCoroutine("DelayTrigger", (fadeTimer * 1.8f));
			if (fadeTimer < 0)
			{
				Destroy(startLCopy);	
				Destroy(startRCopy);
				changedPosition = false;
				color.a = 0f;
				fadeTimer = fadeTimerMax;
			}
		}


		if (Physics.Raycast (leftEye.transform.position, leftEye.transform.forward, out hit, 100f) && !changedPosition) {
			if ((hit.transform.gameObject != gameObject && hit.transform.gameObject != ring) || delayScript.delay)
				return;
	
			if (!ring)
			{
				ringColor = new Color (1f, 1f, 1f, 0f);
				ring = Instantiate (ringPrefab) as GameObject;
				ring.transform.position = transform.position;
				ring.transform.position += (leftEyeParent.transform.position - ring.transform.position).normalized;
				ring.transform.transform.LookAt (leftEyeParent.transform.position);
				ring.transform.Rotate (90f, 0, 0);
				ring.GetComponent<Renderer>().material.renderQueue = 9999;
			}

			timer += Time.deltaTime;

			ringColor = new Color ((timerLimit - timer) / timerLimit, 1f, (timerLimit - timer) / timerLimit, 1f);
			ring.GetComponent<Renderer>().material.color = ringColor;

			if (!ringRightCopy) {
				ringRightCopy = Instantiate (ring) as GameObject;
				ringRightCopy.transform.position += new Vector3 (2000f, 0f, 0f);
			}

			scale = 0.4f + (1.5f*(timerLimit - timer)/timerLimit);
			ring.transform.localScale = new Vector3(scale,scale,scale);
			ringRightCopy.transform.localScale = new Vector3(scale,scale,scale);

			if (timer > timerLimit) {
				this.GetComponent<AudioSource>().Play ();
				if (triggerMusic)
				MusicTrigger();

				timer = 0f;
				leftEyeParent.transform.position = target.transform.position;
				rightEyeParent.transform.position = leftEyeParent.transform.position + rightEyeOffset;
				if (animate) {
					changedPosition = true;
					fadeTimer = fadeTimerMax;
					travelDirection = (target.transform.position - transform.position).normalized/5f;

					startLCopy = Instantiate (startL) as GameObject;
					startRCopy = Instantiate (startR) as GameObject;
					startLCopy.transform.position = target.transform.position;
					startRCopy.transform.position = target.transform.position + rightEyeOffset;
					startLCopy.transform.localScale = new Vector3(0.99f, 0.99f, 0.99f);
					startRCopy.transform.localScale = new Vector3(0.99f, 0.99f, 0.99f);
					startLCopy.GetComponent<Renderer>().material.renderQueue = 9001;
					startRCopy.GetComponent<Renderer>().material.renderQueue = 9001;
				}
			}
		} else {
			timer = 0f;
			if (ring) {
				Destroy(ring);
			}
			if (ringRightCopy) {
				Destroy(ringRightCopy);
			}
		}

	}

	void MusicTrigger()
	{
		musicPlayer.PlayMusic();
	}


}

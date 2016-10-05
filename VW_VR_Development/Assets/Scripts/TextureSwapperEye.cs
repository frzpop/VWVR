using UnityEngine;

public class TextureSwapperEye : MonoBehaviour
{

	public int myID;
	public PopupRaycaster raycaster;
	public TextureSwapper swapper;
	public RightCopier copier;
	public GameObject myRing;
	public GameObject myRingCopy;
	Color ringColor;

	GameObject rightCopy;
	float timer = 0f;
	float limit = 1.25f;

	public bool triggered = false;

	void Start()
	{
		myRingCopy = copier.copy.transform.GetChild(1).gameObject;
		myRing.GetComponent<Renderer>().material.renderQueue = 9999;
	}

	void Update()
	{
		if (!raycaster.looking)
			RingReset();
		else if ( raycaster.lookingAt != this.gameObject )
			RingReset();

		myRing.GetComponent<Renderer>().material.color = ringColor;
		myRingCopy.GetComponent<Renderer>().sharedMaterial.color = ringColor;
		myRingCopy.GetComponent<Renderer>().material.color = ringColor;
	}

	public void LookingAtMe()
	{
		if ( !swapper.isSwapping )
		{
			if ( !triggered )
			{
				timer += Time.deltaTime;
				RingAnim();
			}
			else
			{
				RingReset();
			}

			if ( timer > limit && !triggered )
			{
				TriggerMe();
				timer = 0f;
			}
		}
		else
			RingReset();

	}
	
	void TriggerMe()
	{
		triggered = true;
		swapper.SwapTexture( myID );
		swapper.SetActiveEyes(gameObject);
	}

	public void RingAnim()
	{
		//Color lerp
		float t = timer / limit;
		ringColor = Color.Lerp(Color.white, Color.green, t);

		//Scale lerp
		float scale = Mathf.Lerp(2.2f, 1f, t);
		Vector3 scaleVector = new Vector3(scale, scale, scale);
		myRing.transform.localScale = scaleVector;
		myRingCopy.transform.localScale = scaleVector;
	}
	void RingReset()
	{
		timer = 0f;
		ringColor = new Color(1f, 1f, 1f, 0f);
	}


}

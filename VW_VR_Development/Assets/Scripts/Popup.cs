using UnityEngine;
using System.Collections;
using DG.Tweening;

public class Popup : MonoBehaviour {

	public int myID;
	public Texture2D[] textures;
	public PopupRaycaster raycaster;
	public GameObject leftEye;
	public GameObject popupObj;
	public RightCopier copier;
	public GameObject myRing;
	GameObject myPopupObjCopy;
	public GameObject myRingCopy;
	Color ringColor;

	Vector3 texScale;

	GameObject rightCopy;
	float timer = 0f;
	float limit = 0.5f;
	float offLimit = 0.28f;
	bool popup = false;
	bool done = false;
	bool lookingAtMe = false;

	void Start ()
	{
		myPopupObjCopy = copier.copy.transform.GetChild(0).gameObject;
		myRingCopy = copier.copy.transform.GetChild(1).gameObject;
		texScale = popupObj.transform.localScale;

		popupObj.GetComponent<Renderer>().material.mainTexture = textures[myID];
		myPopupObjCopy.GetComponent<Renderer>().material.mainTexture = textures[myID + 1];
		myPopupObjCopy.transform.localPosition = popupObj.transform.localPosition;

		for (int i = 0; i < textures.Length; i++) 
		{
			textures [i] = null;
		}

		popupObj.SetActive(false);
		myPopupObjCopy.SetActive(false);
		
		myRing.GetComponent<Renderer>().material.renderQueue = 9999;
	}
	
	void Update ()
	{
		//RaycastFromEye();

		if (!raycaster.looking)
		{
			NotLooking();
		}
		else if ( popup )
		{
			if ( raycaster.lookingAt != popupObj && raycaster.lookingAt != this.gameObject ) //If my popup is triggered, and player not looking at my popup and not looking at my icon.
			{
				NotLooking();
			}
			RingReset ();

		}

		myRing.GetComponent<Renderer>().material.color = ringColor;
		myRingCopy.GetComponent<Renderer>().sharedMaterial.color = ringColor;
		myRingCopy.GetComponent<Renderer>().material.color = ringColor;
	}

	/*void RaycastFromEye()
	{
		RaycastHit hit;
		Ray ray = new Ray(leftEye.transform.position, leftEye.transform.forward);
		Physics.Raycast(ray, out hit, 100f);

		if (hit.collider != null)
		{
			if (hit.collider.gameObject == this.gameObject && !popup)
			{
				timer += Time.deltaTime;
				RingAnim ();
			}
			else if ( hit.collider.tag != "Popup" && popup )
			{
				timer += Time.deltaTime;
				RingReset ();
			}

	
			if ( timer > limit && !popup && !done)
			{
				PopupTrigger ( true );
				timer = 0f;
			}
			else if ( timer > offLimit && popup && !done)
			{
				PopupTrigger ( false );
				timer = 0f;
			}
		}
		else if ( popup )
		{
			timer += Time.deltaTime;
			RingReset ();
		}
		else
		{
			timer = 0f;
			RingReset ();
		}

		if ( timer > offLimit && popup && !done)
		{
			PopupTrigger ( false );
			timer = 0f;
		}
	} */

	public void LookingAtMe ()
	{
		lookingAtMe = true;
		if (!popup) {
			timer += Time.deltaTime;
			RingAnim ();
		} 
		else 
		{
			RingReset ();
		}

		if (timer > limit && !popup && !done)
		{
			PopupTrigger(true);
			timer = 0f;
		}
	}

	void NotLooking ()
	{
		lookingAtMe = false;
		if (popup)
		{
			timer += Time.deltaTime;
			RingReset();
		}
		else
		{
			RingReset();
			timer = 0f;
		}
			
		if (timer > offLimit && popup && !done)
		{
			PopupTrigger(false);
			timer = 0f;
		}
	}

	void PopupTrigger( bool value )
	{
		popup = value;
		raycaster.popup = value;
		done = false;
		if ( value )
		{
			popupObj.SetActive(true);
			popupObj.transform.localScale = new Vector3(0f, 1f, 0f);

			//Copy
			myPopupObjCopy.SetActive(true);
			myPopupObjCopy.transform.localScale = new Vector3(0f, 1f, 0f);

			StartCoroutine(PopupAnim( value ));

		}
		else
		{
			//popupObj.SetActive(false);
			//copier.copy.transform.GetChild(0).gameObject.SetActive(false);

			StartCoroutine(PopupAnim( value ));
		}	
			
	}

	public void RingAnim()
	{
		//Color lerp
		float t = timer / limit;
		ringColor = Color.Lerp( Color.white, Color.green, t );

		//Scale lerp
		float scale = Mathf.Lerp( 2.2f, 1f, t );
		Vector3 scaleVector = new Vector3(scale, scale, scale);
		myRing.transform.localScale = scaleVector;
		myRingCopy.transform.localScale = scaleVector;
	}
	void RingReset ()
	{	
		ringColor = new Color(1f, 1f, 1f, 0f);
	}


	public IEnumerator PopupAnim( bool vaule )
	{
		done = true;
		if ( vaule )
		{
			popupObj.transform.DOScaleX(texScale.x * 0.1f, 0.15f).SetEase(Ease.InCubic);
			popupObj.transform.DOScaleZ(texScale.z * 0.85f, 0.15f).SetEase(Ease.InCubic);

			myPopupObjCopy.transform.DOScaleX(texScale.x * 0.1f, 0.15f).SetEase(Ease.InCubic);
			myPopupObjCopy.transform.DOScaleZ(texScale.z * 0.85f, 0.15f).SetEase(Ease.InCubic);

			yield return new WaitForSeconds(0.15f);

			popupObj.transform.DOScaleX(texScale.x, 0.2f).SetEase(Ease.OutBounce);
			popupObj.transform.DOScaleZ(texScale.z, 0.2f).SetEase(Ease.OutBounce);

			myPopupObjCopy.transform.DOScaleX(texScale.x, 0.2f).SetEase(Ease.OutBounce);
			myPopupObjCopy.transform.DOScaleZ(texScale.z, 0.2f).SetEase(Ease.OutBounce);
		}
		else
		{
			popupObj.transform.DOScaleX(texScale.x * 0.1f, 0.15f).SetEase(Ease.InBounce);
			popupObj.transform.DOScaleZ(texScale.z * 0.85f, 0.15f).SetEase(Ease.InBounce);

			myPopupObjCopy.transform.DOScaleX(texScale.x * 0.1f, 0.15f).SetEase(Ease.InBounce);
			myPopupObjCopy.transform.DOScaleZ(texScale.z * 0.85f, 0.15f).SetEase(Ease.InBounce);

			yield return new WaitForSeconds(0.15f);

			popupObj.transform.DOScaleX(0f, 0.15f).SetEase(Ease.InCubic);
			popupObj.transform.DOScaleZ(0f, 0.15f).SetEase(Ease.InCubic);

			myPopupObjCopy.transform.DOScaleX(0f, 0.15f).SetEase(Ease.InCubic);
			myPopupObjCopy.transform.DOScaleZ(0f, 0.15f).SetEase(Ease.InCubic);

			yield return new WaitForSeconds(0.15f);
			popupObj.SetActive(false);
			myPopupObjCopy.SetActive(false);


		}
		done = false;
	}


}
	
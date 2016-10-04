using UnityEngine;

public class PopupRaycaster : MonoBehaviour {

	public GameObject leftEye;
	public GameObject lookingAt;
	public bool looking;
	public bool popup = false; // is accessed and changed from Popup class.

	void Update ()
	{
		
		RaycastHit[] hits;
		Ray ray = new Ray(leftEye.transform.position, leftEye.transform.forward);
		hits = Physics.RaycastAll(ray, 100f);

		if (hits.Length == 1)
		{
			//Debug.Log("collided with: " + hits[0].collider.tag);
			if ( hits[0].collider.gameObject.GetComponent<Popup>() != null && !popup )
			{
				looking = true;
				hits[0].collider.gameObject.GetComponent<Popup>().LookingAtMe();
				lookingAt = hits[0].collider.gameObject;
			}
			else if (hits[0].collider.tag == "Popup")
			{
				looking = true;
				lookingAt = lookingAt = hits[0].collider.gameObject;
			}
			else if (hits[0].collider.tag == "Swapper")
			{
				looking = true;
				hits[0].collider.gameObject.GetComponent<TextureSwapperEye>().LookingAtMe();
				lookingAt = hits[0].collider.gameObject;
			}
			else
			{
				// Not looking at anything relevant
				looking = false;
				lookingAt = null;
			}
		}
		else if ( hits.Length > 1 )
		{
			for (int i = 0; i < hits.Length; i++)
			{
				//	Debug.Log("collided with: " + hits[i].collider.tag);
				if ( hits[i].collider.gameObject.GetComponent<Popup>() != null && !popup )
				{
					looking = true;
					hits[i].collider.gameObject.GetComponent<Popup>().LookingAtMe();
					lookingAt = hits[i].collider.gameObject;
				}
				else if ( hits[i].collider.tag == "Popup" )
				{
					looking = true;
					lookingAt = lookingAt = hits[i].collider.gameObject;
				}
				else if (hits[i].collider.tag == "Swapper")
				{
					looking = true;
					hits[i].collider.gameObject.GetComponent<TextureSwapperEye>().LookingAtMe();
					lookingAt = hits[i].collider.gameObject;
				}
				else
				{
					// Not looking at anything relevant
					looking = false;
					lookingAt = null;
				}
			}
		}
		else
		{
			// Not looking at anything at all
			looking = false;
			lookingAt = null;
		}


/* OLD
		if (hit.collider != null )
		{
			if (hit.collider.tag == "Popup")
			{
				// Looking at popup or popup icon
				looking = true;
				if (hit.collider.GetComponent<Popup>() != null && !popup)
				{
					hit.collider.gameObject.GetComponent<Popup>().LookingAtMe();
					lookingAt = hit.collider.gameObject;
				}
				else
				{
					lookingAt = hit.collider.gameObject;
				}
			
			}
			else
			{
				// Not looking at anything relevant
				looking = false;
				lookingAt = null;
			}
		}
		else
		{
			// Not looking at anything at all
			looking = false;
			lookingAt = null;
		}*/
			
	}
}

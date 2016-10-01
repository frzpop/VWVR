using UnityEngine;
using System.Collections;

public class SceneChangeDelay : MonoBehaviour {

	public bool delay = false;

	public IEnumerator DelayTrigger ( float duration )
	{
		delay = true;
		yield return new WaitForSeconds(duration);
		delay = false;
	}

}

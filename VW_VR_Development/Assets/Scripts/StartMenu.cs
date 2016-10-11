using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Collections;

public class StartMenu : MonoBehaviour {

	public float delay;
	public Image bgImg;
	public Sprite[] loadingSprites;
	public GameObject[] buttons;

	public void SweSelect ()
	{
		PlayerPrefs.SetInt( "lang", 0 );

		for (int i = 0; i < buttons.Length; i++)
		{
			buttons[i].SetActive(false);
		}

		StartCoroutine( SceneLoad() );
	}

	public void EngSelect ()
	{
		PlayerPrefs.SetInt( "lang", 1 );

		for (int i = 0; i < buttons.Length; i++)
		{
			buttons[i].SetActive(false);
		}

		StartCoroutine( SceneLoad() );
	}

	IEnumerator SceneLoad ()
	{
		bgImg.sprite = loadingSprites[PlayerPrefs.GetInt("lang")];
		yield return new WaitForSeconds(delay);
		SceneManager.LoadScene("forest_scene_audio");
	}

}

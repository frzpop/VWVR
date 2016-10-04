using UnityEngine;
using DG.Tweening;
using System.Collections;

public class TextureSwapper : MonoBehaviour {

	public Renderer[] rends;
	public Texture2D[] texturePool;
	public GameObject[] swapperEyes;
	Material[] mats;

	bool swap;
	bool done = true;
	public float fade = 0f;
	float targetFade;
	float duration = 2.5f;

	void Start ()
	{
		mats = new Material[rends.Length];
		for (int i = 0; i < rends.Length; i++)
		{
			mats[i] = rends[i].material;
		}
		Shader swapShader = Shader.Find("Basic/TextureLerp");
		for (int i = 0; i < mats.Length; i++)
		{
			mats[i].shader = swapShader;
		}
	}

	void Update ()
	{
		if (Input.GetKeyDown(KeyCode.H))
		{
			SwapTexture( Random.Range( 0, texturePool.Length ) );
		}
			
		Swapper();
	}

	void Swapper ()
	{
		if (swap)
		{
			if ( targetFade == 0f )
				targetFade = 1f;
			else if ( targetFade == 1f )
				targetFade = 0f;

			StartCoroutine(AnimateFadeValue( targetFade, duration ) );
			swap = false;
		}

		if ( fade != 0f && fade != 1f )
		{
			fade = Mathf.Clamp(fade, 0f, 1f);
			for (int i = 0; i < mats.Length; i++)
			{
				mats[i].SetFloat("_Tween", fade);
				//Debug.Log(mats[i].GetFloat("_Tween"));
				Debug.Log( fade );
			}
		}
	}
	
	public void SwapTexture ( int id )
	{
		swap = true;
		if ( fade == 0f )
		{
			mats[0].SetTexture("_SecondTex", texturePool[ id ]);
			mats[1].SetTexture("_SecondTex", texturePool[ id + 1 ] );
		}
		else if ( fade == 1f )
		{
			mats[0].SetTexture("_MainTex", texturePool[ id ]);
			mats[1].SetTexture("_MainTex", texturePool[ id + 1] );
		}
	}

	public void SetActiveEyes( GameObject obj )
	{
		for (int i = 0; i < swapperEyes.Length; i++)
		{
			if (swapperEyes[i].gameObject != obj)
			{
				swapperEyes[i].GetComponent<TextureSwapperEye>().triggered = false;
				Color color = swapperEyes[i].GetComponent<Renderer>().material.color;
				color = new Color( color.r, color.g, color.b, 1f );
				swapperEyes[i].GetComponent<Renderer>().material.color = color;
			}
			else
			{
				Color color = swapperEyes[i].GetComponent<Renderer>().material.color;
				color = new Color( color.r, color.g, color.b, 0.25f );
				swapperEyes[i].GetComponent<Renderer>().material.color = color;
			}	
		}
	}

	IEnumerator AnimateFadeValue ( float end, float duration )
	{
		done = false;
		DOTween.KillAll();
		DOTween.To( () => fade, x => fade = x, end, duration );
		yield return new WaitForSeconds(duration);
		done = true;
	}


}

using UnityEngine;
using DG.Tweening;
using System.Collections;

public class TextureSwapper : MonoBehaviour {

	public Renderer[] rends;
	public Texture2D[] texturePool;
	Material[] mats;


	bool swap;
	bool done = true;
	float fade = 0f;

	void Start ()
	{
		mats = new Material[rends.Length];
		for (int i = 0; i < rends.Length; i++)
		{
			mats[i] = rends[i].material;
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
			if ( fade == 0 )
				StartCoroutine(AnimateFadeValue( 1f, 1f ) );
			else if ( fade == 1 )
				StartCoroutine(AnimateFadeValue( 0f, 1f ) );

			swap = false;
		}

		if ( !done )
		{
			for (int i = 0; i < mats.Length; i++)
				mats[i].SetFloat("_Tween", fade);
		}
		
	}
	
	public void SwapTexture ( int id )
	{
		swap = true;
		if ( fade == 0 )
		{
			mats[0].SetTexture("_SecondTex", texturePool[id]);
			mats[1].SetTexture("_SecondTex", texturePool[ id + 1 ] );
		}
		else if ( fade == 1 )
		{
			mats[0].SetTexture("_MainTex", texturePool[ id ] );
			mats[1].SetTexture("_MainTex", texturePool[ id + 1 ] );
		}
	}

	IEnumerator AnimateFadeValue ( float end, float duration )
	{
		done = false;
		DOTween.To( () => fade, x => fade = x, end, duration );
		yield return new WaitForSeconds(duration);
		done = true;
	}


}

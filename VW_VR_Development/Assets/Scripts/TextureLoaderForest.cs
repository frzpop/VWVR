using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class TextureLoaderForest : MonoBehaviour
{

	string path = "http://arielsantibanez.com/onewebmedia/temp/"; // for testing only
	//string path = "http://extern.volkswagen-transportbilar.se/nya-amarok/amarok360/bundles/";
	int version = 4;
	WWW www;
	public GameObject[] newCubes;
	public Renderer[] introCubesRend;
	public Texture[] engIntroCubeTex;
	public GameObject[] popups;
	//public CardboardHead[] cardboardHeads; // if you want to disable input while loading
	public Cardboard cb;
	public TextMesh textMesh;
	TextMesh textMeshRightCopy;
	string text;
	string suffix;
	public AssetBundle bundle;
	public Object[] objs;
	Texture2D[] textures;
	bool load = false;
	bool done = false;

	void Awake()
	{
		//Caching.CleanCache(); // for testing only.

		GameObject copy = Instantiate(textMesh.gameObject, textMesh.transform.position + new Vector3 (2000f, 0f, 0f), textMesh.transform.rotation ) as GameObject;
		textMeshRightCopy = copy.GetComponent<TextMesh>();

		if ( PlayerPrefs.GetInt( "lang" ) == 1 )
			text = "Please wait.\nLoading...";
		else
			text = textMesh.text;

		suffix = " 0%";

		string fileName = "";

		if ( Application.platform == RuntimePlatform.Android )
		{
			fileName = "forestBundleAndroid.unity3d";
			version = 2;
		}	
		else if ( Application.platform == RuntimePlatform.IPhonePlayer )
		{
			fileName = "forestBundleIphone.unity3d";
		}
		else if ( Application.platform == RuntimePlatform.WindowsPlayer || Application.platform == RuntimePlatform.WindowsEditor )
		{
			path = "http://arielsantibanez.com/onewebmedia/temp/";
			fileName = "forestBundleWin.unity3d";
		}
		else if ( Application.platform == RuntimePlatform.OSXPlayer || Application.platform == RuntimePlatform.OSXEditor )
		{
			path = "http://arielsantibanez.com/onewebmedia/temp/";
			fileName = "forestBundleMac.unity3d";
		}
		StartCoroutine( LoadTexures( path + fileName ) );

		if (PlayerPrefs.GetInt("lang") == 1)
		{
			for (int i = 0; i < popups.Length; i++)
			{
				Popup scr = popups[i].GetComponent<Popup>();	
				scr.myID += (scr.textures.Length / 2);
			}
			
			for (int i = 0; i < introCubesRend.Length; i++)
			{
				Material mat = introCubesRend[i].material;
				mat.mainTexture = engIntroCubeTex[i];
			}
		}
	}

	void Update ()
	{
		if (Input.GetKeyDown(KeyCode.Escape))
			Application.LoadLevel("start_menu");

		if (cb)
		cb.OnBackButton += () => { Application.LoadLevel("start_menu"); };

		if (load)
		{
			float progress = www.progress;
			textMesh.text = text + suffix;
			textMeshRightCopy.text = textMesh.text;
			suffix = " " + Mathf.Round( Remap( progress, 0f, 1f, 0f, 100f ) ).ToString() + "%";
		}
		else if (!done)
		{
			gameObject.GetComponent<SimpleSceneChanger>().ChangeScene();
			done = true;
			StartCoroutine (DelayedDestroy(1f));
		}	
	} 

	IEnumerator LoadTexures( string url )
	{
		Loading(true);
		while (!Caching.ready)
			yield return null;

		www = WWW.LoadFromCacheOrDownload(url, version);

		yield return www;
		if (!string.IsNullOrEmpty(www.error))
		{
			Debug.Log(www.error);
			yield return null;
		}

		bundle = www.assetBundle;

		objs = bundle.LoadAllAssets( typeof(Texture2D) );
		
		yield return objs;
	
		textures = new Texture2D[objs.Length];

		for (int i = 0; i < objs.Length; i++)
		{
			textures[i] = (Texture2D)objs[i];
			objs[i] = null;
		}

		ApplyTextures(textures);
			
		Loading(false);
	}

	void ApplyTextures( Texture2D[] textures )
	{
		for (int i = 0; i < textures.Length; i++)
		{
			textures[i].wrapMode = TextureWrapMode.Clamp;
		}

		List<Renderer> sides = new List<Renderer>();
		for (int i = 0; i < newCubes.Length; i++)
		{
			sides.AddRange( newCubes[i].GetComponentsInChildren<Renderer>() );
		}
		for (int i = 0; i < sides.Count; i++)
		{
			sides[i].material.mainTexture = textures[i];
		}
		sides.Clear();
	}

	void Loading(bool loading)
	{
		load = loading;

		/* Disable input while loading
		if ( loading )
		{
			for (int i = 0; i < cardboardHeads.Length; i++)
			{
				cardboardHeads[i].trackRotation = false;
			}	
		}
		else
		{
			for (int i = 0; i < cardboardHeads.Length; i++)
			{
				cardboardHeads[i].trackRotation = true;
			}
			
		}*/
	}

	IEnumerator DelayedDestroy(float dur)
	{
		yield return new WaitForSeconds (dur);
		Destroy (gameObject);
	}

	float Remap( float value, float from1, float to1, float from2, float to2 )
	{
		return (value - from1) / (to1 - from1) * (to2 - from2) + from2;
	}

}

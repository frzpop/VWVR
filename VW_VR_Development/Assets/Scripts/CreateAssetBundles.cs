using UnityEditor;

[InitializeOnLoad]
public class CreateAssetBundles {

	
	[MenuItem("Assets/Build AssetBundles")]
	static void BuildAllAssetBundles()
	{
		BuildPipeline.BuildAssetBundles("Assets/AssetBundles/Win", BuildAssetBundleOptions.None, BuildTarget.StandaloneWindows);
		//BuildPipeline.BuildAssetBundles("Assets/AssetBundles", BuildAssetBundleOptions.None, BuildTarget.iOS);
		//BuildPipeline.BuildAssetBundles("Assets/AssetBundles", BuildAssetBundleOptions.None, BuildTarget.Android);
	}

}
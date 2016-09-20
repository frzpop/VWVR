struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 81 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//6. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//7. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//8. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//9. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//10. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//11. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//12. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//13. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//14. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//15. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//16. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//17. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//18. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//19. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//20. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//21. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//22. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//23. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//24. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//25. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//26. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//27. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//28. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//29. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//30. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//31. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//32. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//33. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//34. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//35. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//36. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//37. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//38. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//39. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//40. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//41. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//42. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//43. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//44. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//45. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//46. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//47. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//48. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//49. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//50. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//51. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//52. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//53. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//54. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//55. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//56. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//57. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//58. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//59. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//60. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//61. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//62. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//63. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//64. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//65. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//66. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//67. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//68. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//69. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//70. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//71. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//72. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//73. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//74. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//75. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//76. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//77. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//78. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//79. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//80. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
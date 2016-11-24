struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 66 classes
	//0. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//6. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//7. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//8. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//9. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//10. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//11. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//12. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//13. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//14. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//15. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//16. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//17. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//18. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//19. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//20. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//21. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//22. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//23. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//24. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//25. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//26. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//27. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//28. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//29. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//30. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//31. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//32. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//33. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//34. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//35. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//36. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//37. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//38. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//39. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//40. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//41. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//42. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//43. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//44. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//45. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//46. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//47. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//48. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//49. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//50. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//51. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//52. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//53. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//54. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//55. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//56. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//57. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//58. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//59. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//60. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//61. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//62. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//63. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//64. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//65. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}

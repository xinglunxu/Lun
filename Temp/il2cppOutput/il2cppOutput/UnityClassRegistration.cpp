struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

}

void RegisterAllClasses()
{
	//Total: 53 classes
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

	//5. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//6. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//7. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//8. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//9. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//10. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//11. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//12. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//13. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//14. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//15. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//16. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//17. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//18. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//19. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//20. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//21. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//22. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//23. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//24. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//25. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//26. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//27. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//28. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//29. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//30. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//31. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//32. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//33. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//34. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//35. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//36. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//37. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//38. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//39. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//40. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//41. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//42. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//43. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//44. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//45. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//46. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//47. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//48. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//49. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//50. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//51. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//52. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}

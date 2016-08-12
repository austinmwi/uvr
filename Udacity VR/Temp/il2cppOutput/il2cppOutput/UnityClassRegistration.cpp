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

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 85 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//6. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//9. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//10. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//11. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//12. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//13. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//14. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//15. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//16. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//17. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//18. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//19. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//20. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//21. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//22. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//23. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//24. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//25. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//26. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//27. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//28. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//29. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//30. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//31. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//32. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//33. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//34. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//35. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//36. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//37. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//38. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//39. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//40. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//41. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//42. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//43. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//44. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//45. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//46. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//47. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//48. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//49. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//50. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//51. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//52. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//53. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//54. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//55. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//56. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//57. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//58. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//59. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//60. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//61. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//62. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//63. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//64. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//65. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//66. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//67. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//68. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//69. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//70. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//71. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//72. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//73. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//74. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//75. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//76. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//77. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//78. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//79. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//80. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//81. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//82. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//83. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//84. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}

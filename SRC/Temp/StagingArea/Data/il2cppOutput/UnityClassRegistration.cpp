template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
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

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

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

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class DirectorPlayer; template <> void RegisterClass<DirectorPlayer>();
class Animator; template <> void RegisterClass<Animator>();
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; template <> void RegisterClass<ReflectionProbe>();
class Skybox; template <> void RegisterClass<Skybox>();
class Terrain; template <> void RegisterClass<Terrain>();
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; 
class MeshCollider; 
class SphereCollider; 
class TerrainCollider; template <> void RegisterClass<TerrainCollider>();
class WheelCollider; 
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>();
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>();
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; template <> void RegisterClass<TerrainData>();
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class CubemapArray; 
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class WebCamTexture; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>();
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 87 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. RenderSettings
	RegisterClass<RenderSettings>();
	//6. LevelGameManager
	RegisterClass<LevelGameManager>();
	//7. GameManager
	RegisterClass<GameManager>();
	//8. QualitySettings
	RegisterClass<QualitySettings>();
	//9. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//10. Renderer
	RegisterClass<Renderer>();
	//11. Skybox
	RegisterClass<Skybox>();
	//12. GUILayer
	RegisterClass<GUILayer>();
	//13. Light
	RegisterClass<Light>();
	//14. Mesh
	RegisterClass<Mesh>();
	//15. NamedObject
	RegisterClass<NamedObject>();
	//16. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//17. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//18. Transform
	RegisterClass<Transform>();
	//19. Shader
	RegisterClass<Shader>();
	//20. Material
	RegisterClass<Material>();
	//21. Sprite
	RegisterClass<Sprite>();
	//22. Texture
	RegisterClass<Texture>();
	//23. Texture2D
	RegisterClass<Texture2D>();
	//24. Texture3D
	RegisterClass<Texture3D>();
	//25. RenderTexture
	RegisterClass<RenderTexture>();
	//26. ParticleSystem
	RegisterClass<ParticleSystem>();
	//27. Rigidbody
	RegisterClass<Rigidbody>();
	//28. Unity::Joint
	RegisterClass<Unity::Joint>();
	//29. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>();
	//30. Collider
	RegisterClass<Collider>();
	//31. AudioClip
	RegisterClass<AudioClip>();
	//32. SampleClip
	RegisterClass<SampleClip>();
	//33. AudioListener
	RegisterClass<AudioListener>();
	//34. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//35. AudioSource
	RegisterClass<AudioSource>();
	//36. Animation
	RegisterClass<Animation>();
	//37. Animator
	RegisterClass<Animator>();
	//38. DirectorPlayer
	RegisterClass<DirectorPlayer>();
	//39. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//40. GUIElement
	RegisterClass<GUIElement>();
	//41. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//42. UI::Canvas
	RegisterClass<UI::Canvas>();
	//43. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//44. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//45. BoxCollider
	RegisterClass<BoxCollider>();
	//46. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//47. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//48. Collider2D
	RegisterClass<Collider2D>();
	//49. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//50. FlareLayer
	RegisterClass<FlareLayer>();
	//51. PreloadData
	RegisterClass<PreloadData>();
	//52. Cubemap
	RegisterClass<Cubemap>();
	//53. Texture2DArray
	RegisterClass<Texture2DArray>();
	//54. TimeManager
	RegisterClass<TimeManager>();
	//55. AudioManager
	RegisterClass<AudioManager>();
	//56. InputManager
	RegisterClass<InputManager>();
	//57. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//58. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//59. TextAsset
	RegisterClass<TextAsset>();
	//60. PhysicsManager
	RegisterClass<PhysicsManager>();
	//61. TagManager
	RegisterClass<TagManager>();
	//62. ScriptMapper
	RegisterClass<ScriptMapper>();
	//63. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//64. MonoScript
	RegisterClass<MonoScript>();
	//65. MonoManager
	RegisterClass<MonoManager>();
	//66. PlayerSettings
	RegisterClass<PlayerSettings>();
	//67. BuildSettings
	RegisterClass<BuildSettings>();
	//68. ResourceManager
	RegisterClass<ResourceManager>();
	//69. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//70. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//71. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>();
	//72. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//73. LightmapSettings
	RegisterClass<LightmapSettings>();
	//74. MeshRenderer
	RegisterClass<MeshRenderer>();
	//75. MeshFilter
	RegisterClass<MeshFilter>();
	//76. AnimationClip
	RegisterClass<AnimationClip>();
	//77. Motion
	RegisterClass<Motion>();
	//78. Avatar
	RegisterClass<Avatar>();
	//79. AnimatorController
	RegisterClass<AnimatorController>();
	//80. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//81. TerrainCollider
	RegisterClass<TerrainCollider>();
	//82. TerrainData
	RegisterClass<TerrainData>();
	//83. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//84. ReflectionProbe
	RegisterClass<ReflectionProbe>();
	//85. Terrain
	RegisterClass<Terrain>();
	//86. LightProbes
	RegisterClass<LightProbes>();

}

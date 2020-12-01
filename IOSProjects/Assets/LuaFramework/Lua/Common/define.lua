
--协议类型--
ProtocalType = {
	BINARY = 0,
	PB_LUA = 1,
	PBC = 2,
	SPROTO = 3,
}

Platform = {
    PC = 1,
    IOS = 2,
    ANDROID = 3,
}

gameDECkey = "01234567";
gameMD5key = "B(hq&w2eRbw9l_zT+x9c";

--当前使用的协议类型--
TestProtoType = ProtocalType.BINARY;

Util = LuaFramework.Util;
AppConst = LuaFramework.AppConst;
LuaHelper = LuaFramework.LuaHelper;
ByteBuffer = LuaFramework.ByteBuffer;

scenesMgr = LuaHelper.GetScenesManager();
resMgr = LuaHelper.GetResManager();
panelMgr = LuaHelper.GetPanelManager();
soundMgr = LuaHelper.GetSoundManager();
networkMgr = LuaHelper.GetNetManager();
gameMgrMgr = LuaHelper.GetGameManager();
luaMgrMgr = LuaHelper.GetLuaManager();
MaterialMgr = LuaHelper.GetMaterialManager();

object = System.Object
Type = System.Type
TextAsset=UnityEngine.TextAsset
OptionData=UnityEngine.UI.Dropdown.OptionData
ContentType=UnityEngine.UI.InputField.ContentType
LayoutRebuilder=UnityEngine.UI.LayoutRebuilder
DOTween=DG.Tweening.DOTween
Ease=DG.Tweening.Ease
RotateMode=DG.Tweening.RotateMode
Object = UnityEngine.Object
Mathf=UnityEngine.Mathf
GameObject = UnityEngine.GameObject
Transform = UnityEngine.Transform
MonoBehaviour = UnityEngine.MonoBehaviour
Component = UnityEngine.Component
Application = UnityEngine.Application
SystemInfo = UnityEngine.SystemInfo
Screen = UnityEngine.Screen
Camera = UnityEngine.Camera
Material = UnityEngine.Material
Renderer = UnityEngine.Renderer
AsyncOperation = UnityEngine.AsyncOperation
SceneManagement = UnityEngine.SceneManagement
Resources = UnityEngine.Resources
WWW = UnityEngine.WWW

CharacterController = UnityEngine.CharacterController
SkinnedMeshRenderer = UnityEngine.SkinnedMeshRenderer
Animation = UnityEngine.Animation
Animator = UnityEngine.Animator
AnimationClip = UnityEngine.AnimationClip
AnimationEvent = UnityEngine.AnimationEvent
AnimationState = UnityEngine.AnimationState
Input = UnityEngine.Input
KeyCode = UnityEngine.KeyCode
AudioClip = UnityEngine.AudioClip
AudioSource = UnityEngine.AudioSource
Physics = UnityEngine.Physics
Light = UnityEngine.Light
LightType = UnityEngine.LightType
ParticleEmitter = UnityEngine.ParticleEmitter
Space = UnityEngine.Space
CameraClearFlags = UnityEngine.CameraClearFlags
RenderSettings = UnityEngine.RenderSettings
MeshRenderer = UnityEngine.MeshRenderer
WrapMode = UnityEngine.WrapMode
QueueMode = UnityEngine.QueueMode
PlayMode = UnityEngine.PlayMode
ParticleAnimator = UnityEngine.ParticleAnimator
TouchPhase = UnityEngine.TouchPhase
AnimationBlendMode = UnityEngine.AnimationBlendMode
EventSystem=UnityEngine.EventSystems.EventSystem

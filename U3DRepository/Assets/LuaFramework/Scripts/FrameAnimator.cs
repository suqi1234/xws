using UnityEngine;
using UnityEngine.UI;
using System;

/// <summary>
/// ����֡����������
/// ֧��UGUI��Image��Unity2D��SpriteRenderer
/// </summary>
public class FrameAnimator : MonoBehaviour
{
	/// <summary>
	/// ����֡
	/// </summary>
	public Sprite[] Frames{ get { return frames; } set { frames = value; } }

	[SerializeField]private Sprite[] frames = null;

	/// <summary>
	/// ֡�ʣ�Ϊ��ʱ���򲥷ţ�Ϊ��ʱ���򲥷�
	/// </summary>
	public float Framerate { get { return framerate; } set { framerate = value; } }

	[SerializeField] private float framerate = 20.0f;

	/// <summary>
	/// �Ƿ����timeScale
	/// </summary>
	public bool IgnoreTimeScale{ get { return ignoreTimeScale; } set { ignoreTimeScale = value; } }

	[SerializeField]private bool ignoreTimeScale = true;

	/// <summary>
	/// �Ƿ�ѭ��
	/// </summary>
	public bool Loop{ get { return loop; } set { loop = value; } }

	[SerializeField]private bool loop = true;

	//��������
	[SerializeField]private AnimationCurve curve = new AnimationCurve (new Keyframe (0, 1, 0, 0), new Keyframe (1, 1, 0, 0));

	/// <summary>
	/// �����¼�
	/// ��ÿ�β�����һ������ʱ����
	/// ��ѭ��ģʽ�´������¼�ʱ����ǰ֡��һ��Ϊ����֡
	/// </summary>
	public event Action FinishEvent;

	//Ŀ��Image���
	private Image image;
	//Ŀ��SpriteRenderer���
	private SpriteRenderer spriteRenderer;
	//��ǰ֡����
	private int currentFrameIndex = 0;
	//��һ�θ���ʱ��
	private float timer = 0.0f;
	//��ǰ֡�ʣ�ͨ�����߼������
	private float currentFramerate = 20.0f;

	/// <summary>
	/// ���趯��
	/// </summary>
	public void Reset ()
	{
		currentFrameIndex = framerate < 0 ? frames.Length - 1 : 0;
	}

	/// <summary>
	/// ��ֹͣ��λ�ò��Ŷ���
	/// </summary>
	public void Play ()
	{
		this.enabled = true;
	}

	/// <summary>
	/// ��ͣ����
	/// </summary>
	public void Pause ()
	{
		this.enabled = false;
	}

	/// <summary>
	/// ֹͣ��������λ����Ϊ��ʼλ��
	/// </summary>
	public void Stop ()
	{
		Pause ();
		Reset ();
	}
		
	//�Զ���������
	void Start ()
	{
		image = this.GetComponent<Image> ();
		spriteRenderer = this.GetComponent<SpriteRenderer> ();
		#if UNITY_EDITOR
		if (image == null && spriteRenderer == null) {
			Debug.LogWarning ("No available component found. 'Image' or 'SpriteRenderer' required.", this.gameObject);
		}
		#endif
	}

	void Update ()
	{
		//֡������Ч�����ýű�
		if (frames == null || frames.Length == 0) {
			this.enabled = false;
		} else {
			//������ֵ���㵱ǰ֡��
			float curveValue = curve.Evaluate ((float)currentFrameIndex / frames.Length);
			float curvedFramerate = curveValue * framerate;
			//֡����Ч
			if (curvedFramerate != 0) {
				//��ȡ��ǰʱ��
				float time = ignoreTimeScale ? Time.unscaledTime : Time.time;
				//����֡���ʱ��
				float interval = Mathf.Abs (1.0f / curvedFramerate);
				//�������������ִ�и��²���
				if (time - timer > interval) {
					//ִ�и��²���
					DoUpdate ();
				}
			}
			#if UNITY_EDITOR
			else {
				Debug.LogWarning ("Framerate got '0' value, animation stopped.");
			}
			#endif
		}
	}

	//������²���
	private void DoUpdate ()
	{
		//�����µ�����
		int nextIndex = currentFrameIndex + (int)Mathf.Sign (currentFramerate);
		//����Խ�磬��ʾ�Ѿ�������֡
		if (nextIndex < 0 || nextIndex >= frames.Length) {
			//�㲥�¼�
			if (FinishEvent != null) {
				FinishEvent ();
			}
			//��ѭ��ģʽ�����ýű�
			if (loop == false) {
				currentFrameIndex = Mathf.Clamp (currentFrameIndex, 0, frames.Length - 1);
				this.enabled = false;
				return;
			}
		}
		//ǯ������
		currentFrameIndex = nextIndex % frames.Length;
		//����ͼƬ
		if (image != null) {
			image.sprite = frames [currentFrameIndex];
		} else if (spriteRenderer != null) {
			spriteRenderer.sprite = frames [currentFrameIndex];
		}
		//���ü�ʱ��Ϊ��ǰʱ��
		timer = ignoreTimeScale ? Time.unscaledTime : Time.time;
	}
}
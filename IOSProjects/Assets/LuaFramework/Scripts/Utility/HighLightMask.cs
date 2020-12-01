using UnityEngine;
using UnityEngine.UI;

public class HighLightMask : Graphic, UnityEngine.ICanvasRaycastFilter
{
	//设置可点击与不可点击的遮罩..
	public Camera uiCamera = null;
	public RectTransform targetRectTransform = null;
	private Vector3 _targetPosition = Vector3.zero;
	private Vector2 _targetCenter = Vector2.zero;
	private Vector2 _targetSize = Vector2.zero;
	private bool _isValid = false;

	void Update()
	{
		if (uiCamera == null || uiCamera.gameObject == null || targetRectTransform == null || targetRectTransform.gameObject == null || !targetRectTransform.gameObject.activeInHierarchy) {
			if(_isValid){
				_isValid = false;
				SetAllDirty();
			}
			return;
		}
		if(!_isValid){
			_isValid = true;
			SetAllDirty();
		}
		if(_targetPosition != targetRectTransform.position || _targetSize != targetRectTransform.rect.size){
			//target位置或大小改变时重绘
			_targetPosition = targetRectTransform.position;
			RectTransformUtility.ScreenPointToLocalPointInRectangle(rectTransform, RectTransformUtility.WorldToScreenPoint(uiCamera, _targetPosition), uiCamera, out _targetCenter);
			_targetSize = targetRectTransform.rect.size;
			SetAllDirty();
			return;
		}
	}

	public bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
	{
		if (targetRectTransform == null || targetRectTransform.gameObject == null || !targetRectTransform.gameObject.activeInHierarchy) {
			return false;
		}
		bool isRaycastValid = RectTransformUtility.RectangleContainsScreenPoint(targetRectTransform, sp, eventCamera);
		//不捕获镂空区域范围内的点击或触摸事件，捕获其它区域的
		return !isRaycastValid;
	}

	protected override void OnPopulateMesh (VertexHelper vh)
	{
		vh.Clear();

		if(!_isValid){
			return;
		}

		Vector4 outer = new Vector4(-rectTransform.pivot.x * rectTransform.rect.width, 
			-rectTransform.pivot.y * rectTransform.rect.height,
			(1 - rectTransform.pivot.x) * rectTransform.rect.width,
			(1 - rectTransform.pivot.y) * rectTransform.rect.height);
		Vector4 inner = new Vector4(_targetCenter.x - _targetSize.x / 2,
			_targetCenter.y - _targetSize.y / 2,
			_targetCenter.x + _targetSize.x * 0.5f,
			_targetCenter.y + _targetSize.y * 0.5f);

		UIVertex vert = UIVertex.simpleVert;
		//矩形1
		vert.position = new Vector2(outer.x, outer.y); //顶点0
		vert.color = color;
		vh.AddVert(vert);
		vert.position = new Vector2(outer.x, outer.w); //顶点1
		vert.color = color;
		vh.AddVert(vert);
		vert.position = new Vector2(inner.x, outer.w); //顶点2
		vert.color = color;
		vh.AddVert(vert);
		vert.position = new Vector2(inner.x, outer.y); //顶点3
		vert.color = color;
		vh.AddVert(vert);
		//矩形2
		vert.position = new Vector2(inner.x, inner.w); //顶点4
		vert.color = color;
		vh.AddVert(vert);
		vert.position = new Vector2(inner.x, outer.w); //顶点5
		vert.color = color;
		vh.AddVert(vert);
		vert.position = new Vector2(inner.z, outer.w); //顶点6
		vert.color = color;
		vh.AddVert(vert);
		vert.position = new Vector2(inner.z, inner.w); //顶点7
		vert.color = color;
		vh.AddVert(vert);
		//矩形3
		vert.position = new Vector2(inner.z, outer.y); //顶点8
		vert.color = color;
		vh.AddVert(vert);
		vert.position = new Vector2(inner.z, outer.w); //顶点9
		vert.color = color;
		vh.AddVert(vert);
		vert.position = new Vector2(outer.z, outer.w); //顶点10
		vert.color = color;
		vh.AddVert(vert);
		vert.position = new Vector2(outer.z, outer.y); //顶点11
		vert.color = color;
		vh.AddVert(vert);
		//矩形4
		vert.position = new Vector2(inner.x, outer.y); //顶点12
		vert.color = color;
		vh.AddVert(vert);
		vert.position = new Vector2(inner.x, inner.y); //顶点13
		vert.color = color;
		vh.AddVert(vert);
		vert.position = new Vector2(inner.z, inner.y); //顶点14
		vert.color = color;
		vh.AddVert(vert);
		vert.position = new Vector2(inner.z, outer.y); //顶点15
		vert.color = color;
		vh.AddVert(vert);

		//矩形1的两个三角形
		vh.AddTriangle (0, 1, 2);
		vh.AddTriangle (2, 3, 0);

		//矩形2的两个三角形
		vh.AddTriangle (4, 5, 6);
		vh.AddTriangle (6, 7, 4);

		//矩形3的两个三角形
		vh.AddTriangle (8, 9, 10);
		vh.AddTriangle (10, 11, 8);

		//矩形4的两个三角形
		vh.AddTriangle (12, 13, 14);
		vh.AddTriangle (14, 15, 12);
	}
}
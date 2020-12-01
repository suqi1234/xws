using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using LuaInterface;
public class AnimationCurveManager : MonoBehaviour
{

    [System.Serializable]
    public class CurveInfo
    {
        public string name;
        public AnimationCurve curve;
    }
    public List<CurveInfo> curveInfoList = new List<CurveInfo>();
    Dictionary<string, AnimationCurve> curveInfoListMap = new Dictionary<string, AnimationCurve>();

    void Awake()
    {
        for(int i = 0; i < curveInfoList.Count;++i)
        {
            AnimationCurve cur;
            if (!curveInfoListMap.TryGetValue(curveInfoList[i].name, out cur))
            {
                curveInfoListMap.Add(curveInfoList[i].name, curveInfoList[i].curve);
            }
            else
            {
                Debug.LogError("有重复的动画文件名");
            }
           
        }
    }

    public AnimationCurve GetAnimationCurve(string name)
    {
        AnimationCurve cur;
        if (curveInfoListMap.TryGetValue(name, out cur))
        {
            return cur;
        }
        return null;
    }
    //遍历获取动画
    public void Traverse(LuaFunction fun)
    {
        if (fun == null)
        {
            return;
        }
        for (int i = 0; i < curveInfoList.Count; ++i)
        {
            object[] obj = { curveInfoList[i].name, curveInfoList[i].curve };
            fun.Call((object)obj);
        }
    }


}

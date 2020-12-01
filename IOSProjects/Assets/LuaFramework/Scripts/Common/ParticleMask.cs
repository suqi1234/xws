using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class ParticleMask : MonoBehaviour
{
    public RectMask2D mask;
    public Material mt;
    ParticleSystem ps;
    private void Awake()
    { 
        try {

            mt = GetComponent<ParticleSystem>().GetComponent<Renderer>().material;
             if (mt != null)
             {
                ps = GetComponent<ParticleSystem>();
             }
            }
        catch {
          
            if (mt == null)
            {
                mt = GetComponent<MeshRenderer>().material;
            }
        }
        mask = GetComponentInParent<RectMask2D>();
        GetComponentInParent<ScrollRect>().onValueChanged.AddListener((e) => { setClip(); });
        setClip();
    }
    void OnEnable()
    {
        if (ps != null)
        {
            ps.Stop();
            ps.Play();
        }
        //gameObject.SetActive(false);
        //gameObject.SetActive(true);
        setClip();
        //StartCoroutine(Reset());
    }
    //IEnumerator Reset()
    //{
    //    yield return new WaitForSeconds(1f);
    //    if (ps != null)
    //    {
    //        ps.Stop();
    //        ps.Play();
    //    }
    //    //gameObject.SetActive(false);
    //    //gameObject.SetActive(true);
    //    setClip();
    //}
    void setClip()
    {
        Vector3[] wc = new Vector3[4];
        mask.GetComponent<RectTransform>().GetWorldCorners(wc);
        var clipRect = new Vector4(wc[0].x, wc[0].y, wc[2].x, wc[2].y);
        mt.SetVector("_ClipRect", clipRect);                           
        mt.SetFloat("_UseClipRect", 1.0f);                            
    }
}

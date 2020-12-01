// Shader created with Shader Forge v1.37 
// Shader Forge (c) Neat Corporation / Joachim Holmer - http://www.acegikmo.com/shaderforge/
// Note: Manually altering this data may prevent you from opening it in Shader Forge
/*SF_DATA;ver:1.37;sub:START;pass:START;ps:flbk:,iptp:0,cusa:False,bamd:0,cgin:,lico:1,lgpr:1,limd:0,spmd:1,trmd:0,grmd:0,uamb:True,mssp:True,bkdf:False,hqlp:False,rprd:False,enco:False,rmgx:True,imps:True,rpth:0,vtps:0,hqsc:True,nrmq:1,nrsp:0,vomd:0,spxs:False,tesm:0,olmd:1,culm:0,bsrc:0,bdst:0,dpts:2,wrdp:False,dith:0,atcv:False,rfrpo:True,rfrpn:Refraction,coma:15,ufog:False,aust:True,igpj:True,qofs:0,qpre:3,rntp:2,fgom:False,fgoc:False,fgod:False,fgor:False,fgmd:0,fgcr:0.5,fgcg:0.5,fgcb:0.5,fgca:1,fgde:0.01,fgrn:0,fgrf:300,stcl:False,stva:128,stmr:255,stmw:255,stcp:6,stps:0,stfa:0,stfz:0,ofsf:0,ofsu:0,f2p0:False,fnsp:False,fnfb:False,fsmp:False;n:type:ShaderForge.SFN_Final,id:3138,x:33114,y:32745,varname:node_3138,prsc:2|emission-1443-OUT,alpha-9008-OUT;n:type:ShaderForge.SFN_Tex2d,id:4458,x:32129,y:32945,ptovrint:False,ptlb:alpha,ptin:_alpha,varname:node_4458,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,tex:c80c1946a8ddf1342a50da09bacdb1a7,ntxv:0,isnm:False;n:type:ShaderForge.SFN_Tex2d,id:9717,x:32129,y:32725,ptovrint:False,ptlb:Maintex,ptin:_Maintex,varname:node_9717,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,tex:9ef5b0db5e239d049a168d704443c96d,ntxv:0,isnm:False|UVIN-7209-UVOUT;n:type:ShaderForge.SFN_Multiply,id:567,x:32536,y:32734,varname:node_567,prsc:2|A-7262-OUT,B-9717-A,C-1867-OUT;n:type:ShaderForge.SFN_ValueProperty,id:7262,x:32273,y:32631,ptovrint:False,ptlb:liangdu,ptin:_liangdu,varname:node_7262,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:1;n:type:ShaderForge.SFN_Multiply,id:2700,x:32731,y:32674,varname:node_2700,prsc:2|A-8020-RGB,B-567-OUT;n:type:ShaderForge.SFN_Color,id:8020,x:32521,y:32528,ptovrint:False,ptlb:color,ptin:_color,varname:node_8020,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,c1:0.5,c2:0.5,c3:0.5,c4:1;n:type:ShaderForge.SFN_Multiply,id:9008,x:32683,y:32977,varname:node_9008,prsc:2|A-8020-B,B-4458-A;n:type:ShaderForge.SFN_Multiply,id:1867,x:32357,y:32915,varname:node_1867,prsc:2|A-4458-R,B-4458-A;n:type:ShaderForge.SFN_VertexColor,id:9582,x:31672,y:32747,varname:node_9582,prsc:2;n:type:ShaderForge.SFN_Panner,id:7209,x:31956,y:32679,varname:node_7209,prsc:2,spu:2,spv:0|UVIN-1464-UVOUT,DIST-9582-A;n:type:ShaderForge.SFN_TexCoord,id:1464,x:31672,y:32593,varname:node_1464,prsc:2,uv:0,uaff:False;n:type:ShaderForge.SFN_Multiply,id:1443,x:32916,y:32817,varname:node_1443,prsc:2|A-1783-OUT,B-2700-OUT,C-9582-RGB;n:type:ShaderForge.SFN_ComponentMask,id:1783,x:32916,y:32607,varname:node_1783,prsc:2,cc1:0,cc2:-1,cc3:-1,cc4:-1|IN-2700-OUT;proporder:4458-9717-7262-8020;pass:END;sub:END;*/

Shader "Shader Forge/liuguang_shader" {
	Properties{
		_alpha("alpha", 2D) = "white" {}
		_Maintex("Maintex", 2D) = "white" {}
		_MainTex("MainTex", 2D) = "white" {}
		_liangdu("liangdu", Float) = 1
		_color("color", Color) = (0.5,0.5,0.5,1)

	    _Stencil("Maintex", 2D) = "white" {}
		_StencilOp("Maintex", 2D) = "white" {}
		_StencilComp("Maintex", 2D) = "white" {}
		_StencilReadMask("Maintex", 2D) = "white" {}
		_StencilWriteMask("Maintex", 2D) = "white" {}
		_ColorMask("Maintex", 2D) = "white" {}

		[HideInInspector]_Cutoff("Alpha cutoff", Range(0,1)) = 0.5
	}
		SubShader{
			Tags {
				"IgnoreProjector" = "True"
				"Queue" = "Transparent"
				"RenderType" = "Transparent"
				"CanUseSpriteAtlas" = "True"
				"PreviewType" = "Plane"
			}
			Pass {
				Name "FORWARD"
				Tags {
					"LightMode" = "ForwardBase"
				}
			Blend SrcAlpha One
			ZWrite Off
				CGPROGRAM
				#pragma vertex vert
				#pragma fragment frag
				#define UNITY_PASS_FORWARDBASE
				#include "UnityCG.cginc"
				#include "UnityUI.cginc"
				#pragma multi_compile_fwdbase
				#pragma only_renderers d3d9 d3d11 glcore gles gles3 metal d3d11_9x  opengl
				#pragma target 3.0  

				uniform sampler2D _alpha; uniform float4 _alpha_ST;
				uniform sampler2D _Maintex; uniform float4 _Maintex_ST;
				uniform float _liangdu;
				uniform float4 _color;
				float4 _ClipRect;
				float _UseClipRect;
				struct VertexInput {
					float4 vertex : POSITION;
					float2 texcoord0 : TEXCOORD0;
					float4 vertexColor : COLOR;
				};
				struct VertexOutput {
					float4 pos : SV_POSITION;
					float2 uv0 : TEXCOORD0;
					float4 vertexColor : COLOR;
					float4 worldPosition : TEXCOORD1;
				};
				VertexOutput vert(VertexInput v) {
					VertexOutput o = (VertexOutput)0;
					o.uv0 = v.texcoord0;
					o.vertexColor = v.vertexColor;
					o.pos = UnityObjectToClipPos(v.vertex);
					o.worldPosition = v.vertex;
					return o;
				}
				float4 frag(VertexOutput i) : COLOR {
									float2 node_7209 = (i.uv0 + i.vertexColor.a * float2(2,0));
									float4 _Maintex_var = tex2D(_Maintex,TRANSFORM_TEX(node_7209, _Maintex));
									float4 _alpha_var = tex2D(_alpha,TRANSFORM_TEX(i.uv0, _alpha));
									float3 node_2700 = (_color.rgb * (_liangdu * _Maintex_var.a * (_alpha_var.r * _alpha_var.a)));
									float3 emissive = (node_2700.r * node_2700 * i.vertexColor.rgb);
									float3 finalColor = emissive;
									float4 color = fixed4(finalColor,(_color.b * _alpha_var.a));
									color.a *= UnityGet2DClipping(i.worldPosition.xy, _ClipRect);
									clip(color.a);
					#ifdef UNITY_UI_ALPHACLIP
									clip(color.a - 0.001);
					#endif

									return color;
								}
								ENDCG
							}
		}
			FallBack "Diffuse"
			CustomEditor "ShaderForgeMaterialInspector"
}

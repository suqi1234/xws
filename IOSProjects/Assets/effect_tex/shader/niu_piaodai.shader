// Shader created with Shader Forge v1.37 
// Shader Forge (c) Neat Corporation / Joachim Holmer - http://www.acegikmo.com/shaderforge/
// Note: Manually altering this data may prevent you from opening it in Shader Forge
/*SF_DATA;ver:1.37;sub:START;pass:START;ps:flbk:,iptp:1,cusa:True,bamd:0,cgin:,lico:1,lgpr:1,limd:0,spmd:1,trmd:0,grmd:0,uamb:True,mssp:True,bkdf:False,hqlp:False,rprd:False,enco:False,rmgx:True,imps:True,rpth:0,vtps:0,hqsc:True,nrmq:1,nrsp:0,vomd:0,spxs:True,tesm:0,olmd:1,culm:0,bsrc:3,bdst:7,dpts:2,wrdp:False,dith:0,atcv:False,rfrpo:True,rfrpn:Refraction,coma:15,ufog:False,aust:True,igpj:True,qofs:0,qpre:3,rntp:2,fgom:False,fgoc:False,fgod:False,fgor:False,fgmd:0,fgcr:0.5,fgcg:0.5,fgcb:0.5,fgca:1,fgde:0.01,fgrn:0,fgrf:300,stcl:False,stva:128,stmr:255,stmw:255,stcp:6,stps:0,stfa:0,stfz:0,ofsf:0,ofsu:0,f2p0:False,fnsp:False,fnfb:False,fsmp:False;n:type:ShaderForge.SFN_Final,id:1873,x:33229,y:32719,varname:node_1873,prsc:2|emission-3378-RGB,alpha-3378-A;n:type:ShaderForge.SFN_Tex2d,id:3378,x:32901,y:32853,ptovrint:False,ptlb:Maintex,ptin:_Maintex,varname:node_3378,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,tex:050eafbed82e5e24fba11d49f4b02f3e,ntxv:0,isnm:False|UVIN-2720-OUT;n:type:ShaderForge.SFN_Add,id:2720,x:32683,y:32853,varname:node_2720,prsc:2|A-3926-UVOUT,B-1152-OUT;n:type:ShaderForge.SFN_TexCoord,id:3926,x:32671,y:32671,varname:node_3926,prsc:2,uv:0,uaff:False;n:type:ShaderForge.SFN_Tex2d,id:5145,x:32409,y:32993,ptovrint:False,ptlb:noise,ptin:_noise,varname:node_5145,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,tex:28c7aad1372ff114b90d330f8a2dd938,ntxv:0,isnm:False|UVIN-4608-UVOUT;n:type:ShaderForge.SFN_Panner,id:4608,x:32235,y:32993,varname:node_4608,prsc:2,spu:2,spv:0|UVIN-9422-UVOUT,DIST-5352-A;n:type:ShaderForge.SFN_TexCoord,id:9422,x:32019,y:32894,varname:node_9422,prsc:2,uv:0,uaff:False;n:type:ShaderForge.SFN_VertexColor,id:5352,x:32019,y:33089,varname:node_5352,prsc:2;n:type:ShaderForge.SFN_Multiply,id:4126,x:32683,y:33048,varname:node_4126,prsc:2|A-5145-RGB,B-5631-OUT;n:type:ShaderForge.SFN_ValueProperty,id:5631,x:32437,y:33186,ptovrint:False,ptlb:noise_qiangdu,ptin:_noise_qiangdu,varname:node_5631,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:0.1;n:type:ShaderForge.SFN_Tex2d,id:136,x:32223,y:32690,ptovrint:False,ptlb:noise_alpha,ptin:_noise_alpha,varname:node_136,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,ntxv:0,isnm:False;n:type:ShaderForge.SFN_Multiply,id:1152,x:32453,y:32765,varname:node_1152,prsc:2|A-136-R,B-4126-OUT;proporder:3378-5145-5631-136;pass:END;sub:END;*/

Shader "Shader Forge/niu_piaodai" {
	Properties{
		_Maintex("Maintex", 2D) = "white" {}
	    _MainTex("MainTex", 2D) = "white" {}
		_noise("noise", 2D) = "white" {}
		_noise_qiangdu("noise_qiangdu", Float) = 0.1
		_noise_alpha("noise_alpha", 2D) = "white" {}

		_Stencil("Maintex", 2D) = "white" {}
		_StencilOp("Maintex", 2D) = "white" {}
		_StencilComp("Maintex", 2D) = "white" {}
		_StencilReadMask("Maintex", 2D) = "white" {}
		_StencilWriteMask("Maintex", 2D) = "white" {}
		_ColorMask("Maintex", 2D) = "white" {}

		[HideInInspector]_Cutoff("Alpha cutoff", Range(0,1)) = 0.5
		[MaterialToggle] PixelSnap("Pixel snap", Float) = 0
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
			Blend SrcAlpha OneMinusSrcAlpha
			ZWrite Off

			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#define UNITY_PASS_FORWARDBASE
			#pragma multi_compile _ PIXELSNAP_ON
			#include "UnityCG.cginc"
			#include "UnityUI.cginc"
			#pragma multi_compile_fwdbase
			#pragma only_renderers d3d9 d3d11 glcore gles gles3 metal d3d11_9x 
			#pragma target 3.0
			uniform sampler2D _Maintex; uniform float4 _Maintex_ST;
			uniform sampler2D _noise; uniform float4 _noise_ST;
			uniform float _noise_qiangdu;
			uniform sampler2D _noise_alpha; uniform float4 _noise_alpha_ST;
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
				#ifdef PIXELSNAP_ON
					o.pos = UnityPixelSnap(o.pos);
				#endif
				return o;
			}
			float4 frag(VertexOutput i) : COLOR {
								float4 _noise_alpha_var = tex2D(_noise_alpha,TRANSFORM_TEX(i.uv0, _noise_alpha));
								float2 node_4608 = (i.uv0 + i.vertexColor.a * float2(2,0));
								float4 _noise_var = tex2D(_noise,TRANSFORM_TEX(node_4608, _noise));
								float3 node_2720 = (float3(i.uv0,0.0) + (_noise_alpha_var.r * (_noise_var.rgb * _noise_qiangdu)));
								float4 _Maintex_var = tex2D(_Maintex,TRANSFORM_TEX(node_2720, _Maintex));
								float3 emissive = _Maintex_var.rgb;
								float3 finalColor = emissive;
								float4 color = fixed4(finalColor,_Maintex_var.a);
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

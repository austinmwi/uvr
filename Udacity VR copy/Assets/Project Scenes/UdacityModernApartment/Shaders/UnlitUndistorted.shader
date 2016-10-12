Shader "Udacity/UnlitUndistorted"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
	}
	SubShader
	{
		Tags { "RenderType"="Opaque" }
		LOD 100

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			
			#pragma multi_compile __ CARDBOARD_DISTORTION   
			#include "CardboardDistortion.cginc"
			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
				float2 uv2 : TEXCOORD1;			
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				float2 uv2 : TEXCOORD1;
				float4 vertex : SV_POSITION;
			};

			sampler2D _MainTex;
			float4 _MainTex_ST;

			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = undistortVertex(v.vertex);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				// #define TRANSFORM_TEX(tex,name) (tex.xy * name##_ST.xy + name##_ST.zw)
				o.uv2 = v.uv2.xy * unity_LightmapST.xy + unity_LightmapST.zw;
				return o;
			}

			fixed4 frag (v2f i) : SV_Target
			{
				fixed4 col = tex2D(_MainTex, i.uv);

				 // Decodes lightmaps:
				// - doubleLDR encoded on GLES
				// - RGBM encoded with range [0;8] on other platforms using surface shaders
				// inline fixed3 DecodeLightmap(fixed4 color) {
				// #if defined(SHADER_API_GLES) && defined(SHADER_API_MOBILE)
				// return 2.0 * color.rgb;
				// #else
				// return (8.0 * color.a) * color.rgb;
				// #endif
				// }
				col.rgb *= DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uv2));
							
				// reduce contrast and tint
				col.rgb *= 0.5;
				col.rgb += fixed3(0.13, 0.1, 0.15);
				
				// vignette test
				//float2 screenSpace = i.vertex.xy / _ScreenParams.xy;
				//float2 sbsSpace = float2(frac(screenSpace.x), screenSpace.y * 0.85);
				//float vignette = distance(float2(0.5, 0.5), sbsSpace);
				//col -= vignette * 0.7;

				return col;
			}
			ENDCG
		}
	}
}

using UnityEngine;
using System.Collections;
using UnityEditor;
using System.IO;
using System.Collections.Generic;

public class ChangeImage : MonoBehaviour {
	static List<string> paths = new List<string>();
	
	// Use this for initialization
	[MenuItem("Assets/EditTexture")]
	static void EditTexture() {
		string[] path = Selection.assetGUIDs;
		string SelectPath = AssetDatabase.GUIDToAssetPath(path[0]);
		Debug.Log(SelectPath);
		Debug.Log("EditTexture Start");
		Recursive(SelectPath);
		Debug.Log("EditTexture End");

    }
	static void Recursive(string path) {
        string[] names = Directory.GetFiles(path);
        
        string[] dirs = Directory.GetDirectories(path);

        foreach (string filename in names) {
            string ext = Path.GetExtension(filename);
            if (ext.Equals(".png") || ext.Equals(".jpg")){
				TextureImporter texture = AssetImporter.GetAtPath(filename) as TextureImporter;
				if(texture)
				{
					//Debug.Log(filename);
					//texture.SetPlatformTextureSettings("Android",2048,TextureImporterFormat.ETC2_RGBA8);
					texture.SetPlatformTextureSettings("Android",2048,TextureImporterFormat.ETC_RGB4,50,true);
					texture.SetPlatformTextureSettings("iPhone",2048,TextureImporterFormat.ASTC_RGBA_4x4);
					texture.SetPlatformTextureSettings("Standalone",8192,TextureImporterFormat.RGBA32,100,false);

					/*string PackTagName = path.Replace("Assets/Art/","");
					PackTagName = PackTagName.Replace("\\","");
					texture.spritePackingTag = PackTagName;*/
				}
			}

        }
        foreach (string dir in dirs) {
            paths.Add(dir.Replace('\\', '/'));
            Recursive(dir);
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using System.IO;

public class CreatePrefabs : EditorWindow
{

	[MenuItem("Assets/CreatePrefabs")]
    static void CreateAllPrefab()
    {
		string[] path = Selection.assetGUIDs;
		string SelectPath = AssetDatabase.GUIDToAssetPath(path[0]);
		Debug.Log(SelectPath);

		DirectoryInfo dirinfo = new DirectoryInfo(SelectPath);
		if (!Directory.Exists(SelectPath + "Prefab/"))
		{
			Directory.CreateDirectory(SelectPath + "Prefab/");
		}
		foreach (FileInfo info in dirinfo.GetFiles("*.mp3"))
		{
			
			
			string allPath = info.FullName;
			string assetPath = allPath.Substring(allPath.IndexOf("Assets"));
			AudioClip audioclip = AssetDatabase.LoadAssetAtPath<AudioClip>(assetPath);
			GameObject go = new GameObject(audioclip.name);
			go.AddComponent<AudioSource>().clip = audioclip;
			allPath = SelectPath + "Prefab/" + audioclip.name + ".prefab";
			string prefabPath = allPath.Substring(allPath.IndexOf("Assets"));
			PrefabUtility.CreatePrefab(prefabPath, go);
			GameObject.DestroyImmediate(go);
		}
		foreach (FileInfo info in dirinfo.GetFiles("*.png"))
		{

			
			string allPath = info.FullName;
			string assetPath = allPath.Substring(allPath.IndexOf("Assets"));
			Sprite sprite = AssetDatabase.LoadAssetAtPath<Sprite>(assetPath);
			GameObject go = new GameObject(sprite.name);
			go.AddComponent<SpriteRenderer>().sprite = sprite;
			allPath = SelectPath + "Prefab/" + sprite.name + ".prefab";
			string prefabPath = allPath.Substring(allPath.IndexOf("Assets"));
			PrefabUtility.CreatePrefab(prefabPath, go);
			GameObject.DestroyImmediate(go);
		}
		foreach (FileInfo info in dirinfo.GetFiles("*.jpg"))
		{


			string allPath = info.FullName;
			string assetPath = allPath.Substring(allPath.IndexOf("Assets"));
			Sprite sprite = AssetDatabase.LoadAssetAtPath<Sprite>(assetPath);
			GameObject go = new GameObject(sprite.name);
			go.AddComponent<SpriteRenderer>().sprite = sprite;
			allPath = SelectPath + "Prefab/" + sprite.name + ".prefab";
			string prefabPath = allPath.Substring(allPath.IndexOf("Assets"));
			PrefabUtility.CreatePrefab(prefabPath, go);
			GameObject.DestroyImmediate(go);
		}
		foreach (FileInfo info in dirinfo.GetFiles("*.controller"))
		{
			string allPath = info.FullName;
			string assetPath = allPath.Substring(allPath.IndexOf("Assets"));
			RuntimeAnimatorController animcontroler = AssetDatabase.LoadAssetAtPath<RuntimeAnimatorController>(assetPath);
			GameObject go = new GameObject(animcontroler.name);
			go.AddComponent<Animator>().runtimeAnimatorController = animcontroler;
			allPath = SelectPath + "Prefab/" + animcontroler.name + ".prefab";
			string prefabPath = allPath.Substring(allPath.IndexOf("Assets"));
			PrefabUtility.CreatePrefab(prefabPath, go);
			GameObject.DestroyImmediate(go);
		}
		AssetDatabase.Refresh();
	}
}

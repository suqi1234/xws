using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using LuaInterface;
using UnityEngine.SceneManagement;

namespace LuaFramework
{
    public class ScenesManager : Manager
    {
        private AsyncOperation async_operation;
        private string SceneName;
        public void CreateScene(string sceneName, LuaFunction func = null, LuaTable Data = null)
        {
            if (SceneManager.GetActiveScene().name == sceneName)
            {
                if (func != null) func.Call(Data);
                return;
            }
            Debug.LogWarning("CreateScene::>> " + sceneName);
            SceneName = sceneName;
            string assetName = sceneName ;
            string abName = sceneName.ToLower() + "scene" + AppConst.ExtName;
            ResManager.LoadScenePrefab(abName);
            {
                StartCoroutine(LoadScene(sceneName, func, Data));
            }
        }
        //异步加载场景
        IEnumerator LoadScene(string scene_name,LuaFunction func = null, LuaTable Data = null)
        {
            async_operation = SceneManager.LoadSceneAsync(scene_name);
            async_operation.allowSceneActivation = false;
            yield return async_operation;
            if (func != null) func.Call(Data);
            Debug.LogWarning("CreateScene::>> " + scene_name + " " + async_operation);
        }

        void Update()
        {
            if (async_operation == null)
            {
                // 如果没加载完，就跳出update方法，不继续执行return下面的代码  
                return;
            }
            // 进度条需要到达的进度值
            uint toProcess;
            // async.progress 你正在读取的场景的进度值  0---0.9  
            // 如果当前的进度小于0.9，说明它还没有加载完成，就说明进度条还需要移动  
            // 如果，场景的数据加载完毕，async.progress 的值就会等于0.9  
            if (async_operation.progress < 0.9f)
            {
                //  进度值
                Debug.Log("进度值" + async_operation.progress * 100);
                toProcess = (uint)(async_operation.progress * 100);
            }
            // 如果能执行到这个else，说明已经加载完毕  
            else
            {
                Debug.Log("进度值" + async_operation.progress * 100);
                if (SceneName != null)
                {
                }
                // 手动设置进度值为100
                toProcess = 100;
            }

            // 如果滑动条的值等于100，说明加载完毕  
            if (toProcess == 100)
            {
                // 设置为true的时候，如果场景数据加载完毕，就可以自动跳转场景  
                async_operation.allowSceneActivation = true;
                async_operation = null;
            }
        }
    }
}

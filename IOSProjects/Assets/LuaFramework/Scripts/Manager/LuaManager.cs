using UnityEngine;
using System.Collections;
using LuaInterface;
using System.Collections.Generic;
using System;

namespace LuaFramework {
    public class LuaManager : Manager {
        private LuaState lua;
        private LuaLoader loader;
        private LuaLooper loop = null;
        private List<string> luaNameList = new List<string>();
        // Use this for initialization
        void Awake() {
            loader = new LuaLoader();
            lua = new LuaState();
            this.OpenLibs();
            lua.LuaSetTop(0);
            luaNameList.Clear();
            LuaBinder.Bind(lua);
            LuaCoroutine.Register(lua, this);
        }

        public void InitStart() {
            Debug.Log("init lua path");
            InitLuaPath();
            string[] luatable = { 
				"lua/lua.unity3d",
                "lua/lua_math.unity3d",
                "lua/lua_system.unity3d",
                "lua/lua_system_reflection.unity3d",
                "lua/lua_unityengine.unity3d",
                "lua/lua_common.unity3d",
                "lua/lua_logic.unity3d",
                "lua/lua_view.unity3d",
                "lua/lua_view_childview.unity3d",
                "lua/lua_controller.unity3d",
                "lua/lua_misc.unity3d",
                "lua/lua_mode.unity3d",
                "lua/lua_protobuf.unity3d",
                "lua/lua_3rd_pbc.unity3d",
                "lua/lua_3rd_cjson.unity3d",
                "lua/lua_language.unity3d",
                "lua/lua_config.unity3d",
                "lua/lua_config_hall.unity3d",
            };
            InitLuaBundle(luatable);
            this.lua.Start();    //启动LUAVM
            this.StartMain();
            this.StartLooper();
        }

        void StartLooper() {
            loop = gameObject.AddComponent<LuaLooper>();
            loop.luaState = lua;
        }

        void StartMain() {
            lua.DoFile("Main.lua");
            LuaFunction main = lua.GetFunction("Main");
            main.Call();
            main.Dispose();
            main = null;
        }
        
        /// <summary>
        /// 初始化加载第三方库
        /// </summary>
        void OpenLibs() {
            lua.OpenLibs(LuaDLL.luaopen_pb);      
            //lua.OpenLibs(LuaDLL.luaopen_sproto_core);
            lua.OpenLibs(LuaDLL.luaopen_protobuf_c);
            lua.OpenLibs(LuaDLL.luaopen_lpeg);
            lua.OpenLibs(LuaDLL.luaopen_bit);
            lua.OpenLibs(LuaDLL.luaopen_socket_core);
            //luaide socket 开启
            this.OpenLuaSocket();
            //end luaide        
            this.OpenCJson();
        }

        //cjson 比较特殊，只new了一个table，没有注册库，这里注册一下
        protected void OpenCJson()
        {
            lua.LuaGetField(LuaIndexes.LUA_REGISTRYINDEX, "_LOADED");
            lua.OpenLibs(LuaDLL.luaopen_cjson);
            lua.LuaSetField(-2, "cjson");
            lua.OpenLibs(LuaDLL.luaopen_cjson_safe);
            lua.LuaSetField(-2, "cjson.safe");
        }

        /// <summary>
        /// 初始化Lua代码加载路径
        /// </summary>
        void InitLuaPath() {
            if (AppConst.DebugMode) {
                string rootPath = AppConst.FrameworkRoot;
                lua.AddSearchPath(rootPath + "/Lua");
                lua.AddSearchPath(rootPath + "/ToLua/Lua");
            } else {
                lua.AddSearchPath(Util.DataPath + "lua");
            }
        }

        /// <summary>
        /// 初始化LuaBundle
        /// </summary>
        public void InitLuaBundle(string [] luatable) {
            if (loader.beZip) {
                for (int i = 0; i < luatable.Length; i++)
                {
                    if(!luaNameList.Contains(luatable[i]))
                    {
                        luaNameList.Add(luatable[i]);
                        loader.AddBundle(luatable[i]);
                    }
                    
                }
            }
        }

		/// <summary>
		/// 载入素材  
		/// </summary>
		public AssetBundle LoadBundle(string name) {
			return loader.LoadBundle(name);
		}



        public void DoFile(string filename) {
            lua.DoFile(filename);
        }

        // Update is called once per frame
        public void CallFunction(string funcName, params object[] args) {
            LuaFunction func = lua.GetFunction(funcName);
            if (func != null) {
               func.Call(args);
            }
        }

        public void LuaGC() {
            lua.LuaGC(LuaGCOptions.LUA_GCCOLLECT);
        }

        public void Close() {
			if (loop != null){
				loop.Destroy ();
				loop = null;
			}
			if (lua != null) {
				lua.Dispose ();
				lua = null;
			}
            loader = null;
        }
        #region luaide 调试库添加
        //如果项目中没有luasocket 请打开
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int LuaOpen_Socket_Core(IntPtr L)
        {
            return LuaDLL.luaopen_socket_core(L);
        }
        protected void OpenLuaSocket()
        {
            LuaConst.openLuaSocket = true;
            lua.BeginPreLoad();
            lua.RegFunction("socket.core", LuaOpen_Socket_Core);
            lua.EndPreLoad();
        }
        #endregion
    }
}
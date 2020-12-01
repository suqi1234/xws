﻿//this source code was auto-generated by tolua#, do not modify it
using System;
using LuaInterface;

public class LuaFramework_NetworkManagerWrap
{
	public static void Register(LuaState L)
	{
		L.BeginClass(typeof(LuaFramework.NetworkManager), typeof(Manager));
		L.RegFunction("OnInit", OnInit);
		L.RegFunction("Unload", Unload);
		L.RegFunction("CallMethod", CallMethod);
		L.RegFunction("AddEvent", AddEvent);
		L.RegFunction("BeginSendHeart", BeginSendHeart);
		L.RegFunction("SendHeart", SendHeart);
		L.RegFunction("SendConnect", SendConnect);
		L.RegFunction("SendMessageBf", SendMessageBf);
		L.RegFunction("SendMessage", SendMessage);
		L.RegFunction("RemoveSocket", RemoveSocket);
		L.RegFunction("GetWebMusic", GetWebMusic);
		L.RegFunction("GetLoadBgFile", GetLoadBgFile);
		L.RegFunction("GetLoadHeaderFile", GetLoadHeaderFile);
		L.RegFunction("OnDownAsset", OnDownAsset);
		L.RegFunction("ExitDown", ExitDown);
		L.RegFunction("StartWWWLoadMusic", StartWWWLoadMusic);
		L.RegFunction("Close", Close);
		L.RegFunction("AddGameSocket", AddGameSocket);
		L.RegFunction("SendGameConnect", SendGameConnect);
		L.RegFunction("SendMessageGame", SendMessageGame);
		L.RegFunction("BeginSendGameHeart", BeginSendGameHeart);
		L.RegFunction("SendGameHeart", SendGameHeart);
		L.RegFunction("RemoveGameSocket", RemoveGameSocket);
		L.RegFunction("isSocketStats", isSocketStats);
		L.RegFunction("__eq", op_Equality);
		L.RegFunction("__tostring", ToLua.op_ToString);
		L.EndClass();
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int OnInit(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			obj.OnInit();
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int Unload(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			obj.Unload();
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int CallMethod(IntPtr L)
	{
		try
		{
			int count = LuaDLL.lua_gettop(L);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			string arg0 = ToLua.CheckString(L, 2);
			object[] arg1 = ToLua.ToParamsObject(L, 3, count - 2);
			obj.CallMethod(arg0, arg1);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int AddEvent(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 2);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 1);
			LuaFramework.ByteBuffer arg1 = (LuaFramework.ByteBuffer)ToLua.CheckObject<LuaFramework.ByteBuffer>(L, 2);
			LuaFramework.NetworkManager.AddEvent(arg0, arg1);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int BeginSendHeart(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			obj.BeginSendHeart();
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int SendHeart(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			obj.SendHeart();
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int SendConnect(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 3);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			string arg0 = ToLua.CheckString(L, 2);
			int arg1 = (int)LuaDLL.luaL_checknumber(L, 3);
			obj.SendConnect(arg0, arg1);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int SendMessageBf(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 3);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			short arg0 = (short)LuaDLL.luaL_checknumber(L, 2);
			LuaByteBuffer arg1 = new LuaByteBuffer(ToLua.CheckByteBuffer(L, 3));
			obj.SendMessageBf(arg0, arg1);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int SendMessage(IntPtr L)
	{
		try
		{
			int count = LuaDLL.lua_gettop(L);

			if (count == 2 && TypeChecker.CheckTypes<string>(L, 2))
			{
				LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
				string arg0 = ToLua.ToString(L, 2);
				obj.SendMessage(arg0);
				return 0;
			}
			else if (count == 2 && TypeChecker.CheckTypes<LuaFramework.ByteBuffer>(L, 2))
			{
				LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
				LuaFramework.ByteBuffer arg0 = (LuaFramework.ByteBuffer)ToLua.ToObject(L, 2);
				obj.SendMessage(arg0);
				return 0;
			}
			else if (count == 3 && TypeChecker.CheckTypes<UnityEngine.SendMessageOptions>(L, 3))
			{
				LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
				string arg0 = ToLua.CheckString(L, 2);
				UnityEngine.SendMessageOptions arg1 = (UnityEngine.SendMessageOptions)ToLua.ToObject(L, 3);
				obj.SendMessage(arg0, arg1);
				return 0;
			}
			else if (count == 3 && TypeChecker.CheckTypes<object>(L, 3))
			{
				LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
				string arg0 = ToLua.CheckString(L, 2);
				object arg1 = ToLua.ToVarObject(L, 3);
				obj.SendMessage(arg0, arg1);
				return 0;
			}
			else if (count == 4)
			{
				LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
				string arg0 = ToLua.CheckString(L, 2);
				object arg1 = ToLua.ToVarObject(L, 3);
				UnityEngine.SendMessageOptions arg2 = (UnityEngine.SendMessageOptions)ToLua.CheckObject(L, 4, typeof(UnityEngine.SendMessageOptions));
				obj.SendMessage(arg0, arg1, arg2);
				return 0;
			}
			else
			{
				return LuaDLL.luaL_throw(L, "invalid arguments to method: LuaFramework.NetworkManager.SendMessage");
			}
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int RemoveSocket(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			obj.RemoveSocket();
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int GetWebMusic(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 4);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			string arg0 = ToLua.CheckString(L, 2);
			string[] arg1 = ToLua.CheckStringArray(L, 3);
			string arg2 = ToLua.CheckString(L, 4);
			obj.GetWebMusic(arg0, arg1, arg2);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int GetLoadBgFile(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 4);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			string arg0 = ToLua.CheckString(L, 2);
			string[] arg1 = ToLua.CheckStringArray(L, 3);
			string arg2 = ToLua.CheckString(L, 4);
			obj.GetLoadBgFile(arg0, arg1, arg2);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int GetLoadHeaderFile(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 3);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			string arg0 = ToLua.CheckString(L, 2);
			UnityEngine.GameObject arg1 = (UnityEngine.GameObject)ToLua.CheckObject(L, 3, typeof(UnityEngine.GameObject));
			obj.GetLoadHeaderFile(arg0, arg1);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int OnDownAsset(IntPtr L)
	{
		try
		{
			int count = LuaDLL.lua_gettop(L);

			if (count == 4)
			{
				LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
				string arg0 = ToLua.CheckString(L, 2);
				string arg1 = ToLua.CheckString(L, 3);
				LuaFunction arg2 = ToLua.CheckLuaFunction(L, 4);
				obj.OnDownAsset(arg0, arg1, arg2);
				return 0;
			}
			else if (count == 5)
			{
				LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
				string arg0 = ToLua.CheckString(L, 2);
				string arg1 = ToLua.CheckString(L, 3);
				LuaFunction arg2 = ToLua.CheckLuaFunction(L, 4);
				int arg3 = (int)LuaDLL.luaL_checknumber(L, 5);
				obj.OnDownAsset(arg0, arg1, arg2, arg3);
				return 0;
			}
			else
			{
				return LuaDLL.luaL_throw(L, "invalid arguments to method: LuaFramework.NetworkManager.OnDownAsset");
			}
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int ExitDown(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			obj.ExitDown();
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int StartWWWLoadMusic(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 2);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			string arg0 = ToLua.CheckString(L, 2);
			obj.StartWWWLoadMusic(arg0);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int Close(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			obj.Close();
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int AddGameSocket(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			obj.AddGameSocket();
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int SendGameConnect(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 3);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			string arg0 = ToLua.CheckString(L, 2);
			int arg1 = (int)LuaDLL.luaL_checknumber(L, 3);
			obj.SendGameConnect(arg0, arg1);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int SendMessageGame(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 3);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			short arg0 = (short)LuaDLL.luaL_checknumber(L, 2);
			LuaByteBuffer arg1 = new LuaByteBuffer(ToLua.CheckByteBuffer(L, 3));
			obj.SendMessageGame(arg0, arg1);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int BeginSendGameHeart(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			obj.BeginSendGameHeart();
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int SendGameHeart(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			obj.SendGameHeart();
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int RemoveGameSocket(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			obj.RemoveGameSocket();
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int isSocketStats(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			LuaFramework.NetworkManager obj = (LuaFramework.NetworkManager)ToLua.CheckObject<LuaFramework.NetworkManager>(L, 1);
			bool o = obj.isSocketStats();
			LuaDLL.lua_pushboolean(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int op_Equality(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 2);
			UnityEngine.Object arg0 = (UnityEngine.Object)ToLua.ToObject(L, 1);
			UnityEngine.Object arg1 = (UnityEngine.Object)ToLua.ToObject(L, 2);
			bool o = arg0 == arg1;
			LuaDLL.lua_pushboolean(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}
}


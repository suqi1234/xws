﻿//this source code was auto-generated by tolua#, do not modify it
using System;
using LuaInterface;

public class LuaFramework_PanelManagerWrap
{
	public static void Register(LuaState L)
	{
		L.BeginClass(typeof(LuaFramework.PanelManager), typeof(Manager));
		L.RegFunction("CreatePanel", CreatePanel);
		L.RegFunction("CloseView", CloseView);
		L.RegFunction("HideView", HideView);
		L.RegFunction("DestroyView", DestroyView);
		L.RegFunction("CloseAllView", CloseAllView);
		L.RegFunction("__eq", op_Equality);
		L.RegFunction("__tostring", ToLua.op_ToString);
		L.EndClass();
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int CreatePanel(IntPtr L)
	{
		try
		{
			int count = LuaDLL.lua_gettop(L);

			if (count == 2)
			{
				LuaFramework.PanelManager obj = (LuaFramework.PanelManager)ToLua.CheckObject<LuaFramework.PanelManager>(L, 1);
				string arg0 = ToLua.CheckString(L, 2);
				obj.CreatePanel(arg0);
				return 0;
			}
			else if (count == 3)
			{
				LuaFramework.PanelManager obj = (LuaFramework.PanelManager)ToLua.CheckObject<LuaFramework.PanelManager>(L, 1);
				string arg0 = ToLua.CheckString(L, 2);
				LuaTable arg1 = ToLua.CheckLuaTable(L, 3);
				obj.CreatePanel(arg0, arg1);
				return 0;
			}
			else
			{
				return LuaDLL.luaL_throw(L, "invalid arguments to method: LuaFramework.PanelManager.CreatePanel");
			}
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int CloseView(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 2);
			LuaFramework.PanelManager obj = (LuaFramework.PanelManager)ToLua.CheckObject<LuaFramework.PanelManager>(L, 1);
			string arg0 = ToLua.CheckString(L, 2);
			obj.CloseView(arg0);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int HideView(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 2);
			LuaFramework.PanelManager obj = (LuaFramework.PanelManager)ToLua.CheckObject<LuaFramework.PanelManager>(L, 1);
			string arg0 = ToLua.CheckString(L, 2);
			obj.HideView(arg0);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int DestroyView(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 2);
			LuaFramework.PanelManager obj = (LuaFramework.PanelManager)ToLua.CheckObject<LuaFramework.PanelManager>(L, 1);
			string arg0 = ToLua.CheckString(L, 2);
			obj.DestroyView(arg0);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int CloseAllView(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			LuaFramework.PanelManager obj = (LuaFramework.PanelManager)ToLua.CheckObject<LuaFramework.PanelManager>(L, 1);
			obj.CloseAllView();
			return 0;
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


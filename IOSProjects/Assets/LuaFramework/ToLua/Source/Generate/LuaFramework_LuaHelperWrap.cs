﻿//this source code was auto-generated by tolua#, do not modify it
using System;
using LuaInterface;

public class LuaFramework_LuaHelperWrap
{
	public static void Register(LuaState L)
	{
		L.BeginStaticLibs("LuaHelper");
		L.RegFunction("GetType", GetType);
		L.RegFunction("GetPanelManager", GetPanelManager);
		L.RegFunction("GetScenesManager", GetScenesManager);
		L.RegFunction("GetResManager", GetResManager);
		L.RegFunction("GetNetManager", GetNetManager);
		L.RegFunction("GetSoundManager", GetSoundManager);
		L.RegFunction("GetGameManager", GetGameManager);
		L.RegFunction("GetLuaManager", GetLuaManager);
		L.RegFunction("GetMaterialManager", GetMaterialManager);
		L.RegFunction("DOTweenAlpha", DOTweenAlpha);
		L.RegFunction("DOTweenTo", DOTweenTo);
		L.RegFunction("DOTweenToFloat", DOTweenToFloat);
		L.RegFunction("SetAlpha", SetAlpha);
		L.RegFunction("AddDropdownOption", AddDropdownOption);
		L.RegFunction("ScreenPointToLocalPointInRect", ScreenPointToLocalPointInRect);
		L.RegFunction("ObjAddComponent", ObjAddComponent);
		L.RegFunction("OnCallLuaFunc", OnCallLuaFunc);
		L.RegFunction("OnJsonCallFunc", OnJsonCallFunc);
		L.EndStaticLibs();
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int GetType(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			string arg0 = ToLua.CheckString(L, 1);
			System.Type o = LuaFramework.LuaHelper.GetType(arg0);
			ToLua.Push(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int GetPanelManager(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 0);
			LuaFramework.PanelManager o = LuaFramework.LuaHelper.GetPanelManager();
			ToLua.Push(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int GetScenesManager(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 0);
			LuaFramework.ScenesManager o = LuaFramework.LuaHelper.GetScenesManager();
			ToLua.Push(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int GetResManager(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 0);
			LuaFramework.ResourceManager o = LuaFramework.LuaHelper.GetResManager();
			ToLua.Push(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int GetNetManager(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 0);
			LuaFramework.NetworkManager o = LuaFramework.LuaHelper.GetNetManager();
			ToLua.Push(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int GetSoundManager(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 0);
			LuaFramework.SoundManager o = LuaFramework.LuaHelper.GetSoundManager();
			ToLua.Push(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int GetGameManager(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 0);
			LuaFramework.GameManager o = LuaFramework.LuaHelper.GetGameManager();
			ToLua.Push(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int GetLuaManager(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 0);
			LuaFramework.LuaManager o = LuaFramework.LuaHelper.GetLuaManager();
			ToLua.Push(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int GetMaterialManager(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 0);
			LuaFramework.MaterialManager o = LuaFramework.LuaHelper.GetMaterialManager();
			ToLua.Push(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int DOTweenAlpha(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 3);
			UnityEngine.CanvasGroup arg0 = (UnityEngine.CanvasGroup)ToLua.CheckObject(L, 1, typeof(UnityEngine.CanvasGroup));
			float arg1 = (float)LuaDLL.luaL_checknumber(L, 2);
			float arg2 = (float)LuaDLL.luaL_checknumber(L, 3);
			DG.Tweening.Tweener o = LuaFramework.LuaHelper.DOTweenAlpha(arg0, arg1, arg2);
			ToLua.PushObject(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int DOTweenTo(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 4);
			string arg0 = ToLua.CheckString(L, 1);
			System.Action<string> arg1 = (System.Action<string>)ToLua.CheckDelegate<System.Action<string>>(L, 2);
			string arg2 = ToLua.CheckString(L, 3);
			float arg3 = (float)LuaDLL.luaL_checknumber(L, 4);
			DG.Tweening.Tweener o = LuaFramework.LuaHelper.DOTweenTo(arg0, arg1, arg2, arg3);
			ToLua.PushObject(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int DOTweenToFloat(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 4);
			float arg0 = (float)LuaDLL.luaL_checknumber(L, 1);
			System.Action<float> arg1 = (System.Action<float>)ToLua.CheckDelegate<System.Action<float>>(L, 2);
			float arg2 = (float)LuaDLL.luaL_checknumber(L, 3);
			float arg3 = (float)LuaDLL.luaL_checknumber(L, 4);
			DG.Tweening.Tweener o = LuaFramework.LuaHelper.DOTweenToFloat(arg0, arg1, arg2, arg3);
			ToLua.PushObject(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int SetAlpha(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 2);
			UnityEngine.CanvasGroup arg0 = (UnityEngine.CanvasGroup)ToLua.CheckObject(L, 1, typeof(UnityEngine.CanvasGroup));
			float arg1 = (float)LuaDLL.luaL_checknumber(L, 2);
			LuaFramework.LuaHelper.SetAlpha(arg0, arg1);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int AddDropdownOption(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 2);
			UnityEngine.UI.Dropdown arg0 = (UnityEngine.UI.Dropdown)ToLua.CheckObject<UnityEngine.UI.Dropdown>(L, 1);
			string arg1 = ToLua.CheckString(L, 2);
			LuaFramework.LuaHelper.AddDropdownOption(arg0, arg1);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int ScreenPointToLocalPointInRect(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 3);
			UnityEngine.GameObject arg0 = (UnityEngine.GameObject)ToLua.CheckObject(L, 1, typeof(UnityEngine.GameObject));
			UnityEngine.Vector2 arg1 = ToLua.ToVector2(L, 2);
			UnityEngine.GameObject arg2 = (UnityEngine.GameObject)ToLua.CheckObject(L, 3, typeof(UnityEngine.GameObject));
			UnityEngine.Vector2 o = LuaFramework.LuaHelper.ScreenPointToLocalPointInRect(arg0, arg1, arg2);
			ToLua.Push(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int ObjAddComponent(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 2);
			UnityEngine.GameObject arg0 = (UnityEngine.GameObject)ToLua.CheckObject(L, 1, typeof(UnityEngine.GameObject));
			string arg1 = ToLua.CheckString(L, 2);
			LuaFramework.LuaHelper.ObjAddComponent(arg0, arg1);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int OnCallLuaFunc(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 2);
			LuaByteBuffer arg0 = new LuaByteBuffer(ToLua.CheckByteBuffer(L, 1));
			LuaFunction arg1 = ToLua.CheckLuaFunction(L, 2);
			LuaFramework.LuaHelper.OnCallLuaFunc(arg0, arg1);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int OnJsonCallFunc(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 2);
			string arg0 = ToLua.CheckString(L, 1);
			LuaFunction arg1 = ToLua.CheckLuaFunction(L, 2);
			LuaFramework.LuaHelper.OnJsonCallFunc(arg0, arg1);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}
}


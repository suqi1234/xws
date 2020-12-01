local GameLuaFile = {}
GameLuaFile["QIUQIU"] = { id = 1, table = { "lua/lua_QiuQiu.unity3d" ,"lua/lua_config_QiuQiu.unity3d"}, }
function conf_GameLuaFile_get(id)
 	luaMgrMgr:InitLuaBundle(GameLuaFile[id].table);
end

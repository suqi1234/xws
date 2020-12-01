

local breakSocketHandle,debugXpCall = require("LuaDebug")("localhost",7003)
local timer = Timer.New(function() 
breakSocketHandle() end, 1, -1, false)
timer:Start();
--require "View/test"
function Main()	
	print('Call Main')
end

function OnLevelWasLoaded(level)
	collectgarbage("collect")
	Time.timeSinceLevelLoad = 0
end
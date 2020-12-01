require "Logic/GameCallBack"
local json = require "cjson"
Network = {};
local self = Network;

local transform;
local gameObject;
local islogging = false;

function Network.Start()
    self.ChangeID = false;
    logWarn("Network.Start!!");
    Event:Add(Protocal.Connect, self.OnConnect); 
    Event:Add(Protocal.Message, self.OnMessage); 
    Event:Add(Protocal.Exception, self.OnException); 
    Event:Add(Protocal.Disconnect, self.OnDisconnect); 
end

function Network.OnSocket(key,response, data)
    if key >= 1000000 then
		local event = tostring(key)
		local buffer = LuaFramework.ByteBuffer.New(data:ToBytes());
		Event:Dispatch(event,buffer);
		return;
    end
    if key == 9998 then
        Game.ConncetFalse();
        return;
    end
    if key == 11001 then self.OnConnect(); return end
    if key == 11002 then self.OnException();return end
    if key == 11003 then self.OnDisconnect();return end
    if key == 513 then Event:Dispatch("eventName513", nil);return end
    local str1 = "tutorial.Res"..key
    local event = "eventName"..key
    local decode = protobuf.decode(str1 , data);
    Event:Dispatch(event,decode);
end

--当连接建立时--
function Network.OnConnect()
    self.ChangeID = false;
    GameCallBack.CallFun("OnReBackConnect");
    GameCallBack.CallFun("OnConnect");
end

function Network.OnException()

end
--连接中断，或者被踢掉--
function Network.OnDisconnect() 
    islogging = false; 
end
function Network.OnMessage(buffer) 

end
function Network.Unload()
    Event:Remove(Protocal.Connect);
    Event:Remove(Protocal.Message);
    Event:Remove(Protocal.Exception);
    Event:Remove(Protocal.Disconnect);
end
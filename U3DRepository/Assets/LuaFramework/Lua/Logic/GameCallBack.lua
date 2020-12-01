
require "Common/define"
require "Common/functions"

local transform;
local gameObject;
local LuaBehaviour;
GameCallBack = {
    completeCallBack = {};
    UserData = {};
    UserDataIndex = {};
};
local self = GameCallBack;

function GameCallBack.AddCallBack(CallBackName, _completeCallBack, _UserData)
    if self.completeCallBack[CallBackName] == nil then
        local CallBackUserData = {};
        self.UserDataIndex[CallBackName] = 0;
        CallBackUserData[self.UserDataIndex[CallBackName]] =_UserData;
        self.UserData[CallBackName] = CallBackUserData;
        self.completeCallBack[CallBackName] = _completeCallBack;
    else
        self.UserDataIndex[CallBackName] = self.UserDataIndex[CallBackName] + 1;
        local CallBackUserData = self.UserData[CallBackName];
        CallBackUserData[self.UserDataIndex[CallBackName]] = _UserData;
        self.UserData[CallBackName] = CallBackUserData;
    end
end

function GameCallBack.RemoveCallBack(CallBackName)
    if self.completeCallBack[CallBackName] ~= nil then
        self.UserDataIndex[CallBackName] = 0;
        self.UserData[CallBackName] = nil;
        self.completeCallBack[CallBackName] = nil;
    end
end

function GameCallBack.CallFun(CallBackName)
    if self.completeCallBack[CallBackName] ~= nil then
        local _completeCallBack = self.completeCallBack[CallBackName];
        local _UserData = self.UserData[CallBackName];
        for i = 0, self.UserDataIndex[CallBackName], 1 do
            _completeCallBack(_UserData[i]);
        end
        self.RemoveCallBack(CallBackName);
    end
end
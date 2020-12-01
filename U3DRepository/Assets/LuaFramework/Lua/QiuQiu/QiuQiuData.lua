
require "QiuQiu/QiuQiuPanel"
QiuQiuData = {}
local self = QiuQiuData

function QiuQiuData.Send71(GameClass)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        gameIndex = Game.gameIndex,
        classUnid = GameClass
    }
    local code = protobuf.encode("tutorial.Req71", ReqLoad)
    networkMgr:SendMessageBf(71, code)
    Event:Add("eventName71", self.Callback71)
    Game.ClassUnid = GameClass
end

function QiuQiuData.Callback71(name, data)
    Event:Remove("eventName71", self.Callback71)
    log("Callback71------------------------------------------------" .. data.state)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg)), funname = self.Callback71Error})
        error("emsg" .. GeLanguageById(tonumber(data.emsg)))
        return
    end
    Game.gameIndex = data.gameIndex
    GameCallBack.AddCallBack("OnConnect", self.OnConnect, data.GToken)
    self.ReConnectSocket(data.GUrl, data.GPort)
end

function QiuQiuData.ReconnectionGame(GUrl, GPort, GToken)
    if UIRoot:Find("QiuQiuPanel") ~= nil then
        QiuQiuPanel.DestroyGame()
    end
    log("ReconnectionGame------------------------------------------------")
    CloseAllView()
    GameCallBack.AddCallBack("OnConnect", self.OnConnect, GToken)
    self.ReConnectSocket(GUrl, GPort)
end

function QiuQiuData.ReConnectSocket(url, port)
    log("ReConnectSocket---------------------------------------------")
    error("重新连接socket")
    networkMgr:AddGameSocket()
    networkMgr:SendGameConnect(url, port)
    networkMgr:BeginSendGameHeart()
end

function QiuQiuData.Callback71Error()
    log("Callback71error-------------------------")
    HallPanel.OPEN(Game.gameIndex)
end

function QiuQiuData.OnConnect(GToken)
    log("OnConnect----------------------" .. GToken)
    QiuQiuLoadPrefab.Init(GToken)
end

function QiuQiuData.Send8401(GToken)
    local t = parser.register("QIUQIUMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        token = GToken
    }
    local code = protobuf.encode("tutorial.Req8401", ReqLoad)
    networkMgr:SendMessageGame(8401, code)
    Event:Add("eventName8401", self.Callback8401)
end

function QiuQiuData.Callback8401(name, data)
    Event:Remove("eventName8401", self.Callback8401)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg)),funname = self.ToHall})
        error("emsg" .. GeLanguageById(tonumber(data.emsg)))
        return
    end
    panelMgr:CreatePanel("QiuQiu/QiuQiu", data)
end
function QiuQiuData.ToHall()
    panelMgr:CreatePanel("View/Hall", nil)
end
function QiuQiuData.Send8406(addIntParameter)
    local t = parser.register("QIUQIUMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        addInt = addIntParameter
    }
    local code = protobuf.encode("tutorial.Req8406", ReqLoad)
    networkMgr:SendMessageGame(8406, code)
    Event:Add("eventName8406", self.Callback8406)
end

function QiuQiuData.Callback8406(name, data)
    Event:Remove("eventName8406", self.Callback8406)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        error("emsg" .. GeLanguageById(tonumber(data.emsg)))
        return
    end
end

function QiuQiuData.Send8414()
    local t = parser.register("QIUQIUMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {}
    local code = protobuf.encode("tutorial.Req8414", ReqLoad)
    Event:Add("eventName8414", self.Callback8414)
    networkMgr:SendMessageGame(8414, code)
end

function QiuQiuData.Send8411(SeatNumber)
    local t = parser.register("QIUQIUMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        selectSeatInt = SeatNumber
    }
    local code = protobuf.encode("tutorial.Req8411", ReqLoad)
    networkMgr:SendMessageGame(8411, code)
    --Event:Add("eventName8406", self.Callback8406)
end

function QiuQiuData.Callback8414(name, data)
    Event:Remove("eventName8414", self.Callback8414)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        error("emsg" .. GeLanguageById(tonumber(data.emsg)))
        return
    end
    QiuQiuPanel.LeavGameToHall()
end

function QiuQiuData.Callback8402(name, data)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        error("emsg" .. GeLanguageById(tonumber(data.emsg)))
        return
    end
    if not QiuQiuPanel.IsInit then
        GameCallBack.AddCallBack("Callback8402", QiuQiuPanel.GamePrepare, data)
    else
        QiuQiuPanel.GamePrepare(data)
    end
end

function QiuQiuData.Callback8403(name, data)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        error("emsg" .. GeLanguageById(tonumber(data.emsg)))
        return
    end
    if not QiuQiuPanel.IsInit then
        GameCallBack.AddCallBack("Callback8403", QiuQiuPanel.BottomNote, data)
    else
        QiuQiuPanel.BottomNote(data)
    end
end

function QiuQiuData.Callback8404(name, data)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        error("emsg" .. GeLanguageById(tonumber(data.emsg)))
        return
    end
    if not QiuQiuPanel.IsInit then
        GameCallBack.AddCallBack("Callback8404", QiuQiuPanel.DealMonitor, data)
    else
        QiuQiuPanel.DealMonitor(data)
    end
end


function QiuQiuData.Callback8405(name, data)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        error("emsg" .. GeLanguageById(tonumber(data.emsg)))
        return
    end
    QiuQiuPanel.PlayerOperation(data)
end

function QiuQiuData.Callback8407(name, data)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        error("emsg" .. GeLanguageById(tonumber(data.emsg)))
        return
    end
    QiuQiuPanel.PlayerAction(data)
end
function QiuQiuData.Callback8411(name, data)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        error("emsg" .. GeLanguageById(tonumber(data.emsg)))
        return
    end
    Event:Add("eventName8404", self.Callback8404)
    QiuQiuPanel.SitDown(data)
end

function QiuQiuData.Callback8413(name, data)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        error("emsg" .. GeLanguageById(tonumber(data.emsg)))
        return
    end
    QiuQiuPanel.GameSettlement(data)
end

function QiuQiuData.Callback8415(name, data)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        error("emsg" .. GeLanguageById(tonumber(data.emsg)))
        return
    end
    QiuQiuPanel.OtherPlayerEnter(data.data)
end

function QiuQiuData.Callback8416(name, data)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        error("emsg" .. GeLanguageById(tonumber(data.emsg)))
        return
    end
    QiuQiuPanel.OtherLeav(data.userId)
end

function QiuQiuData.Callback8409(name, data)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        error("emsg" .. GeLanguageById(tonumber(data.emsg)))
        return
    end
    QiuQiuPanel.WatchingLicensing(data)
end

function QiuQiuData.Listening()
    local t = parser.register("QIUQIUMsg.proto", Util.DataPath .. "lua/proto")
    Event:Add("eventName8402", self.Callback8402)
    Event:Add("eventName8403", self.Callback8403) 
    Event:Add("eventName8404", self.Callback8404) 
    Event:Add("eventName8405", self.Callback8405) 
    Event:Add("eventName8407", self.Callback8407) 
    Event:Add("eventName8409", self.Callback8409) 
    Event:Add("eventName8411", self.Callback8411) 
    Event:Add("eventName8413", self.Callback8413) 
    Event:Add("eventName8414", self.Callback8414) 
    Event:Add("eventName8415", self.Callback8415) 
    Event:Add("eventName8416", self.Callback8416) 
end

function QiuQiuData.RemoveListening()
    local t = parser.register("QIUQIUMsg.proto", Util.DataPath .. "lua/proto")
    Event:Remove("eventName8402", self.Callback8402)
    Event:Remove("eventName8403", self.Callback8403)
    Event:Remove("eventName8404", self.Callback8404)
    Event:Remove("eventName8405", self.Callback8405)
    Event:Remove("eventName8407", self.Callback8407)
    Event:Remove("eventName8409", self.Callback8409) 
    Event:Remove("eventName8411", self.Callback8411)
    Event:Remove("eventName8415", self.Callback8415)
    Event:Remove("eventName8413", self.Callback8413)
    Event:Remove("eventName8416", self.Callback8416)
    Event:Remove("eventName8414", self.Callback8414)
end

require "3rd/pbc/protobuf"
require "Common/functions"
require "Common/define"
require "Common/protocal"
require "Mode/Player"
require "Mode/GolbalResource"
require "Config/GameLuaFile"
require "Config/platform_music"
require "View/GlobalPanel"
require "View/OpenScene"
require "Logic/GameCallBack"
require "EventDispatcher"
Event = EventDispatcher.New()
require "Common/Pbc_Regist"
Game = {
    CountDownTime = 0,
    IsLoginGame = false,
    ShopType = "Gold",
    ReBackConnectIng = false,
    ReBackConnectIngTime = 0,
    gameIndex = "",
    ClassUnid = "",
    IsFirst = true,
    AllCoroutine = {}
}
local self = Game
local transform
local gameObject
local DownLoadImageTable = {
    "panel_bg.png"
}
Game.HeadList = {}
function Game.OnInitOK()
    networkMgr:SendConnect(AppConst.SocketAddress, AppConst.SocketPort)
    GolbalResource.InitMusic()
    self.InitMusic()
    GameManagerObj = GameObject.FindWithTag("GameManager").transform
    UIRoot = GameObject.FindWithTag("UI").transform
    GuiCamera = GameObject.FindWithTag("GuiCamera").transform
    GlobalBg = GameObject.FindWithTag("UI").transform:Find("Bg").gameObject
    GlobalLoading = GlobalBg.transform:Find("VFX_jinzuanyule_loading").gameObject
    Canvas = UIRoot.parent.gameObject
    Game.RoomList = {}
    parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    --Event:Add("eventName11", Player.Callback11)
    Event:Add("eventName10060", self.Callback10060)
    Event:Add("eventName502", self.Callback502)
    Event:Add("eventName510", self.Callback510)
end

function Game.InitMusic()
    if Util.HasKey(AppConst.AppPrefix .. "BackSound") then
        local bg_value = Util.GetFloat(AppConst.AppPrefix .. "BackSound")
        soundMgr:SoundOffBacksound(bg_value)
    else
        soundMgr:SoundOffBacksound(1)
        Util.SetFloat(AppConst.AppPrefix .. "BackSound", 1)
    end
    if Util.HasKey(AppConst.AppPrefix .. "SoundEffect") then
        local eff_value = Util.GetFloat(AppConst.AppPrefix .. "SoundEffect")
        soundMgr:SetSoundEffectVolume(eff_value)
    else
        soundMgr:SetSoundEffectVolume(1)
        Util.SetFloat(AppConst.AppPrefix .. "SoundEffect", 1)
    end
    soundMgr.isPlaySV = true
end

function Game.ConncetFalse()
    Util.LogError("ConncetFalse")
    if Util.NetAvailable == false then
        self.ReBackConnectIng = true
        self.ReBackConnectIngTime = 0
        panelMgr:CreatePanel("View/Reconnect", {text = "Break and Reconnect"})
        Game.SendConnect()
        return
    end
    if not (self.ReBackConnectIng) then
        self.ReBackConnectIng = true
        self.ReBackConnectIngTime = 0
        panelMgr:CreatePanel("View/Reconnect", {text = "Break and Reconnect"})
        Game.SendConnect()
    end
end

function Game.SendConnect()
    
    GameCallBack.RemoveCallBack("OnReBackConnect")
    GameCallBack.AddCallBack("OnReBackConnect", Game.ReBackConnect, nil)
    networkMgr:SendConnect(AppConst.SocketAddress, AppConst.SocketPort)
end

function Game.ReBackConnect()
    Util.LogError("OnReBackConnect")
    if Player.name~="" and Util.HasKey(AppConst.AppPrefix .. "userName") and Util.HasKey(AppConst.AppPrefix .. "GameToken") then
        --GameCallBack.CallFun("ReBackConnectInit")
        local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
        local ReqLoad = {
            --GroupState = Util.GetInt(AppConst.AppPrefix .. "LoginState"),
            GroupState =1,
            userName = Util.GetString(AppConst.AppPrefix .. "userName"),
            Token = Util.GetString(AppConst.AppPrefix .. "GameToken")
        }
        local code = protobuf.encode("tutorial.Req1", ReqLoad)
        networkMgr:SendMessageBf(1, code)
        Event:Add("eventName1", self.Callback1)
    else
        --DestroyView("Hall") 
        self.ReBackConnectIng = false
        DestroyView("Reconnect")
        panelMgr:CreatePanel("View/Hall", GolbalResource.GameInitData)
    end
    
end

function Game.Callback1(name, data)
    Event:Remove("eventName1", self.Callback1)
    local LoginPanelObj = UIRoot:Find("LoginPanel")
    if LoginPanelObj ~= nil and LoginPanelObj.gameObject.activeSelf == true then
        LoginPanel.OnCallBack1()
    end
    if data.data.isMustPhoneCode == 1 then
        panelMgr:CreatePanel("View/VerificationCode", nil)
        return
    end
    if data.state ~= 0 then
        CloseAllView()
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        Util.RemoveData(AppConst.AppPrefix .. "LoginState")
        Util.RemoveData(AppConst.AppPrefix .. "userName")
        panelMgr:CreatePanel("View/Hall", nil)
        self.ReBackConnectIng = false
        HallPanel.Callback14("test", {state=0})
        DestroyView("Reconnect")
        return
    end
    self.IsLoginGame = trueisOne
    if rawget(_G,'LoginPanel')~=nil and (LoginPanel.IngatkatasandiToggle ~= nil or LoginPanel.IngatkatasandiToggle.isOn) then
        Util.SetInt(AppConst.AppPrefix .. "LoginState", data.data.tokenType)
        Util.SetString(AppConst.AppPrefix .. "GameToken", data.data.accessToken)
        Util.SetString(AppConst.AppPrefix .. "userName", data.data.openId)
    else
        Util.RemoveData(AppConst.AppPrefix .. "LoginState")
        Util.RemoveData(AppConst.AppPrefix .. "userName")
        Util.RemoveData(AppConst.AppPrefix .. "GameToken")
    end
    Player.id = data.data.userId
    Player.avater = data.data.heardImg
    Player.name = data.data.roleName
    Player.gold = data.data.integral
    Player.Diamonds = data.data.money
    Player.PhoneNum = data.data.phoneid
    Player.IsBankPassword = data.data.isBankState
    Player.Sex = data.data.sex
    Player.Lv = data.data.nowExpGrade
    Player.Exp = data.data.expGradeAllInt - data.data.nextGradeNeedInt
    Player.NeedExp = data.data.expGradeAllInt
    Player.Voucher = data.data.voucherInt
    Player.MessageNotice = data.data.newMessageNotice
    Player.IDCardNum = data.data.IDCardUnid
    Player.modelId = data.data.modelId
    Player.PlayerType = data.data.userGroupInt
    Player.PriceSum = data.data.exchangeRate
    Player.bankGold = data.data.bankIntegral
    Player.OpenRedPacket = data.data.isActivityOpenState
    Player.ChangeHeadCount = data.data.exchangeRoleNameSum
    Player.currencyId = data.data.currencyId
    Game.GameList = data.gameClassList
    Game.ActivityList = data.activityList
    Game.AllowBindingBankList = data.allowBindingBankList
    Game.IsOpenSignIn = data.data.isOpenSignIn
    Game.HeardImgOne = data.HeardImgOne
    Game.TodaySignInState = data.data.todaySignInState
    Game.lineNoticeList={}
    for k,v in ipairs(data.lineNoticeList) do
        Game.lineNoticeList[v.msgid]=v;
     end
    if Game.lineNoticeList~=nil then
        panelMgr:CreatePanel("View/Global", Game.lineNoticeList)
    end
    GlobalLoading:SetActive(true)
    if LoginPanelObj ~= nil and LoginPanelObj.gameObject.activeSelf == true then
        LoginPanel.OnLoginOK()
    end
    Player.hasResultGP = data.hasResultGP
    Player.resultGPUNID = data.resultGPUNID
    self.ReBackConnectIng = false
    DestroyView("Reconnect")
    -- --获取游戏列表
    -- for k,v in parser(Game.GameList) do
    --     for i=0,#v.containGameList-1 do
    --         if table.contains(GameListInfo,v.containGameList[i].gameIndex) then
    --             GameListInfo[v.containGameList[i].gameIndex].Type = v.classKey
    --         else
    --             local tmpGame = {
    --                 [v.containGameList[i].gameIndex]={
    --                     Url = "null";
    --                 }
    --             }
    --             table.insert(GameListInfo,tmpGame)
                
    --             GameListInfo[v.containGameList[i].gameIndex].Type = v.classKey
    --         end
    --     end
    -- end
    if data.data.isGameing == 1 then
        IsInGame = "Game"
        --if UIRoot:Find("GlobalPanel") ~= nil then
            --GlobalPanel.SetPos()
        --end
        require "Config/Hall/gamelist"
        self.gameIndex = data.data.gameIndex
        if data.data.gameIndex == GameListInfo["QIUQIU"].Index then
            local Name = "QIUQIU"
            if GameListInfo[Name].Url == "null" then
                conf_GameLuaFile_get(Name)
                require "QiuQiu/QiuQiuData"
                QiuQiuData.ReconnectionGame(data.data.ReGUrl, data.data.RePort, data.data.ReGameToken)
            else
                Application.OpenURL(GameListInfo[Name].Url)
            end
        else
            networkMgr:RemoveGameSocket()
            DestroyView("Login")
            CloseAllView()
            Game.Send2()
        end
    else
        if UIRoot:Find("QiuQiuPanel") ~= nil then
            QiuQiuPanel.DestroyGame()
        end
        panelMgr:CreatePanel("View/Hall", nil)
        if LoginPanelObj == nil then
            HallPanel.UpdateUserInfo()
        end
        networkMgr:RemoveGameSocket()
        DestroyView("Login")
        Game.Send2()
    end
    --HallPanel.LoacGameList()
end

function Game.Send2()
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {}
    local code = protobuf.encode("tutorial.Req2", ReqLoad)
    networkMgr:SendMessageBf(2, code)
    Event:Add("eventName2", self.Callback2)
end

function Game.Callback2(name, data)
    Event:Remove("eventName2", self.Callback2)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    for k, v in pairs(data.data) do
        Player.gamelist[v.gameIndex] = v
    end
end

function Game.Callback10060(name, data)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
   if Player.name~="" then
        for k,v in ipairs(data.lineNoticeList) do
            GolbalResource.lineNoticeList[v.msgid]=v;
        end
        GlobalPanel.Init(GolbalResource.lineNoticeList)
  else
        for k,v in ipairs(data.lineNoticeList) do
            Game.lineNoticeList[v.msgid]=v;
        end
        GlobalPanel.Init(Game.lineNoticeList)
   end
end

function Game.CloseGame()
    local co =
        coroutine.start(
        function()
            coroutine.wait(2)
            Network.ChangeID = true
            DestroyView("Hall")
            CloseAllView()
            Util.RemoveData(AppConst.AppPrefix .. "LoginState")
            Util.RemoveData(AppConst.AppPrefix .. "userName")
            panelMgr:CreatePanel("View/Hall", nil)
            networkMgr:SendConnect(AppConst.SocketAddress, AppConst.SocketPort)
        end
    )
end

function Game.ReConnectSocket(url, port)
    networkMgr:AddGameSocket()
    networkMgr:SendGameConnect(url, port)
    networkMgr:BeginSendGameHeart()
end

function Game.Update()
    if self.CountDownTime > 0 then
        self.CountDownTime = self.CountDownTime - Time.deltaTime
        if self.CountDownTime <= 0 then
            self.CountDownTime = 0
        end
    end
    if self.ReBackConnectIng then
        self.ReBackConnectIngTime = self.ReBackConnectIngTime + Time.deltaTime
        if self.ReBackConnectIngTime > 5 then 
            self.ReBackConnectIng = false
            self.ReBackConnectIngTime = 0
            self.ConncetFalse()
        end
    else
        DestroyView("Reconnect")
    end
end

function Game.GetLoadHeaderFile(address, obj)
    if Game.HeadList[address] ~= nil then
        obj:GetComponent("Image").sprite = UnityEngine.Sprite.Create(Game.HeadList[address], UnityEngine.Rect(0, 0, Game.HeadList[address].width, Game.HeadList[address].height), Vector2(0, 0))
        return
    end
    coroutine.start(
        function()
            local www = WWW(address)
            Util.LogError(address);
            coroutine.www(www)
            if www.error ~= "" and www.error ~= nil then
                error("Download failed" .. address)
                return
            end
            local texture = www.texture
            Game.HeadList[address] = texture
            obj:GetComponent("Image").sprite = UnityEngine.Sprite.Create(texture, UnityEngine.Rect(0, 0, texture.width, texture.height), Vector2(0, 0))
        end
    )
end

function Game.Send70(GameIndex)
    local t = parser.register("GamePlatfMes.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        gameIndex = GameIndex
    }
    local code = protobuf.encode("tutorial.Req70", ReqLoad)
    networkMgr:SendMessageBf(70, code)
    Event:Add("eventName70", Game.Callback70)
end

function Game.Callback70(name, data)
    --local music = GolbalResource.Golbal_MusicResource["platform_background"]:GetComponent("AudioSource").clip
    --soundMgr:PlayBacksoundAc(music, true)
    Event:Remove("eventName70", Game.Callback70)
    if data.state ~= 0 then
        if GlobalBg.activeSelf == false then
            GlobalBg:SetActive(true)
        end
        CloseAllView()
        panelMgr:CreatePanel("view/Notice", {text = GeLanguageById(tonumber(data.emsg)), funname = Game.EnterError})
        return
    end
    self.gameIndex = data.gameIndex
    HallPanel.Panel:SetActive(false)
    panelMgr:CreatePanel("View/Hall", nil)
end

function Game.EnterError()
    panelMgr:CreatePanel("view/Hall", nil)
end

function Game.Callback502(name, data)
    Game.AllowBindingBankList=data.drawingChannelList
end

function Game.Callback510(name, data)
    if data.state ~= 0 then
        --panelMgr:CreatePanel("view/Notice", {text = GeLanguageById(tonumber(data.emsg)), funname = Game.EnterError})
        return
    end
    Game.GameList = data.gameClassList
    if UIRoot:Find("HallPanel") ~= nil then
        HallPanel.UpdataLoadGameList()
    end
end
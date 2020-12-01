--[[
    luaide  模板位置位于 Template/FunTemplate/NewFileTemplate.lua 其中 Template 为配置路径 与luaide.luaTemplatesDir
    luaide.luaTemplatesDir 配置 https://www.showdoc.cc/web/#/luaide?page_id=713062580213505
    author:{author}
    time:2020-05-27 10:53:30
]]
require "Common/functions"
require "Common/define"
require "QiuQiu/QiuQiuCtrl"
require "QiuQiu/PlayerInfo"
require "QiuQiu/QiuQiuLoadPrefab"
local transform
local gameObject
local LuaBehaviour
QiuQiuPanel = {
    PlayerList = {},
    PlayerObjList = {},
    PlayerSeat = 0,
    PlayerSelfID = 0, --玩家自己的座位号
    ChipList = {},
    DiscardList = "",
    ChipListRoot = "",
    AllCoroutine = {},
    IsPlayerOperation = false,
    PokerBack = "",
    RoomPlayerList = {}, --房间玩家
    setupWaitingTime = 10,
    LastAngle = 0,
    SitDownClick = true,
    IsInit = false,
    PlayerSelf = ""
}
local self = QiuQiuPanel
function QiuQiuPanel.Awake(obj)
    QiuQiuData.Listening()
    self.IsInit = false
    gameMgrMgr:SetGameState(true)
    -- QiuQiuCtrl.InitBGMMusic()--初始化背景音效
    -- QiuQiuCtrl.InitMusic()--初始化音效
    self.LoadPrefabOK = false
    gameObject = obj
    transform = obj.transform
    LuaBehaviour = gameObject:GetComponent("LuaBehaviour")

    self.FindComponent()
    self.AddOnClickEvent()
end

function QiuQiuPanel.FindComponent()
    for i = 1, 7 do --7个玩家
        self.PlayerObjList[i] = transform:Find("Bg/Root/QiuQiu/PlayerList/Player" .. i)
    end
    self.ButtonList = transform:Find("Bg/Root/QiuQiu/ButtonList").gameObject --所有的按钮
    --self.IMail_Button=transform:Find("Bg/Root/IMail_Button");
    self.Balik_Toggle = transform:Find("Bg/Root/QiuQiu/ButtonList/Balik_Toggle").gameObject:GetComponent("Toggle")
    self.Balik_Cek_Toggle = transform:Find("Bg/Root/QiuQiu/ButtonList/Balik_Cek_Toggle").gameObject:GetComponent("Toggle")
    self.Cek_Toggle = transform:Find("Bg/Root/QiuQiu/ButtonList/Cek_Toggle").gameObject:GetComponent("Toggle")
    self.IKutApapun_Toggle = transform:Find("Bg/Root/QiuQiu/ButtonList/IKutApapun_Toggle").gameObject:GetComponent("Toggle")
    self.Naik_Toggle = transform:Find("Bg/Root/QiuQiu/ButtonList/Naik_Toggle").gameObject:GetComponent("Toggle")
    self.AllIn_Button = transform:Find("Bg/Root/QiuQiu/ButtonList/AllIn_Button").gameObject
    self.PoolNumber = transform:Find("Bg/Root/QiuQiu/JackPool/Number_Text").gameObject:GetComponent("Text")
    self.RetrueHall_Button = transform:Find("Bg/Root/RetrueHall_Button").gameObject --返回大厅
    self.BetSlidering = transform:Find("Bg/Root/QiuQiu/ButtonList/Naik_Toggle/BetSlidering/Slider").gameObject:GetComponent("Slider") --slider
    self.Percentage = transform:Find("Bg/Root/QiuQiu/ButtonList/Naik_Toggle/BetSlidering/Slider/Text").gameObject:GetComponent("Text") --slider
    self.SureBetButton = transform:Find("Bg/Root/QiuQiu/ButtonList/Naik_Toggle/SureBetButton").gameObject
    self.JackPool = transform:Find("Bg/Root/QiuQiu/JackPool/Number_Text").gameObject:GetComponent("Text") --奖金池
    self.ChipListRoot = transform:Find("Bg/Root/QiuQiu/ChipList")
    self.DiscardList = transform:Find("Bg/Root/QiuQiu/DiscardList")
    self.Banker = transform:Find("Bg/Root/QiuQiu/Banker").gameObject --开始发牌的位置
    self.Pointer = transform:Find("Bg/Root/QiuQiu/Pointer").gameObject --开始发牌的位置
    self.PokerBack = transform:Find("Bg/Root/PokerBack").gameObject --庄家的位置
end

function QiuQiuPanel.Start()
end

--登录游戏成功
function QiuQiuPanel.Init(data)
    if data.setupWaitingTime > 0 then
        self.setupWaitingTime = data.setupWaitingTime
    end
    self.PlayerSeat = data.data.seatInt
    self.PlayerSelf = data.data.userId
    self.JackPool.text = data.outPressureBufferInt
    self.InitPlayerInfo(data.UserIdData)
    if data.homeExEState == 3 then
        if data.askInfo.askUserId == self.PlayerSelf then
            self.PlayerOperation({askUserId = data.askInfo.askUserId, waitingTime = data.askInfo.waitingTime, doing = data.askInfo.doing})
        end
        self.GenerateChip(data.outPressureBufferInt)
    end
    if GameCallBack.completeCallBack["Callback8402"] ~= nil then
        GameCallBack.CallFun("Callback8402")
        GameCallBack.RemoveCallBack("Callback8402")
    end
    self.IsInit = true
end

--生成筹码
function QiuQiuPanel.GenerateChip(Number)
    local chip = 0
    if Number > 100000 then
        chip = 10000
    elseif Number > 50000 then
        chip = 5000
    else
        chip = 500
    end
    local ChipNumber = math.floor(Number / chip)
    for i = 1, ChipNumber do
        local ChipPrefab = GetClipPrefab(math.random(500, 11000))
        local Chip = newObject(ChipPrefab)
        table.insert(self.ChipList, Chip)
        Chip.transform:SetParent(self.ChipListRoot.transform)
        Chip.transform.localScale = Vector3(1, 1, 1)
        Chip.transform.localPosition = Vector3(math.random(-330, 330), math.random(-80, 80), 0)
    end
end

--监听按钮
function QiuQiuPanel.AddOnClickEvent()
    LuaBehaviour:AddClick(
        self.RetrueHall_Button,
        function(go)
            QiuQiuData.Send8414()
        end
    )
    LuaBehaviour:AddValueChanged(
        self.BetSlidering,
        function(go, value)
            if value ~= 0 then
                self.SureBetButton:SetActive(true)
            end
            self.Percentage.text = math.floor(value * 100) .. "%"
        end
    )
    LuaBehaviour:AddClick(
        self.SureBetButton,
        function(go)
            local BottomPour = math.floor(self.BetSlidering.value * 100)
            QiuQiuData.Send8406(BottomPour)
            self.SureBetButton:SetActive(false)
        end
    )
    LuaBehaviour:AddValueChanged(self.Balik_Toggle, self.ToggleEvent)
    LuaBehaviour:AddValueChanged(self.Balik_Cek_Toggle, self.ToggleEvent)
    LuaBehaviour:AddValueChanged(self.Cek_Toggle, self.ToggleEvent)
    LuaBehaviour:AddValueChanged(self.IKutApapun_Toggle, self.ToggleEvent)
    for i = 1, 7 do --7个玩家
        LuaBehaviour:AddClick(
            self.PlayerObjList[i]:Find("Mask/Head").gameObject,
            function(go)
                if self.PlayerList[self.PlayerSelf] == nil and self.SitDownClick then
                    local Seat = go.transform:Find("Text").gameObject:GetComponent("Text").text
                    self.SitDownClick = false
                    QiuQiuData.Send8411(Seat)
                end
            end
        )
    end
    LuaBehaviour:AddClick(
        self.AllIn_Button,
        function(go)
            QiuQiuData.Send8406(100)
            self.AllIn_Button:SetActive(false)
        end
    )
end

function QiuQiuPanel.ToggleEvent(go, value)
    if self.IsPlayerOperation then
        if go.name == "Balik_Toggle" and value then
            QiuQiuData.Send8406(-1)
        elseif go.name == "Balik_Cek_Toggle" and value then
            local BetPointer = -1
            if self.Balik_Toggle.interactable then
                BetPointer = -1
            end
            if self.Cek_Toggle.interactable then
                BetPointer = -2
            end
            QiuQiuData.Send8406(BetPointer)
        elseif go.name == "Cek_Toggle" and value then
            QiuQiuData.Send8406(-2)
        elseif go.name == "IKutApapun_Toggle" and value then
            QiuQiuData.Send8406(-3)
        end
        if value then
            self.IsPlayerOperation = false
        end
    end
end
function QiuQiuPanel.LeavGameToHall()
    DestroyView("QiuQiu")
    panelMgr:CreatePanel("View/Hall", nil)
end
function QiuQiuPanel.DestroyGame()
    DestroyView("QiuQiu")
end

function QiuQiuPanel.OnDisable()
    self.IsGameOver = true
    QiuQiuData.RemoveListening()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
    self.AllCoroutine = {}
    QiuQiuCtrl.CloseAllEffectMusic()
    QiuQiuPanel = nil
    for key, value in pairs(package.loaded) do
        if key == "QiuQiu.QiuQiuCtrl" or key == "QiuQiu.QiuQiuPanel" or key == "QiuQiu.QiuQiuData" then
            package.loaded[key] = nil
        end
    end
    Util.ClearMemory()
    resMgr:UnloadAssetBundle("QiuQiu.unity3d", true)
    resMgr:UnloadAssetBundle("QiuQiuicon.unity3d", true)
    resMgr:UnloadAssetBundle("lua_QiuQiu.unity3d", true)
    resMgr:UnloadAssetBundle("lua_config_QiuQiu.unity3d", true)
    gameMgrMgr:SetGameState(false)
end

function QiuQiuPanel.GetPlayerSeatObject(Seat)
    local CurrentSeat = 1
    if Seat > self.PlayerSeat then
        CurrentSeat = (Seat - self.PlayerSeat) + 1
    elseif Seat < self.PlayerSeat then
        CurrentSeat = 7 - (math.abs((Seat - self.PlayerSeat)) - 1)
    end
    return self.PlayerObjList[CurrentSeat]
end

function QiuQiuPanel.InitPlayerInfo(playerData)
    self.PlayerList = {}
    for k, v in ipairs(playerData) do
        if v.isHasUser then
            local player = PlayerInfo:New()
            player.Info = v
            Util.LogError(v.userId)
            self.PlayerList[v.userId] = player
            player.DiscardRoot = self.DiscardList
            player.IsPlayer = v.userId == self.PlayerSelf
            if player.IsPlayer then
                self.ButtonList:SetActive(true)
            end
            player:Enter(self.GetPlayerSeatObject(player.Info.seatInt))
        end
        self.GetPlayerSeatObject(v.seatInt):Find("Mask/Head/Text").gameObject:GetComponent("Text").text = v.seatInt
    end
end

function QiuQiuPanel.ShowPlayerActionType(player, Type)
    local ActionStr = ""
    if Type == -2 then
        ActionStr = "Check"
    elseif Type == -1 then
        ActionStr = "Fold"
    elseif Type == 1 then
        ActionStr = "Call"
    elseif Type == 2 then
        ActionStr = "Raise"
    elseif Type == 3 then
        ActionStr = ""
    elseif Type == 4 then
        ActionStr = "All In"
    end
    player.text = ActionStr
end

function QiuQiuPanel.PlayerAction(data)
    if data.doing == -2 then --2休
    elseif data.doing == -1 then --1 丢牌
        self.PlayerDiscard(data.fromUserId)
    elseif data.doing == 0 then
    elseif data.doing == 1 then --1跟
        self.PlayerBet(data.fromUserId, data.allPressureValues, data.changeIntegral, data.nowIntegral, data.classAllPressureValues)
    elseif data.doing == 2 then --2加注
        self.PlayerBet(data.fromUserId, data.allPressureValues, data.changeIntegral, data.nowIntegral, data.classAllPressureValues)
    elseif data.doing == 3 then --3敲
        self.PlayerBet(data.fromUserId, data.allPressureValues, data.changeIntegral, data.nowIntegral, data.classAllPressureValues)
    elseif data.doing == 4 then --4全下注
        self.PlayerBet(data.fromUserId, data.allPressureValues, data.changeIntegral, data.nowIntegral, data.classAllPressureValues)
    end

    local playerInfo = self.PlayerList[data.fromUserId]
    self.ShowPlayerActionType(playerInfo.OperationType, data.doing)
    if playerInfo ~= nil and playerInfo.IsPlayer then
        self.SelfOperationComplete()
    end
    if playerInfo ~= nil then
        playerInfo:StopTime()
    end
end

--玩家弃牌
function QiuQiuPanel.PlayerDiscard(fromSeatInt)
    local playerInfo = self.PlayerList[fromSeatInt]
    if playerInfo ~= nil then
        playerInfo:Discard()
    else
        Util.LogError("弃牌玩家不存在" .. fromSeatInt)
    end
end
function QiuQiuPanel.SelfOperationComplete()
    self.Balik_Toggle.isOn = false
    self.Balik_Cek_Toggle.isOn = false
    self.Cek_Toggle.isOn = false
    self.IKutApapun_Toggle.isOn = false
    self.Naik_Toggle.isOn = false
    self.Naik_Toggle.interactable = false
    self.SureBetButton:SetActive(false)
    self.Percentage.text = "0%"
    self.BetSlidering.value = 0
    self.IsPlayerOperation = false
    self.AllIn_Button:SetActive(false)
end
--玩家离开
function QiuQiuPanel.PlayerLeav(fromUserId)
    if fromUserId == self.PlayerSelf then
        self.ButtonList:SetActive(false)
        self.SelfOperationComplete()
    end
    local playerInfo = self.PlayerList[fromUserId]
    if playerInfo ~= nil then
        playerInfo:Leav()
        --table.remove(self.PlayerList, fromUserId)
        self.PlayerList[fromUserId] = nil
    else
        Util.LogError("离开玩家不存在" .. fromUserId)
    end
end

function QiuQiuPanel.PlayerBet(fromUserId, allPressureValues, changeIntegral, nowIntegral, classAllPressureValues)
    local playerInfo = self.PlayerList[fromUserId]
    if playerInfo ~= nil then
        local Next = math.random(5, 10)
        local PlayerPosition = playerInfo.PlayerInfoRoot.position
        for i = 1, Next do
            local ChipPrefab = GetClipPrefab(changeIntegral)
            local Chip = newObject(ChipPrefab)
            table.insert(self.ChipList, Chip)
            Chip.transform.position = PlayerPosition
            Chip.transform:SetParent(self.ChipListRoot.transform)
            Chip.transform.localScale = Vector3(1, 1, 1)
            Chip.transform:DOLocalMove(Vector3(math.random(-330, 330), math.random(-80, 80), 0), 0.2, false):SetEase(Ease.Linear):OnComplete(
                function()
                    LuaHelper.DOTweenTo(
                        self.PoolNumber.text,
                        function(num)
                            self.PoolNumber.text = tostring(num)
                        end,
                        tostring(classAllPressureValues),
                        0.2
                    )
                    playerInfo:RefreshPlayerGold(allPressureValues, nowIntegral)
                end
            )
        end
    else
        Util.LogError("下注的玩家不存在" .. fromUserId)
    end
end

function QiuQiuPanel.DealMonitor(data)
    self.RoomPlayerList = data.exeSortList
    local playerInfo = self.PlayerList[data.askUserId]
    if playerInfo ~= nil then
        local Points = Split(data.cardArrayInfo.dzStr, "*")
        playerInfo.SelfPoint = data.cardArrayInfo.dz
        if data.licensingInt == 0 then
            playerInfo.SelfPoker = data.cardArrayInfo.cardData
            self.PlayerList[self.RoomPlayerList[1]].BankerIcon:SetActive(true)
            self.GetVetcorEuler(self.Pointer, self.PlayerList[self.RoomPlayerList[1]].PlayerInfoRoot, false)
            self.FirstDeal(Points[2], "?")
        elseif data.licensingInt == 1 then
            playerInfo.SelfPoker = data.cardArrayInfo.cardData
            local co =
                coroutine.start(
                function()
                    self.Deal(4)
                    self.PlayerList[self.PlayerSelf]:RefreshSelfPoint(Points[2], Points[3], Points[1])
                end
            )
            table.insert(self.AllCoroutine, co)
        end
    end
end

function QiuQiuPanel.FirstDeal(p1, p2)
    local co =
        coroutine.start(
        function()
            for i = 1, 3 do
                self.Deal(i)
            end
            if p1 ~= nil then
                self.PlayerList[self.PlayerSelf]:RefreshSelfPoint(p1, p2, "1")
            end
        end
    )
    table.insert(self.AllCoroutine, co)
end

function QiuQiuPanel.Deal(index)
    for k, v in pairs(self.RoomPlayerList) do
        local Player = self.PlayerList[v]
        if Player ~= nil and Player.Info.isGameDoingState ~= 0 and Player.Info.isGameDoingState ~= 2 then
            local PokerBack = GetPokerBack()
            local poker = newObject(PokerBack)
            poker.transform.position = self.Banker.transform.position
            poker.transform:SetParent(self.Banker.transform)
            poker.transform.localScale = Vector3(1, 1, 1)
            local Pos = ""
            if v == self.PlayerSelf then
                Pos = Player.FrontCard.transform:GetChild(index - 1)
            else
                Pos = Player.BackCard.transform:GetChild(index - 1)
            end
            poker.transform:DOMove(Pos.transform.position, 0.1, false):SetEase(Ease.Linear):OnComplete(
                function()
                    Player:DealAnimation(index)
                    destroy(poker)
                end
            )
            coroutine.wait(0.1)
        end
    end
end

function QiuQiuPanel.GameSettlement(data)
    local ChipNumber = #self.ChipList
    local WinerNumber = 0
    local Winer = {}
    self.Pointer.gameObject:SetActive(false)
    for k, v in ipairs(data.allShowUserCard) do
        local playerInfo = self.PlayerList[v.toUserid]
        if playerInfo ~= nil then
            playerInfo:Settlement(v, #data.allShowUserCard == 1)
        end
    end
    for k, v in ipairs(data.allShowUserCard) do
        if v.changeIntegral > 0 then
            WinerNumber = WinerNumber + 1
            table.insert(Winer, v.toUserid)
        end
    end
    local ChipSurplus = ChipNumber % WinerNumber
    local ChipSurplus = math.floor(ChipNumber / WinerNumber)
    local PlayerIndex = 1
    for k, v in ipairs(self.ChipList) do
        if PlayerIndex < WinerNumber then
            PlayerIndex = math.floor(k / ChipSurplus) + 1
        end
        if self.PlayerList[Winer[PlayerIndex]] ~= nil then
            v.transform:DOMove(self.PlayerList[Winer[PlayerIndex]].PlayerInfoRoot.position, math.random(0.3, 0.3), false):SetEase(Ease.Linear):OnComplete(
                function()
                    destroy(v)
                    self.ChipList[k] = nil
                end
            )
        end
    end
end

function QiuQiuPanel.GetVetcorEuler(currentPos, TargetPos, IsTween)
    local OldAngle = 0
    self.Pointer.gameObject:SetActive(true)
    local angle = 0
    if TargetPos.transform.position.x > currentPos.transform.position.x then
        angle = -Vector3.Angle(Vector3.up, TargetPos.transform.position - currentPos.transform.position)
    else
        angle = Vector3.Angle(Vector3.up, TargetPos.transform.position - currentPos.transform.position)
    end
    if IsTween then
        OldAngle = angle
        if angle > 0 and self.LastAngle < 0 then
            angle = angle - 360
        end
        currentPos.transform:DOLocalRotateQuaternion(Quaternion.Euler(0, 0, angle), 0.2):SetEase(Ease.Linear):OnComplete(
            function()
                if OldAngle > 0 and self.LastAngle < 0 then
                    currentPos.transform.localRotation = Quaternion.Euler(0, 0, OldAngle)
                end
            end
        )
        self.LastAngle = OldAngle
    else
        currentPos.transform.localRotation = Quaternion.Euler(0, 0, angle)
    end
end

--玩家操作
function QiuQiuPanel.PlayerOperation(data)
    local playerInfo = self.PlayerList[data.askUserId]
    if playerInfo ~= nil then
        local Progress = (data.waitingTime - 0.01) / self.setupWaitingTime
        self.GetVetcorEuler(self.Pointer, playerInfo.PlayerInfoRoot, true)
        playerInfo:ShowTime(Progress, data.waitingTime)
    end
    if playerInfo ~= nil and playerInfo.IsPlayer then
        local co =
            coroutine.start(
            function()
                local Jurisdiction = Split(data.doing, "*")
                self.Balik_Toggle.interactable = tonumber(Jurisdiction[1]) == 1
                self.Balik_Cek_Toggle.interactable = tonumber(Jurisdiction[2]) == 1
                self.Cek_Toggle.interactable = tonumber(Jurisdiction[3]) == 1
                self.IKutApapun_Toggle.interactable = tonumber(Jurisdiction[4]) == 1
                self.Naik_Toggle.interactable = tonumber(Jurisdiction[5]) == 1
                self.AllIn_Button:SetActive(tonumber(Jurisdiction[6]) == 1)
                if self.Balik_Toggle.isOn or self.Balik_Cek_Toggle.isOn or self.Cek_Toggle.isOn or self.IKutApapun_Toggle.isOn then
                    coroutine.wait(0.5)
                    if self.Balik_Toggle.isOn then --跟住
                        if self.Balik_Toggle.interactable then
                            QiuQiuData.Send8406(-1)
                        else
                            self.Balik_Toggle.isOn = false
                        end
                    elseif self.Balik_Cek_Toggle.isOn then
                        if self.Balik_Cek_Toggle.interactable then
                            local BetPointer = -1
                            if tonumber(Jurisdiction[1]) == 1 then
                                BetPointer = -1
                            end
                            if tonumber(Jurisdiction[3]) == 1 then
                                BetPointer = -2
                            end
                            QiuQiuData.Send8406(BetPointer)
                        else
                            self.Balik_Cek_Toggle.isOn = false
                        end
                    elseif self.Cek_Toggle.isOn then
                        if self.Cek_Toggle.interactable then
                            QiuQiuData.Send8406(-2)
                        else
                            self.Cek_Toggle.isOn = false
                        end
                    elseif self.IKutApapun_Toggle.isOn then
                        if self.IKutApapun_Toggle.interactable then
                            QiuQiuData.Send8406(-3)
                        else
                            self.IKutApapun_Toggle.isOn = false
                        end
                    end
                end
            end
        )
        table.insert(self.AllCoroutine, co)
        self.IsPlayerOperation = true
    end
end

--其他玩家离开
function QiuQiuPanel.OtherLeav(userId)
    self.PlayerLeav(userId)
end

--其它玩家进入
function QiuQiuPanel.OtherPlayerEnter(data)
    local player = PlayerInfo:New()
    player.Info = data
    Util.LogError(data.userId)
    self.PlayerList[data.userId] = player
    player.DiscardRoot = self.DiscardList
    player.IsPlayer = data.userId == self.PlayerSelf
    player:Enter(self.GetPlayerSeatObject(player.Info.seatInt))
end

--底注
function QiuQiuPanel.BottomNote(data)
    local Pool = 0
    for k, v in pairs(data.cardData) do
        if self.PlayerList[v.userId] ~= nil then
            Pool = Pool + v.outPressInt
            self.PlayerBet(v.userId, 0, v.outPressInt, v.integral, Pool)
            self.PlayerList[v.userId].Info.isGameDoingState = 1
            self.PlayerList[v.userId].Head.transform:GetComponent("Image").color = Color(1, 1, 1, 1)
        end
    end
    self.RoomPlayerList = data.exeSortList
    if GameCallBack.completeCallBack["Callback8404"] ~= nil then
        GameCallBack.CallFun("Callback8404")
        GameCallBack.RemoveCallBack("Callback8404")
    end
end

--游戏准备  初始化玩家状态
function QiuQiuPanel.GamePrepare(data)
    for k, v in pairs(self.PlayerList) do
        if v ~= nil then
            v:GameInit()
        end
    end
    self.SitDownClick = true
    if GameCallBack.completeCallBack["Callback8403"] ~= nil then
        GameCallBack.CallFun("Callback8403")
        GameCallBack.RemoveCallBack("Callback8403")
    end
end

--玩家座下
function QiuQiuPanel.SitDown(data)
    QiuQiuData.RemoveListening()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
    self.ButtonList:SetActive(true)
    for k, v in pairs(self.PlayerList) do
        if v ~= nil then
            self.OtherLeav(k)
        end
    end
    self.PlayerSeat = tonumber(data.successSeatInt)
    self.PlayerList = {}
    --self.PlayerSelf = data.data.userId
    --self.JackPool.text = data.outPressureBufferInt
    self.InitPlayerInfo(data.UserIdData)
    if data.homeExEState == 3 then
        if data.askInfo.askUserId == self.PlayerSelf then
            self.PlayerOperation({askUserId = data.askInfo.askUserId, waitingTime = data.askInfo.waitingTime, doing = data.askInfo.doing})
        end
    --self.GenerateChip(data.outPressureBufferInt)
    end
    QiuQiuData.Listening()
    -- QiuQiuPanel.Init({})
end

function QiuQiuPanel.WatchingLicensing(data)
    self.RoomPlayerList = data.exeSortList
    if data.msgState == 0 then
        local index = 1
        local player = self.PlayerList[self.RoomPlayerList[index]]
        while player == nil do
            index = index + 1
            player = self.PlayerList[self.RoomPlayerList[index]]
        end
        player.BankerIcon:SetActive(true)
        self.GetVetcorEuler(self.Pointer, player.PlayerInfoRoot, false)
        self.FirstDeal()
    elseif data.msgState == 1 then
        local co =
            coroutine.start(
            function()
                self.Deal(4)
            end
        )
        table.insert(self.AllCoroutine, co)
    end
end

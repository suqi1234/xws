PlayerInfo = {
    Info = {
        userId = "",
        heardImg = "",
        integral = "",
        roleName = "",
        seatInt = "",
        isGameDoingState = "",
        outPressureBufferInt = "",
        isLookCardArray = "",
        cardArray = "",
        isBanker = "",
        sexInt = "",
        isHasUser = "",
        dzStr = ""
    },
    PlayerInfoRoot = "",
    IsPlayer = false,
    SelfPoker = "",
    SelfPoint = "",
    AllTween = {},
    DiscardRoot = "",
    Time = "",
    BackCard = "",
    FrontCard = "",
    NumberText = "",
    PointRoot = "",
    Head = "",
    Point1 = "",
    Point2 = "",
    PokerType = "",
    PokerTypeNumber = "",
    NameText = "",
    OperationType = "",
    BankerIcon = ""
}
PlayerInfo.__index = PlayerInfo
function PlayerInfo:New()
    local self = {}
    setmetatable(self, PlayerInfo)
    return self
end

function PlayerInfo:Enter(obj)
    self.PlayerInfoRoot = obj
    obj.gameObject:SetActive(true)
    self.Head = obj:Find("Mask/PlayerHead").gameObject
    self.OperationType = obj:Find("Mask/OperationType").gameObject:GetComponent("Text")
    obj:Find("Info").gameObject:SetActive(true)
    self.NameText = obj:Find("Info/NameText").gameObject:GetComponent("Text")
    self.NumberText = obj:Find("Info/NumberText").gameObject:GetComponent("Text")
    Game.GetLoadHeaderFile(self.Info.heardImg, self.Head)
    self.Head:SetActive(true)
    self.NameText.text = tostring(self.Info.roleName)
    self.NumberText.text = tostring(self.Info.integral)
    self.FrontCard = obj:Find("FrontPoker")
    self.PointRoot = obj:Find("FrontPoker/Point").gameObject
    self.Point1 = obj:Find("FrontPoker/Point/Number1_Text").gameObject:GetComponent("Text")
    self.Point2 = obj:Find("FrontPoker/Point/Number2_Text").gameObject:GetComponent("Text")
    self.PokerType = obj:Find("FrontPoker/Point/PokerType")
    self.PokerTypeNumber = obj:Find("FrontPoker/Point/PokerType/Text")
    self.BankerIcon = obj:Find("BankerIcon").gameObject
    self.Head.transform:GetComponent("Image").color = Color(0.3, 0.3, 0.3, 1)
    self.Time = obj:Find("Time").gameObject
    obj:Find("Time").gameObject:SetActive(false)
    self.BackCard = obj:Find("Poker")
    if self.IsPlayer then
        self.FrontCard.gameObject:SetActive(true)
    end
    if self.Info.isBanker == 1 then
        self.BankerIcon:SetActive(true)
    end
    self:IsGame()
end

function PlayerInfo:IsGame()
    if self.Info.isGameDoingState == 1 or self.Info.isGameDoingState == 3 or self.Info.isGameDoingState == 4 or self.Info.isGameDoingState == 5 or self.Info.isGameDoingState == 6 then --
        if self.Info.isGameDoingState == 1 then
            self.OperationType.text = ""
        elseif self.Info.isGameDoingState == 3 then
            self.OperationType.text = "Check"
        elseif self.Info.isGameDoingState == 4 then
            self.OperationType.text = "Call"
        elseif self.Info.isGameDoingState == 5 then
            self.OperationType.text = "Raise"
        elseif self.Info.isGameDoingState == 6 then
            self.OperationType.text = "All In"
        end
        self.Head.transform:GetComponent("Image").color = Color(1, 1, 1, 1)
        self:GenerateCards()
    elseif self.Info.isGameDoingState == 2 then
        self.OperationType.text = "Fold"
    else
        self.OperationType.text = ""
    end
    self.OperationType.gameObject:SetActive(true)
end

function PlayerInfo:GenerateCards()
    if self.IsPlayer then
        self.SelfPoker = self.Info.cardArray
        for i = 1, #self.Info.cardArray do
            if self.Info.cardArray[i] ~= -2 then
                local poker = self.FrontCard.transform:GetChild(i - 1)
                poker.gameObject:SetActive(true)
                poker:GetComponent("Image").sprite = GetPokerPrefabSprite(self.Info.cardArray[i])
            end
        end
        local Points = Split(self.Info.dzStr, "*")
        self:RefreshSelfPoint(Points[2], Points[3] or "?", Points[1])
    else
        for i = 1, #self.Info.cardArray do
            if self.Info.cardArray[i] == -2 then
                self.BackCard.transform:GetChild(i - 1).gameObject:SetActive(true)
            end
        end
    end
end

function PlayerInfo:Settlement(data, IsShowPoker)
    local sequence = DOTween.Sequence()
    self.BankerIcon:SetActive(false)
    self.OperationType.text = ""
    if not IsShowPoker then
        sequence:AppendCallback(
            function()
                self:ShowPoker(data.cardArrayInfo)
            end
        )
    end
    sequence:AppendInterval(0.1)
    sequence:AppendCallback(
        function()
            self:Score(data.changeIntegral, data.nowIntegral)
        end
    )
end

function PlayerInfo:DealAnimation(Index)
    if self.IsPlayer then
        local poker = self.FrontCard.transform:GetChild(Index - 1)
        poker.transform:GetComponent("Image").sprite = GetPokerBack():GetComponent("Image").sprite
        poker.gameObject:SetActive(true)
        local sequence = DOTween.Sequence()
        sequence:Append(poker:DOLocalRotate(Vector3(0, -90, 0), 0.2, RotateMode.Fast):SetEase(Ease.Linear))
        sequence:AppendCallback(
            function()
                poker:GetComponent("Image").sprite = GetPokerPrefabSprite(self.SelfPoker[Index])
            end
        )
        sequence:Append(poker:DOLocalRotate(Vector3(0, 0, 0), 0.2, RotateMode.Fast):SetEase(Ease.Linear))
        if Index == 4 then
            sequence:AppendCallback(
                function()
                    for i = 1, 4 do
                        local SortPoker = self.FrontCard.transform:GetChild(i - 1)
                        SortPoker:GetComponent("Image").sprite = GetPokerPrefabSprite(self.SelfPoker[i])
                    end
                end
            )
        end
    else
        self.BackCard.transform:Find("PokerBack" .. Index).gameObject:SetActive(true)
    end
    if Index == 4 then
        local ShowType = self.OperationType.text
        if ShowType ~= "Fold" and ShowType ~= "All In" then
            self.OperationType.text = ""
        end
    end
end

function PlayerInfo:Discard()
    if self.IsPlayer then
        for i = 0, self.FrontCard.transform.childCount - 2 do
            self.FrontCard:GetChild(i):GetComponent("Image").sprite = GetPokerBack():GetComponent("Image").sprite
            self.FrontCard.transform:GetChild(i).gameObject:SetActive(false)
        end
        self.PointRoot:SetActive(false)
    else
        for i = 0, self.BackCard.transform.childCount - 1 do
            self.BackCard.transform:GetChild(i).gameObject:SetActive(false)
        end
    end
    self:StopTime()
    local PokerBack = GetPokerBack()
    local poker = newObject(PokerBack)
    poker.transform:SetParent(self.DiscardRoot.transform)
    poker.transform.position = self.FrontCard.transform.position
    poker.transform.localScale = Vector3(1, 1, 1)
    poker.transform:DOLocalMove(Vector3(0, 0, 0), self.IsPlayer and 0.2 or 0.4, false):SetEase(Ease.Linear):OnComplete(
        function()
            destroy(poker)
        end
    )
    self.Head.transform:GetComponent("Image").color = Color(0.3, 0.3, 0.3, 1)
    self.Info.isGameDoingState = 2
end

function PlayerInfo:Score(Number, nowIntegral)
    if Number > 0 then
        local PlayerPosition = self.PlayerInfoRoot.transform.position
        local ScorePrefab = GetScoreText()
        local prefab = newObject(ScorePrefab)
        prefab.transform.position = PlayerPosition
        prefab.transform:GetComponent("Text").text = Number
        prefab.transform:SetParent(self.PlayerInfoRoot.transform)
        prefab.transform.position = self.PlayerInfoRoot.transform.position
        prefab.transform.localScale = Vector3(1, 1, 1)
        prefab.transform:DOLocalMove(Vector3(0, 100, 0), 1, false):SetEase(Ease.Linear):OnComplete(
            function()
                destroy(prefab)
                if nowIntegral > 0 then
                    self.NumberText.text = nowIntegral
                end
            end
        )
    end
end

function PlayerInfo:ShowPoker(cardArrayInfo)
    local Points = Split(cardArrayInfo.dzStr, "*")
    if not self.IsPlayer then
        self.SelfPoker = cardArrayInfo.cardData
        self.SelfPoint = cardArrayInfo.dz
        for i = 0, 3 do
            self.BackCard.transform:GetChild(i).gameObject:SetActive(false)
        end
        for i = 1, #cardArrayInfo.cardData do
            self.FrontCard.transform:GetChild(i - 1):GetComponent("Image").sprite = GetPokerPrefabSprite(cardArrayInfo.cardData[i])
            self.FrontCard.transform:GetChild(i - 1).gameObject:SetActive(true)
        end
        if #cardArrayInfo.cardData == 4 then
            self.FrontCard.transform:GetChild(3).gameObject:SetActive(true)
        else
            self.FrontCard.transform:GetChild(3).gameObject:SetActive(false)
        end
        self.FrontCard.gameObject:SetActive(true)
        self.PointRoot:SetActive(true)
        self.Point1.text = Points[2]
        self.Point2.text = Points[3] or "?"
    end
    if Points[1] ~= "1" then
        self.PokerType.gameObject:SetActive(true)
        self.PokerTypeNumber.gameObject:GetComponent("Text").text = self:GetPokerType(Points[1])
    end
end

function PlayerInfo:GetPokerType(TypeNumber)
    if TypeNumber == "6" then
        return "Six Devil"
    elseif TypeNumber == "5" then
        return "Twin Cards"
    elseif TypeNumber == "4" then
        return "Small Cards"
    elseif TypeNumber == "3" then
        return "Big Cards"
    elseif TypeNumber == "2" then
        return "Qiu Qiu"
    end
end

function PlayerInfo:RefreshPlayerGold(allPressureValues, nowIntegral)
    self.NumberText.text = tostring(nowIntegral)
end

function PlayerInfo:ShowTime(StartTime, EndTime)
    self.Time:SetActive(true)
    self.Time:GetComponent("Image").fillAmount = StartTime
    local tween =
        LuaHelper.DOTweenToFloat(
        StartTime,
        function(Number)
            self.Time:GetComponent("Image").fillAmount = tonumber(Number)
        end,
        0,
        EndTime
    )
    table.insert(self.AllTween, tween)
end

function PlayerInfo:StopTime()
    for k, v in ipairs(self.AllTween) do
        if v ~= nil then
            v:Kill(true)
        end
    end
    self.Time:GetComponent("Image").fillAmount = 0
    self.Time:SetActive(false)
end

function PlayerInfo:RefreshSelfPoint(Point1, Point2, type)
    self.PointRoot:SetActive(true)
    if type ~= "1" and type ~= "0" then
        self.PokerType.gameObject:SetActive(true)
        self.PokerTypeNumber.gameObject:GetComponent("Text").text = self:GetPokerType(type)
    else
        self.Point1.text = tostring(Point1)
        self.Point2.text = Point2
    end
end

function PlayerInfo:GameInit()
    if not self.IsPlayer then
        for i = 0, 3 do
            self.BackCard.transform:GetChild(i).gameObject:SetActive(false)
            self.FrontCard.transform:GetChild(i).gameObject:SetActive(false)
        end
        self.FrontCard.gameObject:SetActive(false)
    else
        for i = 0, 3 do
            local poker = self.FrontCard.transform:GetChild(i)
            poker.gameObject:SetActive(false)
        end
    end
    self.Point1.text = ""
    self.Point2.text = ""
    self.SelfPoker = ""
    self.SelfPoint = ""
    self.Info.isGameDoingState = 1
    self.PointRoot:SetActive(false)
    self.PokerType.gameObject:SetActive(false)
    self.Head.transform:GetComponent("Image").color = Color(1, 1, 1, 1)
    self.OperationType.text = ""
    self.BankerIcon:SetActive(false)
end

function PlayerInfo:Leav()
    if not self.IsPlayer then
        for i = 0, 3 do
            self.BackCard.transform:GetChild(i).gameObject:SetActive(false)
            self.FrontCard.transform:GetChild(i).gameObject:SetActive(false)
        end
    else
        for i = 0, 3 do
            self.FrontCard.transform:GetChild(i).gameObject:SetActive(false)
        end
    end
    self.OperationType.text = ""
    self.FrontCard.gameObject:SetActive(false)
    self.PlayerInfoRoot.transform:Find("Info").gameObject:SetActive(false)
    self.Head:SetActive(false)
    self.BankerIcon:SetActive(false)
    self.PointRoot:SetActive(false)
    self:StopTime()
    self.Info.userId = nil
    self.Info.heardImg = nil
    self.Info.integral = nil
    self.Info.roleName = nil
    self.Info.seatInt = nil
    self.Info.isGameDoingState = nil
    self.Info.outPressureBufferInt = nil
    self.Info.isLookCardArray = nil
    self.Info.cardArray = nil
    self.Info.isBanker = nil
    self.Info.sexInt = nil
    self.Info.isHasUser = nil
    self.Info.dzStr = nil
    self.PlayerInfoRoot = nil
    self.IsPlayer = nil
    self.SelfPoker = nil
    self.SelfPoint = nil
    self.AllTween = nil
    self.DiscardRoot = nil
    self.Time = nil
    self.BackCard = nil
    self.FrontCard = nil
    self.NumberText = nil
    self.PointRoot = nil
    self.Head = nil
    self.Point1 = nil
    self.Point2 = nil
    self.PokerType = nil
    self.PokerTypeNumber = nil
    self.NameText = nil
    self.OperationType = nil
    self.BankerIcon = nil
end

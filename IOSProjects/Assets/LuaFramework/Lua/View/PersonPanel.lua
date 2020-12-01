

PersonPanel = {
    transform,
    gameObject,
    LuaBehaviour,
    AlphaTime = 0.1,
    FaceIconPrefab = nil,
    FaceButtonList = {},
    SelectFaceIcon = "",
    AllCoroutine = {}
}

local self = PersonPanel

function PersonPanel.FindComponent()
    self.CloseButton = self.transform:Find("Panel/PanelBg/CloseButton").gameObject
    self.HeadIcon = self.transform:Find("Panel/PanelBg/PlayerHead/Mask/Head").gameObject
    self.PlayerHeadBtn = self.transform:Find("Panel/PanelBg/PlayerHead").gameObject
    self.ChangeButton = self.transform:Find("Panel/PanelBg/ChangeButton").gameObject
    self.BindingPhoneBtn = self.transform:Find("Panel/PanelBg/BindingPhoneBtn").gameObject
    self.ChangeNameBtn = self.transform:Find("Panel/PanelBg/ChangeNameBtn").gameObject
    self.PlayerNameInputField = self.transform:Find("Panel/PanelBg/PlayerNameInputField").gameObject
    self.PlayerID = self.transform:Find("Panel/PanelBg/PlayerID/ID").gameObject
    self.PlayerGold = self.transform:Find("Panel/PanelBg/PlayerGold/Gold").gameObject
    self.PanelBg = self.transform:Find("Panel/PanelBg").gameObject
    self.Panel = self.transform:Find("Panel").gameObject
    self.Bg = self.transform:Find("Panel/Bg").gameObject
    self.ChangePanelBg = self.transform:Find("Panel/ChangePanelBg").gameObject
    self.CCloseButton = self.transform:Find("Panel/ChangePanelBg/CCloseButton").gameObject
    self.CExitButton = self.transform:Find("Panel/ChangePanelBg/CExitButton").gameObject
    self.COkButton = self.transform:Find("Panel/ChangePanelBg/COkButton").gameObject
    self.GameGrid = self.transform:Find("Panel/ChangePanelBg/ShowGrid/GameGrid")
    self.SelectIcon = self.transform:Find("Panel/ChangePanelBg/SelectIcon").gameObject
    self.SelectImage = self.transform:Find("Panel/ChangePanelBg/ShowGrid/Fram/SelectImage").gameObject:GetComponent("Image")
end

function PersonPanel.Awake(obj)
    self.gameObject = obj
    self.transform = obj.transform
    self.LuaBehaviour = self.gameObject:GetComponent("LuaBehaviour")

    self.FindComponent()
    self.AddOnClickEvent()

    resMgr:LoadPrefab("Person", {"FaceIconItem"}, self.LoadFaceIconEnd)
end

function PersonPanel.LoadFaceIconEnd(obj)
    self.FaceIconPrefab = obj[0]
    self.Send23()
end

function PersonPanel.Send23()
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {}

    local code = protobuf.encode("tutorial.Req23", ReqLoad)
    networkMgr:SendMessageBf(23, code)
    Event:Add("eventName23", self.Callback23)
end

function PersonPanel.Callback23(name, data)
    Event:Remove("eventName23", self.Callback23)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        --error("emsg"..data.emsg)
        return
    end
    local i = 0
    for k, v in pairs(data.heardImglist) do
        i = i + 1
        local FaceIcon = newObject(self.FaceIconPrefab)
        FaceIcon.transform:SetParent(self.GameGrid)
        FaceIcon.transform.localScale = Vector3.one
        FaceIcon.gameObject.name = "face" .. i
        Game.GetLoadHeaderFile(v, FaceIcon.transform:Find("Mask/FaceIcon").gameObject)
        self.FaceButtonList[FaceIcon.gameObject.name] = v
        self.LuaBehaviour:AddClick(FaceIcon.gameObject, self.OnFaceIconClick)
    end
end

function PersonPanel.OnEnable(obj)
    local co = coroutine.start(self.ShowPanelAnim)
    table.insert(self.AllCoroutine, co)
end

function PersonPanel.ShowPanelAnim()
    if Player.PhoneNum == "" or Player.PhoneNum == nil then
        self.BindingPhoneBtn:SetActive(true)
        self.ChangeNameBtn.transform.localPosition = Vector3(-149.3, -166.2, 0)
    else
        self.BindingPhoneBtn:SetActive(false)
        self.ChangeNameBtn.transform.localPosition = Vector3(0, -166.2, 0)
    end
    LuaHelper.SetAlpha(self.Panel:GetComponent("CanvasGroup"), 0)
    self.PanelBg.transform.localScale = Vector3.zero

    LuaHelper.DOTweenAlpha(self.Panel:GetComponent("CanvasGroup"), 1, self.AlphaTime)
    self.PanelBg.transform:DOScale(1, 0.2)
end

function PersonPanel.HidePanelAnim()
    self.PanelBg.transform:DOScale(0, 0.2)
    coroutine.wait(0.2)
    LuaHelper.DOTweenAlpha(self.Panel:GetComponent("CanvasGroup"), 0, self.AlphaTime)
    coroutine.wait(self.AlphaTime)
    self.ChangePanelBg:SetActive(false)
    self.PanelBg:SetActive(true)
    DestroyView("Person")
end

function PersonPanel.Start()
end

function PersonPanel.Init()
    self.ChangePanelBg:SetActive(false)
    log("HallPanel Init-------------------------------------------------avater(" .. Player.avater)
    Game.GetLoadHeaderFile(Player.avater, self.HeadIcon.gameObject)
    self.PlayerNameInputField:GetComponent("InputField").text = Player.name
    self.PlayerID:GetComponent("Text").text = Player.id
    self.PlayerGold:GetComponent("Text").text = Player.gold
end

function PersonPanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self.Bg, self.OnClickClose)
    self.LuaBehaviour:AddClick(self.CloseButton, self.OnClickClose)
    self.LuaBehaviour:AddClick(self.ChangeButton, self.OnClick)
    self.LuaBehaviour:AddClick(self.ChangeNameBtn, self.OnClick)
    self.LuaBehaviour:AddClick(self.PlayerHeadBtn, self.OnClick)
    self.LuaBehaviour:AddClick(self.CExitButton, self.OnClick)
    self.LuaBehaviour:AddClick(self.CCloseButton, self.OnClick)
    self.LuaBehaviour:AddClick(self.COkButton, self.OnClick)
    self.LuaBehaviour:AddClick(self.BindingPhoneBtn, self.OnClick)
end

function PersonPanel.OnClick(obj)
    if obj.name == "PlayerHead" then
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        self.ChangePanelBg:SetActive(true)
        self.PanelBg:SetActive(false)
    elseif obj.name == "ChangeButton" then
        local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        Game.GetLoadHeaderFile(Player.avater, self.SelectImage.gameObject)
        self.ChangePanelBg:SetActive(true)
        self.PanelBg:SetActive(false)
    elseif obj.name == "CExitButton" then
        local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        self.ChangePanelBg:SetActive(false)
        self.PanelBg:SetActive(true)
    elseif obj.name == "CCloseButton" then
        local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        self.ChangePanelBg:SetActive(false)
        self.PanelBg:SetActive(true)
    elseif obj.name == "COkButton" then
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        local Data = {
            name = Player.name,
            HeadIcon = self.SelectFaceIcon,
            sex = Player.Sex
        }
        self.Send8(Data)
        self.ChangePanelBg:SetActive(false)
        self.PanelBg:SetActive(true)
    elseif obj.name == "ChangeNameBtn" then
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        local name = self.PlayerNameInputField:GetComponent("InputField").text
        local Data = {
            name = name,
            HeadIcon = Player.avater,
            sex = Player.Sex
        }
        if Player.ChangeHeadCount > 0 and name ~= Player.name then
            --"本次修改需要200万金币，是否修改"
            panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(256), funname = self.Send8, funData = Data, IsShowCancel = true})
        else
            self.Send8(Data)
        end
    elseif obj.name == "BindingPhoneBtn" then
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        panelMgr:CreatePanel("View/BindingPhone", nil)
        local co = coroutine.start(self.HidePanelAnim)
        table.insert(self.AllCoroutine, co)
    end
end

function PersonPanel.OnFaceIconClick(obj)
    self.SelectIcon.transform:SetParent(obj.transform)
    self.SelectIcon.transform.localScale = Vector3.one
    self.SelectIcon.transform.localPosition = Vector3.zero
    self.SelectIcon.gameObject:SetActive(true)
    self.SelectFaceIcon = self.FaceButtonList[obj.gameObject.name]
    self.SelectImage.sprite = obj.transform:Find("Mask/FaceIcon"):GetComponent("Image").sprite
end

function PersonPanel.OnClickClose(obj)
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    local co = coroutine.start(self.HidePanelAnim)
    table.insert(self.AllCoroutine, co)
end

function PersonPanel.Send8(data)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        roleName = data.name,
        heardImg = data.HeadIcon,
        sex = data.sex
    }
    local code = protobuf.encode("tutorial.Req8", ReqLoad)
    networkMgr:SendMessageBf(8, code)
    Event:Add("eventName8", self.Callback8)
end

function PersonPanel.Callback8(name, data)
    Event:Remove("eventName8", self.Callback8)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        --error("emsg"..data.emsg)
        return
    end
    Player.ChangeHeadCount = data.exchangeRoleNameSum
    Player.name = data.roleName
    Player.avater = data.heardImg
    Player.Sex = data.sex
    local co = coroutine.start(self.HidePanelAnim)
    table.insert(self.AllCoroutine, co)
    panelMgr:CreatePanel("View/Hall", nil)
    panelMgr:CreatePanel("View/ShortNotice", {text = GeLanguageById(254)}) --"修改成功"
end

function PersonPanel.Send43(IDCardNum, IDCardName)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        IDCardUnid = IDCardNum,
        roleName = IDCardName
    }
    local code = protobuf.encode("tutorial.Req43", ReqLoad)
    networkMgr:SendMessageBf(43, code)
    Event:Add("eventName43", self.Callback43)
end

function PersonPanel.Callback43(name, data)
    Event:Remove("eventName43", self.Callback43)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        --error("emsg"..data.emsg)
        return
    end

    Player.IDCardNum = data.IDCardUnid
    self.IDCardNumText:GetComponent("Text").text = Player.IDCardNum
    self.IDCardNumButton.gameObject:SetActive(false)
    local co = coroutine.start(self.HideSetIDCardNumnim)
    table.insert(self.AllCoroutine, co)
end

function PersonPanel.Update()
end

function PersonPanel.OnDestroy()
    logWarn("PersonPanel---->>>OnDestroy")
end
function PersonPanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
end

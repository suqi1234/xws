--[[
    luaide  模板位置位于 Template/FunTemplate/NewFileTemplate.lua 其中 Template 为配置路径 与luaide.luaTemplatesDir
    luaide.luaTemplatesDir 配置 https://www.showdoc.cc/web/#/luaide?page_id=713062580213505
    author:{author}
    time:2020-07-06 11:33:08
]]

AddBankCardPanel = {
    transform,
    gameObject,
    LuaBehaviour,
    AlphaTime = 0.1,
    AllCoroutine = {},
    BankTypeMap = {}
}

local self = AddBankCardPanel

function AddBankCardPanel.Awake(obj)
    self.gameObject = obj
    self.transform = self.gameObject.transform
    self.LuaBehaviour = self.gameObject:GetComponent("LuaBehaviour")

    self.FindComponent()
    self.AddOnClickEvent()
end
function AddBankCardPanel.Start()
end
--查找组件
function AddBankCardPanel.FindComponent()
    self.BG = self.transform:Find("Panel/Bg").gameObject
    self.CloseButton = self.transform:Find("Panel/PanelBg/Close_Button").gameObject --关闭按钮或
    self.NamaRekeningInputField = self.transform:Find("Panel/PanelBg/NamaRekening/InputField").gameObject
    self.NomorRekeningInputField = self.transform:Find("Panel/PanelBg/NomorRekening/InputField").gameObject
    self.BankTypeSelectDropdown = self.transform:Find("Panel/PanelBg/BankTypeSelect/Dropdown").gameObject:GetComponent("Dropdown")
    self.BankTypeSelect = self.transform:Find("Panel/PanelBg/BankTypeSelect/Dropdown/Label").gameObject
    self.CompleteButton = self.transform:Find("Panel/PanelBg/Complete_Button").gameObject --完成
    self.BeforeButton = self.transform:Find("Panel/PanelBg/Before_Button").gameObject --完成
end

function AddBankCardPanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self.BG, self.OnClickOk) -- 确定按钮
    self.LuaBehaviour:AddClick(self.CloseButton, self.OnClickOk) -- 确定按钮
    self.LuaBehaviour:AddClick(self.CompleteButton, self.OnClickOk) -- 确定按钮
    self.LuaBehaviour:AddClick(self.BeforeButton, self.OnClickOk) -- 确定按钮
end

--激活事件--
function AddBankCardPanel.OnEnable(obj)
    local co= coroutine.start(self.ShowPanelAnim);
    table.insert(self.AllCoroutine, co);
end

function AddBankCardPanel.ShowPanelAnim()
    ShowObjectAnim(self.gameObject);
end

function AddBankCardPanel.HidePanelAnim()
    DestroyView("AddBankCard")
    if self.DestoyFun ~= nil then
        self.DestoyFun()
    end
end

function AddBankCardPanel.Init(data)
    if #Game.AllowBindingBankList > 0 then
        for k, v in pairs(Game.AllowBindingBankList) do
            self.BankTypeSelectDropdown.options:Add(OptionData(v.BankTitle))
            self.BankTypeMap[v.BankTitle] = v.BankClassUid
        end
        self.BankTypeSelectDropdown.options:Add(OptionData(""))
        self.BankTypeSelect:GetComponent("Text").text = Game.AllowBindingBankList[1].BankTitle
    end
    if data ~= nil then
        self.DestoyFun = data.UpBankcard
    end
end

function AddBankCardPanel.Update()
end
--添加银行卡
function AddBankCardPanel.Send11(BankCardId, BankClass, OpenCardName)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        cardId = BankCardId,
        bankClass = BankClass,
        openCardName = OpenCardName,
        isChangeDefaultState = false
    }
    local code = protobuf.encode("tutorial.Req11", ReqLoad)
    networkMgr:SendMessageBf(11, code)
    --添加银行卡
    Event:Add("eventName11", self.Callback11)
end

function AddBankCardPanel.Callback11(name, data)
    Event:Remove("eventName11", self.Callback11)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    local State = data.doing
    local StateMessage = ""
    if State == 0 then
        StateMessage = GeLanguageById(104) --"增加成功"
    elseif State == 1 then
        StateMessage = GeLanguageById(254) --"修改成功"
    elseif State == 2 then
        StateMessage = GeLanguageById(257) --"删除成功"
    else
        StateMessage = GeLanguageById(170) --"修改默认状态成功"
    end
    panelMgr:CreatePanel("View/Notice", {text = StateMessage, IsError = false})
    self.HidePanelAnim()
end
function AddBankCardPanel.OnClickOk(obj)
    if obj.name == "Close_Button" or obj.name == "Bg" then --关闭按钮或
        self.HidePanelAnim()
        local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
    elseif obj.name == "Complete_Button" then
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        local NamaRekening = self.NamaRekeningInputField:GetComponent("InputField").text
        local NomorRekening = self.NomorRekeningInputField:GetComponent("InputField").text
        local BankType = self.BankTypeSelect:GetComponent("Text").text
        local BankIndex = self.BankTypeMap[BankType]
        if NamaRekening == nil then
            panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(102)}) --"名称不能为空"
            return
        end
        if NomorRekening == nil then
            panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(103)}) --"帐号不能为空"
            return
        end
        if BankIndex ~= nil then
            self.Send11(NomorRekening, BankIndex, NamaRekening)
        else
            Util.LogError("没找到对应的银行索引")
        end
    elseif obj.name == "Before_Button" then
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        self.NamaRekeningInputField:GetComponent("InputField").text = ""
        self.NomorRekeningInputField:GetComponent("InputField").text = ""
        self.BankTypeSelect:GetComponent("Text").text = Game.AllowBindingBankList[1].BankTitle
        self.BankTypeSelectDropdown.value = 0
    end
end

function AddBankCardPanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
end

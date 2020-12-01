--[[
    luaide  模板位置位于 Template/FunTemplate/NewFileTemplate.lua 其中 Template 为配置路径 与luaide.luaTemplatesDir
    luaide.luaTemplatesDir 配置 https://www.showdoc.cc/web/#/luaide?page_id=713062580213505
    author:{author}
    time:2020-07-06 11:33:08
]]


PasswordSetingPanel = {
    transform,
    gameObject,
    LuaBehaviour,
    AlphaTime = 0.1,
    AllCoroutine = {}
}

local self = PasswordSetingPanel

function PasswordSetingPanel.Awake(obj)
    self.gameObject = obj
    self.transform = self.gameObject.transform
    self.LuaBehaviour = self.gameObject:GetComponent("LuaBehaviour")

    self.FindComponent()
    self.AddOnClickEvent()
    ShowObjectAnim(self.transform:Find("Panel/PanelBg").gameObject)
end
function PasswordSetingPanel.Start()
    self.Send9()
end
--查找组件
function PasswordSetingPanel.FindComponent()
    self.BG = self.transform:Find("Panel/Bg").gameObject
    self.CloseButton = self.transform:Find("Panel/PanelBg/Close_Button").gameObject
    self.AddCardButton = self.transform:Find("Panel/PanelBg/DetailBank_Panel/DetailBankInitialState/AddBankCard_Button").gameObject
    self.BankCardContent = self.transform:Find("Panel/PanelBg/DetailBank_Panel/BankCardScrollView/Viewport/Content").gameObject
    self.SelectBankCardItem = self.transform:Find("Panel/SelectBankCardItem").gameObject
    self.DetailBankInitialState = self.transform:Find("Panel/PanelBg/DetailBank_Panel/DetailBankInitialState").gameObject
    self.BankCardScrollView = self.transform:Find("Panel/PanelBg/DetailBank_Panel/BankCardScrollView").gameObject
    self.KataSandiSekarangInputField = self.transform:Find("Panel/PanelBg/PasswordLogin_Panel/KataSandiSekarang/InputField").gameObject
    self.KataSandiBaruInputField = self.transform:Find("Panel/PanelBg/PasswordLogin_Panel/KataSandiBaru/InputField").gameObject
    self.KonflrmasiKataSandiInputField = self.transform:Find("Panel/PanelBg/PasswordLogin_Panel/KonflrmasiKataSandi/InputField").gameObject
    self.PasswordLoginPanelCompleteButton = self.transform:Find("Panel/PanelBg/PasswordLogin_Panel/PasswordLoginPanelComplete_Button").gameObject
    self.PenarikanKataSandiInputField = self.transform:Find("Panel/PanelBg/PasswordPenarikan_Panel/PasswordPenarikan/KataSandi/InputField").gameObject
    self.PenarikanKonflrmasiKataSandiInputField = self.transform:Find("Panel/PanelBg/PasswordPenarikan_Panel/PasswordPenarikan/KonflrmasiKataSandi/InputField").gameObject
    self.PenarikanSetPayPasswordButton = self.transform:Find("Panel/PanelBg/PasswordPenarikan_Panel/PasswordPenarikan/SetPayPassword_Button").gameObject
    self.Agreement_Toggle = self.transform:Find("Panel/PanelBg/PasswordPenarikan_Panel/PasswordPenarikan/Agreement_Toggle").gameObject:GetComponent("Toggle")
    self.KataSandiSekarangCatPasswordToggle = self.transform:Find("Panel/PanelBg/PasswordLogin_Panel/KataSandiSekarang/KSSCatPassword_Toggle").gameObject:GetComponent("Toggle")
    self.KataSandiBaruCatPasswordToggle = self.transform:Find("Panel/PanelBg/PasswordLogin_Panel/KataSandiBaru/KSBCatPassword_Toggle").gameObject:GetComponent("Toggle")
    self.KonflrmasiKataSandiCatPasswordToggle = self.transform:Find("Panel/PanelBg/PasswordLogin_Panel/KonflrmasiKataSandi/KKSCatPassword_Toggle").gameObject:GetComponent("Toggle")
    self.AddBankCardButton = self.transform:Find("Panel/PanelBg/DetailBank_Panel/BankCardScrollView/AddBankCard_Button").gameObject
end

function PasswordSetingPanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self.BG, self.OnClickOk)
    self.LuaBehaviour:AddClick(self.CloseButton, self.OnClickOk)
    self.LuaBehaviour:AddClick(self.AddCardButton, self.OnClickOk) --
    self.LuaBehaviour:AddClick(self.PasswordLoginPanelCompleteButton, self.OnClickOk) --
    self.LuaBehaviour:AddClick(self.PenarikanSetPayPasswordButton, self.OnClickOk) --
    self.LuaBehaviour:AddClick(self.AddBankCardButton, self.OnClickOk) --
    self.LuaBehaviour:AddValueChanged(self.KataSandiSekarangCatPasswordToggle, self.CatPassword)
    self.LuaBehaviour:AddValueChanged(self.KataSandiBaruCatPasswordToggle, self.CatPassword)
    self.LuaBehaviour:AddValueChanged(self.KonflrmasiKataSandiCatPasswordToggle, self.CatPassword)
end

function PasswordSetingPanel.CatPassword(go, value)
    local InputFieldObj = ""
    if go.name == "KSSCatPassword_Toggle" then
        InputFieldObj = self.KataSandiSekarangInputField
    elseif go.name == "KSBCatPassword_Toggle" then
        InputFieldObj = self.KataSandiBaruInputField
    elseif go.name == "KKSCatPassword_Toggle" then
        InputFieldObj = self.KonflrmasiKataSandiInputField
    end
    self.SetPasswordState(InputFieldObj, value)
    go.transform:Find("Background").gameObject:SetActive(not value)
end
function PasswordSetingPanel.SetPasswordState(InputFieldObj, IsCat)
    if IsCat then
        InputFieldObj:GetComponent("InputField").contentType = ContentType.Standard
        InputFieldObj:GetComponent("InputField").enabled = false
        InputFieldObj:GetComponent("InputField").enabled = true
    else
        InputFieldObj:GetComponent("InputField").contentType = ContentType.Password
        InputFieldObj:GetComponent("InputField").enabled = false
        InputFieldObj:GetComponent("InputField").enabled = true
    end
end
--激活事件--
function PasswordSetingPanel.OnEnable(obj)
    -- local co= coroutine.start(self.ShowPanelAnim);
    --table.insert(self.AllCoroutine, co);
end

function PasswordSetingPanel.ShowPanelAnim()
end

function PasswordSetingPanel.HidePanelAnim()
    DestroyView("PasswordSeting")
end

function PasswordSetingPanel.Init(data)
end

function PasswordSetingPanel.Update()
end

function PasswordSetingPanel.OnClickOk(obj)
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if obj.name == "Close_Button" or obj.name == "Bg" then --关闭按钮或
        self.HidePanelAnim()
    elseif obj.name == "AddBankCard_Button" then
        panelMgr:CreatePanel("View/AddBankCard", nil)
        self.HidePanelAnim()
    elseif obj.name == "PasswordLoginPanelComplete_Button" then
        local KataSandiSekarang = self.KataSandiSekarangInputField:GetComponent("InputField").text
        local KataSandiBaru = self.KataSandiBaruInputField:GetComponent("InputField").text
        local KonflrmasiKataSandi = self.KonflrmasiKataSandiInputField:GetComponent("InputField").text
        if KataSandiSekarang == "" or KataSandiSekarang == nil then
            panelMgr:CreatePanel("View/ShortNotice", {text = GeLanguageById(222)}) --"请输入旧密码"
            return
        end
        if KataSandiBaru == "" or KataSandiBaru == nil then
            panelMgr:CreatePanel("View/ShortNotice", {text = GeLanguageById(260)}) --"请输入新密码"
            return
        end
        if KonflrmasiKataSandi == "" or KonflrmasiKataSandi == nil then
            panelMgr:CreatePanel("View/ShortNotice", {text = GeLanguageById(261)}) --"请输入确认密码"
            return
        end
        if KataSandiBaru == KonflrmasiKataSandi then
            self.Send8(KataSandiBaru, KataSandiSekarang)
        else
            panelMgr:CreatePanel("View/ShortNotice", {text =  GeLanguageById(224)}) --"两次密码不一致"
        end
    elseif obj.name == "SetPayPassword_Button" then
        local PenarikanKataSandi = self.PenarikanKataSandiInputField:GetComponent("InputField").text
        local PenarikanKonflrmasiKataSandi = self.PenarikanKonflrmasiKataSandiInputField:GetComponent("InputField").text
        if not self.Agreement_Toggle.isOn then
            panelMgr:CreatePanel("View/ShortNotice", {text = GeLanguageById(262)}) --"需要同意协议"
            return
        end
        if PenarikanKataSandi == "" or PenarikanKataSandi == nil then
            panelMgr:CreatePanel("View/ShortNotice", {text = GeLanguageById(14)}) --"请输入密码"
            return
        end
        if PenarikanKonflrmasiKataSandi == "" or PenarikanKonflrmasiKataSandi == nil then
            panelMgr:CreatePanel("View/ShortNotice", {text = GeLanguageById(261)}) --"请输入确认密码"
            return
        end
        --    if PenarikanKonflrmasiKataSandi~=PenarikanKonflrmasiKataSandi then
        --     panelMgr:CreatePanel("View/ShortNotice",{text="两次密码不一致"})
        --     return
        --    end
        self.Send10(PenarikanKataSandi, PenarikanKonflrmasiKataSandi)
    end
end

function PasswordSetingPanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
end

--修改登录密码
function PasswordSetingPanel.Send8(newPassword, oldPassword)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        changeClass = 0,
        changePassword = newPassword,
        oldChangePassword = oldPassword
    }
    local code = protobuf.encode("tutorial.Req8", ReqLoad)
    networkMgr:SendMessageBf(8, code) --登录
    Event:Add("eventName8", self.Callback8)
end
function PasswordSetingPanel.Callback8(name, data)
    Event:Remove("eventName8", self.Callback8)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(226), IsError = false}) --"修改密码成功"
end

--获取银行卡列表
function PasswordSetingPanel.Send9()
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {}
    local code = protobuf.encode("tutorial.Req9", ReqLoad)
    networkMgr:SendMessageBf(9, code) --登录
    Event:Add("eventName9", self.Callback9)
end
function PasswordSetingPanel.Callback9(name, data)
    Event:Remove("eventName9", self.Callback9)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    for k, v in ipairs(data.bankCardList) do
        local BankCardItem = newObject(self.SelectBankCardItem)
        BankCardItem.transform:SetParent(self.BankCardContent.transform)
        BankCardItem.transform.localScale = Vector3(1, 1, 1)
        BankCardItem.transform.localPosition = Vector3.New(0, 0, 0)
        self.LuaBehaviour:AddValueChanged(BankCardItem.transform:GetComponent("Toggle"), self.ToggleClick) --开关
        BankCardItem.transform:GetComponent("Toggle").isOn = v.DefaultState == 0
        --BankCardItem.transform:Find("BankIcon_Image") --银行图标
        BankCardItem.transform:Find("BankName_Label"):GetComponent("Text").text = v.bankTitle
        BankCardItem.transform:Find("CardNumber_Label"):GetComponent("Text").text = v.cardId
        BankCardItem.transform:Find("UserName_Label"):GetComponent("Text").text = v.openCardName
        ---------------------------------------------------银行卡删除功能---------------------------------------------------------------
        --BankCardItem.transform:Find("Change_Button")  --改变银行卡按钮
        BankCardItem.name = v.cardId
        BankCardItem:SetActive(true)
    end
    if #data.bankCardList > 0 then
        self.DetailBankInitialState:SetActive(false)
        self.BankCardScrollView:SetActive(true)
    end
end
function PasswordSetingPanel.ToggleClick(go, value)
    if value then
        self.Send11(go.name, true)
    end
end
--设置支付密码
function PasswordSetingPanel.Send10(newPassword, oldPassword)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        newPayPaw = newPassword,
        oldPayPaw = oldPassword
    }
    local code = protobuf.encode("tutorial.Req10", ReqLoad)
    networkMgr:SendMessageBf(10, code) --登录
    Event:Add("eventName10", self.Callback10)
end

function PasswordSetingPanel.Callback10(name, data)
    Event:Remove("eventName10", self.Callback10)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(233), IsError = false}) --"设置支付密码成功"
end

--银行卡
function PasswordSetingPanel.Send11(BankCardId, IsChangeDefaultState, BankClass, OpenCardName)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        cardId = BankCardId
    }
    if IsChangeDefaultState then
        ReqLoad.isChangeDefaultState = true
    elseif BankClass and OpenCardName then --修改
        ReqLoad.bankClass = BankClass
        ReqLoad.openCardNam = OpenCardName
        ReqLoad.isChangeDefaultState = IsChangeDefaultState
    end
    local code = protobuf.encode("tutorial.Req11", ReqLoad)
    networkMgr:SendMessageBf(11, code) --登录
    Event:Add("eventName11", self.Callback11)
end

function PasswordSetingPanel.Callback11(name, data)
    Event:Remove("eventName11", self.Callback11)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    --   optional int32 doing=3;                   //操作状态 0 增加 1修改 2删除 4修改默认状态
    panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(238), IsError = false}) --"选择银行卡成功"
end

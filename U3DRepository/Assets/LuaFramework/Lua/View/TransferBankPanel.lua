--[[
    luaide  模板位置位于 Template/FunTemplate/NewFileTemplate.lua 其中 Template 为配置路径 与luaide.luaTemplatesDir
    luaide.luaTemplatesDir 配置 https://www.showdoc.cc/web/#/luaide?page_id=713062580213505
    author:{author}
    time:2020-07-10 16:37:19
]]
require "Common/functions"

TransferBankPanel = {
    transform,
    gameObject,
    LuaBehaviour,
    AlphaTime = 0.1,
    AllCoroutine = {},
    URL = ""
}

local self = TransferBankPanel

function TransferBankPanel.Awake(obj)
    self.gameObject = obj
    self.transform = self.gameObject.transform
    self.LuaBehaviour = self.gameObject:GetComponent("LuaBehaviour")
    self.FindComponent()
    self.AddOnClickEvent()
end
function TransferBankPanel.Start()
end
--查找组件
function TransferBankPanel.FindComponent()
    --self.BG= self.transform:Find("Panel/Bg").gameObject;
    self.CloseButton = self.transform:Find("Panel/PanelBg/Top_Image/CloseButton").gameObject --关闭按钮或
    self.BankCardItem = self.transform:Find("Panel/PanelBg/BankCardItem").gameObject --关闭按钮或
    self.Content = self.transform:Find("Panel/PanelBg/BankOptions/Viewport/Content").gameObject --关闭按钮或
    self.TransferButton = self.transform:Find("Panel/PanelBg/TransferPanel/Transfer_Button").gameObject --关闭按钮或
    self.BankCardInputField = self.transform:Find("Panel/PanelBg/TransferPanel/Pengirim/BankCard_InputField").gameObject:GetComponent("InputField")
    self.NamarekeningInputField = self.transform:Find("Panel/PanelBg/TransferPanel/Pengirim/Namarekening_InputField").gameObject:GetComponent("InputField")
    self.ANamarekeningInputField = self.transform:Find("Panel/PanelBg/TransferPanel/GatheringInformation/ANamarekening_InputField").gameObject:GetComponent("InputField")
    self.ANomorRekeningInputField = self.transform:Find("Panel/PanelBg/TransferPanel/GatheringInformation/ANomorRekening_InputField").gameObject:GetComponent("InputField")
    self.JumlahsetoranInputField = self.transform:Find("Panel/PanelBg/TransferPanel/Jumlahsetoran/Jumlahsetoran_InputField").gameObject:GetComponent("InputField")
    self.BankInputField = self.transform:Find("Panel/PanelBg/TransferPanel/CollectingBank/Bank_InputField").gameObject:GetComponent("InputField")
    self.SelectBankCardInputField = self.transform:Find("Panel/PanelBg/TransferPanel/CollectingBank/SelectBankCard_InputField").gameObject:GetComponent("InputField")
    self.IconImage = self.transform:Find("Panel/PanelBg/TransferPanel/CollectingBank/SelectBankCard_InputField/Icon_Image").gameObject
    self.OpenUrlButton = self.transform:Find("Panel/PanelBg/TransferPanel/CollectingBank/SelectBankCard_InputField/OpenUrl_Button").gameObject
    self.NamarekeningCopyButton = self.transform:Find("Panel/PanelBg/TransferPanel/GatheringInformation/ANamarekening_InputField/NamarekeningCopy_Button").gameObject
    self.NomorRekeningCopyButton = self.transform:Find("Panel/PanelBg/TransferPanel/GatheringInformation/ANomorRekening_InputField/NomorRekeningCopy_Button").gameObject
    self.CurrencyCodeText=self.transform:Find("Panel/PanelBg/TransferPanel/Jumlahsetoran/Jumlahsetoran_InputField/CurrencyCode_Text").gameObject:GetComponent("Text")
    self.TopImage = self.transform:Find("Panel/PanelBg/Top_Image").gameObject
    self.TransferPanel = self.transform:Find("Panel/PanelBg/TransferPanel").gameObject
    self.NOTransferPanel = self.transform:Find("Panel/PanelBg/NOTransferPanel").gameObject
    self.RecordButton = self.transform:Find("Panel/PanelBg/Record_Button").gameObject
end

function TransferBankPanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self.BG, self.OnClickOk) 
    self.LuaBehaviour:AddClick(self.CloseButton, self.OnClickOk) 
    self.LuaBehaviour:AddClick(self.TransferButton, self.Transfer) 
    self.LuaBehaviour:AddClick(self.OpenUrlButton, self.OnClickOk) 
    self.LuaBehaviour:AddClick(self.NamarekeningCopyButton, self.OnClickOk) 
    self.LuaBehaviour:AddClick(self.NomorRekeningCopyButton, self.OnClickOk)
    self.LuaBehaviour:AddClick(self.RecordButton, self.OnClickOk)
end

--激活事件--
function TransferBankPanel.OnEnable(obj)
    -- local co= coroutine.start(self.ShowPanelAnim);
    --table.insert(self.AllCoroutine, co);
end

function TransferBankPanel.ShowPanelAnim()
    Yield(0)
    local Vertical = self.Content:GetComponent("VerticalLayoutGroup")
    Vertical.enabled = false
    self.TopImage.transform.localPosition = Vector3(0, 800, 0)
    for i = 1, self.Content.transform.childCount do
        local Item = self.Content.transform:GetChild(i - 1)
        Item.localPosition = Vector3(-480, Item.localPosition.y, 0)
    end
    self.TopImage.transform:DOLocalMoveY(486.7301, 0.5, false)
    for i = 1, self.Content.transform.childCount do
        local Item = self.Content.transform:GetChild(i - 1)
        Item:DOLocalMoveX(0, 0.3, false)
        coroutine.wait(0.15)
    end
    coroutine.wait(0.15)
    Vertical.enabled = true
end

function TransferBankPanel.InputFiledShowPanelAnim()
    Yield(0)
    for i = 1, self.TransferPanel.transform.childCount do
        local Item = self.TransferPanel.transform:GetChild(i - 1)
        Item.localPosition = Vector3(2500, Item.localPosition.y, 0)
    end
    for i = 1, self.TransferPanel.transform.childCount do
        local Item = self.TransferPanel.transform:GetChild(i - 1)
        Item:DOLocalMoveX(0, 0.2, false)
        coroutine.wait(0.1)
    end
end

function TransferBankPanel.HidePanelAnim()
    DestroyView("TransferBank")
    panelMgr:CreatePanel("View/Hall", nil)
end

local IsFirst = true
function TransferBankPanel.Init(data)
    if data ~= nil then
        for i, v in ipairs(data.bankTAFormClassList) do
            local BankType = newObject(self.BankCardItem)
            BankType.transform:Find("Name_Label"):GetComponent("Text").text = v.NameAbbreviation
            Game.GetLoadHeaderFile(v.iconId, BankType.transform:Find("Icon_Image").gameObject)
            BankType.transform:SetParent(self.Content.transform)
            BankType.transform.localPosition = Vector3(0, 0, 0)
            BankType.transform.localScale = Vector3(1, 1, 1)
            BankType.gameObject:SetActive(true)
            BankType.transform:GetComponent("Toggle").isOn = IsFirst
            if IsFirst then
                IsFirst = false
                if #v.ToBankAccountList==0 then
                    self.TransferPanel:SetActive(false)
                    self.NOTransferPanel:SetActive(true)
                else
                    self.TransferPanel:SetActive(true)
                    self.NOTransferPanel:SetActive(false)
                    local Name_bankCard = Split(v.ToBankAccountList[math.random(1, #v.ToBankAccountList)], "*")
                    self.ANamarekeningInputField.text = Name_bankCard[1]
                    self.ANomorRekeningInputField.text = Name_bankCard[2]
                    self.CurrencyCodeText.text=Name_bankCard[3]
                    self.BankInputField.text = v.NameAbbreviation
                    self.SelectBankCardInputField.text = v.jumpShowUrl
                    Game.GetLoadHeaderFile(v.iconId, self.IconImage)
                end
            end
            self.LuaBehaviour:AddValueChanged(
                BankType.transform:GetComponent("Toggle"),
                function(go, value)
                    if value then
                        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
                        soundMgr:PlayX(music)
                        if #v.ToBankAccountList==0 then
                            self.TransferPanel:SetActive(false)
                            self.NOTransferPanel:SetActive(true)
                        else
                            self.TransferPanel:SetActive(true)
                            self.NOTransferPanel:SetActive(false)
                            local Name_bankCard = Split(v.ToBankAccountList[math.random(1, #v.ToBankAccountList)], "*")
                            self.ANamarekeningInputField.text = Name_bankCard[1]
                            self.ANomorRekeningInputField.text = Name_bankCard[2]
                            self.CurrencyCodeText.text=Name_bankCard[3]
                            self.BankInputField.text = v.NameAbbreviation
                            self.SelectBankCardInputField.text = v.jumpShowUrl
                            self.URL = v.jumpShowUrl
                            Game.GetLoadHeaderFile(v.iconId, self.IconImage)
                        end
                    end
                end
            )
        end
    end
    local co = coroutine.start(self.ShowPanelAnim)
    table.insert(self.AllCoroutine, co)
    local co1 = coroutine.start(self.InputFiledShowPanelAnim)
    table.insert(self.AllCoroutine, co1)
end

function TransferBankPanel.Transfer(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    local BankCard = self.BankCardInputField.text
    local Namarekening = self.NamarekeningInputField.text
    local ANamarekening = self.ANamarekeningInputField.text
    local ANomorRekening = self.ANomorRekeningInputField.text
    local Jumlahsetoran = self.JumlahsetoranInputField.text
    if BankCard == nil or BankCard == "" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(72)}) --"银行卡号不能为空"
        return
    end
    if Namarekening == nil or Namarekening == "" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(73)}) --"用户名不能为空"
        return
    end
    if Jumlahsetoran == nil or Jumlahsetoran == "" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(74)}) --"金额不能为空"
        return
    end
    self.Send61(Namarekening, BankCard, ANamarekening, ANomorRekening, Jumlahsetoran)
end
function TransferBankPanel.Update()
end

function TransferBankPanel.OnClickOk(obj)
    if obj.name ~= "CloseButton" then --关闭按钮或
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
    end
    if obj.name == "CloseButton" then --关闭按钮或
        local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        self.HidePanelAnim()
    elseif obj.name == "OpenUrl_Button" then
        Application.OpenURL(self.URL)
    elseif obj.name == "NamarekeningCopy_Button" then
        Copy(self.ANamarekeningInputField.text)
    elseif obj.name == "NomorRekeningCopy_Button" then
        Copy(self.ANomorRekeningInputField.text)
    
    elseif obj.name == "Record_Button" then
        panelMgr:CreatePanel("View/PayRecord", {Panel = "View/TransferBank"})
        CloseView("TransferBank")
    end
end

function TransferBankPanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
end

function TransferBankPanel.Send61(FromName, FromCardId, ToName, ToCardId, Amount)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        fromName = FromName,
        fromCardId = FromCardId,
        toName = ToName,
        toCardId = ToCardId,
        amount = Amount
    }
    local code = protobuf.encode("tutorial.Req61", ReqLoad)
    networkMgr:SendMessageBf(61, code)
    Event:Add("eventName61", self.Callback61)
end

function TransferBankPanel.Callback61(name, data)
    Event:Remove("eventName61", self.Callback61)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    self.BankCardInputField.text="";
    self.NamarekeningInputField.text="";
    self.JumlahsetoranInputField.text=""
    panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(75), IsError = false}) --"转账成功"
    panelMgr:CreatePanel("View/PayRecord", {Panel = "View/TransferBank"})
    CloseView("TransferBank")
end

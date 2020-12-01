

PenarikanPanel={
    transform;
    gameObject;
    LuaBehaviour;
    RecordListPrefab=nil;
    RecordList={};
    BankList={};
    IsAddBankOut=false;
    SelectTimestamp="";
    AllCoroutine={};
}

local self = PenarikanPanel

function PenarikanPanel.Awake(obj)
    self.gameObject = obj;
    self.transform = obj.transform;
    self.LuaBehaviour=self.gameObject:GetComponent('LuaBehaviour');

    self.FindComponent();
    self.AddOnClickEvent();

    resMgr:LoadPrefab("PayRecord",{"RecordList"},self.LoadInboxPrefab);

    local co = coroutine.start(self.ShowPanelAnim)
    table.insert(self.AllCoroutine, co)
end



function PenarikanPanel.FindComponent()
    self.Penarikan = self.transform:Find("Panel/Penarikan").gameObject
    self.PenarikanRecord = self.transform:Find("Panel/Record").gameObject
    self.AddBankBox = self.transform:Find("Panel/AddBankBox").gameObject
    self.AddCodeBox = self.transform:Find("Panel/AddCodeBox").gameObject
    --提款
    self.BankDropdown = self.transform:Find("Panel/Penarikan/Cards/Bank_Dropdown"):GetComponent("Dropdown")
    self.NameInputField = self.transform:Find("Panel/Penarikan/Cards/Name_InputField").gameObject
    self.RekeningInputField = self.transform:Find("Panel/Penarikan/Cards/Rekening_InputField").gameObject
    self.JumlahInputField = self.transform:Find("Panel/Penarikan/TikuanInput/Jumlah_InputField").gameObject
    self.TealityTxt = self.transform:Find("Panel/Penarikan/TikuanInput/TealityTxt"):GetComponent("Text")
    self.PassworldInputField = self.transform:Find("Panel/Penarikan/TikuanInput/Passworld_InputField").gameObject
    self.PenarikanButOK = self.transform:Find("Panel/Penarikan/TikuanInput/ButOK").gameObject
    self.PenarikanTxtGold = self.transform:Find("Panel/Penarikan/Top/Gold/Text"):GetComponent("Text")
    self.ButRecord = self.transform:Find("Panel/Penarikan/Top/Gold/ButRecord").gameObject
    self.PenarikanCloseButton = self.transform:Find("Panel/Penarikan/Top/CloseButton").gameObject
    self.PenarikanAllButton = self.transform:Find("Panel/Penarikan/TikuanInput/Jumlah_InputField/ButAll").gameObject
    self.ButAddBanker = self.transform:Find("Panel/Penarikan/Cards/NOBundingBank/ButAddBank").gameObject
    self.NOBundingBank = self.transform:Find("Panel/Penarikan/Cards/NOBundingBank").gameObject
    self.Top = self.transform:Find("Panel/Penarikan/Top")
    self.Cards = self.transform:Find("Panel/Penarikan/Cards")
    self.TikuanInput =self.transform:Find("Panel/Penarikan/TikuanInput")
    --记录
    self.ButUpdata = self.transform:Find("Panel/Record/Top/Gold/ButUpdata").gameObject
    self.RecordTxtGold = self.transform:Find("Panel/Record/Top/Gold/Text"):GetComponent("Text")
    self.RecordContent = self.transform:Find("Panel/Record/Record_ScrollView/ViewPort/Content").gameObject
    self.RecordDetail = self.transform:Find("Panel/Record/RecordDetail").gameObject
    self.RecordCloseButton = self.transform:Find("Panel/Record/Top/CloseButton").gameObject
    self.Alesan = self.transform:Find("Panel/Record/RecordDetail/Detail_ScrollView/ViewPort/Content/Alesan").gameObject

    --设置密码
    self.SetBankPassInput = self.transform:Find("Panel/AddCodeBox/InputField").gameObject
    self.SetBankPassButton = self.transform:Find("Panel/AddCodeBox/ButOK").gameObject
    self.SetBankPassCloseButton = self.transform:Find("Panel/AddCodeBox/ButClose").gameObject
    self.SetBankPassToggle = self.transform:Find("Panel/AddCodeBox/Text/Toggle"):GetComponent("Toggle")

    --时间筛选
    self.ChoiceTimePanle = self.transform:Find("Panel/Record/ChoiceTimePanel"):GetComponent("Toggle")
    self.NoData = self.transform:Find("Panel/Record/Record_ScrollView/TxtNoData").gameObject
    
    
end

local IsShowGameAnim=false
function PenarikanPanel.ShowPanelAnim()
    if IsShowGameAnim then return end
    IsShowGameAnim=true

    self.Top.localPosition = Vector3(0,200+489,0)
    self.Top:DOLocalMove(Vector3(0,489,0), 0.6, false)

    self.Cards.localPosition = Vector3(2436,self.Cards.localPosition.y,0)
    self.Cards:DOLocalMove(Vector3(0,self.Cards.localPosition.y,0), 0.6, false)
    Yield(0)
    self.TikuanInput.localPosition = Vector3(2436,self.TikuanInput.localPosition.y,0)
    self.TikuanInput:DOLocalMove(Vector3(0,self.TikuanInput.localPosition.y,0), 0.6, false)
    

end

function PenarikanPanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self.PenarikanButOK,function()
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        self.SendReq64()
    end)
    self.LuaBehaviour:AddClick(self.ButRecord,function()
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        self.OnPenarikanRecord()
    end)
    self.LuaBehaviour:AddClick(self.ButUpdata,function()
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        self.OnPenarikanRecord()
    end)
    self.LuaBehaviour:AddClick(self.PenarikanCloseButton,function()
        local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        DestroyView("Penarikan")
        panelMgr:CreatePanel("View/Hall", nil)
    end)
    self.LuaBehaviour:AddClick(self.RecordCloseButton,function()
        local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        self.OpenObject(self.Penarikan)
        IsShowGameAnim=false
        local co = coroutine.start(self.ShowPanelAnim)
        table.insert(self.AllCoroutine, co)
    end)
    self.LuaBehaviour:AddValueChanged(self.JumlahInputField:GetComponent("InputField"),self.OnJumlahInputField)
    self.LuaBehaviour:AddClick(self.PenarikanAllButton,function()
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        self.JumlahInputField:GetComponent("InputField").text = tostring(Player.gold)
    end)
    self.LuaBehaviour:AddClick(self.ButAddBanker,function()
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        panelMgr:CreatePanel("View/AddBankCard", {UpBankcard=function() 
            self.IsAddBankOut = true
            self.Send9()
        end})
    end)
    self.LuaBehaviour:AddValueChanged(self.BankDropdown,self.OnBankDropdownCallback)
    self.LuaBehaviour:AddClick(self.SetBankPassButton,function() 
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        self.SendSetBankPass()
    end)
    self.LuaBehaviour:AddClick(self.SetBankPassCloseButton,function()
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        self.AddCodeBox:SetActive(false)
    end)
    self.LuaBehaviour:AddValueChanged(self.ChoiceTimePanle,self.OnChoiceTimeCallBack)
end

function PenarikanPanel.LoadInboxPrefab(obj)
    self.RecordListPrefab = obj[0]
 
end

function PenarikanPanel.OnEnable(obj)
    self.PenarikanTxtGold.text = tostring(Player.gold)
    self.RecordTxtGold.text = tostring(Player.gold)
    self.Send9()
end

function PenarikanPanel.OnJumlahInputField(obj,value)
    if value=="" then
        self.TealityTxt.text = ""
        return
    end
    -- for k,v in pairs(Game.ServiceCharge) do
    --     print(v)
    -- end
    local lilv = 0
    if #Game.ServiceCharge < Player.Lv then
        lilv = Game.ServiceCharge[#Game.ServiceCharge]
    else
        lilv = Game.ServiceCharge[Player.Lv+1]
    end
    
    if lilv==nil then
        return
    end
    local rate100 = lilv / 100
    local rate  = lilv / 10000
    self.TealityTxt.text = GeLanguageById(269).."："..rate100.."%，"..GeLanguageById(270).."：".. tostring(value - value * rate)
end
-----提款-----


--获取银行卡列表

function PenarikanPanel.Send9()
    self.NOBundingBank:SetActive(false)
    self.BankDropdown.gameObject:SetActive(false)
    self.NameInputField:SetActive(false)
    self.RekeningInputField:SetActive(false)

    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {}
    local code = protobuf.encode("tutorial.Req9", ReqLoad)
    networkMgr:SendMessageBf(9, code) --登录
    Event:Add("eventName9", self.Callback9)
end
function PenarikanPanel.Callback9(name, data)
    Event:Remove("eventName9", self.Callback9)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    
    if  #data.bankCardList == 0 then
        self.NOBundingBank:SetActive(true)
        self.BankDropdown.gameObject:SetActive(false)
        self.NameInputField:SetActive(false)
        self.RekeningInputField:SetActive(false)
        self.Penarikan.transform:Find("Cards/title1").gameObject:SetActive(false)
        self.Penarikan.transform:Find("Cards/title3").gameObject:SetActive(false)
        self.Penarikan.transform:Find("Cards/title2").gameObject:SetActive(false)
        return
    else
        self.NOBundingBank:SetActive(false)
        self.BankDropdown.gameObject:SetActive(true)
        self.NameInputField:SetActive(true)
        self.RekeningInputField:SetActive(true)
        self.Penarikan.transform:Find("Cards/title1").gameObject:SetActive(true)
        self.Penarikan.transform:Find("Cards/title3").gameObject:SetActive(true)
        self.Penarikan.transform:Find("Cards/title2").gameObject:SetActive(true)
    end

    if self.IsAddBankOut and Player.IsBankPassword == 1 then
        self.IsAddBankOut = false
        --self.AddCodeBox:SetActive(true)
        ShowObjectAnim(self.AddCodeBox);
    end

    self.BankList = {}

    local defaultBank = 1
    for k, v in ipairs(data.bankCardList) do
        --print("======k="..k..",v="..v.bankTitle)
        self.BankList[k]=v
        self.BankDropdown:GetComponent("Dropdown").options:Add(OptionData(v.bankTitle.."("..string.sub(v.cardId,string.len(v.cardId)-3)..")"))
        if v.DefaultState == 0 then
            defaultBank=k
        end
    end
    self.BankDropdown:GetComponent("Dropdown").options:Add(OptionData(""))
    self.BankDropdown:GetComponent("Dropdown").value = defaultBank-1
    self.BankDropdown.transform:Find("Label"):GetComponent("Text").text = self.BankList[defaultBank].bankTitle.."("..string.sub(self.BankList[defaultBank].cardId,string.len(self.BankList[defaultBank].cardId)-3)..")"
    self.NameInputField:GetComponent("InputField").text = self.BankList[defaultBank].openCardName
    self.RekeningInputField:GetComponent("InputField").text = self.BankList[defaultBank].cardId
end

function PenarikanPanel.OnBankDropdownCallback(obj,value)
    self.NameInputField:GetComponent("InputField").text = self.BankList[value+1].openCardName
    self.RekeningInputField:GetComponent("InputField").text = self.BankList[value+1].cardId
      
    
end

--根据时间筛选
function PenarikanPanel.OnChoiceTimeCallBack(obj,value)
    if value==false  then
        local timestamp = obj.transform:Find("Text"):GetComponent("Text").text
        if tonumber(timestamp) >= os.time() then
            for k,v in pairs(self.RecordList) do
                v:SetActive(false)
            end
            self.NoData:SetActive(true)
            return
        end
        self.OnPenarikanRecord(timestamp);
    end
end


function PenarikanPanel.SendReq64()
    local _cardID = self.RekeningInputField:GetComponent("InputField").text
    local _outAmount = self.JumlahInputField:GetComponent("InputField").text
    local _payPassword = self.PassworldInputField:GetComponent("InputField").text
    
    --没有绑定银行
    if self.BankList==nil or #self.BankList==0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(93)}) --"请先绑定银行卡"
        return
    end
    --没有设置支付密码
    if Player.IsBankPassword == 1 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(121)}) --"请先设置取款密码"
        --self.AddCodeBox:SetActive(true)
        ShowObjectAnim(self.AddCodeBox);
        return
    end

    if _outAmount=="" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(122)}) --"请输入提款金额"
        return
    end
    if tonumber(_outAmount)<=0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(125)}) --"取款数量错误"
        return
    end
    if _payPassword=="" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(123)}) --"请输入取款密码"
        return
    end
    if tonumber(_outAmount)>Player.gold then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(126)}) --"余额不足"
        return
    end

    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        cardId=_cardID,
        outAmount=_outAmount,
        payPassword=_payPassword
    }
    local code = protobuf.encode("tutorial.Req64", ReqLoad)
    networkMgr:SendMessageBf(64, code)
    Event:Add("eventName64", self.Callback64)
end

function PenarikanPanel.Callback64(name, data)
    Event:Remove("eventName64",self.Callback64)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg)), IsError = true})
        return
    end
    panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(127), IsError = false}) --"提款成功"

    self.PenarikanTxtGold.text = tostring(Player.gold)
    self.RecordTxtGold.text = tostring(Player.gold)

    self.JumlahInputField:GetComponent("InputField").text=""
    self.PassworldInputField:GetComponent("InputField").text=""
    self.OnPenarikanRecord()
end
-----提款-----


-----记录-----
function PenarikanPanel.OnPenarikanRecord(timestamp)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = { }
    self.SelectTimestamp = timestamp
    ReqLoad = {
        selectDay = timestamp
    }
    local code = protobuf.encode("tutorial.Req65", ReqLoad)
    networkMgr:SendMessageBf(65, code)
    Event:Add("eventName65", self.Callback65)

    for k,v in pairs(self.RecordList) do
        v:SetActive(false)
    end

    self.OpenObject(self.PenarikanRecord)


end

function PenarikanPanel.Callback65(name, data)
    Event:Remove("eventName65",self.Callback65)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        self.NoData:SetActive(true)
        return
    end

    self.PenarikanTxtGold.text = tostring(Player.gold)
    self.RecordTxtGold.text = tostring(Player.gold)

    if self.SelectTimestamp==nil then
        self.ChoiceTimePanle.transform:Find("Label"):GetComponent("Text").text = "Kabeh"
    end

    if #data.dramingList==0 then
        self.NoData:SetActive(true)
    else
        self.NoData:SetActive(false)
    end

    for k, v in pairs(data.dramingList) do
        --print("===参与列表k="..k..",v="..v.ATitle)
        if k>#self.RecordList then
            local obj = newObject(self.RecordListPrefab)
            obj.transform:SetParent(self.RecordContent.transform)
            obj.transform.localScale = Vector3(1,1,1)
            obj.transform:Find("TxtTitle"):GetComponent("Text").text = v.oTitle
            obj.transform:Find("TxtOrder"):GetComponent("Text").text = v.orderId
            obj.transform:Find("TxtType"):GetComponent("Text").text = v.currencyType
            obj.transform:Find("TxtMoney"):GetComponent("Text").text = v.amount
            obj.transform:Find("TxtTime"):GetComponent("Text").text = os.date("%m/%d %H:%M",v.createTime)
            self.GetRecordState(v.state,obj)
            self.LuaBehaviour:AddClick(obj.transform:Find("ButOpen").gameObject,function() self.OpenDetail(v,v.amount) end)
            table.insert(self.RecordList,obj)
        else
            local obj = self.RecordList[k]
            obj.transform:Find("TxtTitle"):GetComponent("Text").text = v.oTitle
            obj.transform:Find("TxtOrder"):GetComponent("Text").text = v.orderId
            obj.transform:Find("TxtType"):GetComponent("Text").text = v.currencyType
            obj.transform:Find("TxtMoney"):GetComponent("Text").text = v.amount
            obj.transform:Find("TxtTime"):GetComponent("Text").text = os.date("%m/%d %H:%M",v.createTime)
            self.LuaBehaviour:RemoveClick(obj.transform:Find("ButOpen").gameObject)
            self.LuaBehaviour:AddClick(obj.transform:Find("ButOpen").gameObject,function() self.OpenDetail(v,v.amount) end)
            self.GetRecordState(v.state,obj)
            obj:SetActive(true)
        end
    end
end

function PenarikanPanel.OpenDetail(v,money)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)

    self.RecordDetail.transform:Find("TxtMoney"):GetComponent("Text").text = v.currencyType.." "..v.amount
    --self.RecordDetail.transform:Find("TxtType"):GetComponent("Text").text = v.currencyType
    self.RecordDetail.transform:Find("Detail_ScrollView/ViewPort/Content/TxtTitle/Text"):GetComponent("Text").text = v.oTitle
    self.RecordDetail.transform:Find("Detail_ScrollView/ViewPort/Content/TxtOrder/Text"):GetComponent("Text").text = v.orderId
    self.RecordDetail.transform:Find("Detail_ScrollView/ViewPort/Content/TxtTime/Text"):GetComponent("Text").text = os.date("%m/%d %H:%M",v.createTime)
    self.RecordDetail.transform:Find("Detail_ScrollView/ViewPort/Content/TxtTeality/Text"):GetComponent("Text").text = tostring(v.amount - v.serviceCharge)
    self.RecordDetail.transform:Find("Detail_ScrollView/ViewPort/Content/TxtServiceCharge/Text"):GetComponent("Text").text = v.serviceCharge
    self.GetRecordState(v.state,self.RecordDetail.transform:Find("Detail_ScrollView/ViewPort/Content/Statue").gameObject)
    if v.refuseMsg ~="" then
        self.Alesan.transform:Find("Text"):GetComponent("Text").text = v.refuseMsg
        self.Alesan:SetActive(true)
    else
        self.Alesan:SetActive(false)
    end
    self.LuaBehaviour:AddClick(self.RecordDetail.transform:Find("Detail_ScrollView/ViewPort/Content/TxtOrder/Button").gameObject,function()
    Copy(v.orderId)
    end)
    
    --self.RecordDetail:SetActive(true)
    ShowObjectAnim(self.RecordDetail);
end

function PenarikanPanel.GetRecordState(index,obj)
    obj.transform:Find("Statue0").gameObject:SetActive(false)
    obj.transform:Find("Statue1").gameObject:SetActive(false)
    obj.transform:Find("Statue2").gameObject:SetActive(false)
    obj.transform:Find("Statue3").gameObject:SetActive(false)
    obj.transform:Find("Statue"..index).gameObject:SetActive(true)
end
-----记录-----


-----设置密码----
function PenarikanPanel.SendSetBankPass()
    --self.SetBankPassToggle.isOn == false or 
    if string.len(self.SetBankPassInput:GetComponent("InputField").text)<4 or string.len(self.SetBankPassInput:GetComponent("InputField").text)>8 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(108), IsError = true}) --"输入4-8位提款密码"
        return
    end


    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        newPayPaw = self.SetBankPassInput:GetComponent("InputField").text,
        oldPayPaw = self.SetBankPassInput:GetComponent("InputField").text
    }
    local code = protobuf.encode("tutorial.Req10", ReqLoad)
    networkMgr:SendMessageBf(10, code) --登录
    Event:Add("eventName10", self.Callback10)
end

function PenarikanPanel.Callback10(name, data)
    Event:Remove("eventName10", self.Callback10)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(255), IsError = false}) --"取款密码设置成功"
    self.AddCodeBox:SetActive(false)
    Player.IsBankPassword = 0
end

-----设置密码----

function PenarikanPanel.OpenObject(obj)
    self.Penarikan:SetActive(false)
    self.PenarikanRecord:SetActive(false)
    self.AddBankBox:SetActive(false)
    self.AddCodeBox:SetActive(false)
    obj:SetActive(true)
    --ShowObjectAnim(obj);
end

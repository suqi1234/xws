--[[
    luaide  模板位置位于 Template/FunTemplate/NewFileTemplate.lua 其中 Template 为配置路径 与luaide.luaTemplatesDir
    luaide.luaTemplatesDir 配置 https://www.showdoc.cc/web/#/luaide?page_id=713062580213505
    author:{author}
    time:2020-07-10 16:36:54
]]


PayRecordPanel = {
    transform;
    gameObject;
    LuaBehaviour;
    RecordListPrefab=nil;
    RecordList={};
    CurrentPos="";
    SelectTimestamp="";
    SelectPayID = "";
    PayIDList = {};
}

local self = PayRecordPanel

function PayRecordPanel.Awake(obj)
    self.gameObject = obj
    self.transform = self.gameObject.transform
    self.LuaBehaviour = self.gameObject:GetComponent("LuaBehaviour")

    self.FindComponent()
    self.AddOnClickEvent()

    self.LoadPayChannel()
    resMgr:LoadPrefab("PayRecord",{"RecordList"},self.LoadPrefab);
end
function PayRecordPanel.Start()
end

--查找组件
function PayRecordPanel.FindComponent()
    self.PanelRecord = self.transform:Find("Panel/PanelRecord").gameObject
    self.RecordContent = self.transform:Find("Panel/PanelRecord/Record_ScrollView/ViewPort/Contetn").gameObject
    self.CloseRecordBut = self.transform:Find("Panel/PanelRecord/Top_Image/CloseButton").gameObject
    self.TxtGold = self.transform:Find("Panel/PanelRecord/Top_Image/Gold/Text"):GetComponent("Text")
    self.RecordDerail = self.transform:Find("Panel/PanelRecord/RecordDetail").transform
    self.ButUpdata = self.transform:Find("Panel/PanelRecord/Top_Image/Gold/ButUpdata").gameObject
    self.Alesan = self.transform:Find("Panel/PanelRecord/RecordDetail/Alesan").gameObject
    self.ChoiceTimePanle = self.transform:Find("Panel/PanelRecord/ChoiceTimePanel"):GetComponent("Toggle")
    self.BankDropdown = self.transform:Find("Panel/PanelRecord/Bank_Dropdown"):GetComponent("Dropdown")
    self.NoData = self.transform:Find("Panel/PanelRecord/TxtNoData").gameObject
end

function PayRecordPanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self.CloseRecordBut,self.CloseRecord)
    self.LuaBehaviour:AddClick(self.ButUpdata,function()
        self.OnRecord()
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
    end)
    self.LuaBehaviour:AddClick(self.RecordDerail.transform:Find("ButClose").gameObject,self.RecordDerailClose)
    self.LuaBehaviour:AddValueChanged(self.ChoiceTimePanle,self.OnChoiceTimeCallBack)
    self.LuaBehaviour:AddValueChanged(self.BankDropdown,self.OnBankDropdownCallBack)
end

function PayRecordPanel.LoadPrefab(obj)
    self.RecordListPrefab = obj[0]
    self.OnRecord()
end

--激活事件--
function PayRecordPanel.OnEnable(obj)
    if self.RecordListPrefab~=nil then
        self.OnRecord()
    end
end

--加载支付渠道
function PayRecordPanel.LoadPayChannel()
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
    }
    local code = protobuf.encode("tutorial.Req16", ReqLoad)
    networkMgr:SendMessageBf(16, code)
    Event:Add("eventName16", self.Callback16)
end
function PayRecordPanel.Callback16(name, data)
    Event:Remove("eventName16", self.Callback16)
     if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end

    self.PayIDList = data.payChannelList

    --self.BankDropdown.options:Add(OptionData("Kabeh"))
    for k, v in ipairs(data.payChannelList) do
        self.BankDropdown.options:Add(OptionData(v.payChannelTitle))
    end
    self.BankDropdown.options:Add(OptionData(""))
    self.BankDropdown.value = self.BankDropdown.options.Count-1
    self.BankDropdown.transform:Find("Label"):GetComponent("Text").text = "Kabeh"
end

--根据渠道筛选
function PayRecordPanel.OnBankDropdownCallBack(obj,value)
    if value==self.BankDropdown.options.Count-1 then
        self.OnRecord(self.SelectTimestamp)
    else
        self.OnRecord(self.SelectTimestamp,self.PayIDList[value+1].payChannelId)
    end
end

--根据时间筛选
function PayRecordPanel.OnChoiceTimeCallBack(obj,value)
    if value==false  then
        local timestamp = obj.transform:Find("Text"):GetComponent("Text").text
        if tonumber(timestamp) >= os.time() then
            for k,v in pairs(self.RecordList) do
                v:SetActive(false)
            end
            self.NoData:SetActive(true)
            return
        end
        self.OnRecord(timestamp,self.SelectPayID);
    end
end

--充值记录
function PayRecordPanel.OnRecord(timestamp,payid)
    self.TxtGold.text = tostring(Player.gold)
    self.PanelRecord:SetActive(true)
    self.SelectTimestamp = timestamp
    self.SelectPayID = payid
    for k,v in pairs(self.RecordList) do
        v:SetActive(false)
    end
    --print("==获取列表参数：timestamp="..tostrng(timestamp)..",payid:"..tostring(payid))
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    ReqLoad = {
        selectDay = timestamp,
        selectPayChannelId = payid
    }
    local code = protobuf.encode("tutorial.Req63", ReqLoad)
    networkMgr:SendMessageBf(63, code)
    Event:Add("eventName63", self.Callback63)
end

function PayRecordPanel.Callback63(name, data)
    Event:Remove("eventName63", self.Callback63)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
      return
    end

    if self.SelectTimestamp==nil then
        self.ChoiceTimePanle.transform:Find("Label"):GetComponent("Text").text = "Kabeh"
    end
    if self.SelectPayID==nil then
        self.BankDropdown.value = self.BankDropdown.options.Count-1
        self.BankDropdown.transform:Find("Label"):GetComponent("Text").text = "Kabeh"
    end
    
    self.NoData:SetActive(true)
    for k, v in pairs(data.payLogList) do
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
            self.LuaBehaviour:AddClick(obj.transform:Find("ButOpen").gameObject,function() self.OpenDetail(v) end)
            table.insert(self.RecordList,obj)
            self.NoData:SetActive(false)
        else
            local obj = self.RecordList[k]
            obj.transform:Find("TxtTitle"):GetComponent("Text").text = v.oTitle
            obj.transform:Find("TxtOrder"):GetComponent("Text").text = v.orderId
            obj.transform:Find("TxtType"):GetComponent("Text").text = v.currencyType
            obj.transform:Find("TxtMoney"):GetComponent("Text").text = v.amount
            obj.transform:Find("TxtTime"):GetComponent("Text").text = os.date("%m/%d %H:%M",v.createTime)
            self.LuaBehaviour:RemoveClick(obj.transform:Find("ButOpen").gameObject)
            self.LuaBehaviour:AddClick(obj.transform:Find("ButOpen").gameObject,function() self.OpenDetail(v) end)
            self.GetRecordState(v.state,obj)
            obj:SetActive(true)
            self.NoData:SetActive(false)
        end
    end
end

function PayRecordPanel.OpenDetail(v)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)

    self.RecordDerail:Find("TxtMoney"):GetComponent("Text").text = v.currencyType.." "..v.amount
    --self.RecordDerail:Find("TxtType"):GetComponent("Text").text = v.currencyType
    self.RecordDerail:Find("TxtTitle/Text"):GetComponent("Text").text = v.oTitle
    self.RecordDerail:Find("TxtOrder/Text"):GetComponent("Text").text = v.orderId
    self.RecordDerail:Find("TxtTime/Text"):GetComponent("Text").text = os.date("%m/%d %H:%M",v.createTime)
    self.GetRecordState(v.state,self.RecordDerail:Find("Statue").gameObject)
    if v.refuseMsg ~="" then
        self.Alesan.transform:Find("Text"):GetComponent("Text").text = v.refuseMsg
        self.Alesan:SetActive(true)
    else
        self.Alesan:SetActive(false)
    end
    self.LuaBehaviour:RemoveClick(self.RecordDerail:Find("TxtOrder/Button").gameObject)
    self.LuaBehaviour:AddClick(self.RecordDerail:Find("TxtOrder/Button").gameObject,function(obj)
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        Copy(v.orderId)
    end)
    --self.RecordDerail.gameObject:SetActive(true)
    ShowObjectAnim(self.RecordDerail.gameObject)
end

function PayRecordPanel.GetRecordState(index,obj)
    obj.transform:Find("Statue0").gameObject:SetActive(false)
    obj.transform:Find("Statue1").gameObject:SetActive(false)
    obj.transform:Find("Statue2").gameObject:SetActive(false)
    obj.transform:Find("Statue"..index).gameObject:SetActive(true)
end

function PayRecordPanel.RecordDerailClose()
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
end

function PayRecordPanel.CloseRecord()
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    DestroyView("PayRecord")
    panelMgr:CreatePanel(self.CurrentPos, nil)
end
function PayRecordPanel.Init(data)
    self.CurrentPos=data.Panel;
end



--获取银行卡列表
-- function PayRecordPanel.Send9()
--     local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
--     local ReqLoad = {}
--     local code = protobuf.encode("tutorial.Req9", ReqLoad)
--     networkMgr:SendMessageBf(9, code)
--     Event:Add("eventName9", self.Callback9)
-- end
-- function PayRecordPanel.LoadBankeList()
--     self.BankDropdown.options:Add(OptionData("Kabeh"))
--     for k, v in ipairs(Game.AllowBindingBankList) do
--         print("--银行列表银行编号："..v.BankClassUid..",银行标题:"..v.BankTitle)
--         self.BankDropdown.options:Add(OptionData(v.BankClassUid))
--     end
--     self.BankDropdown.options:Add(OptionData(""))
--     self.BankDropdown.value = 0
--     self.BankDropdown.transform:Find("Label"):GetComponent("Text").text = "Kabeh"
-- end
-- //充值记录查询
-- message Req63{}
-- message Res63{
--   required int32 state = 1 ;                //返回状态  0 正确，1错误
--   optional string emsg =2;                  //返回状态失败是，告诉的提示
--   repeated PayLogListOne payLogList=3;      //充值记录 
-- }
-- message PayLogListOne{
--   required string orderId=1;                //订单编号
--   required string oTitle=2;                 //订单标题
--   required string currencyType=3;           //货币类型
--   required int64 amount=4;                  //金额
--   required int32 state=5;                   //状态 0支付发起支付  1成功  2失败
--   required string createTime=6;             //时间
-- }


--[[
    luaide  模板位置位于 Template/FunTemplate/NewFileTemplate.lua 其中 Template 为配置路径 与luaide.luaTemplatesDir
    luaide.luaTemplatesDir 配置 https://www.showdoc.cc/web/#/luaide?page_id=713062580213505
    author:{author}
    time:2020-07-10 16:36:54
]]


PayPanel = {
    transform,
    gameObject,
    LuaBehaviour,
    AlphaTime = 0.1,
    AllCoroutine = {}
}

local self = PayPanel

function PayPanel.Awake(obj)
    self.gameObject = obj
    self.transform = self.gameObject.transform
    self.LuaBehaviour = self.gameObject:GetComponent("LuaBehaviour")

    self.FindComponent()
    self.AddOnClickEvent()
end
function PayPanel.Start()
end
--查找组件
function PayPanel.FindComponent()
    --self.BG= self.transform:Find("Panel/Bg").gameObject;
    self.CloseButton = self.transform:Find("Panel/PanelBg/Top_Image/CloseButton").gameObject --关闭按钮或

    self.Top_Image = self.transform:Find("Panel/PanelBg/Top_Image").gameObject --关闭按钮或
    self.PayType_ScrollView = self.transform:Find("Panel/PanelBg/PayType_ScrollView").gameObject --关闭按钮或
    self.DepositRecords_Button = self.transform:Find("Panel/PanelBg/DepositRecords_Button").gameObject
    self.PayTypeContent = self.transform:Find("Panel/PanelBg/PayType_ScrollView/Viewport/Content").transform
    self.BankTypeItem = self.transform:Find("Panel/PanelBg/BankType").transform
    
    self.bank_Image = self.transform:Find("Panel/PanelBg/Prefab/bank").gameObject:GetComponent("Image");
    self.gojek_Image = self.transform:Find("Panel/PanelBg/Prefab/gojek").gameObject:GetComponent("Image");
    self.ovo_Image = self.transform:Find("Panel/PanelBg/Prefab/ovo").gameObject:GetComponent("Image");
    self.visa_Image = self.transform:Find("Panel/PanelBg/Prefab/visa").gameObject:GetComponent("Image");
end

function PayPanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self.BG, self.OnClickOk)
    self.LuaBehaviour:AddClick(self.CloseButton, self.OnClickOk)
    self.LuaBehaviour:AddClick(self.TransferbankButton, self.OnClickOk)
    self.LuaBehaviour:AddClick(self.DepositRecords_Button,self.OnRecord)
end

--激活事件--
function PayPanel.OnEnable(obj)
    
end

function PayPanel.ShowPanelAnim()
    --上部动画
    local endV = self.Top_Image.transform.localPosition
    self.Top_Image.transform.localPosition = Vector3(0,self.Top_Image.transform.localPosition.y+200,0)
    self.Top_Image.transform:DOLocalMove(endV, 0.8, false)

    local endV2 = self.DepositRecords_Button.transform.localPosition
    self.DepositRecords_Button.transform.localPosition = Vector3(self.DepositRecords_Button.transform.localPosition.x,self.DepositRecords_Button.transform.localPosition.y+200,0)
    self.DepositRecords_Button.transform:DOLocalMove(endV2, 0.8, false)
    --内容动画
    local childCount = self.PayTypeContent.childCount
    local itemV={}
    
   local co=  coroutine.start(function() 
        Yield(0)
        self.PayTypeContent:GetComponent("HorizontalLayoutGroup").enabled = false
        for i=0,childCount-1 do
            itemV[i] = self.PayTypeContent:GetChild(i).localPosition
            self.PayTypeContent:GetChild(i).localPosition = Vector3(itemV[i].x+2500,itemV[i].y,0)
            self.PayTypeContent:GetChild(i):Find("BankType_Item").gameObject:SetActive(true);
        end
        for i=0,childCount-1 do
            self.PayTypeContent:GetChild(i):DOLocalMove(itemV[i], 0.3, false)
            coroutine.wait(0.1)
        end
        coroutine.wait(0.2)
        self.PayTypeContent:GetComponent("HorizontalLayoutGroup").enabled = true
        CloseView("Hall")
    end)
    table.insert(self.AllCoroutine,co);
end

function PayPanel.HidePanelAnim()
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    DestroyView("Pay")
end

function PayPanel.Init(data)
    self.send16()
end

function PayPanel.Update()
end

function PayPanel.OnClickOk(obj)
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if obj.name == "CloseButton" or obj.name == "Bg" then --关闭按钮或
        self.HidePanelAnim()
        panelMgr:CreatePanel("View/Hall", nil)
        obj:GetComponent("Button").interactable=false
    end
end

function PayPanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
end


function PayPanel.OnRecord()
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    panelMgr:CreatePanel("View/PayRecord", {Panel="View/Pay"})
    DestroyView("Pay")
end

function PayPanel.send16()
local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
local ReqLoad = {
}
local code = protobuf.encode("tutorial.Req16", ReqLoad)
networkMgr:SendMessageBf(16, code)
Event:Add("eventName16", self.Callback16)

--GolbalResource.InitImage(); 
end
function PayPanel.Callback16(name, data)
     Event:Remove("eventName16", self.Callback16)
     if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
   if #data.payChannelList==0 then
    
       panelMgr:CreatePanel("View/Notice",{text="Saluran pembayaran ditutup",IsError=false});
   end
    for k, v in ipairs(data.payChannelList) do
        local BankType = newObject(self.BankTypeItem)
        BankType.transform:SetParent(self.PayTypeContent)
        BankType.transform.localPosition = Vector3(1, 1, 1)
        BankType.transform.localScale = Vector3(1, 1, 1)
        BankType.gameObject:SetActive(true)
        local item=  BankType.transform:Find("BankType_Item")
        if v.payChannelId == "100" then
            item:GetComponent("Image").sprite = self.bank_Image.sprite
            self.LuaBehaviour:AddClick(item.gameObject,function()
                panelMgr:CreatePanel("View/TransferBank", v)
                --self.HidePanelAnim()
            end)
        elseif v.payChannelId == "200" then
            item:GetComponent("Image").sprite = self.ovo_Image.sprite
            -- self.LuaBehaviour:AddClick(BankType.gameObject,function()
            --     panelMgr:CreatePanel("View/TransferBank", v)
            --     self.HidePanelAnim()
            -- end)
        elseif v.payChannelId == "300" then
            item:GetComponent("Image").sprite = self.gojek_Image.sprite
            -- self.LuaBehaviour:AddClick(BankType.gameObject,function()
            --     panelMgr:CreatePanel("View/TransferBank", v)
            --     self.HidePanelAnim()
            -- end)
        elseif v.payChannelId == "400" then
            item:GetComponent("Image").sprite = self.visa_Image.sprite
            -- self.LuaBehaviour:AddClick(BankType.gameObject,function()
            --     panelMgr:CreatePanel("View/TransferBank", v)
            --     self.HidePanelAnim()
            -- end)
        end
    end
    self.ShowPanelAnim()
end

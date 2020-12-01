--[[
    luaide  模板位置位于 Template/FunTemplate/NewFileTemplate.lua 其中 Template 为配置路径 与luaide.luaTemplatesDir
    luaide.luaTemplatesDir 配置 https://www.showdoc.cc/web/#/luaide?page_id=713062580213505
    author:{author}
    time:2020-07-06 11:33:08
]]


PersonalCenterPanel = {
    transform,
    gameObject,
    LuaBehaviour,
    AlphaTime = 0.1,
    AllCoroutine = {},
    BetRecordPage = 0,
    BetChoiceTime = 0;
    TransactionRecordPage = 0,
    TransactionTime=0;
    AllCoroutine ={};
}

local self = PersonalCenterPanel

function PersonalCenterPanel.Awake(obj)
    self.gameObject = obj
    self.transform = self.gameObject.transform
    self.LuaBehaviour = self.gameObject:GetComponent("LuaBehaviour")

    self.FindComponent()
    self.AddOnClickEvent()
    self.LoadSelectHeadImg()

    local co = coroutine.start(self.ShowPanelAnim)
    table.insert(self.AllCoroutine, co)
end
function PersonalCenterPanel.Start()
    self.NameInputFieldText.text = Player.name
    self.Diamond_Text.text = Player.Diamonds
    self.ID_Text.text = string.upper(string.sub(Player.id,1,12)) 
    self.Gold_Text.text = Player.gold
    self.GoldType_Text.text =Player.currencyId
    Game.GetLoadHeaderFile(Player.avater, self.Head_Image)
    self.OnHeadSelect();
    
end
--查找组件
function PersonalCenterPanel.FindComponent()
    self.BG = self.transform:Find("Panel/Bg").gameObject
    self.CloseButton = self.transform:Find("Panel/PanelBg/Top/Close_Button").gameObject
    self.OpenEmailButton = self.transform:Find("Panel/PanelBg/CatatanTransakaiPanel/Select/MessageSendEmail/BG/OpenEmail_Button").gameObject
    self.Name_Text = self.transform:Find("Panel/PanelBg/ProfilPanel/Head/Name_Text").gameObject:GetComponent("Text")
    self.NameInputFieldText = self.transform:Find("Panel/PanelBg/ProfilPanel/Head/Name_Text").gameObject:GetComponent("InputField")
    self.Diamond_Text = self.transform:Find("Panel/PanelBg/ProfilPanel/BG/Diamond/Diamond_Text").gameObject:GetComponent("Text")
    self.ID_Text = self.transform:Find("Panel/PanelBg/ProfilPanel/BG/ID/ID_Text").gameObject:GetComponent("Text")
    self.Gold_Text = self.transform:Find("Panel/PanelBg/ProfilPanel/BG/Gold/Gold_Text").gameObject:GetComponent("Text")
    self.GoldType_Text = self.transform:Find("Panel/PanelBg/ProfilPanel/BG/Gold/Text").gameObject:GetComponent("Text")
    self.HeadSelect_Button = self.transform:Find("Panel/PanelBg/ProfilPanel/Head/Head_Mask").gameObject
    self.Head_Image = self.transform:Find("Panel/PanelBg/ProfilPanel/Head/Head_Mask/Head_Image").gameObject
    self.Copy_Button= self.transform:Find("Panel/PanelBg/ProfilPanel/BG/ID/Copy_Button").gameObject;--复制按钮
    self.Refresh_Button = self.transform:Find("Panel/PanelBg/ProfilPanel/BG/Gold/Gold_Text/Refresh_Button").gameObject
    self.RekorTaruhanContent = self.transform:Find("Panel/PanelBg/RekorTaruhanPanel/BG/RekorTaruhan_ScrollView/Viewport/Content").gameObject
    self.BetRecordItem = self.transform:Find("Panel/BetRecordItem").gameObject
    self.BetScrollbar = self.transform:Find("Panel/PanelBg/RekorTaruhanPanel/BG/RekorTaruhan_ScrollView/Scrollbar"):GetComponent("Scrollbar")
    self.BetChoiceTimePanle = self.transform:Find("Panel/PanelBg/RekorTaruhanPanel/Select/Tanggal/ChoiceTimePanel"):GetComponent("Toggle")
    self.TransctionRecordContent = self.transform:Find("Panel/PanelBg/CatatanTransakaiPanel/BG/CatatanTransakai_ScrollView/Viewport/Content").gameObject
    self.TransactionRecordItem = self.transform:Find("Panel/TransactionRecordsItem").gameObject
    self.TransactionScrollbar = self.transform:Find("Panel/PanelBg/CatatanTransakaiPanel/BG/CatatanTransakai_ScrollView/Scrollbar"):GetComponent("Scrollbar")
    self.TransactionChoiceTimePanle = self.transform:Find("Panel/PanelBg/CatatanTransakaiPanel/Select/Tanggal/ChoiceTimePanel"):GetComponent("Toggle")
    self.NoData = self.transform:Find("Panel/PanelBg/RekorTaruhanPanel/BG/RekorTaruhan_ScrollView/TxtNoData").gameObject
    self.NoData2 = self.transform:Find("Panel/PanelBg/CatatanTransakaiPanel/BG/CatatanTransakai_ScrollView/TxtNoData").gameObject
    self.ModifyNameButton=self.transform:Find("Panel/PanelBg/ProfilPanel/Head/ModifyName_Button").gameObject
    self.SelectIcon=self.transform:Find("Panel/SelectIcon").gameObject
    self.HeadIcon=self.transform:Find("Panel/HeadIcon").gameObject
    self.HeadList=self.transform:Find("Panel/SelectIcon/ScrollView/Viewport/Content").gameObject
    self.BackClick=self.transform:Find("Panel/SelectIcon/ScrollView/Viewport/Content").gameObject
    self.Top = self.transform:Find("Panel/PanelBg/Top")
    self.ProfilPanel = self.transform:Find("Panel/PanelBg/ProfilPanel")
end

local IsShowGameAnim=false
function PersonalCenterPanel.ShowPanelAnim()
    if IsShowGameAnim then return end
    IsShowGameAnim=true
    
    self.Top.localPosition = Vector3(0,400,0)
    self.Top:DOLocalMove(Vector3(0,0,0), 0.6, false)

    self.ProfilPanel.localPosition = Vector3(2436,self.ProfilPanel.localPosition.y,0)
    self.ProfilPanel:DOLocalMove(Vector3(0,self.ProfilPanel.localPosition.y,0), 0.6, false)
end

function PersonalCenterPanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self.BG, self.OnClickOk)
    self.LuaBehaviour:AddClick(self.CloseButton, self.OnClickOk)
    self.LuaBehaviour:AddClick(self.OpenEmailButton, self.OnClickOk)
    self.LuaBehaviour:AddValueChanged(self.BetScrollbar,self.AddPageBetRecord)
    self.LuaBehaviour:AddValueChanged(self.TransactionScrollbar,self.AddPageTransactionRecord)
    self.LuaBehaviour:AddValueChanged(self.BetChoiceTimePanle,self.OnBetChoiceTime)
    self.LuaBehaviour:AddValueChanged(self.TransactionChoiceTimePanle,self.OnTansactionChoiceTime)
    self.LuaBehaviour:AddClick(self.Copy_Button,self.OnCopy)
    self.LuaBehaviour:AddValueChanged(self.transform:Find("Panel/PanelBg/Top/Options/Profil_Toggle"):GetComponent("Toggle"),function(obj,value)
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
    end)
    self.LuaBehaviour:AddValueChanged(self.transform:Find("Panel/PanelBg/Top/Options/RekorTaruhan_Toggle"):GetComponent("Toggle"),function(obj,value)
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
    end)
    self.LuaBehaviour:AddValueChanged(self.transform:Find("Panel/PanelBg/Top/Options/CatatanTransakai_Toggle"):GetComponent("Toggle"),function(obj,value)
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
    end)
    self.LuaBehaviour:AddClick(self.ModifyNameButton, self.OnClickOk)
    self.LuaBehaviour:AddEndEdit(self.NameInputFieldText,function(obj,value)
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        self.send8(value);
    end)
    self.LuaBehaviour:AddClick(self.Head_Image ,function ()
        self.SelectIcon:SetActive(true);
    end)
    self.LuaBehaviour:AddClick(self.SelectIcon,function ()
        self.SelectIcon:SetActive(false);
    end)
end
function PersonalCenterPanel.send8(name)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        changeClass=1; 
        roleName=name; 
    }
    local code = protobuf.encode("tutorial.Req8", ReqLoad)
    networkMgr:SendMessageBf(8, code)
    Event:Add("eventName8", self.Callback8)
    end
function PersonalCenterPanel.Callback8(name, data)
         Event:Remove("eventName8", self.Callback8)
         if data.state ~= 0 then
            panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
            self.NameInputFieldText.text = Player.name
            return
        end
        self.NameInputFieldText.interactable=false;
        Player.name=self.NameInputFieldText.text
        panelMgr:CreatePanel("View/ShortNotice",{text=GeLanguageById(263)});
    end
--激活事件--
function PersonalCenterPanel.OnEnable(obj)
    -- local co= coroutine.start(self.ShowPanelAnim);
    --table.insert(self.AllCoroutine, co);
    self.SendReq6()
    self.SendReq7()
end

function PersonalCenterPanel.OnCopy(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    Copy(Player.id)
end

---BetRecord---

function PersonalCenterPanel.SendReq6()
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad={}
    --print("====BetChoiceTime="..self.BetChoiceTime)
    if self.BetChoiceTime==0 then
        ReqLoad = {
            pageInt = self.BetRecordPage;
         }
    else
        ReqLoad = {
            pageInt = self.BetRecordPage;
            dayInt = self.BetChoiceTime;
        }
    end
    
    local code = protobuf.encode("tutorial.Req6", ReqLoad)
    networkMgr:SendMessageBf(6, code)
    Event:Add("eventName6", self.Callback6)

end
function PersonalCenterPanel.Callback6(name, data)
    Event:Remove("eventName6", self.Callback6)
     if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end

    if #data.playerLogList==0 then
        self.NoData:SetActive(true)
    else
        self.NoData:SetActive(false)
    end

    for k, v in pairs(data.playerLogList) do
        local obj = newObject(self.BetRecordItem)
        obj.transform:SetParent(self.RekorTaruhanContent.transform)
        obj.transform.localScale = Vector3(1,1,1)
        self.LoadBetRecordData(obj,v)
    end

    if self.BetChoiceTime==0 then
        self.BetChoiceTimePanle.transform:Find("Label"):GetComponent("Text").text = "Kabeh"
    end
end

function PersonalCenterPanel.LoadBetRecordData(obj,v)
    obj.transform:Find("ID_Text"):GetComponent("Text").text = v.logId
    obj.transform:Find("GameName_Text"):GetComponent("Text").text = v.doingStr
    obj.transform:Find("Time_Text"):GetComponent("Text").text = v.createTime
    obj.transform:Find("Bertaruh_Text"):GetComponent("Text").text = v.gameTitle
    obj.transform:Find("Number_Text"):GetComponent("Text").text = v.outInt
    obj.transform:Find("Results_Text"):GetComponent("Text").text = v.outcome
    obj.transform:Find("WinOrLose_Text"):GetComponent("Text").text = self.GetWinTextByOutcome(tonumber(v.outcome))
    obj:SetActive(true)
end

--获得输赢
function PersonalCenterPanel.GetWinTextByOutcome(outcome)
    if outcome>0 then
        return GeLanguageById(276) --赢
    elseif outcome==0 then
        return GeLanguageById(301) --平
    else
        return GeLanguageById(275) --输
    end
end

--滑到最底部翻页
function PersonalCenterPanel.AddPageBetRecord(go,Vaule)
    if(Vaule==0) then
        self.BetRecordPage =  self.BetRecordPage+1;
        self.SendReq6();
    end
end

--时间筛选
function PersonalCenterPanel.OnBetChoiceTime(obj,value)
    if value==false  then
        local timestamp = obj.transform:Find("Text"):GetComponent("Text").text
        if tonumber(timestamp) > os.time() then
            self.BetChoiceTime = 0
        else
            self.BetChoiceTime = tonumber(timestamp)
        end
        self.BetRecordPage = 0
        local cnt = self.RekorTaruhanContent.transform.childCount;
        for i=0,cnt-1 do
            destroy(self.RekorTaruhanContent.transform:GetChild(i).gameObject)
        end
        self.SendReq6()
    end
end

---BetRecord---

---TranscationRecord---

function PersonalCenterPanel.SendReq7()
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad={}
    print("===TransactionTime="..self.TransactionTime)
    if self.TransactionTime==0 then
        ReqLoad = {
            pageInt = self.TransactionRecordPage;
         }
    else
        ReqLoad = {
            pageInt = self.TransactionRecordPage;
            dayInt = self.TransactionTime;
        }
    end
    local code = protobuf.encode("tutorial.Req7", ReqLoad)
    networkMgr:SendMessageBf(7, code)
    Event:Add("eventName7", self.Callback7)
end
function PersonalCenterPanel.Callback7(name, data)
    Event:Remove("eventName7", self.Callback7)
     if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end

    if #data.intChangeLogList==0 then
        self.NoData2:SetActive(true)
    else
        self.NoData2:SetActive(false)
    end

    for k, v in pairs(data.intChangeLogList) do
        local obj = newObject(self.TransactionRecordItem)
        obj.transform:SetParent(self.TransctionRecordContent.transform)
        obj.transform.localScale = Vector3(1,1,1)
        self.LoadTransctionRecordData(obj,v)
    end

    if self.TransactionTime==0 then
        self.TransactionChoiceTimePanle.transform:Find("Label"):GetComponent("Text").text = "Kabeh"
    end
end

function PersonalCenterPanel.LoadTransctionRecordData(obj,v)
    obj.transform:Find("ID_Text"):GetComponent("Text").text = v.logId
    obj.transform:Find("Type_Text"):GetComponent("Text").text = self.GetDoing(v.doingInt) 
    obj.transform:Find("Time_Text"):GetComponent("Text").text = v.createTime
    obj.transform:Find("Balance_Text"):GetComponent("Text").text = v.oldInt
    obj.transform:Find("BetAmount_Text"):GetComponent("Text").text = v.changeInt
    obj.transform:Find("RemainingMoney_Text"):GetComponent("Text").text = v.afterInt
    obj:SetActive(true)
end

--21游戏输赢  22充值  23提款申请  24提款失败返回  25邮件领取 26充值赠送
function PersonalCenterPanel.GetDoing(index)
    if index == 21 then
        return GeLanguageById(277)
    elseif index == 22 then
        return GeLanguageById(278)
    elseif index == 23 then
        return GeLanguageById(279)
    elseif index == 24 then
        return GeLanguageById(280)
    elseif index == 25 then
        return GeLanguageById(281)
    elseif index == 26 then
        return GeLanguageById(299)
    end
end

--滑到最底部翻页
function PersonalCenterPanel.AddPageTransactionRecord(go,vaule)
    if(vaule==0) then
        self.TransactionRecordPage =  self.TransactionRecordPage+1;
        self.SendReq7();
    end
end

function PersonalCenterPanel.OnTansactionChoiceTime(obj,value)
    if value==false  then
        local timestamp = obj.transform:Find("Text"):GetComponent("Text").text
        if tonumber(timestamp) > os.time() then
            self.TransactionTime = 0
        else
            self.TransactionTime = tonumber(timestamp)
        end
        self.TransactionRecordPage = 0
        local cnt = self.TransctionRecordContent.transform.childCount;
        for i=0,cnt-1 do
            destroy(self.TransctionRecordContent.transform:GetChild(i).gameObject)
        end
        self.SendReq7()
    end
end

---TranscationRecord---

function PersonalCenterPanel.HidePanelAnim()
    DestroyView("PersonalCenter")
    panelMgr:CreatePanel("View/Hall",nil)
end

function PersonalCenterPanel.Init(data)
end

function PersonalCenterPanel.Update()
end

function PersonalCenterPanel.OnClickOk(obj)
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if obj.name == "Close_Button" or obj.name == "Bg" then
        self.HidePanelAnim()
    elseif obj.name == "OpenEmail_Button" then
        panelMgr:CreatePanel("View/SendToEmail", nil)
    elseif obj.name=="ModifyName_Button" then
        self.NameInputFieldText.interactable=true;
        self.NameInputFieldText:ActivateInputField();
    end
end

function PersonalCenterPanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
end


----SelectHead----
function PersonalCenterPanel.LoadSelectHeadImg()
    
end

function PersonalCenterPanel.OnHeadSelect()
    for k,v in ipairs(Game.HeardImgOne) do 
        local Icon = newObject(self.HeadIcon)
        Icon.transform:SetParent(self.HeadList.transform)
        Icon.transform.localPosition = Vector3.zero;
        Icon.transform.localScale = Vector3(1, 1, 1)
        Game.GetLoadHeaderFile(v.url,Icon.transform:Find("Head_Image").gameObject)
        Icon.transform:Find("Head_Image").gameObject.name=v.imgId
        self.LuaBehaviour:AddClick(Icon.transform:GetChild(0).gameObject,function (obj)
            self.sendHead(obj.name)
        end)
    end
end

function PersonalCenterPanel.sendHead(name)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        changeClass=1; 
        heardImg=name; 
    }
    local code = protobuf.encode("tutorial.Req8", ReqLoad)
    networkMgr:SendMessageBf(8, code)
    Event:Add("eventName8", self.CallbackH)
    end
function PersonalCenterPanel.CallbackH(name, data)
         Event:Remove("eventName8", self.CallbackH)
         if data.state ~= 0 then
            panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
            --self.NameInputFieldText.text = Player.name
            return
        end
        Player.avater=data.heardImg
        Game.GetLoadHeaderFile(data.heardImg, self.Head_Image)
        self.SelectIcon:SetActive(false);
        panelMgr:CreatePanel("View/ShortNotice",{text=GeLanguageById(264)});
       -- self.NameInputFieldText.interactable=false;
        --Player.name=self.NameInputFieldText.text
    end
----SelectHead----
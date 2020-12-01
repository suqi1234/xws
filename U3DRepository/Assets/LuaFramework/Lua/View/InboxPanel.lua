local transform;
local gameObject;
local LuaBehaviour;

InboxPanel={
    --数据
    EmailList={};
    NoticeList={};
    UnfoldedObj=nil;
    IsUnfold = false;
    EorN = 0;
    music=nil;

    --物体
    Content=nil;
    EmailListPrefab=nil;
    EmailListPrefabArr={};
    ButEmail = nil;
    ButNotice = nil;

    AllCoroutine={};
}

local self = InboxPanel

function InboxPanel.Awake(obj)
    gameObject = obj;
    transform = obj.transform;
    LuaBehaviour=gameObject:GetComponent('LuaBehaviour');

    self.FindComponent();
    self.AddOnClickEvent();

    resMgr:LoadPrefab("Inbox",{"EmailList"},self.LoadInboxPrefab);

    -- local co = coroutine.start(self.ShowPanelAnim)
    -- table.insert(self.AllCoroutine, co)
    ShowObjectAnim(self.BGObj);
end

function InboxPanel.FindComponent()
    self.BGObj = transform:Find("Panel/BG").gameObject
    self.Content = transform:Find("Panel/BG/Inbox_ScrollView/Viewport/Content").transform
    self.ButEmail = transform:Find("Panel/BG/ButEmail").gameObject
    self.ButNotice = transform:Find("Panel/BG/ButNotice").gameObject
    self.NoData = transform:Find("Panel/BG/Inbox_ScrollView/TxtNoData").gameObject
    self.ImgInboxBut1=nil;
    self.ImgInboxBut2=nil;
    self.ImgNoticeBut1=nil;
    self.ImgNoticeBUt2=nil;
end

local IsShowGameAnim=false
function InboxPanel.ShowPanelAnim()
    if IsShowGameAnim then return end
    IsShowGameAnim=true

    self.BGObj.transform.localScale = Vector3(0.3, 0.3, 0.3)
    self.BGObj:SetActive(true);
    self.BGObj.transform:DOScale(1.1,0.2)
    coroutine.wait(0.2)
    self.BGObj.transform:DOScale(1,0.2)

end


function InboxPanel.AddOnClickEvent()
    LuaBehaviour:AddClick(transform:Find("Panel/BG/ButClose").gameObject,function() self.OnClose() end) 
    LuaBehaviour:AddClick(self.ButEmail,function() 
        self.OpenEmailClick() 
        self.PlayAudio()
    end)
    LuaBehaviour:AddClick(self.ButNotice,function() 
        self.OpenNoticeClick()
        self.PlayAudio()
    end)
end

function InboxPanel.LoadInboxPrefab(obj)
    self.EmailListPrefab = obj[0]
    self.EmailListPrefab = transform:Find("Panel/BG/Inbox_ScrollView/Viewport/Content/EmailList").gameObject
    self.EmailListPrefab:SetActive(false);
    self.OpenEmailClick();
end

function InboxPanel.OnEnable(obj)
   if self.EmailListPrefab~=nil then
    if self.EorN == 0 then self.OpenEmailClick(); end
    if self.EorN == 1 then self.OpenEmailClick(); end
   end
end

function InboxPanel.OpenEmailClick()
    self.EorN = 0;
    self.ButEmail:SetActive(false)
    self.ButNotice:SetActive(true)
    self.SendGetMailData();
end

function InboxPanel.OpenNoticeClick()
    self.EorN = 1;
    self.ButEmail:SetActive(true)
    self.ButNotice:SetActive(false)
    self.SendGetNoticeData();
end

------------邮件BEGINE-------------

--获取邮件列表
function InboxPanel.SendGetMailData()
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = { }
    local code = protobuf.encode("tutorial.Req26", ReqLoad)
    networkMgr:SendMessageBf(26, code)
    Event:Add("eventName26", self.Callback26)
end

--加载邮件列表
function InboxPanel.Callback26(name, data)
    Event:Remove("eventName26",self.Callback26)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    --print("====邮件数量："..#data.data)
    self.EmailList = data.data
    for k,v in pairs(self.EmailListPrefabArr) do
        v:SetActive(false)
    end

    if(#data.data==0) then
        self.NoData:SetActive(true)
      else
        self.NoData:SetActive(false)
      end

    for k,v in pairs(data.data) do
        --print("===邮件标题："..v.MTitle)
        if k>#self.EmailListPrefabArr then
            local obj = newObject(self.EmailListPrefab);
            obj.transform:SetParent(self.Content);
            obj.transform.localScale = Vector3.one;
            obj.transform:Find("con_scrollview/cont/TxtTitle"):GetComponent("Text").text = v.MTitle
            obj.transform:Find("con_scrollview/cont/TxtTime"):GetComponent("Text").text = os.date("%d/%m %y %H:%M:%S",v.MCTime) 
            --obj.transform:Find("con_scrollview/cont/TxtTime"):GetComponent("Text").text = v.MCTime
            obj.transform:Find("con_scrollview/cont/TxtIntro/Text"):GetComponent("Text").text = string.gsub(v.content, "\n","")
            obj.transform:Find("con_scrollview/cont/TxtContent"):GetComponent("Text").text = v.content
            table.insert(self.EmailListPrefabArr,obj)
            local mid = v.MId
            LuaBehaviour:AddClick(obj.transform:Find("ButDelet").gameObject,function()
                self.DeletEmail(mid,obj)
                self.PlayAudio()
            end)
            LuaBehaviour:AddClick(obj.transform:Find("con_scrollview/cont/ButNufold").gameObject,function()
                self.UnfoldFun(obj)
                self.SendOperation(mid,0)
                self.PlayAudio()
            end)
            local scro =  obj.transform:Find("con_scrollview"):GetComponent("ScrollRect")
            LuaBehaviour:AddValueChanged(scro,self.scrollCallback)
            obj:SetActive(true)
        else
            local obj = self.EmailListPrefabArr[k]
            if self.UnfoldedObj==obj then self.UnfoldFun(obj) end
            obj.transform:Find("con_scrollview/cont/TxtTitle"):GetComponent("Text").text = v.MTitle
            obj.transform:Find("con_scrollview/cont/TxtTime"):GetComponent("Text").text = os.date("%d/%m %y %H:%M:%S",v.MCTime) 
            obj.transform:Find("con_scrollview/cont/TxtIntro/Text"):GetComponent("Text").text = string.gsub(v.content, "\n","")
            obj.transform:Find("con_scrollview/cont/TxtContent"):GetComponent("Text").text = v.content
            local mid = v.MId
            LuaBehaviour:RemoveClick(obj.transform:Find("ButDelet").gameObject)
            LuaBehaviour:RemoveClick(obj.transform:Find("con_scrollview/cont/ButNufold").gameObject)
            LuaBehaviour:AddClick(obj.transform:Find("ButDelet").gameObject,function()
                self.DeletEmail(mid,obj)
                self.PlayAudio()
            end) 
            LuaBehaviour:AddClick(obj.transform:Find("con_scrollview/cont/ButNufold").gameObject,function() 
                self.UnfoldFun(obj)
                self.SendOperation(mid,0)
                self.PlayAudio()
            end)
            obj:SetActive(true)
        end
    end
end

--删除邮件
function InboxPanel.DeletEmail(mid,obj)
    obj.transform:Find("con_scrollview").localPosition = Vector3(0,0,0)
    obj:SetActive(false)
    self.SendOperation(mid,2)
end


--发送操作邮件消息
function InboxPanel.SendOperation(mid,nLq)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        MId = mid;
        getEnDoing = nLq;
    }
    local code = protobuf.encode("tutorial.Req27", ReqLoad)
    networkMgr:SendMessageBf(27, code)
    Event:Add("eventName27", self.Callback27)
end

function InboxPanel.Callback27(name,data)
    Event:Remove("eventName27", self.Callback27)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end

end

----------邮件END--------------

----------通知BEGINE-----------
--获取邮件列表
function InboxPanel.SendGetNoticeData()
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = { }
    local code = protobuf.encode("tutorial.Req12", ReqLoad)
    networkMgr:SendMessageBf(12, code)
    Event:Add("eventName12", self.Callback12)
end

function InboxPanel.Callback12(name ,data)
    Event:Remove("eventName12", self.Callback12)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    self.NoticeList = data.NoticeList
    for k,v in pairs(self.EmailListPrefabArr) do
        v:SetActive(false)
    end

    if(#data.NoticeList==0) then
        self.NoData:SetActive(true)
      else
        self.NoData:SetActive(false)
      end

    for k,v in pairs(data.NoticeList) do
        --print("===notice标题："..v.noticeTitle)
        if k>#self.EmailListPrefabArr then
            local obj = newObject(self.EmailListPrefab);
            obj.transform:SetParent(self.Content);
            obj.transform.localScale = Vector3.one;
            obj.transform:Find("con_scrollview/cont/TxtTitle"):GetComponent("Text").text = v.noticeTitle
            obj.transform:Find("con_scrollview/cont/TxtTime"):GetComponent("Text").text = os.date("%d/%m %y %H:%M:%S",v.time) 
            --obj.transform:Find("con_scrollview/cont/TxtTime"):GetComponent("Text").text = v.time
            obj.transform:Find("con_scrollview/cont/TxtIntro/Text"):GetComponent("Text").text = string.gsub(v.noticeCon, "\n","")
            obj.transform:Find("con_scrollview/cont/TxtContent"):GetComponent("Text").text = v.noticeCon
            table.insert(self.EmailListPrefabArr,obj)
            local mid = v.noticeId
            LuaBehaviour:AddClick(obj.transform:Find("ButDelet").gameObject,function()
                self.DeletNotice(mid,obj)
                self.PlayAudio()
            end)
            LuaBehaviour:AddClick(obj.transform:Find("con_scrollview/cont/ButNufold").gameObject,function()
                self.UnfoldFun(obj)
                self.SendOperationNotice(mid,1);
                self.PlayAudio()
            end)
            local scro =  obj.transform:Find("con_scrollview"):GetComponent("ScrollRect")
            LuaBehaviour:AddValueChanged(scro,self.scrollCallback)
            obj:SetActive(true)
        else
            local obj = self.EmailListPrefabArr[k]
            if self.UnfoldedObj==obj then self.UnfoldFun(obj) end
            obj.transform:Find("con_scrollview/cont/TxtTitle"):GetComponent("Text").text = v.noticeTitle
            obj.transform:Find("con_scrollview/cont/TxtTime"):GetComponent("Text").text = os.date("%d/%m %y %H:%M:%S",v.time)
            obj.transform:Find("con_scrollview/cont/TxtIntro/Text"):GetComponent("Text").text = string.gsub(v.noticeCon, "\n","")
            obj.transform:Find("con_scrollview/cont/TxtContent"):GetComponent("Text").text = v.noticeCon
            local mid = v.noticeId
            LuaBehaviour:RemoveClick(obj.transform:Find("ButDelet").gameObject)
            LuaBehaviour:RemoveClick(obj.transform:Find("con_scrollview/cont/ButNufold").gameObject)
            LuaBehaviour:AddClick(obj.transform:Find("ButDelet").gameObject,function()
                self.DeletNotice(mid,obj)
                self.PlayAudio()
            end)
            LuaBehaviour:AddClick(obj.transform:Find("con_scrollview/cont/ButNufold").gameObject,function()
                self.UnfoldFun(obj) 
                self.SendOperationNotice(mid,1);
                self.PlayAudio()
            end)
            obj:SetActive(true)
        end
    end
end

function InboxPanel.DeletNotice(mid,obj)
    obj.transform:Find("con_scrollview").localPosition = Vector3(0,0,0)
    obj:SetActive(false)
    --self.SendOperationNotice(mid,2)
end

--发送操作通知消息
function InboxPanel.SendOperationNotice(mid,nLq)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        doing = nLq;
        argstr = mid;
    }
    local code = protobuf.encode("tutorial.Req13", ReqLoad)
    networkMgr:SendMessageBf(13, code)
    Event:Add("eventName13", self.Callback13)
end

function InboxPanel.Callback13(name,data)
    Event:Remove("eventName13", self.Callback13)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end

end

----------通知END----------------

--展开内容
function InboxPanel.UnfoldFun(Obj)

    --回收当前内容
    if self.UnfoldedObj~=nil then
        self.UnfoldedObj.transform:Find("con_scrollview/cont/ButNufold"):GetComponent("Image").sprite = self.UnfoldedObj.transform:Find("con_scrollview/cont/ButNufold/Image1"):GetComponent("Image").sprite
        self.UnfoldedObj.transform:Find("con_scrollview/cont/TxtContent").gameObject:SetActive(false)
        self.UnfoldedObj.transform:Find("con_scrollview/cont/TxtIntro").gameObject:SetActive(true)
        self.UnfoldedObj:GetComponent("RectTransform").sizeDelta = Vector2(1712,298)
        self.UnfoldedObj.transform:Find("con_scrollview"):GetComponent("ScrollRectEx").enabled = true;
        self.UnfoldedObj:GetComponent("Image").color = Color(1,1,1,0.3)
    end

    if self.UnfoldedObj==Obj then
        self.UnfoldedObj=nil
        return;
    end

    --展开内容
    Obj.transform:Find("con_scrollview/cont/ButNufold"):GetComponent("Image").sprite = Obj.transform:Find("con_scrollview/cont/ButNufold/Image2"):GetComponent("Image").sprite
    Obj.transform:Find("con_scrollview/cont/TxtContent").gameObject:SetActive(true)
    Obj.transform:Find("con_scrollview/cont/TxtIntro").gameObject:SetActive(false)
    Obj.transform:Find("con_scrollview"):GetComponent("ScrollRectEx").enabled = false;
    Obj:GetComponent("Image").color = Color(1,1,1,1)
    self.UnfoldedObj=Obj

    coroutine.start(function()
        Yield(0)
        Obj.transform:Find("con_scrollview").localPosition = Vector3(0,0,0)
        local txtH = Obj.transform:Find("con_scrollview/cont/TxtContent"):GetComponent("RectTransform").sizeDelta.y
        txtH = 206 + txtH + 66
        Obj:GetComponent("RectTransform").sizeDelta = Vector2(1712, (txtH < 298 and {298} or {txtH})[1])
    end)

    --[[
    if IsUnfold then return end
    IsUnfold = true;

    --回收当前内容
    local add = 36
    if self.UnfoldedObj~=nil then
        local uObj = self.UnfoldedObj
        local startH= 615
        local endH = 298
        local rectT = uObj:GetComponent("RectTransform")
        coroutine.start(function()
            while startH > endH + add  do
                startH = startH - add
                rectT.sizeDelta = Vector2(1712,startH)
                --coroutine.wait(0.01)
                Yield(0)
            end
            rectT.sizeDelta = Vector2(1712,endH)
            uObj.transform:Find("con_scrollview/cont/Content").gameObject:SetActive(false)
            uObj.transform:Find("con_scrollview/cont/TxtIntro").gameObject:SetActive(true)
            uObj.transform:Find("con_scrollview"):GetComponent("ScrollRectEx").enabled = true;
            uObj:GetComponent("Image").color = Color(1,1,1,0.3)
            IsUnfold = false;
        end)
        uObj.transform:Find("con_scrollview/cont/ButNufold/Image1").gameObject:SetActive(true)
        uObj.transform:Find("con_scrollview/cont/ButNufold/Image2").gameObject:SetActive(false)
    end

    if self.UnfoldedObj==Obj then
        self.UnfoldedObj=nil
        return;
    end

    --展开新内容
    local startH2 = 298
    local endH2 = 615
    local rectT2 = Obj:GetComponent("RectTransform")
    Obj.transform:Find("con_scrollview").localPosition = Vector3(0,0,0)
    Obj.transform:Find("con_scrollview/cont/Content").gameObject:SetActive(true)
    Obj.transform:Find("con_scrollview/cont/TxtIntro").gameObject:SetActive(false)
    Obj.transform:Find("con_scrollview"):GetComponent("ScrollRectEx").enabled = false;
    Obj.transform:Find("con_scrollview/cont/ButNufold/Image1").gameObject:SetActive(false)
    Obj.transform:Find("con_scrollview/cont/ButNufold/Image2").gameObject:SetActive(true)
    Obj:GetComponent("Image").color = Color(1,1,1,1)
    self.UnfoldedObj = Obj
    coroutine.start(function()
        while startH2 < endH2  do
            startH2 = startH2 + add
            rectT2.sizeDelta = Vector2(1712,startH2)
            --coroutine.wait(0.01)
            Yield(0)
        end
        rectT2.sizeDelta = Vector2(1712,endH2)
        IsUnfold = false;
    end)
    ]]
end

--检测左右滑动
function InboxPanel.scrollCallback(obj,value)
    if value.x==0 and obj.transform.localPosition.x <=-310 and obj.transform:Find("cont").localPosition.x >= 230 then
        obj.transform.localPosition=Vector3(0,0,0)
        obj.transform:Find("cont").localPosition = Vector3(obj.transform:Find("cont").localPosition.x-92,0,0)--防止滑动抖动
    elseif obj.transform.localPosition.x == 0 and obj.transform:Find("cont").localPosition.x <= -230 then
        obj.transform.localPosition=Vector3(-315,0,0)
        obj.transform:Find("cont").localPosition = Vector3(obj.transform:Find("cont").localPosition.x+92,0,0)--防止滑动抖动
    end

end

function InboxPanel.PlayAudio()
    if music == nil then
        music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    end
    soundMgr:PlayX(music)
  end

function InboxPanel.OnClose()
    if self.UnfoldedObj~=nil then
        self.UnfoldedObj:GetComponent("RectTransform").sizeDelta = Vector2(1712,298)
        self.UnfoldedObj.transform:Find("con_scrollview/cont/ButNufold"):GetComponent("Image").sprite = self.UnfoldedObj.transform:Find("con_scrollview/cont/ButNufold/Image1"):GetComponent("Image").sprite
        self.UnfoldedObj.transform:Find("con_scrollview/cont/TxtContent").gameObject:SetActive(false)
        self.UnfoldedObj.transform:Find("con_scrollview/cont/TxtIntro").gameObject:SetActive(true)
        self.UnfoldedObj.transform:Find("con_scrollview"):GetComponent("ScrollRectEx").enabled = true;
        self.UnfoldedObj=nil;
    end
    DestroyView("Inbox");
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
end
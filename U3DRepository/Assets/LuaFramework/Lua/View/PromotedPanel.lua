
--[[//活动
message ActivityOne{
  required string AUid=1;                     //活动唯一识别码
  required string ATitle=2;                   //活动标题
  required string ABaneImg=3;                 //活动头条图地址
  required string AStartTime=4;               //活动开始时间
  required string AEndTime=5;                 //活动结束时间
  required string AConnet=6;                  //活动内容
  required bool isJoinState=7;                //是否已经报名
  required int32 AClass=8;                    //活动类型
}]]
PromotedPanel={
  transform;
  gameObject;
  LuaBehaviour;
  PromApp = nil;
  PromAppListPrefab = nil;
  PromotedListPrefab = nil;
  PromShowBox = nil;
  AllCoroutine = {};
}

local self = PromotedPanel

--内容
PromotedPanel.ObjPromConent = nil
PromotedPanel.TxtTitle = nil
PromotedPanel.TxtCountDown = nil
PromotedPanel.ButOk = nil
PromotedPanel.ImgImage=nil
PromotedPanel.TxtContent = nil

PromotedPanel.MenuButtonList={}
PromotedPanel.MenuButtonBG={}
PromotedPanel.NowMenuIndex=0
PromotedPanel.PromotedPreList={}--活动list
PromotedPanel.TextureBaneImg={}--活动图片
PromotedPanel.ObjAppList={}--申请列表预制

function PromotedPanel.Awake(obj)
  self.gameObject = obj;
  self.transform = obj.transform;
  self.LuaBehaviour=self.gameObject:GetComponent('LuaBehaviour');

  self.FindComponent();
  self.AddOnClickEvent();
  
  resMgr:LoadPrefab("Promoted",{"PromAppList","PromotedList"},self.LoadPromPrefab);

  local co = coroutine.start(self.ShowPanelAnim)
  table.insert(self.AllCoroutine, co)
end

function PromotedPanel.LoadPromPrefab(obj)
  self.PromAppListPrefab = obj[0]
  self.PromotedListPrefab = obj[1]
  self.LoadPromList(0)
end

function PromotedPanel.FindComponent()
  --print('====获取活动物体')
  for i=0,5 do
    self.MenuButtonList[i] = self.transform:Find("Panel/PromMenu_ScrollView/Viewport/Content/Menu"..i).gameObject
    self.MenuButtonBG[i] = self.transform:Find("Panel/PromMenu_ScrollView/Viewport/Content/Menu"..i.."/BG").gameObject
    local index = i;
    self.LuaBehaviour:AddClick(self.MenuButtonList[i],function() self.OnClickMenu(index) end)
  end
  self.ObjPromConent = self.transform:Find("Panel/PromConent").gameObject
  self.TxtTitle = self.transform:Find("Panel/PromConent/BG/TxtTitle").gameObject
  self.TxtCountDown = self.transform:Find("Panel/PromConent/BG/TxtCountDown").gameObject
  self.ButOk = self.transform:Find("Panel/PromConent/BG/ButOK").gameObject
  self.ImgImage = self.transform:Find("Panel/PromConent/BG/Image").gameObject
  self.TxtContent = self.transform:Find("Panel/PromConent/BG/TxtContent/Text").gameObject
  self.PromApp = self.transform:Find("Panel/PromApp").gameObject
  self.PromShowBox = self.transform:Find("Panel/PromShowBox").gameObject
  self.NoData = self.transform:Find("Panel/PromList_ScrollView/TxtNoData").gameObject
  self.NoData2 = self.transform:Find("Panel/PromApp/BG/AppList_ScrollView/TxtNoData")
  self.Top = self.transform:Find("Panel/Top")
  self.PromListViewport = self.transform:Find("Panel/PromList_ScrollView/Viewport")
end

local IsShowGameAnim=false
function PromotedPanel.ShowPanelAnim()
    if IsShowGameAnim then return end
    IsShowGameAnim=true

    self.Top.localPosition = Vector3(0,200,0)
    self.Top:DOLocalMove(Vector3(0,0,0), 0.6, false)

    local PromListViewportEndV = self.PromListViewport.localPosition
    self.PromListViewport.localPosition = Vector3(2436,self.PromListViewport.localPosition.y,0)
    self.PromListViewport:DOLocalMove(PromListViewportEndV, 0.6, false)

    self.NoData.transform.localPosition = Vector3(2436,self.NoData.transform.localPosition.y,0)
    self.NoData.transform:DOLocalMove(Vector3(0,0,0), 0.6, false)

    --游戏类型动画
    local types = self.transform:Find("Panel/GameOptions_ScrollView/Viewport/Content")
   
    coroutine.start(function()
        Yield(0)
        for i=0,#self.MenuButtonList do
          self.MenuButtonList[i].transform.localPosition = Vector3(-320,self.MenuButtonList[i].transform.localPosition.y,0)
        end
        for i=0,#self.MenuButtonList do
          self.MenuButtonList[i].transform:DOLocalMove(Vector3(0,self.MenuButtonList[i].transform.localPosition.y,0), 0.3, false)
          coroutine.wait(0.1)
        end
    end)
end

function PromotedPanel.AddOnClickEvent()
  --print('====添加活动事件')
  self.LuaBehaviour:AddClick(self.transform:Find("Panel/Top/Close/ButClose").gameObject,function() 
    DestroyView("Promoted");
    panelMgr:CreatePanel("View/Hall",nil)
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
  end)
  self.LuaBehaviour:AddClick(self.transform:Find("Panel/PromConent/BG/ButClose").gameObject,function() self.ObjPromConent:SetActive(false) self.PlayAudio() end)
  self.LuaBehaviour:AddClick(self.PromApp.transform:Find("BG/ButClose").gameObject,function() 
    self.PromApp:SetActive(false) 
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
  end)
  self.LuaBehaviour:AddClick(self.transform:Find("Panel/Top/ButOpenAppList").gameObject,function() self.Send28() end)
  self.LuaBehaviour:AddClick(self.PromShowBox,function() self.PromShowBox:SetActive(false) self.PlayAudio() end)
end

--切换类型
function PromotedPanel.OnClickMenu(index)
  self.PlayAudio()
  if(self.NowMenuIndex == index)then return end
  self.LoadPromList(index)
  for i=0,5 do
    self.MenuButtonBG[i]:SetActive(false)
  end
  self.MenuButtonBG[index]:SetActive(true)
  self.NowMenuIndex = index
end

--加载活动数据
function PromotedPanel.LoadPromList(index)
  if Game.ActivityList==nil then return end

  for k,v in pairs(self.PromotedPreList) do
    v:SetActive(false)
  end

  local cnt = 0;

  for k,v in pairs(Game.ActivityList) do
    --print("===k="..k..",v="..v.ATitle)
    if(v.AClass ~= index and index ~= 0)then break end
    cnt=cnt+1
    if k>#self.PromotedPreList then
      local obj = newObject(self.PromotedListPrefab)
      obj.transform:SetParent(self.transform:Find("Panel/PromList_ScrollView/Viewport/Content")) 
      obj.transform:Find("TxtTitle"):GetComponent("Text").text = v.ATitle
      obj.transform.localScale = Vector3(1,1,1)
      --print("开始时间："..os.date("%Y-%m-%d %H:%M", v.AStartTime)..",结束时间："..os.date("%Y-%m-%d %H:%M", v.AEndTime))
      --print("剩余天数："..self.GetDay(v.AStartTime,v.AEndTime))
      --print("剩余数："..self.GetHour(v.AStartTime,v.AEndTime))
      obj.transform:Find("TxtCountDown"):GetComponent("Text").text ="Waktu Yang Tersisa Tersisa "..self.GetDay(v.AStartTime,v.AEndTime).."har "..self.GetHour(v.AStartTime,v.AEndTime).."jam"
      --print(v.ABaneImg)
      coroutine.start(
        function()
          local www = WWW(v.ABaneImg)
          coroutine.www(www)
          if www.error ~= "" and www.error ~= nil then
              return
          end
          local texture = www.texture
          self.TextureBaneImg[v.AUid] = texture
          obj.transform:Find("Image"):GetComponent("Image").sprite = UnityEngine.Sprite.Create(texture, UnityEngine.Rect(0, 0, texture.width, texture.height), Vector2(0, 0))
        end)
      table.insert(self.PromotedPreList,obj)
      local activity = v
      self.LuaBehaviour:AddClick(obj.transform:Find("ButGO").gameObject,function() self.OpenContent(activity)   end)
      self.LuaBehaviour:AddClick(obj.transform:Find("Image").gameObject,function() self.OpenContent(activity)   end)
    else
      local obj =  self.PromotedPreList[k]
      obj.transform:Find("TxtTitle"):GetComponent("Text").text = v.ATitle
      obj.transform:Find("TxtCountDown"):GetComponent("Text").text ="Waktu Yang Tersisa Tersisa "..self.GetDay(v.AStartTime,v.AEndTime).."har "..self.GetHour(v.AStartTime,v.AEndTime).."jam"
      coroutine.start(
        function()
          local www = WWW(v.ABaneImg)
          coroutine.www(www)
          if www.error ~= "" and www.error ~= nil then
              return
          end
          local texture = www.texture
          self.TextureBaneImg[v.AUid] = texture
          obj.transform:Find("Image"):GetComponent("Image").sprite = UnityEngine.Sprite.Create(texture, UnityEngine.Rect(0, 0, texture.width, texture.height), Vector2(0, 0))
        end)
      local activity = v
      self.LuaBehaviour:RemoveClick(obj.transform:Find("ButGO").gameObject)
      self.LuaBehaviour:RemoveClick(obj.transform:Find("Image").gameObject)
      self.LuaBehaviour:AddClick(obj.transform:Find("ButGO").gameObject,function() self.OpenContent(activity)   end)
      self.LuaBehaviour:AddClick(obj.transform:Find("Image").gameObject,function() self.OpenContent(activity)   end)
      obj:SetActive(true)
    end
  end
  if(cnt==0) then
    self.NoData:SetActive(true)
  else
    self.NoData:SetActive(false)
  end
end

function PromotedPanel.OpenContent(_activity)
  self.PlayAudio()
  self.TxtTitle:GetComponent("Text").text = _activity.ATitle
  self.TxtContent:GetComponent("Text").text = "Waktu Yang Tersisa Tersisa "..self.GetDay(_activity.AStartTime,_activity.AEndTime).."har "..self.GetHour(_activity.AStartTime,_activity.AEndTime).."jam"
  local texture = self.TextureBaneImg[_activity.AUid]
  if(texture~=nil) then
    self.ImgImage:GetComponent("Image").sprite = UnityEngine.Sprite.Create(texture, UnityEngine.Rect(0, 0, texture.width, texture.height), Vector2(0, 0))
  end
  self.TxtContent:GetComponent("Text").text = _activity.AConnet
  self.LuaBehaviour:RemoveClick(self.ButOk)
  self.LuaBehaviour:AddClick(self.ButOk,function() 
    --if _activity.isJoinState then
    --  panelMgr:CreatePanel("View/Notice",{text="您已经参与此活动"});
    --else
      --报名
    self.SendAppActivity(_activity.AUid)
    --end
  end)
  self.ObjPromConent:SetActive(true)
end

function PromotedPanel.SendAppActivity(auid)
  self.PlayAudio()
  local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
  local ReqLoad = {
    AUid = auid
  }
  local code = protobuf.encode("tutorial.Req25", ReqLoad)
  networkMgr:SendMessageBf(25, code)
  Event:Add("eventName25", self.Callback25)
end

function PromotedPanel.Callback25(name, data)
  Event:Remove("eventName25", self.Callback25)
  if data.state~=0 then
    --print("===加入失败原因："..data.emsg)
    self.PromShowBox.transform:Find("BG/Success").gameObject:SetActive(false)
    self.PromShowBox.transform:Find("BG/Fault").gameObject:SetActive(true)
    self.PromShowBox:SetActive(true)
  else
    --print("===加入成功："..data.doing)
    self.PromShowBox.transform:Find("BG/Success").gameObject:SetActive(true)
    self.PromShowBox.transform:Find("BG/Fault").gameObject:SetActive(false)
    self.PromShowBox:SetActive(true)
  end
end

--获取申请列表
function PromotedPanel.Send28()
  self.PlayAudio()
  local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
  local ReqLoad = {}
  local code = protobuf.encode("tutorial.Req28", ReqLoad)
  networkMgr:SendMessageBf(28, code)
  Event:Add("eventName28", self.Callback28)

  for k,v in pairs(self.ObjAppList) do
    v:SetActive(false)
  end
  ShowObjectAnim(self.PromApp);
end

function PromotedPanel.Callback28(name, data)
  Event:Remove("eventName28", self.Callback28)
  if data.state ~= 0 then
    panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
    return
  end

  if(#data.ActivityListArray==0) then
    self.NoData2:SetActive(true)
  else
    self.NoData2:SetActive(false)
  end
  
  for k, v in pairs(data.ActivityListArray) do
    --print("===参与列表k="..k..",v="..v.ATitle)
    if k>#self.ObjAppList then
      local obj = newObject(self.PromAppListPrefab)
      obj.transform:SetParent(self.PromApp.transform:Find("BG/AppList_ScrollView/Viewport/Content"))
      obj.transform.localScale = Vector3(1,1,1)
      obj.transform:Find("TxtActivity"):GetComponent("Text").text = v.ATitle
      obj.transform:Find("TxtTime"):GetComponent("Text").text = os.date("%m/%d %H:%M",v.AJoinTime)
      self.GetState(v.stateInt,obj.transform:Find("TxtState"):GetComponent("Text").text,obj:GetComponent("Image"))
      table.insert(self.ObjAppList,obj)
    else
      local obj = self.ObjAppList[k]
      obj.transform:SetParent(self.PromApp.transform:Find("BG/AppList_ScrollView/Viewport/Content"))
      obj.transform.localScale = Vector3(1,1,1)
      obj.transform:Find("TxtActivity"):GetComponent("Text").text = v.ATitle
      obj.transform:Find("TxtTime"):GetComponent("Text").text = os.date("%m/%d %H:%M",v.AJoinTime)
      self.GetState(v.stateInt,obj.transform:Find("TxtState"):GetComponent("Text").text,obj:GetComponent("Image"))
      obj:SetActive(true)
    end
  end
end

--获取状态
function PromotedPanel.GetState(index,text,objImg)
  if index==0 then
    text = "<color=#F4914FFF>Tetap diperiksa 待审核</color>"
    objImg.color = Color(1,1,1,1)
  elseif index==1 then
    text =  "<color=#40FF96FF>Melalui 通过</color>"
    objImg.color = Color(1,1,1,0)
  else
    text =  "<color=#FF2B2BFF>Nolak 拒绝</color>" 
    objImg.color = Color(1,1,1,0)
  end
end

--获得剩余天数by时间戳
function PromotedPanel.GetDay(_start,_end)
  return math.floor((_end-_start)/86400)
end
--获得剩余小时by时间戳
function PromotedPanel.GetHour(_start,_end)
  return math.floor((_end-_start)%86400/3600)
end

function PromotedPanel.GetDifftime(beginTime, endTime)
  local y1, mt1, d1, h1, m1, s1 = string.match(beginTime, '(%d+)-(%d+)-(%d+) (%d+):(%d+):(%d+)')
  local y2, mt2, d2, h2, m2, s2 = string.match(endTime, '(%d+)-(%d+)-(%d+) (%d+):(%d+):(%d+)')
  local time1 = os.date(os.time {year = y1, month = mt1, day = d1, hour = h1, min = m1, sec = s1})
  local time2 = os.date(os.time {year = y2, month = mt2, day = d2, hour = h2, min = m2, sec = s2})
  local nowtime = os.date(os.time())

  return tostring(time2-time1)

  --if nowtime < time1 then
      --CS.GameDialog.Instance:ShowPromptAutoHide("活动未开始！");
  --    return 1
 -- elseif nowtime > time2 then
      --CS.GameDialog.Instance:ShowPromptAutoHide("活动已结束！");
  --    return 2
 -- else
  --    return 3
 -- end
end

function PromotedPanel.PlayAudio()
  local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
  soundMgr:PlayX(music)
end
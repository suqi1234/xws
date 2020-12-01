require "Config/Hall/gamelist"

local GameType = ""
HallPanel = {
    transform,
    gameObject,
    LuaBehaviour,
    AlphaTime = 0.5,
    CallBackFunc = nil,
    lastDragTime = 0,
    lastDragX = 0,
    GameBtnObjTable = {},
    DragStartPoint = nil,
    GamePage = 0,
    OnBeginGamePage = 0,
    IsPress = false,
    PosIndex = 1,
    DownLoadNum = 0,
    LoadPrefabOK = false,
    CurrentRoomObject = nil,
    AllCoroutine = {},
    IsLogin=false,
    GamePanel={};
    IsLoadLoaclGame=false;
    --配置有平台筛选的分类
    PlatformClassIDs={2};
    PlatformSave={["pid"]=nil,["cid"]=nil};
    PlatformHot={};--分类里的平台热门{[classKey]={name,name}}
    DownloadGameIcon={};
    DicImgClass={};--游戏图标分类 {[imgClass]=classKey}
    --获取网络图片
    ListSpriteUrl={};
    ListSpriteObj={};
    ListSpriteName={};
}
local self = HallPanel
local PrefabName = {
    "QIUQIU"
}
function HallPanel.Adapter()
    if (Screen.width + 0.1) / Screen.height < 1.8 then
        --self.transform:Find("Panel/GameOptions_ScrollView/Viewport/Content").gameObject:GetComponent("GridLayoutGroup").cellSize=Vector2(331,200)
        self.transform:Find("Panel/GameOptions_ScrollView").gameObject:GetComponent("RectTransform").offsetMin = Vector2(35, 0)
        self.transform:Find("Panel/GameList").gameObject:GetComponent("RectTransform").offsetMin = Vector2(62, 0)
    end
end
function HallPanel.Awake(obj)
    self.LoadPrefabOK = false
    self.gameObject = obj
    self.transform = obj.transform
    self.LuaBehaviour = self.gameObject:GetComponent("LuaBehaviour")
    self.Adapter()
    self.FindComponent()
    self.AddOnClickEvent()
    resMgr:LoadPrefab("Hall", PrefabName, self.LoadPrefabEnd)
    --self.LoacGameList()
    --self.AddOnClickEvent()
    -- if Util.HasKey(AppConst.AppPrefix .. "LoginState") and Util.HasKey(AppConst.AppPrefix .. "userName") and Util.HasKey(AppConst.AppPrefix .. "GameToken") then
    --     local LoginState = Util.GetInt(AppConst.AppPrefix .. "LoginState")
    --     local OpenID = Util.GetString(AppConst.AppPrefix .. "userName")
    --     local Token = Util.GetString(AppConst.AppPrefix .. "GameToken")
    --     local AppUnid = Util.GetString(AppConst.AppPrefix .. Util.GetString(AppConst.AppPrefix .. "Account") .. "AppUnid") --获取持久化数据——用户唯一ID
    --     LoginPanel.Send1(LoginState, OpenID, Token, AppUnid, Token)
    -- -- else
    -- --     self.gameObject:SetActive(true)
    --  end --自动登陆

    self.GamelistInitData = {}
    for i=0,table.getCount(Gamelist) - 1 do
        self.GamelistInitData[i]={}
        for _,v in pairs(Gamelist[i]) do
            table.insert(self.GamelistInitData[i],v)
        end
    end

    self.IsLoadLoaclGame = true;
end

function HallPanel.FindComponent()
    self.UpdateIcon = self.transform:Find("UpdateIcon").gameObject--礼物按钮
    self.GiftButton = self.transform:Find("Panel/HallBottom/GiftButton").gameObject
    self.ExchangeButton2 = self.transform:Find("Panel/HallBottom/ExChangeButton").gameObject--个人信息
    self.PlayerHeadButton = self.transform:Find("Panel/Top/PlayerHead").gameObject
    self.PlayerVipImg = self.transform:Find("Panel/Top/PlayerHead/ImgVIP").gameObject--个人信息
    self.HeadImage = self.transform:Find("Panel/Top/PlayerHead/HeadImage").gameObject--头像
    self.PlayerHead = self.transform:Find("Panel/Top/PlayerHead/HeadImage/Icon").gameObject--玩家名字
    self.PlayerName = self.transform:Find("Panel/Top/PlayerHead/PlayerName").gameObject--玩家id
    self.PlayerID = self.transform:Find("Panel/Top/PlayerID").gameObject
    self.LoginButton = self.transform:Find("Panel/Top/LoginButton").gameObject--玩家金豆
    self.PlayerGold = self.transform:Find("Panel/Top/GoldPanel/Text").gameObject--排行按钮
    self.RankButton = self.transform:Find("Panel/HallBottom/RankButton").gameObject--银行按钮
    self.BankButton = self.transform:Find("Panel/HallBottom/BankButton").gameObject--公告按钮
    self.NoticeButton = self.transform:Find("Panel/HallBottom/NoticeButton").gameObject--商城按钮
    self.ShopButton = self.transform:Find("Panel/HallBottom/ShopButton").gameObject--设置按钮
    self.SetButton = self.transform:Find("Panel/HallBottom/SetButton").gameObject
    self.Main = self.transform:Find("Panel/HallBottom/Main").gameObject

    --复制物体
    self.GameTypeToggleItem = self.transform:Find("Panel/GameOptions_ScrollView/Viewport/Content/GameTypeToggleItem").gameObject--分类按钮
    self.GameScrollViewItem = self.transform:Find("Panel/GameList/GameScrollViewItem").gameObject--新的游戏列表
    self.GameContentItem = self.transform:Find("Panel/GameList/GameIconxx/GameContentItem").gameObject--新的普通游戏按钮
    self.GameContentZRItem = self.transform:Find("Panel/GameList/GameIconxx/GameContentZRItem").gameObject--新的真人游戏按钮
    self.GameContenFishItem = self.transform:Find("Panel/GameList/GameIconxx/GameContenFishItem").gameObject--新的捕鱼游戏按钮
    self.GameContenLotteryItem = self.transform:Find("Panel/GameList/GameIconxx/GameContenLotteryItem").gameObject--新的彩票游戏按钮
    self.GameContenSportItem = self.transform:Find("Panel/GameList/GameIconxx/GameContenSportItem").gameObject--新的体彩游戏按钮
    
    
    self.TFGameClassContent = self.transform:Find("Panel/GameOptions_ScrollView/Viewport/Content").transform
    self.TFGameListContent = self.transform:Find("Panel/GameList").transform
    --游戏分类
    self.GameClassToggles={}
    

    --道具提示小红点
    self.pointTips = self.transform:Find("Panel/HallBottom/GiftButton/PointTips").gameObject
    --动画用控件
    self.HallBottom = self.transform:Find("Panel/HallBottom").transform
    self.Top = self.transform:Find("Panel/Top").transform
    self.Panel = self.transform:Find("Panel").gameObject
    --活动按钮
    self.PromosiButton = self.transform:Find("Panel/HallBottom/PromosiButton").gameObject
    --VIP按钮
    self.VIPButton = self.transform:Find("Panel/HallBottom/VIPButton").gameObject
    --邮件按钮
    self.InboxKatButton = self.transform:Find("Panel/HallBottom/InboxKatButton").gameObject
    self.PopUpButton = self.transform:Find("Panel/Top/PopUp_Button").gameObject --弹出按钮
    self.SetoranButton = self.transform:Find("Panel/Top/Bg/Setoran_Button").gameObject --充值
    self.PenarikanButton = self.transform:Find("Panel/Top/Bg/Penarikan_Button").gameObject --提款
    self.TemanButton = self.transform:Find("Panel/HallBottom/TemanButton").gameObject--好友
    self.TurnaMenButton= self.transform:Find("Panel/HallBottom/TurnaMenButton").gameObject
    self.PeringKatButton= self.transform:Find("Panel/HallBottom/PeringKatButton").gameObject

    --游戏列表的Content
    self.GamePanel={}
    local childCnt = self.TFGameClassContent.childCount
    local maxIndex = tonumber(Split(self.TFGameClassContent:GetChild(childCnt-1).name,"_")[2])
    --放游戏icon的Content
    self.GamePanel[0] = self.TFGameListContent:Find("GameScrollView_0/Viewport/Content/GameContent").gameObject
    self.GamePanel[1] = self.TFGameListContent:Find("GameScrollView_1/Viewport/Content/GameContent").gameObject
    self.GamePanel[2] = self.TFGameListContent:Find("GameScrollView_2/Viewport/Content/GameContent").gameObject
    self.GamePanel[3] = self.TFGameListContent:Find("GameScrollView_3/Viewport/Content").gameObject
    self.GamePanel[4] = self.TFGameListContent:Find("GameScrollView_4/Viewport/Content").gameObject
    self.GamePanel[5] = self.TFGameListContent:Find("GameScrollView_5/Viewport/Content/GameContent").gameObject
    self.GamePanel[6] = self.TFGameListContent:Find("GameScrollView_6/Viewport/Content/GameContent").gameObject

    for i=0,maxIndex do
        self.GameClassToggles[i] = self.TFGameClassContent:Find("GameTypeToggle_"..i).gameObject

        --平台筛选绑定事件
        if table.contains(self.PlatformClassIDs,i) then
            local platformContentTF = self.TFGameListContent:Find("GameScrollView_"..i.."/Viewport/Platform/Platform_Scroll/Viewport/Content").transform
            local childCnt = platformContentTF.childCount
            local class = i
            for childIndex=0,childCnt-1 do
                self.LuaBehaviour:AddValueChanged(platformContentTF:GetChild(childIndex):GetComponent("Toggle"),function(obj,value)
                   local pid = Split(obj.name,"_")[2]
                   self.PlatformScreening(pid,class)
                   obj.transform:Find("Background/Checkmark/Icon").gameObject:SetActive(value)
                   obj.transform:Find("Background/Checkmark/ImageTxt").gameObject:SetActive(value)
                   obj.transform:Find("Background/Icon").gameObject:SetActive(not value)
                   obj.transform:Find("Background/ImageTxt").gameObject:SetActive(not value)
                   if value then
                    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
                    soundMgr:PlayX(music)
                   end
                end)
            end

            --有平台筛选的隐藏滚动公告
            self.LuaBehaviour:AddValueChanged(self.GameClassToggles[i]:GetComponent("Toggle"),function(obj,value)
                local obj = GameObject.Find("GlobalPanel/Panel/Grid")
                if obj~=nil then
                    obj.gameObject:SetActive(not value)
                end
            end)
        end
    end

    --0里默认游戏
    local content = self.GamePanel[0].transform.parent
    for i=0,1 do
        for j=0,1 do
            local go = content.transform:Find(i):GetChild(j)
            if go ~= nil then
                self.LuaBehaviour:AddClick(go.gameObject, self.OnGameListClick)
            end
        end
    end

end

function HallPanel.Update()
    if self.IsLoadLoaclGame and Game.GameList~=nil then
        self.IsLoadLoaclGame = false
        self.LoadGameList()
    end
end


function HallPanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self.PopUpButton, self.OnClickSet)
    self.LuaBehaviour:AddClick(self.NoticeButton, self.OnClickHallNotice)
    self.LuaBehaviour:AddClick(self.PlayerHeadButton, self.OnClickPerson)
    self.LuaBehaviour:AddClick(self.RankButton, self.OnClickRank)
    self.LuaBehaviour:AddClick(self.BankButton, self.OnClickBank)
    self.LuaBehaviour:AddClick(self.ShopButton, self.OnClickShop)
    self.LuaBehaviour:AddClick(self.GiftButton, self.OnClickGift)
    self.LuaBehaviour:AddClick(self.ExchangeButton2, self.OnClickExchange)
    self.LuaBehaviour:AddClick(
        self.LoginButton,
        function()
            local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
            soundMgr:PlayX(music)
            panelMgr:CreatePanel("View/Login", nil)
        end
    )
    -- for k, v in pairs(self.GameBtnObjTable) do
    --     LuaBehaviour:AddClick(v, self.OnGameListClick)
    -- end
    self.LuaBehaviour:AddClick(self.PromosiButton, self.OnClickPromosi)
    self.LuaBehaviour:AddClick(self.VIPButton, self.OnClickVIP)
    self.LuaBehaviour:AddClick(self.SetoranButton, self.Setoran)
    self.LuaBehaviour:AddClick(self.PenarikanButton,self.OnPenarikan)
    self.LuaBehaviour:AddClick(self.InboxKatButton, self.OnClickInbox)
    self.LuaBehaviour:AddClick(self.TemanButton,self.OnClickTeman)
    self.LuaBehaviour:AddClick(self.TurnaMenButton,self.OnTurnaMen)
    self.LuaBehaviour:AddClick(self.PeringKatButton,self.OnPeringKat)

    
end

function HallPanel.LoadPrefabEnd(obj)
    -- for i = 0, #PrefabName - 1, 1 do
    --     if obj[i].gameObject.name == "QIUQIU" then
    --         local Effect = newObject(obj[i].gameObject)
    --         Effect.transform:SetParent(self.GameBtnObjTable["QIUQIU"].transform)
    --         Effect.transform.localScale = Vector3(1, 1, 1)
    --         Effect.transform.localPosition = Vector3.New(0, 0, 0)
    --     end
    -- end
    self.LoadPrefabOK = true
    GameCallBack.CallFun("HallPanelInit")
end

function HallPanel.OnEnable(obj)
    networkMgr:RemoveGameSocket()
    self.Panel:SetActive(true)
    --LuaHelper.SetAlpha(self.gameObject:GetComponent("CanvasGroup"), 0)
    self.pointTips:SetActive(Player.IsHaveGift)
    
    Event:Add("eventName14", self.Callback14)
    Event:Add("eventName500", self.Callback500)
end

 function HallPanel.GoldAnimation()
    for k, v in pairs(self.AllCoroutine) do
        if v~=nil then
        coroutine.stop(v)
        end
    end
    self.PlayerGold:GetComponent("Text").text = AllPoolInt
    while not self.IsLogin do
        local gold=string.gsub(self.PlayerGold:GetComponent("Text").text,",","")  
        LuaHelper.DOTweenTo(gold, function(Gold)
            self.PlayerGold:GetComponent("Text").text = FormatGlod(tonumber(Gold))
           end,tostring(tonumber(gold)+math.random(-1000,5000)), 1)
           coroutine.wait(1.1)
    end
    Yield(0);
    AllPoolInt= self.PlayerGold:GetComponent("Text").text
    self.PlayerGold:GetComponent("Text").text = FormatGlod(Player.gold)
 end
function HallPanel.Callback14(name, data)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    -- if Player.name~="" and Player.gold~=-1 and Player.avater~=2 then
    --     self.PlayerName:GetComponent("Text").text = Player.name
    --     self.PlayerID:GetComponent("Text").text = "ID:" .. Player.id
    --     Game.GetLoadHeaderFile(Player.avater, self.PlayerHead.gameObject)
    if not IsNil(self.PlayerHeadButton) then
    self.PlayerHeadButton:SetActive(false)
    end
    self.LoginButton:SetActive(true)
    Player.name = ""
    self.IsLogin=false;
    local co= coroutine.start(self.GoldAnimation);
    table.insert(self.AllCoroutine, co)
    if GolbalResource.lineNoticeList~=nil then
        panelMgr:CreatePanel("View/Global", GolbalResource.lineNoticeList)
    end
end

local IsShowGameAnim=false
function HallPanel.ShowPanelAnim()
    if IsShowGameAnim then return end
    IsShowGameAnim=true
    
    LuaHelper.DOTweenAlpha(self.transform.gameObject:GetComponent("CanvasGroup"), 1, self.AlphaTime)

    self.Top.localPosition = Vector3(0,200,0)
    self.Top:DOLocalMove(Vector3(0,0,0), 0.8, false)
    --下部分动画
    self.HallBottom.localPosition = Vector3(0,-200,0)
    self.HallBottom:DOLocalMove(Vector3(0,0,0), 0.8, false)
    
    
    --游戏类型动画
    local types = self.transform:Find("Panel/GameOptions_ScrollView/Viewport/Content")
    local childCount = types.childCount
    --游戏图标动画
    for i=0,childCount-1 do
        if types:GetChild(i):GetComponent("Toggle").isOn == true then
            local classKey = tonumber(Split(types:GetChild(i).name,"_")[2])
            self.ShowPanelAnim_GameList(tonumber(classKey))
            break
        end
    end

    coroutine.start(function()
        Yield(0)
        for i=1,childCount-1 do
            types:GetChild(i).localPosition = Vector3(-165.5,types:GetChild(i).localPosition.y,0)
            self.LuaBehaviour:AddValueChanged(types:GetChild(i):GetComponent("Toggle"),function(go,value)
                if IsShowGameAnim then return end
                IsShowGameAnim=true
                local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
                soundMgr:PlayX(music)
                if  self.PlatformSave["pid"] == nil then
                    self.PlatformSave["pid"] = "hot"
                    self.PlatformSave["cid"] = 2
                end
                --游戏类型动画
                local types = self.transform:Find("Panel/GameOptions_ScrollView/Viewport/Content")
                local childCount = types.childCount
                --游戏图标动画
                for ii=0,childCount-1 do
                    if types:GetChild(ii):GetComponent("Toggle").isOn == true then
                        local classKey = tonumber(Split(types:GetChild(ii).name,"_")[2])
                        self.ShowPanelAnim_GameList(tonumber(classKey))
                        break
                    end
                end

                
                
            end)
        end

        for i=1,childCount-1 do
            types:GetChild(i):DOLocalMove(Vector3(165.5,types:GetChild(i).localPosition.y,0), 0.3, false)
            coroutine.wait(0.1)
        end
    end)

    coroutine.wait(self.AlphaTime)
    self.Panel.transform:DOLocalMove(Vector3.zero, 0.1, false)
end

function HallPanel.ShowPanelAnim_GameList(classKey)

    local trans = nil
    local trans2 = nil
    local HGroup = nil
    local GGroup = nil
    local childCount =0
    local child2Count =0
    if table.contains({3,4},classKey) then
        trans = self.GamePanel[classKey].transform
    else
        trans = self.GamePanel[classKey].transform.parent
        trans2 = self.GamePanel[classKey].transform
        child2Count = trans2.transform.childCount
        GGroup = trans2:GetComponent("GridLayoutGroup")
    end
    childCount = trans.transform.childCount
    HGroup = trans:GetComponent("HorizontalLayoutGroup")

    if HGroup~=nil and childCount>1 then
        HGroup.spacing = 600
    end
    if GGroup~=nil then
        GGroup.spacing = Vector2(600,20)
    end

    coroutine.start(function()
        Yield(0)
        if classKey == 2 then
            self.TFGameListContent:Find("GameScrollView_2/Viewport/Content"):GetComponent("RectTransform").anchoredPosition = Vector2(0,0)
            for k,v in pairs(Gamelist[classKey])  do
                local obj = self.GamePanel[classKey].transform:Find(v)
                if obj~=nil then
                    obj.gameObject:SetActive(false)
                end
            end
            local showIndex=0
            if self.PlatformSave["pid"]=="all" then
                for k,v in pairs(Gamelist[classKey]) do
                    local obj = self.GamePanel[classKey].transform:Find(v)
                    if obj~=nil and showIndex<13 then
                        obj.gameObject:SetActive(true)
                        showIndex = showIndex+1
                    end
                end
            elseif self.PlatformSave["pid"]=="hot" and self.PlatformHot[classKey]~=nil then
                for k,v in pairs(self.PlatformHot[classKey]) do
                    local obj = self.GamePanel[classKey].transform:Find(v)
                    if obj~=nil and showIndex<13 then
                        obj.gameObject:SetActive(true)
                        showIndex = showIndex+1
                    end
                end
            else
                for k,v in pairs(Gamelist[classKey]) do
                    if Split(v,"_")[1] == tostring(self.PlatformSave["pid"]) then
                        local obj = self.GamePanel[classKey].transform:Find(v)
                        if obj~=nil and showIndex<13 then
                            obj.gameObject:SetActive(true)
                            showIndex = showIndex+1
                        end
                    end
                end
            end
        else
            if child2Count>1 then
                local index = 0
                for i=1,child2Count-1 do
                    if index<13  and table.contains(Gamelist[classKey],trans2:GetChild(i).name)  then
                        trans2:GetChild(i).gameObject:SetActive(true)
                        index= index + 1
                    else
                        trans2:GetChild(i).gameObject:SetActive(false)
                    end
                end
            end
        end
        trans.localPosition = Vector3(trans.localPosition.x+2500,trans.localPosition.y,0)
        coroutine.wait(0.1)

        for i=600,30,-30 do
            if HGroup~=nil and childCount>1 then
                HGroup.spacing = i
            end
            if GGroup~=nil then
                GGroup.spacing = Vector2(i,20)
            end
            Yield(0)
        end
        coroutine.wait(0.3)

        if classKey == 2 then
            if self.PlatformSave["pid"]=="all" then
                for k,v in pairs(Gamelist[classKey]) do
                    local obj = self.GamePanel[classKey].transform:Find(v)
                    if obj~=nil then
                        obj.gameObject:SetActive(true)
                    end
                end
            elseif self.PlatformSave["pid"]=="hot" and self.PlatformHot[classKey]~=nil then
                for k,v in pairs(self.PlatformHot[classKey]) do
                    local obj = self.GamePanel[classKey].transform:Find(v)
                    if obj~=nil then
                        obj.gameObject:SetActive(true)
                    end
                end
            else
                for k,v in pairs(Gamelist[classKey]) do
                    if Split(v,"_")[1] == tostring(self.PlatformSave["pid"]) then
                        local obj = self.GamePanel[classKey].transform:Find(v)
                        if obj~=nil then
                            obj.gameObject:SetActive(true)
                        end
                    end
                end
            end
        else
            if child2Count>2 then
                for i=1,child2Count - 1 do
                    if table.contains(Gamelist[classKey],trans2:GetChild(i).name) then
                        trans2:GetChild(i).gameObject:SetActive(true)
                    end
                end
            end
        end
        
        IsShowGameAnim = false;
    end)

    
    
end

function HallPanel.HidePanelAnim()
    self.HallBottom.transform:DOLocalMove(Vector3.New(0, -300, 0), 0.1, false)
    self.Panel.transform:DOLocalMove(Vector3.New(1500, 0, 0), 0.1, false)
    coroutine.wait(0.1)
    --LuaHelper.DOTweenAlpha(self.transform.gameObject:GetComponent("CanvasGroup"), 0, self.AlphaTime)
    coroutine.wait(self.AlphaTime)
    Event:Remove("eventName14", self.Callback14)
    Event:Remove("eventName500", self.Callback500)
    CloseView("Hall")
end

function HallPanel.Start()
    Event:Add("ChangeGold", HallPanel.ChangeGold)
    if GolbalResource.lineNoticeList~=nil then
        panelMgr:CreatePanel("View/Global", GolbalResource.lineNoticeList)
    end
end
-- message Res0{
--     required int32 state = 1 ;                    //返回状态  0 正确，1错误
--     optional string emsg =2;                      //返回状态失败是，告诉的提示
--     optional int64 allPoolInt=3;                  //总池子数
--     repeated GameClassListOne gameClassList=4;    //游戏分类列表信息
--   }
function HallPanel.Init(data)
    
    if data ~= nil and data.allPoolInt ~= nil then
        AllPoolInt=FormatGlod(math.random(data.allPoolInt*10,data.allPoolInt*10*5))
        local co= coroutine.start(self.GoldAnimation);
        table.insert(self.AllCoroutine, co)
    else
        self.UpdateUserInfo()
    end
    if self.LoadPrefabOK then
        IsInGame = "Hall"
        --if UIRoot:Find("GlobalPanel") ~= nil then
            --GlobalPanel.SetPos()
        --end
        self.IsPress = false
        if Player.hasResultGP then
            self.BackGiftPanel:SetActive(true)
            self.BackGiftOpenBtn:SetActive(true)
        end
        if GlobalBg.activeSelf == false then
            GlobalBg:SetActive(true)
        end
        --self.CheckMusic()
        if GlobalLoading.activeSelf then
            GlobalLoading:SetActive(false)
        end
        gameMgrMgr:SetGameState(false)
        Game.IsLoginGame = false
        --local music = GolbalResource.Golbal_MusicResource["platform_background"]:GetComponent("AudioSource").clip
        -- soundMgr:PlayBacksoundAc(music, true)
        local co = coroutine.start(self.ShowPanelAnim)
        table.insert(self.AllCoroutine, co)
    else
        GameCallBack.AddCallBack("HallPanelInit", self.Init, data)
    end
end

function HallPanel.UpdateUserInfo()
    if Player.name ~= "" and Player.gold ~= -1 and Player.avater ~= 2 then
        if (self.PlayerName~=nil and not IsNil(self.PlayerName))and(self.PlayerID~=nil and not IsNil(self.PlayerID)) then
        self.PlayerName:GetComponent("Text").text = Player.name
        self.PlayerID:GetComponent("Text").text = "ID:" .. Player.id
        end
        if  self.PlayerHead.gameObject~=nil and not IsNil(self.PlayerHead.gameObject) then
        Game.GetLoadHeaderFile(Player.avater, self.PlayerHead.gameObject)
        end
        if  not IsNil(self.PlayerHeadButton) and not IsNil(self.LoginButton) then
        self.PlayerHeadButton:SetActive(true)
        self.LoginButton:SetActive(false)
        end
        if not IsNil(self.PlayerGold) and self.IsLogin then
            self.PlayerGold:GetComponent("Text").text = FormatGlod(Player.gold)
        end
        self.SetGameIcon(nil,"VIP"..Player.Lv,self.PlayerVipImg) 
        self.IsLogin=true;
    end
end

function HallPanel.ReSet()
    self.PlayerName:GetComponent("Text").text = SetFormatPhoneNumber(Player.name)
end

--打开设置界面
function HallPanel.OnClickSet(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    panelMgr:CreatePanel("View/More", nil)
end

--获取公告消息，打开公告面板
function HallPanel.OnClickHallNotice(obj)
    --local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    --soundMgr:PlayX(music)
end

--打开排行榜
function HallPanel.OnClickRank(obj)
    panelMgr:CreatePanel("View/ShortNotice", {text = "暂未开放"})
end

--打开银行
function HallPanel.OnClickBank(obj)
    if Player.PhoneNum == "" or Player.PhoneNum == nil or Player.IsBankPassword == 1 then
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        if Player.PhoneNum ~= "" and Player.PhoneNum ~= nil then
            --"设置银行密码后，才能使用银行功能"
            panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(252), funname = self.ShowBankPassword, IsShowCancel = true})
        else
            --"绑定手机号并设置银行密码后，才能使用银行功能"
            panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(253), funname = self.ShowBindingPhone, IsShowCancel = true})
        end
    else
        --请求银行数据
        Player.Send18()
    end
end

--打开商店
function HallPanel.OnClickShop(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    Game.ShopType = "Gold"
    self.Send80()
end

--打开个人信息界面
function HallPanel.OnClickPerson(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    panelMgr:CreatePanel("View/PersonalCenter", nil)
end

--打开礼品界面
function HallPanel.OnClickGift(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if Player.name == "" then
        panelMgr:CreatePanel("View/Login", nil)
        return;
    end
    panelMgr:CreatePanel("View/Gift", nil)
end
--打开兑换界面
function HallPanel.OnClickExchange(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    panelMgr:CreatePanel("View/Exchange", nil)
end

--打开活动
function HallPanel.OnClickPromosi(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if Player.name == "" then
        panelMgr:CreatePanel("View/Login", nil)
        return;
    end
    panelMgr:CreatePanel("View/Promoted", nil)
end
function HallPanel.Setoran(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if Player.name == "" then
        panelMgr:CreatePanel("View/Login", nil)
        return;
    end
    
    panelMgr:CreatePanel("View/Pay", nil)
end

function HallPanel.OnPenarikan(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if Player.name == "" then
        panelMgr:CreatePanel("View/Login", nil)
        return;
    end
    
    panelMgr:CreatePanel("View/Penarikan", nil)
end

--打开VIP
function HallPanel.OnClickVIP(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if Player.name == "" then
        panelMgr:CreatePanel("View/Login", nil)
        return;
    end
    panelMgr:CreatePanel("View/VIP", nil)
end


--打开邮件
function HallPanel.OnClickInbox(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if Player.name == "" then
        panelMgr:CreatePanel("View/Login", nil)
        return;
    end
    panelMgr:CreatePanel("View/Inbox", nil)
end

--打开好友
function HallPanel.OnClickTeman(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if Player.name == "" then
        panelMgr:CreatePanel("View/Login", nil)
        return;
    end

    panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(130)})
end

--打开晋级
function HallPanel.OnTurnaMen(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if Player.name == "" then
        panelMgr:CreatePanel("View/Login", nil)
        return;
    end

    panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(130)})
end

--打开排行
function HallPanel.OnPeringKat(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if Player.name == "" then
        panelMgr:CreatePanel("View/Login", nil)
        return;
    end

    panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(130)})
end

function HallPanel.Callback75(name, data)
    Event:Remove("eventName75", self.Callback75)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        --error("emsg"..data.emsg)
        return
    end
    panelMgr:CreatePanel("View/SignIn", data)
end

--检查声音
function HallPanel.CheckMusic()
    if Util.HasKey(AppConst.AppPrefix .. "BackSound") then
        soundMgr:SoundOffBacksound(Util.GetFloat(AppConst.AppPrefix .. "BackSound"))
    end
    if Util.HasKey(AppConst.AppPrefix .. "SoundEffect") then
        soundMgr.isPlaySV = true
    else
        soundMgr.isPlaySV = false
    end
end

function HallPanel.OnGameListClick(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if Player.name == "" then
        panelMgr:CreatePanel("View/Login", nil)
        return;
    end
    local Name = obj.name
    local Btn = obj.transform:GetComponent("Button")
    if GameListInfo[Name] == nil then
    elseif GameListInfo[Name].Url == "null" then
        self.UpdateCallBack(false, Name)
    else
        --Application.OpenURL(GameListInfo[Name].Url)
        self.OpenH5Game(Name) 
    end
end

function HallPanel.UpdateCallBack(bool, filename, btn, UpdateGameFilesCount)
    conf_GameLuaFile_get(filename)
    self.GoToGame(filename)
end

function HallPanel.OpenH5Game(filename)
    print("filename="..filename)
    --panelMgr:CreatePanel("View/UniWeb", {GameUrl = "http://192.168.1.11/testJsToUnit.html"})
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        gameIndex = filename;
        classUnid = "1";
        showLanguage = self.GetLanguageIndex();
    }
    local code = protobuf.encode("tutorial.Req71", ReqLoad)
    networkMgr:SendMessageBf(71, code)
    Event:Add("eventName71", self.Callback71)
end

function HallPanel.Callback71(name, data)
    Event:Remove("eventName71", self.Callback71)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    panelMgr:CreatePanel("View/UniWeb", {GameUrl = data.GUrl})
end

function HallPanel.GetLanguageIndex()
        local SaveData=Util.GetString("CurrentSelectLanguage")
        if SaveData=="English" then
            return "2"
        elseif SaveData=="Chinese" then
            return "1"
        else
            return "3"
        end
end

function HallPanel.CloseIcon(go, btn)
    go.gameObject:SetActive(false)
    btn.interactable = true
    self.IsPress = false
end

function HallPanel.GoToGame(filename)
    IsInGame = filename
    --if UIRoot:Find("GlobalPanel") ~= nil then
        --GlobalPanel.SetPos()
    --end
    if GameListInfo[filename] ~= nil then
        self.Send70(GameListInfo[filename].Index)
    end
end

function HallPanel.ShowHallPanel()
    panelMgr:CreatePanel("View/Hall", nil)
    if not IsNil(self.CurrentRoomObject) then
        HallPanel.ShowRoomPanelAnim()
    end
end

function HallPanel.Send80()
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {}
    local code = protobuf.encode("tutorial.Req80", ReqLoad)
    networkMgr:SendMessageBf(80, code)
    Event:Add("eventName80", self.Callback80)
end

function HallPanel.Callback80(name, data)
    Event:Remove("eventName80", self.Callback80)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    panelMgr:CreatePanel("View/Shop", {ShopItemList = data.data})
end

function HallPanel.OnConnect(gameToken)
    if self.CallBackFunc ~= nil then
        self.CallBackFunc(gameToken)
        self.CallBackFunc = nil
    end
end

function HallPanel.ShowUpdating(filename)
    self.UpdateIcon.transform:SetParent(self.GameBtnObjTable[filename].transform)
    self.UpdateIcon.transform.localScale = Vector3.one
    self.UpdateIcon.transform.localPosition = Vector3.zero
end

function HallPanel.ChangeGold(name, data)
    if not IsNil(self.PlayerGold) then
        self.PlayerGold:GetComponent("Text").text = FormatGlod(Player.gold)
    end
end

function HallPanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        if v~=nil then
        coroutine.stop(v)
        end
    end
end

function HallPanel.OnDestroy()
    --destroy(self.gameObject)
    --HallPanel = nil
    --Util.ClearMemory()
end

function HallPanel.OpenGameRoom(data)
    if GlobalBg.activeSelf == false then
        GlobalBg:SetActive(true)
    end
    if GlobalLoading.activeSelf then
        GlobalLoading:SetActive(false)
    end
    Player.gold = data.integral
    Game.RoomList = data.data
    GameType = data.gameIndex
    self.ShowRoom(GameType)
end

function HallPanel.OnClick(obj)
    local ClassUnid
    if obj.transform then
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
        ClassUnid = obj.transform:Find("classUnidText"):GetComponent("Text").text
    else
        ClassUnid = obj.classUnidText
    end
    if GameType == "QIUQIU" then
        require "QiuQiu/QiuQiuData"
        QiuQiuData.Send71(ClassUnid)
    end
    GlobalLoading:SetActive(true)
    CloseView("Hall")
end

function HallPanel.ShowRoom(RoomType)
    if self.CurrentRoomObject == nil then
        return
    end
    self.GameRoomPanel = self.CurrentRoomObject.transform:Find("GamePanel")
    for i = 0, self.GameRoomPanel.childCount - 1 do
        self.LuaBehaviour:RemoveClick(self.GameRoomPanel:GetChild(i).gameObject)
    end
    for i = 0, self.GameRoomPanel.childCount - 1 do
        self.LuaBehaviour:AddClick(self.GameRoomPanel:GetChild(i).gameObject, self.OnClick)
    end
    if #Game.RoomList > 4 then
        self.CurrentRoomObject:GetComponent("ScrollRect").enabled = true
        self.GameRoomPanel:GetComponent("GridLayoutGroup").spacing = Vector2(0, 30)
    else
        self.CurrentRoomObject:GetComponent("ScrollRect").enabled = false
    end
    for i = 0, self.GameRoomPanel.childCount - 1 do
        if self.GameRoomPanel:GetChild(i).gameObject.activeSelf then
            self.GameRoomPanel:GetChild(i).gameObject:SetActive(false)
        end
    end
    for k, v in pairs(Game.RoomList) do
        local obj = self.GameRoomPanel.transform:GetChild(v.imgUnid - 1).gameObject
        obj.transform:Find("classUnidText"):GetComponent("Text").text = v.classUnid
        obj.transform:Find("Left/MulText"):GetComponent("Text").text = FormatPourNumbers(v.lowScoreInt)
        obj.transform:Find("OnLineText"):GetComponent("Text").text = v.exeState
        obj.transform:Find("Left/Text"):GetComponent("Text").text = "准入:" .. FormatPourNumbers(v.allowMultiple)
        if obj.activeSelf == false then --
            obj:SetActive(true)
        end
    end
    HallPanel.ShowRoomPanelAnim()
end

function HallPanel.Send70(GameIndex)
    --panelMgr:CreatePanel("View/Hall", nil)
    Util.LogError("Path----------------" .. Util.DataPath)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        gameIndex = GameIndex
    }
    local code = protobuf.encode("tutorial.Req70", ReqLoad)
    networkMgr:SendMessageBf(70, code)
    Event:Add("eventName70", self.Callback70)
end

function HallPanel.Callback70(name, data)
    --local music = GolbalResource.Golbal_MusicResource["platform_background"]:GetComponent("AudioSource").clip
    --soundMgr:PlayBacksoundAc(music, true)
    Event:Remove("eventName70", self.Callback70)
    if data.state ~= 0 then
        if GlobalBg.activeSelf == false then
            GlobalBg:SetActive(true)
        end
        CloseAllView()
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg)), funname = self.EnterError})
        return
    end
    Game.gameIndex = data.gameIndex
    self.OpenGameRoom(data)
    if data.gameIndex == "QIUQIU" then
        GameType = data.gameIndex
        HallPanel.OnClick({name = data.gameIndex, classUnidText = "1", transform = false})
    else
        HallPanel.ShowRoomPanelAnim()
    end
end

function HallPanel.EnterError()
    panelMgr:CreatePanel("View/Hall", nil)
end

function HallPanel.ShowRoomPanelAnim()
    if IsNil(self.CurrentRoomObject) then
        return
    end
    local co =
        coroutine.start(
        function()
            LuaHelper.SetAlpha(self.CurrentRoomObject.transform:GetComponent("CanvasGroup"), 0)
            self.CurrentRoomObject:SetActive(true)
            LuaHelper.DOTweenAlpha(self.CurrentRoomObject.transform:GetComponent("CanvasGroup"), 1, 0.3)
            coroutine.wait(0.1)
        end
    )
    table.insert(self.AllCoroutine, co)
    self.Panel:SetActive(false)
    panelMgr:CreatePanel("View/Hall", nil)
end

function HallPanel.HideRoomPanelAnim()
    local co =
        coroutine.start(
        function()
            self.RoomPanel.transform:DOScale(0, 0.3)
            coroutine.wait(0.2)
            LuaHelper.DOTweenAlpha(self.CurrentRoomObject.transform:GetComponent("CanvasGroup"), 0, 0.3)
            self.RoomPanel:SetActive(false)
            self.CurrentRoomObject:SetActive(false)
        end
    )
    table.insert(self.AllCoroutine, co)
end

function HallPanel.Callback500(name, data)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg)), funname = self.EnterError})
        return
    end
    Player.gold=data.integral
    Player.Voucher=data.voucherInt
    Player.Lv = data.nowExpGrade;
    Player.Exp = data.expGradeAllInt - data.nextGradeNeedInt;
    Player.NeedExp = data.expGradeAllInt;
    if Player.name ~= "" and Player.gold ~= -1 and Player.avater ~= 2 and not IsNil(self.PlayerGold) then
        if not IsNil(self.PlayerGold) then
        self.PlayerGold:GetComponent("Text").text = FormatGlod(Player.gold)
        end
    end
end


-----加载游戏列表逻辑-----

--刷新游戏列表
local isUpdateGameList=false
function HallPanel.UpdataLoadGameList()
    isUpdateGameList = true
    Gamelist = {}
    for i=0,table.getCount(self.GamelistInitData) - 1 do
        Gamelist[i]={}
        for _,v in pairs(self.GamelistInitData[i]) do
            table.insert(Gamelist[i],v)
        end
    end

    self.LoadGameList()
    --刷新平台分类
    if self.PlatformSave["pid"]~=nil then
        self.PlatformScreening(self.PlatformSave["pid"],self.PlatformSave["cid"])
    end


end


function HallPanel.LoadGameList()
    if(Game.GameList~=nil) then
        self.DicImgClass = {}
        for _,v in pairs(self.GameClassToggles)  do
            v:SetActive(false)
        end

        for type_k , type_v in pairs(Game.GameList) do
            local classKey = tonumber(type_v.classKey)
            self.DicImgClass[type_v.imgClass] = classKey
            --添加游戏分类
            if self.GameClassToggles[classKey]==nil then
               self.AddGameClass(type_v.titleStr,classKey,type_v.imgClass,type_v.iconId)
            end

            --分类排序
            --print("=========type="..type_v.classKey..",cnt = "..table.getCount(type_v.containGameList))
            self.GameClassToggles[classKey].transform:SetAsLastSibling()
            self.GameClassToggles[classKey]:SetActive(true)

            --游戏加工
            self.PlatformHot[classKey]={}
            for game_k,game_v in pairs(type_v.containGameList) do
                --添加平台热门
                if game_v.isHostState then
                    table.insert(self.PlatformHot[classKey],game_v.gameIndex)
                end
                --print("=====classKey="..classKey..",名字："..game_v.gameIndex)
                if not table.contains(Gamelist[classKey],game_v.gameIndex) then
                    self.AddLoadGame(game_v.gameIndex, classKey, type_v.imgClass, game_v.iconUrl)
                else
                    local obj = self.GamePanel[classKey].transform:Find(game_v.gameIndex)
                    if obj~=nil then
                        obj.transform:SetAsLastSibling()
                        obj.gameObject:SetActive(true)
                    else
                        self.AddLoadGame(game_v.gameIndex, classKey, type_v.imgClass, game_v.iconUrl)
                    end
                end
            end
            self.HiddenGameIcon(classKey,type_v.imgClass)
            
        end
        isUpdateGameList = false
    end
end


--增加游戏分类
function HallPanel.AddGameClass(_className,_classKey,imgClass,_iconUrl)
    local classObj = transform:Find("Panel/GameOptions_ScrollView/Viewport/Content/GameTypeToggle_".._classKey)
    if classObj~=nil then
        return
    end
    classObj = newObject(self.GameTypeToggleItem)
    classObj.transform:SetParent(transform:Find("Panel/GameOptions_ScrollView/Viewport/Content"))
    classObj.transform.localScale = Vector3.one;
    classObj.name = "GameTypeToggle_".._classKey
    classObj.transform:Find("Background/Icon/Label"):GetComponent("Text").text = _className
    --SetSpriteByUrl(_iconUrl,classObj.transform:Find("Background/Icon"))
    self.GameClassToggles[_classKey] = classObj
    
    local gameScrollObj = newObject(self.GameScrollViewItem)
    gameScrollObj.transform:SetParent(transform:Find("Panel/GameList"))
    gameScrollObj.transform.localScale = Vector3.one;
    gameScrollObj.name = "GameScrollView_".._classKey
    gameScrollObj:SetActive(true)
    
    local content = newObject(self.GetGamePanelByimgClass(imgClass))
    content.transofrm:SetParent(gameScrollObj.transform:Find("Viewport/Content"))
    content.transform.localScale = Vector3.one;
    self.GamePanel[_classKey] = content

    self.LuaBehaviour:RemoveClick(classObj)
    self.LuaBehaviour:AddValueChanged(classObj:GetComponent("Toggle"),function(obj,value)
        contentObj:SetActive(value)
    end)
end

--获取要复制的游戏容器，并清理
function HallPanel.GetGamePanelByimgClass(imgClass)
    local content = nil 
    
    local calss = self.DicImgClass[imgClass]

    if calss~=nil then
        local content = self.GamePanel[calss].transform
    end

    return content.gameObject
end

--增加服务器游戏到本地配置imgClass = 0，3，6普通；1真人； 2捕鱼; 3扑克; 4彩票; 5体彩； 6老虎机
function HallPanel.AddLoadGame(gamename,gameclass,imgClass,iconUrl)
    if Gamelist[gameclass] == nil then
        Gamelist[gameclass] = { };
    end

    local tfContent = self.GamePanel[gameclass].transform
    local goChild = tfContent:Find(gamename)
    if goChild==nil then
        goChild = newObject(tfContent:Find("GameItem").gameObject)
        goChild.transform:SetParent(tfContent);
        goChild.transform.localScale = Vector3.one;
        goChild.name = gamename
    end

     if isUpdateGameList then
        goChild.transform:SetAsLastSibling()
        goChild.gameObject:SetActive(true)
     end

    if imgClass==1 then--真人
        goChild.gameObject:SetActive(true)
        goChild= goChild.transform:GetChild(0).gameObject
        goChild.name = gamename
        self.LuaBehaviour:RemoveClick(goChild)
        self.LuaBehaviour:AddClick(goChild, self.OnGameListClick)
    else
        local NameText = goChild.transform:Find("Name_Text")
        if NameText==nil then
            NameText = goChild.transform:Find("Mask_Image/Name_Text")
        end
        UpdateLanguageByObj(NameText,gamename)
        --热门优先下载icon
        if table.contains(self.PlatformHot[gameclass],gamename) then
            self.LoadSpriteByUrl2(iconUrl,goChild,gamename)
        else
            self.SetGameIcon(iconUrl,gamename,goChild)
        end
        self.LuaBehaviour:RemoveClick(goChild.gameObject)
        self.LuaBehaviour:AddClick(goChild.gameObject, self.OnGameListClick)
    end
    

    if not table.contains(Gamelist[gameclass],gamename) then
        table.insert(Gamelist[gameclass],gamename)
    end

    GameListInfo[gamename]={
        Url="H5Game",
		Index = "H5Game";
		Name=gamename;
    }

end

 --隐藏多余图标
 function HallPanel.HiddenGameIcon(classKey,imgClass)
    local childCnt = self.GamePanel[classKey].transform.childCount
    if childCnt<2 then
        return
    end
    
    for i=1,childCnt-1 do
        local go = self.GamePanel[classKey].transform:GetChild(i)
        if go~=nil and not table.contains(Gamelist[classKey],go.name)  then
            go.gameObject:SetActive(false)
        end
    end
end

--设置游戏图标
function HallPanel.SetGameIcon(iconUrl,gamename,gameObj)
    if iconUrl==nil and gameObj~=nil then
        local GameIconxx = self.transform:Find("Panel/GameList/GameIconxx")
        gameObj:GetComponent("Image").sprite = GameIconxx.transform:Find(gamename):GetComponent("Image").sprite
    elseif iconUrl~=nil and gameObj~=nil then
        if self.DownloadGameIcon[gamename] == nil then
             self.SetSpriteByUrl(iconUrl,gameObj,gamename)
        else
            gameObj:GetComponent("Image").sprite = self.DownloadGameIcon[gamename]
        end
    end
end

--分类里游戏平台筛选
function HallPanel.PlatformScreening(pid,classid)
    if pid==nil then
        return
    end
    --print("===pid="..pid..",classid="..classid)
    self.PlatformSave["pid"] = pid
    self.PlatformSave["cid"] = classid

    --影藏所有
    self.GamePanel[classid].gameObject:SetActive(false)
    for k,v in pairs(Gamelist[classid])  do
        local obj = self.GamePanel[classid].transform:Find(v)
        if obj~=nil then
            obj.gameObject:SetActive(false)
        end
    end

    if pid=="all" then
        for k,v in pairs(Gamelist[classid]) do
            local obj = self.GamePanel[classid].transform:Find(v)
            if obj~=nil then
                obj.gameObject:SetActive(true)
            end
        end
    elseif pid=="hot" and self.PlatformHot[classid]~=nil then
        for k,v in pairs(self.PlatformHot[classid]) do
            local obj = self.GamePanel[classid].transform:Find(v)
            if obj~=nil then
                obj.gameObject:SetActive(true)
            end
        end
    else
        for k,v in pairs(Gamelist[classid]) do
            if Split(v,"_")[1] == tostring(pid) then
                local obj = self.GamePanel[classid].transform:Find(v)
                if obj~=nil then
                    obj.gameObject:SetActive(true)
                end
            end
        end
    end

    coroutine.start(function()
        Yield(0)
        self.GamePanel[classid].gameObject:SetActive(true)
    end)
    
end

--获取网络图片
local isSpriteUrl=false;
function HallPanel.SetSpriteByUrl(url,obj,gamename)
    if self.ListSpriteUrl==nil then
        self.ListSpriteUrl={}
        self.ListSpriteObj={}
        self.ListSpriteName={}
    end

    table.insert(self.ListSpriteUrl,url)
    table.insert(self.ListSpriteObj,obj)
    table.insert(self.ListSpriteName,gamename)

    self.LoadSpriteByUrl()
end

function HallPanel.LoadSpriteByUrl()
    if isSpriteUrl then 
        return 
    end
    isSpriteUrl = true
    
    coroutine.start(
        function()
            while(#self.ListSpriteUrl~=0) do
                local www = WWW(self.ListSpriteUrl[1])
                coroutine.www(www)
                if www.error ~= "" and www.error ~= nil then
                    return
                end
                local texture = www.texture
                self.ListSpriteObj[1]:GetComponent("Image").sprite = UnityEngine.Sprite.Create(texture, UnityEngine.Rect(0, 0, texture.width, texture.height), Vector2(0, 0))
                self.DownloadGameIcon[self.ListSpriteName[1]] = self.ListSpriteObj[1]:GetComponent("Image").sprite
                table.remove(self.ListSpriteUrl,1)
                table.remove(self.ListSpriteObj,1)
                table.remove(self.ListSpriteName,1)
            end
            isSpriteUrl = false
        end)
end
--优先直接下载
function HallPanel.LoadSpriteByUrl2(url,obj,gamename)
    coroutine.start(
        function()
            local www = WWW(url)
            coroutine.www(www)
            if www.error ~= "" and www.error ~= nil then
                return
            end
            local texture = www.texture
            obj:GetComponent("Image").sprite = UnityEngine.Sprite.Create(texture, UnityEngine.Rect(0, 0, texture.width, texture.height), Vector2(0, 0))
            self.DownloadGameIcon[gamename] = obj:GetComponent("Image").sprite
         
        end)
end
-----加载游戏列表逻辑END-----


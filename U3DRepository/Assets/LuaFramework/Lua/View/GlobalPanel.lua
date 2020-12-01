GlobalPanel = {
    transform,
    gameObject,
    LuaBehaviour,
    AlphaTime = 0.5, --渐变时间系数单位为秒
    NowPos = 0,
    Speed = 100,
    MessageNum = 0,
    AllMessage = {},
    AllCoroutine = {},
    Index=1;
}
local self = GlobalPanel
--启动事件--
function GlobalPanel.Awake(obj)
    self.gameObject = obj
    self.transform = obj.transform
    self.LuaBehaviour = self.gameObject:GetComponent("LuaBehaviour")
    self.FindComponent()
    self.AddOnClickEvent()
end

function GlobalPanel.Start()
end

--激活事件--
function GlobalPanel.OnEnable(obj)
    self.BulletinText.transform:GetComponent("Text").text = ""
    self.BulletinText:GetComponent("RectTransform").anchoredPosition3D = Vector3.New(0, 0, 0)
    self.NowPos = 0
    if IsInGame == "Hall" then
        local zoom=(Screen.width / Screen.height);
        if  zoom > 1.8 then
            --self.Grid.localPosition = Vector3.New(215, 350, 0)
        else
            --self.Grid.localPosition = Vector3.New(215, 360, 0)
            --self.Grid:GetComponent("RectTransform").sizeDelta =Vector2(1577.2,94);
            --self.Bulletin:GetComponent("RectTransform").sizeDelta =Vector2(1577.2,94);
        end
    elseif IsInGame == "Game" then
        self.Grid.localPosition = Vector3.New(0, 338, 0)
    end
    local co = coroutine.start(self.ShowPanelAnim)
    table.insert(self.AllCoroutine, co)
end

function GlobalPanel.SetPos()
    if self.Grid == nil then
        return
    end
    if IsInGame == "Hall" then
        if (Screen.width / Screen.height) > 1.8 then
            self.Grid.localPosition = Vector3.New(215, 350, 0)
        else
            self.Grid.localPosition = Vector3.New(215, 360, 0)
            self.Grid:GetComponent("RectTransform").sizeDelta =Vector2(1577.2,94);
            self.Bulletin:GetComponent("RectTransform").sizeDelta =Vector2(1577.2,94);
        end
    elseif IsInGame == "Game" then
        self.Grid.localPosition = Vector3.New(0, 338, 0)
    end
end

function GlobalPanel.ShowPanelAnim()
    LuaHelper.SetAlpha(self.Panel:GetComponent("CanvasGroup"), 0)
    LuaHelper.DOTweenAlpha(self.Panel:GetComponent("CanvasGroup"), 1, self.AlphaTime)
end

function GlobalPanel.HidePanelAnim()
    LuaHelper.DOTweenAlpha(self.Panel:GetComponent("CanvasGroup"), 0, self.AlphaTime)
    coroutine.wait(self.AlphaTime)
    CloseView("Global")
end
--message LineNoticeOne{
    --required string msgid=1;
    --required string notice=2;                      //内容
    --required int64 closeTime=3;                    //关闭时间  -1永久不关闭
  --}
  
--初始化面板--
function GlobalPanel.Init(data)
        self.AllMessage={}
        for k, v in pairs(data) do
            table.insert(self.AllMessage, v);
        end --超过10个存起来等待子弹到头
        if #data>0 and #self.AllMessage>0 and self.BulletinText.transform:GetComponent("Text").text=="" then
            self.BulletinText.transform:GetComponent("Text").text =self.AllMessage[self.Index].notice
            self.Index = self.Index + 1;    
        end
end
function GlobalPanel.FindComponent()
    --公告文本
    self.Panel = self.transform:Find("Panel").gameObject
    self.Grid = self.transform:Find("Panel/Grid")
    self.Bulletin = self.transform:Find("Panel/Grid/Bulletin").gameObject
    self.BulletinText = self.transform:Find("Panel/Grid/Bulletin/BulletinText").gameObject
end
--绑定按键事件
function GlobalPanel.AddOnClickEvent()
end

function GlobalPanel.Update()
    if(self.BulletinText:GetComponent("RectTransform").anchoredPosition3D.x * -1) <self.Bulletin:GetComponent("RectTransform").sizeDelta.x + self.BulletinText:GetComponent("RectTransform").sizeDelta.x then
        self.NowPos = self.NowPos + Time.deltaTime * self.Speed
        self.BulletinText:GetComponent("RectTransform").anchoredPosition3D = Vector3.New(self.NowPos * -1, 0, 0)
    else
        --self.BulletinText.transform:GetComponent("Text").text = ""
        self.BulletinText:GetComponent("RectTransform").anchoredPosition3D = Vector3.New(0, 0, 0)
        self.NowPos = 0
            while #self.AllMessage>0 do
                if self.Index>#self.AllMessage then
                    self.Index=1; 
                end
              if  self.AllMessage[self.Index]~=nil then
                 if self.AllMessage[self.Index].closeTime==-1 or self.AllMessage[self.Index].closeTime>os.time()  then         
                     --self.BulletinText.transform:GetComponent("Text").text = self.BulletinText.transform:GetComponent("Text").text .. "  " .. self.AllMessage[self.Index].notice
                     self.BulletinText.transform:GetComponent("Text").text =self.AllMessage[self.Index].notice
                     self.Index = self.Index + 1;    
                    return
                else
                    local message=self.AllCoroutine[self.Index]
                    if message~=nil then
                    table.remove(GolbalResource.lineNoticeList,message)
                    end
                    table.remove(self.AllMessage, self.Index)
                end
             end
           end
        end
        if #self.AllMessage <= 0 then
             CloseView("Global")
        end
end

function GlobalPanel.OnDestroy()
end
function GlobalPanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
end

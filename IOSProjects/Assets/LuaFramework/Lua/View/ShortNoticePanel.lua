ShortNoticePanel = {
    transform;
    gameObject;
    LuaBehaviour;
    NoButtonNoticePool = {};
    HidePanelTime = -1;
    NoButtonNoticePrefab = nil;
    LoadNoticePrefabEnd = false;
    AllCoroutine = {};
};

local self = ShortNoticePanel;
local NoticeName = {
        "NoButtonNotice",
}

local text;
function ShortNoticePanel.Awake(obj)
    self.LoadNoticePrefabEnd = false;
    self.gameObject = obj;
    self.transform = self.gameObject.transform;
    self.LuaBehaviour = self.gameObject:GetComponent('LuaBehaviour');
    
    self.FindComponent();
    self.AddOnClickEvent();

    resMgr:LoadPrefab("ShortNotice",NoticeName,self.LoadNoticeEnd);
end
function ShortNoticePanel.LoadNoticeEnd(obj)
    --log(obj[0].gameObject.name.."------------------------------------------------------------");
    self.NoButtonNoticePrefab = obj[0].gameObject;

    self.LoadNoticePrefabEnd = true;
    GameCallBack.CallFun("NewShortNotice");
end

function ShortNoticePanel.Start() 
end

--查找组件
function ShortNoticePanel.FindComponent()
    self.NoButton = self.transform:Find('NoButton').gameObject;
end

function ShortNoticePanel.AddOnClickEvent()
end

function ShortNoticePanel.Init(data)
    if #self.NoButtonNoticePool >= 1 then
        local Notice = self.NoButtonNoticePool[1];
        table.remove(self.NoButtonNoticePool,1);
        Notice.transform:Find("NoticeText"):GetComponent("Text").text = tostring(data.text);
        Notice.gameObject:SetActive(true);

        self.HidePanelTime = 1;
     local co=   coroutine.start(function()
            coroutine.wait(1);
            self.HideNoButtonNotice(Notice);
        end);
        table.insert(self.AllCoroutine, co);
    else
        if self.LoadNoticePrefabEnd then
            self.NewNotice(data.text);
        else
            GameCallBack.AddCallBack("NewShortNotice",self.NewNotice,data.text);
        end
    end
end

function ShortNoticePanel.Update()
    if self.HidePanelTime > 0 then
        self.HidePanelTime = self.HidePanelTime - Time.deltaTime;
        if self.HidePanelTime <= 0 then
            self.HidePanelTime = -1;
            DestroyView("ShortNotice");
        end
    end
end

function ShortNoticePanel.NewNotice(text)
    local Notice = newObject(self.NoButtonNoticePrefab);
    Notice.transform:Find("NoticeText"):GetComponent("Text").text = tostring(text);
    Notice.transform:SetParent(self.NoButton.transform);
    Notice.transform.localPosition = Vector3.New(0,0,0);
    Notice.transform.localScale = Vector3.New(1,1,1);
    Notice.gameObject:SetActive(true);
    self.HidePanelTime = 1;
    local co=   coroutine.start(function()
        coroutine.wait(1);
        self.HideNoButtonNotice(Notice);
    end);
    table.insert(self.AllCoroutine, co);
end

function ShortNoticePanel.HideNoButtonNotice(obj)
    if IsNil(obj) then return end;
    obj.gameObject:SetActive(false);
    local co= table.insert(self.NoButtonNoticePool,obj);
    table.insert(self.AllCoroutine, co);
end
function  ShortNoticePanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
end
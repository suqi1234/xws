NoticePanel = {
    transform;
    gameObject;
    LuaBehaviour;
    AlphaTime = 0.1;
    AllCoroutine = {};
    IsError=true;
};

local self = NoticePanel;

local text;
local funname;
local funData;

function NoticePanel.Awake(obj)
    self.gameObject = obj;
    self.transform = self.gameObject.transform;
    self.LuaBehaviour = self.gameObject:GetComponent('LuaBehaviour');
    
    self.FindComponent();
    self.AddOnClickEvent();
end
function NoticePanel.Start()
    
end
--查找组件
function NoticePanel.FindComponent()
    self.OkButton = self.transform:Find("ButtonNotice/PanelBg/ButtonList/OkButton").gameObject;
    self.CancelButton = self.transform:Find("ButtonNotice/PanelBg/ButtonList/CancelButton").gameObject;
    self.PromptText = self.transform:Find("ButtonNotice/PanelBg/PromptText").gameObject;
    self.Close_Button= self.transform:Find("ButtonNotice/PanelBg/Close_Button").gameObject;
    self.ButtonNotice = self.transform:Find("ButtonNotice").gameObject;
    self.PanelBg = self.transform:Find("ButtonNotice/PanelBg").gameObject;
    self.FalseIcon= self.transform:Find("ButtonNotice/PanelBg/FalseIcon").gameObject;
    self.TrueIcon= self.transform:Find("ButtonNotice/PanelBg/TrueIcon").gameObject;
end

function NoticePanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self.Close_Button,self.OnClickOk); -- 确定按钮
    self.LuaBehaviour:AddClick(self.OkButton,self.OnClickOk); -- 确定按钮
    self.LuaBehaviour:AddClick(self.CancelButton,self.OnClickCancel); -- 确定按钮
end


--激活事件--
function NoticePanel.OnEnable(obj)
   local co= coroutine.start(self.ShowPanelAnim);
   table.insert(self.AllCoroutine, co);
end

function NoticePanel.ShowPanelAnim()
  LuaHelper.SetAlpha(self.ButtonNotice.gameObject:GetComponent("CanvasGroup"),0);
   self.PanelBg.transform.localScale = Vector3.zero;
   LuaHelper.DOTweenAlpha(self.ButtonNotice.gameObject:GetComponent("CanvasGroup"),1,self.AlphaTime);
    coroutine.wait(self.AlphaTime);
    try{
        main = function()
            self.PanelBg.transform:DOScale(1,0.1);
        end,
        catch = function()
            panelMgr:CreatePanel("View/Hall", nil)
        end
    }
end

function NoticePanel.HidePanelAnim()
   self.PanelBg.transform:DOScale(0,0.1);
   LuaHelper.DOTweenAlpha(self.ButtonNotice.gameObject:GetComponent("CanvasGroup"),0,self.AlphaTime);
   coroutine.wait(self.AlphaTime);
    DestroyView("Notice");
end

function NoticePanel.Init(data)
    text = data.text;-- 文本内容(这一条必须要，其他可以不要)
    if data.IsError~=nil then
    self.IsError= data.IsError;
    end
    funname = data.funname;-- 传递参数
    funData = data.funData;
    if data.IsShowCancel then
        self.CancelButton.gameObject:SetActive(true);
    else
        self.CancelButton.gameObject:SetActive(false);
        -- self.OkButton:GetComponent("Image").sprite = self.OkButton.transform:Find("png1").gameObject:GetComponent("Image").sprite
        -- self.OkButton.transform:Find("Text").gameObject:SetActive(false)
    end
    self.PromptText:GetComponent("Text").text = tostring(text);
    if data.size then
        self.PromptText:GetComponent("Text").fontSize = data.size
    end
    if not self.IsError then
        self.FalseIcon:SetActive(false);
        self.TrueIcon:SetActive(true);
    end
end

function NoticePanel.Update()
end

function NoticePanel.OnClickOk(obj)
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip;
    soundMgr:PlayX(music);
    log("OnClick CloseView------------------------------------------------------------------------------");
    CloseView("Notice");
    local objName
    if obj == nil then
        objName = "OkButton"
    else
        objName = obj.name
    end
    if objName == "OkButton" or objName == "Close_Button" then
        if funname ~= nil then
            if funData ~= nil then
                try{
                    main = function()
                        funname(funData);
                        -- 回调的方法接口
                    end,
                    catch = function()
                        panelMgr:CreatePanel("View/Hall", nil)
                    end
                }
            else
                log("OnClickOkButton------------------------------------------------------------------------------");
                try{
                    main = function()
                        funname(funData);
                        -- 回调的方法接口
                    end,
                    catch = function()
                        panelMgr:CreatePanel("View/Hall", nil)
                    end
                }
                -- 回调的方法接口		
            end
        end
    end
  local co=  coroutine.start(self.HidePanelAnim);
  table.insert(self.AllCoroutine, co);
end

function NoticePanel.OnClickCancel(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip;
    soundMgr:PlayX(music);
    funname = nil;
    funData = nil
 local co=   coroutine.start(self.HidePanelAnim);
 table.insert(self.AllCoroutine, co);
end

function  NoticePanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
end
--[[
    luaide  模板位置位于 Template/FunTemplate/NewFileTemplate.lua 其中 Template 为配置路径 与luaide.luaTemplatesDir
    luaide.luaTemplatesDir 配置 https://www.showdoc.cc/web/#/luaide?page_id=713062580213505
    author:{author}
    time:2020-07-06 11:33:08
]]
SendToEmailPanel = {
    transform;
    gameObject;
    LuaBehaviour;
    AlphaTime = 0.1;
    AllCoroutine = {};
};

local self = SendToEmailPanel;


function SendToEmailPanel.Awake(obj)
    self.gameObject = obj;
    self.transform = self.gameObject.transform;
    self.LuaBehaviour = self.gameObject:GetComponent('LuaBehaviour');
    
    self.FindComponent();
    self.AddOnClickEvent();
end
function SendToEmailPanel.Start()
    
end
--查找组件
function SendToEmailPanel.FindComponent()
    self.BG= self.transform:Find("Panel/Bg").gameObject;
    self.CloseButton= self.transform:Find("Panel/PanelBg/Close_Button").gameObject;--关闭按钮或
end

function SendToEmailPanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self.BG,self.OnClickOk); -- 确定按钮
    self.LuaBehaviour:AddClick(self.CloseButton,self.OnClickOk); -- 确定按钮
end


--激活事件--
function SendToEmailPanel.OnEnable(obj)
  -- local co= coroutine.start(self.ShowPanelAnim);
   --table.insert(self.AllCoroutine, co);
end

function SendToEmailPanel.ShowPanelAnim()
  
end

function SendToEmailPanel.HidePanelAnim()
    DestroyView("SendToEmail");
end

function SendToEmailPanel.Init(data)
    
end

function SendToEmailPanel.Update()
end

function SendToEmailPanel.OnClickOk(obj)
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip;
    soundMgr:PlayX(music);
    if obj.name == "Close_Button" or obj.name == "Bg" then --关闭按钮或
        self.HidePanelAnim()
       end
end

function  SendToEmailPanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
end
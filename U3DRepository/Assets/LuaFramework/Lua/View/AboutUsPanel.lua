--[[
    luaide  模板位置位于 Template/FunTemplate/NewFileTemplate.lua 其中 Template 为配置路径 与luaide.luaTemplatesDir
    luaide.luaTemplatesDir 配置 https://www.showdoc.cc/web/#/luaide?page_id=713062580213505
    author:{author}
    time:2020-07-06 11:33:08
]]


AboutUsPanel = {
    transform;
    gameObject;
    LuaBehaviour;
    AlphaTime = 0.1;
    AllCoroutine = {};
};

local self = AboutUsPanel;

function AboutUsPanel.Awake(obj)
    self.gameObject = obj;
    self.transform = self.gameObject.transform;
    self.LuaBehaviour = self.gameObject:GetComponent('LuaBehaviour');
    
    self.FindComponent();
    self.AddOnClickEvent();
    ShowObjectAnim(self.transform:Find("Panel/PanelBg").gameObject)
end
function AboutUsPanel.Start()
    
end
--查找组件
function AboutUsPanel.FindComponent()
    self.BG= self.transform:Find("Panel/Bg").gameObject;
    self.CloseButton= self.transform:Find("Panel/PanelBg/Close_Button").gameObject;
end

function AboutUsPanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self.BG,self.OnClickOk); -- 确定按钮
    self.LuaBehaviour:AddClick(self.CloseButton,self.OnClickOk); -- 确定按钮
end


--激活事件--
function AboutUsPanel.OnEnable(obj)
  local co= coroutine.start(self.ShowPanelAnim);
   table.insert(self.AllCoroutine, co);
end

function AboutUsPanel.ShowPanelAnim()
  
end

function AboutUsPanel.HidePanelAnim()
    DestroyView("AboutUs");
end

function AboutUsPanel.Init(data)
    
end

function AboutUsPanel.Update()
end

function AboutUsPanel.OnClickOk(obj)
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip;
    soundMgr:PlayX(music);
    if obj.name == "Close_Button" or obj.name == "Bg" then --关闭按钮或
        self.HidePanelAnim()
       end
end

function  AboutUsPanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
end
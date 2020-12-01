--[[
    luaide  模板位置位于 Template/FunTemplate/NewFileTemplate.lua 其中 Template 为配置路径 与luaide.luaTemplatesDir
    luaide.luaTemplatesDir 配置 https://www.showdoc.cc/web/#/luaide?page_id=713062580213505
    author:{author}
    time:2020-07-06 11:33:08
]]



SelectLanguagePanel = {
    transform;
    gameObject;
    LuaBehaviour;
    AlphaTime = 0.1;
    AllCoroutine = {};
    LastSelect="";
    currentSelectl;
};

local self = SelectLanguagePanel;


function SelectLanguagePanel.Awake(obj)
    self.gameObject = obj;
    self.transform = self.gameObject.transform;
    self.LuaBehaviour = self.gameObject:GetComponent('LuaBehaviour');
    
    self.FindComponent();
    self.AddOnClickEvent();
    ShowObjectAnim(self.transform:Find("Panel/PanelBg").gameObject)
end
function SelectLanguagePanel.Start()
    if (Screen.width+0.1)/Screen.height <1.8 then
    self.PanelBg.transform.localPosition = Vector3(-231.88,47.5,0);
    end
   
    if Util.HasKey("CurrentSelectLanguage") then
        local currentSelect=  Util.GetString("CurrentSelectLanguage");
       if currentSelect=="English" then
        self.SelectLanguageDropdown.value=1
       elseif currentSelect=="Chinese" then
        self.SelectLanguageDropdown.value=2
       else
        self.SelectLanguageDropdown.value=0
       end 
    end
end
--查找组件
function SelectLanguagePanel.FindComponent()
    self.BG= self.transform:Find("Panel/Bg").gameObject;
    self.CloseButton= self.transform:Find("Panel/PanelBg/Close_Button").gameObject;--关闭按钮或
    self.OkButton= self.transform:Find("Panel/PanelBg/SelectLanguageBG_Image/OK_Button").gameObject;--关闭按钮或
    self.PanelBg= self.transform:Find("Panel/PanelBg").gameObject;--关闭按钮或
    self.SelectLanguage= self.transform:Find("Panel/PanelBg/SelectLanguageBG_Image/SelectLanguage_Dropdown/Label").gameObject:GetComponent('Text');
    self.SelectLanguageDropdown= self.transform:Find("Panel/PanelBg/SelectLanguageBG_Image/SelectLanguage_Dropdown").gameObject:GetComponent('Dropdown');--关闭按钮或
end

function SelectLanguagePanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self.BG,self.OnClickOk); -- 确定按钮
    self.LuaBehaviour:AddClick(self.CloseButton,self.OnClickOk); -- 确定按钮
    self.LuaBehaviour:AddClick(self.OkButton,self.OnClickOk); -- 确定按钮
end


--激活事件--
function SelectLanguagePanel.OnEnable(obj)
  -- local co= coroutine.start(self.ShowPanelAnim);
   --table.insert(self.AllCoroutine, co);
end

function SelectLanguagePanel.ShowPanelAnim()
  
end

function SelectLanguagePanel.HidePanelAnim()
    DestroyView("SelectLanguage");
end

function SelectLanguagePanel.Init(data)
    
end

function SelectLanguagePanel.Update()
end

function SelectLanguagePanel.OnClickOk(obj)
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip;
    soundMgr:PlayX(music);
    if obj.name == "Close_Button" or obj.name == "Bg" then --关闭按钮或
        self.HidePanelAnim()
        elseif obj.name=="OK_Button" then
        self.SetingLanguage()
        self.HidePanelAnim()
       end
end

function  SelectLanguagePanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
end

function SelectLanguagePanel.SetingLanguage()
       self.currentSelect=self.SelectLanguage.text;
       if self.currentSelect=="English" then
        self.currentSelect="English" 
       elseif self.currentSelect=="中文" then
        self.currentSelect="Chinese" 
       else
        self.currentSelect="Indonesia" 
       end 
       if Util.HasKey("CurrentSelectLanguage") then
          local SaveData=Util.GetString("CurrentSelectLanguage")
          if SaveData==self.currentSelect then
           return
         end
       end
       self.Send19(self.currentSelect)
end


function SelectLanguagePanel.Send19(lk)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        languageKey = lk
    }
    local code = protobuf.encode("tutorial.Req19", ReqLoad)
    networkMgr:SendMessageBf(19, code)
    Event:Add("eventName19", self.Callback19)
end

function SelectLanguagePanel.Callback19(name, data)
    Event:Remove("eventName19", self.Callback19)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    Language.LanguageService.Instance.Language = Language.LanguageInfo(self.currentSelect); 
    Util.SetString("CurrentSelectLanguage", self.currentSelect)
    MorePanel.UpdateIcon();
end

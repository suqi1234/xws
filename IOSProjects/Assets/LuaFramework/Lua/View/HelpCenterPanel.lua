
--[[
    luaide  模板位置位于 Template/FunTemplate/NewFileTemplate.lua 其中 Template 为配置路径 与luaide.luaTemplatesDir
    luaide.luaTemplatesDir 配置 https://www.showdoc.cc/web/#/luaide?page_id=713062580213505
    author:{author}
    time:2020-07-06 11:33:08
]]

HelpCenterPanel = {
    gameObject = obj;
    transform;
    LuaBehaviour;
    AlphaTime = 0.1;
    AllCoroutine = {};
};

local self = HelpCenterPanel;


function HelpCenterPanel.Awake(obj)
    self.gameObject = obj;
    self.transform = self.gameObject.transform;
    self.LuaBehaviour = self.gameObject:GetComponent('LuaBehaviour');
    
    self.FindComponent();
    self.AddOnClickEvent();

    ShowObjectAnim(self.transform:Find("Panel/PanelBg").gameObject) 
end
function HelpCenterPanel.Start()
   for i=1,10 do
       self.GenerateItem("Aku adalah pimpinan utama dari masaiah ini","Saya adalah rincian dari pertanyaan,bagaimana anda melihat aksi gelombang ini?"
    ,"14645644444444444444444444444444444444444444444444444444444444444444425424674654DSCFAgyhdfxatyFSXTYAfxyzxghzfghxFghfxghzfxhgjfzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzghxfATYfsaXYZTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYFXhsgfaTYSFATYfsyAUSUYAGCUYSGxGFGAuygsgaYUSGAUGSYUGACYU14645644444444444444444444444444444444444444444444444444444444444444425424674654DSCFAgyhdfxatyFSXTYAfxyzxghzfghxFghfxghzfxhgjfzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzghxfATYfsaXYZTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYFXhsgfaTYSFATYfsyAUSUYAGCUYSGxGFGAuygsgaYUSGAUGSYUGACYU14645644444444444444444444444444444444444444444444444444444444444444425424674654DSCFAgyhdfxatyFSXTYAfxyzxghzfghxFghfxghzfxhgjfzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzghxfATYfsaXYZTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYTYFXhsgfaTYSFATYfsyAUSUYAGCUYSGxGFGAuygsgaYUSGAUGSYUGACYU"
    );
   end
   LayoutRebuilder.ForceRebuildLayoutImmediate(self.Content);
end
function HelpCenterPanel.GenerateItem(TitleText,ShrinkageContent,ContentText)
    local Effect = newObject(self.HelpCenterItem)
    Effect.transform:SetParent(self.Content.transform)
    Effect.transform.localScale = Vector3(1, 1, 1)
    Effect.transform.localPosition = Vector3.New(0, 0, 0)
    self.LuaBehaviour:AddValueChanged(Effect.transform:Find("Show/Toggle"):GetComponent("Toggle"),self.ToggleClick)  --开关
    Effect.transform:Find("Show/ItemContent/Name_Text"):GetComponent("Text").text=TitleText;  --标题文字
    Effect.transform:Find("Show/ItemContent/ShrinkageContent_Text"):GetComponent("Text").text=ShrinkageContent;--缩率的内容
    Effect.transform:Find("Content_Text"):GetComponent("Text").text=ContentText;--内容
    Effect:SetActive(true);
end
--查找组件
function HelpCenterPanel.FindComponent()
    self.BG= self.transform:Find("Panel/Bg").gameObject;
    self.CloseButton= self.transform:Find("Panel/PanelBg/Close_Button").gameObject;--关闭按钮或
    self.Content= self.transform:Find("Panel/PanelBg/ScrollView/Viewport/Content").gameObject:GetComponent('RectTransform');--关闭按钮或
    self.HelpCenterItem= self.transform:Find("Panel/HelpCenterItem").gameObject;--帮助预制件
end

function HelpCenterPanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self.BG,self.OnClickOk); -- 确定按钮
    self.LuaBehaviour:AddClick(self.CloseButton,self.OnClickOk); -- 确定按钮
end


--激活事件--
function HelpCenterPanel.OnEnable(obj)
  -- local co= coroutine.start(self.ShowPanelAnim);
   --table.insert(self.AllCoroutine, co);
end

function HelpCenterPanel.ShowPanelAnim()
  
end

function HelpCenterPanel.HidePanelAnim()
    DestroyView("HelpCenter");
end

function HelpCenterPanel.Init(data)
    
end

function HelpCenterPanel.Update()
end
function HelpCenterPanel.ToggleClick(go,value)
     local root= go.transform.parent.parent;
     root:Find("Show/ItemContent/ShrinkageContent_Text").gameObject:SetActive(not value);
     root:Find("Content_Text"):GetComponent("Text").gameObject:SetActive(value);
     go.transform:Find("Background").gameObject:SetActive(not value)
     LayoutRebuilder.ForceRebuildLayoutImmediate(self.Content);
end
function HelpCenterPanel.OnClickOk(obj)
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip;
    soundMgr:PlayX(music);
   if obj.name == "Close_Button" or obj.name == "Bg" then --关闭按钮或
    self.HidePanelAnim()
   end
end

function  HelpCenterPanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
end
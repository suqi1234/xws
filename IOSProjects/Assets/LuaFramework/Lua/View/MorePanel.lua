--[[
    luaide  模板位置位于 Template/FunTemplate/NewFileTemplate.lua 其中 Template 为配置路径 与luaide.luaTemplatesDir
    luaide.luaTemplatesDir 配置 https://www.showdoc.cc/web/#/luaide?page_id=713062580213505
    author:{author}
    time:2020-07-06 11:33:08
]]

MorePanel = {
    transform,
    gameObject,
    LuaBehaviour,
    AlphaTime = 0.1,
    AllCoroutine = {},
    Icon={}
}
local PrefabName = {
    "English",
    "Indonesia",
    "Chinese",
}
local self = MorePanel

function MorePanel.Awake(obj)
    self.gameObject = obj
    self.transform = self.gameObject.transform
    self.LuaBehaviour = self.gameObject:GetComponent("LuaBehaviour")
    self.FindComponent()
    self.AddOnClickEvent()
    resMgr:LoadPrefab("More", PrefabName, self.LoadPrefabEnd)
end
function MorePanel.Start()
    if (Screen.width + 0.1) / Screen.height < 1.8 then
        self.PanelBg.anchoredPosition3D = Vector3(-41.5, 0, 0)
    end
    self.InitMusic()
end
--查找组件
function MorePanel.FindComponent()
    self.BG = self.transform:Find("Panel/MoreBg").gameObject
    self.PanelBg = self.transform:Find("Panel/PanelBg").gameObject:GetComponent("RectTransform")
    self.CloseButton = self.transform:Find("Panel/PanelBg/OptionsRoot/MoreClose_Button").gameObject
    self.LoginButton = self.transform:Find("Panel/PanelBg/OptionsRoot/Login_Button").gameObject
    self.AccountSecurityButton = self.transform:Find("Panel/PanelBg/OptionsRoot/AccountSecurity_Button").gameObject --账号安全
    self.SelectLanguageButton = self.transform:Find("Panel/PanelBg/OptionsRoot/SelectLanguage_Button").gameObject --选择语言
    self.NationalEmblemImage = self.transform:Find("Panel/PanelBg/OptionsRoot/SelectLanguage_Button/NationalEmblem_Image").gameObject
    self.HelpCenterButton = self.transform:Find("Panel/PanelBg/OptionsRoot/HelpCenter_Button").gameObject --帮助中心
    self.AboutUsButton = self.transform:Find("Panel/PanelBg/OptionsRoot/AboutUs_Button").gameObject --关于我们
    self.MusicButton = self.transform:Find("Panel/PanelBg/OptionsRoot/MusicAndVoice/Music_Button").gameObject:GetComponent("Toggle") --音乐按钮
    self.VoiceButton = self.transform:Find("Panel/PanelBg/OptionsRoot/MusicAndVoice/Voice_Button").gameObject:GetComponent("Toggle") --音量按钮
end

function MorePanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self.SelectLanguageButton, self.OnClickOk) -- 确定按钮
    self.LuaBehaviour:AddClick(self.HelpCenterButton, self.OnClickOk) -- 确定按钮
    self.LuaBehaviour:AddClick(self.AboutUsButton, self.OnClickOk) -- 确定按钮
    self.LuaBehaviour:AddClick(self.BG, self.OnClickOk) -- 确定按钮
    self.LuaBehaviour:AddClick(self.CloseButton, self.OnClickOk) -- 确定按钮
    self.LuaBehaviour:AddClick(self.LoginButton, self.OnClickOk) -- 确定按钮
    self.LuaBehaviour:AddClick(self.AccountSecurityButton, self.OnClickTeman)
    self.LuaBehaviour:AddValueChanged(self.MusicButton,function (go,value)
         soundMgr:SoundOffBacksound(value and 1 or 0)
         Util.SetFloat(AppConst.AppPrefix .. "BackSound", value and 1 or 0)
    end)
    self.LuaBehaviour:AddValueChanged(self.VoiceButton,function (go,value)
        soundMgr:SetSoundEffectVolume(value and 1 or 0)
        Util.SetFloat(AppConst.AppPrefix .. "SoundEffect", value and 1 or 0)
    end)
end
function MorePanel.InitMusic()
    if Util.HasKey(AppConst.AppPrefix .. "BackSound") then
        local bg_value = Util.GetFloat(AppConst.AppPrefix .. "BackSound")
        self.MusicButton.isOn=bg_value==1
    end
    if Util.HasKey(AppConst.AppPrefix .. "SoundEffect") then
        local eff_value = Util.GetFloat(AppConst.AppPrefix .. "SoundEffect")
        self.VoiceButton.isOn=eff_value==1
    end
end
function MorePanel.OnClickTeman(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if Player.name == "" then
        panelMgr:CreatePanel("View/Login", nil)
        return;
    end
    self.HidePanelAnim()
    panelMgr:CreatePanel("View/PasswordSeting", nil)
end
--激活事件--
function MorePanel.OnEnable(obj)
    -- local co= coroutine.start(self.ShowPanelAnim);
    --table.insert(self.AllCoroutine, co);
    if Player.name ~= "" then
        self.CloseButton:SetActive(true)
        self.LoginButton:SetActive(false)
    end
end

function MorePanel.ShowPanelAnim()
end

function MorePanel.HidePanelAnim()
    --    LuaHelper.DOTweenAlpha(self.ButtonNotice.gameObject:GetComponent("CanvasGroup"),0,self.AlphaTime);
    --    coroutine.wait(self.AlphaTime);
    DestroyView("More")
end

function MorePanel.Init(data)
end

function MorePanel.Update()
end

function MorePanel.OnClickOk(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if obj.name == "AccountSecurity_Button" then --账号安全
    elseif obj.name == "SelectLanguage_Button" then --选择语言
        panelMgr:CreatePanel("View/SelectLanguage", nil)
    elseif obj.name == "HelpCenter_Button" then --帮助中心
        panelMgr:CreatePanel("View/HelpCenter", nil)
        self.HidePanelAnim()
    elseif obj.name == "AboutUs_Button" then --关于我们
        panelMgr:CreatePanel("View/AboutUs", nil)
        self.HidePanelAnim()
    elseif obj.name == "MoreClose_Button" then --关闭按钮或
        local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
        local ReqLoad = {}
        local code = protobuf.encode("tutorial.Req14", ReqLoad)
        networkMgr:SendMessageBf(14, code)
        self.HidePanelAnim()
    elseif obj.name == "MoreBg" then
        self.HidePanelAnim()
    elseif obj.name == "Login_Button" then
        self.HidePanelAnim()
        panelMgr:CreatePanel("View/Login", nil)
    elseif obj.name == "Music_Button" then --音乐按钮
    elseif obj.name == "Voice_Button" then --音量按钮
    end
end

function MorePanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
end
function MorePanel.LoadPrefabEnd(obj)
    for i = 0, #PrefabName - 1, 1 do
        if obj[i].gameObject.name == "English" or obj[i].gameObject.name == "Indonesia" or obj[i].gameObject.name == "Chinese" then
            self.Icon[obj[i].gameObject.name]=obj[i].gameObject;
        end
    end
    self.UpdateIcon();
end
function MorePanel.UpdateIcon()
    if Util.HasKey("CurrentSelectLanguage") then
        local currentSelect=  Util.GetString("CurrentSelectLanguage");
        self.NationalEmblemImage:GetComponent("Image").sprite=self.Icon[currentSelect]:GetComponent("SpriteRenderer").sprite;
    end
end

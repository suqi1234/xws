require "Common/define"

local json = require "cjson"
local util = require "3rd/cjson/util"

LoginPanel = {
    transform,
    gameObject,
    LuaBehaviour,
    AlphaTime = 0.3,
    OnClickLogin = false,
    OnClickLoginTime = 0,
    AllCoroutine = {},
    GetRegisterCodeNumTime = 0,
    GetPassWordCodeNumTime = 0;
    PendaftaranTypeButList={};
    PendaftaranInputList ={};
    NRegisterTypeID="";
    OpenInputList={};
    OneOpenGetImgCode=false;
    ControlRegisterList={};
    StrCurrencyType="";
}
local self = LoginPanel

function LoginPanel.FindComponent()
    self.Bg = self.transform:Find("Panel/Bg").gameObject
    self.Panel = self.transform:Find("Panel").gameObject
    self.PanelBg = self.transform:Find("Panel/PanelBg").gameObject
    self.CloseButton = self.transform:Find("Panel/PanelBg/CloseButton").gameObject
    self.LoginNameInputField = self.transform:Find("Panel/PanelBg/Login/Name_InputField").gameObject --账号输入框
    self.LoginKataSandiInputField = self.transform:Find("Panel/PanelBg/Login/KataSandi_InputField").gameObject --密码输入框
    self.LoginCatPasswordButton = self.transform:Find("Panel/PanelBg/Login/KataSandi_InputField/CatPassword_Button").gameObject:GetComponent("Toggle") --查看密码按钮
    self.MASUKButton = self.transform:Find("Panel/PanelBg/Login/MASUK_Button").gameObject --登录按钮
    self.PhoneNomorPonsel_Root = self.transform:Find("Panel/PanelBg/Login/PhoneNomorPonsel_Root").gameObject
    self.LoginNomorPonselInputField = self.transform:Find("Panel/PanelBg/Login/PhoneNomorPonsel_Root/PhoneNomorPonsel_InputField").gameObject --手机号登录输入框
    self.LoginSelectAreaCode = self.transform:Find("Panel/PanelBg/Login/PhoneNomorPonsel_Root/SelectAreaCode/Label").gameObject:GetComponent("Text")
    self.LoginSelectAreaCodeDropdown = self.transform:Find("Panel/PanelBg/Login/PhoneNomorPonsel_Root/SelectAreaCode").gameObject:GetComponent("Dropdown")
    self.LoginToEmailButton = self.transform:Find("Panel/PanelBg/Login/PhoneNomorPonsel_Root/PhoneNomorPonsel_InputField/ToEmail_Button").gameObject --跳转到邮件注册按钮
    self.LoginToPhoneButton = self.transform:Find("Panel/PanelBg/Login/Name_InputField/ToPhone_Button").gameObject --跳转到手机注册按钮
    self.FaceBookButton = self.transform:Find("Panel/PanelBg/Login/FaceBook_Button").gameObject --facebook登录
    self.TelegramButton = self.transform:Find("Panel/PanelBg/Login/Telegram_Button").gameObject --Telegram登录
    self.TwitterButton = self.transform:Find("Panel/PanelBg/Login/Twitter_Button").gameObject --Twitter登录
    self.WhatsAppButton = self.transform:Find("Panel/PanelBg/Login/WhatsApp_Button").gameObject --WhatsApp登录
    self.LupaPasswordButton = self.transform:Find("Panel/PanelBg/Login/LupaPassword_Button").gameObject --忘记密码按钮
    self.IngatkatasandiToggle = self.transform:Find("Panel/PanelBg/Login/Ingatkatasandi_Toggle").gameObject:GetComponent("Toggle") --记住密码按钮
    self.RegisteredAccountNomorRekeningInputField = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/NomorRekening_InputField").gameObject --账号输入框
    self.RegisteredAccountKataSandiInputField = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/KataSandi_Root").gameObject --密码输入框
    self.RegisteredAccountVeriflKataSandiInputField = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/VeriflKataSandi_InputField").gameObject --验证密码输入框
    self.RegisteredAccountDaftarButton = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/AccountDaftar_Button").gameObject --账号注册按钮
    self.RegisteredEmailNomorPonselInputField = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/EmailNomorPonsel_InputField").gameObject --邮件输入框
    self.RegisteredToPhoneButton = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/EmailNomorPonsel_InputField/ToPhone_Button").gameObject --跳转到手机注册
    self.RegPhoneNomorPonsel_Root = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/RegPhoneNomorPonsel_Root").gameObject
    self.RegisteredPhoneInput = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/RegPhoneNomorPonsel_Root/PhoneNomorPonsel_InputField").gameObject --手机登陆输入框
    self.RegisteredSelectAreaCode = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/RegPhoneNomorPonsel_Root/SelectAreaCode/Label").gameObject:GetComponent("Text") --选择手机区域码
    self.RegisteredSelectAreaCodeDropdown = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/RegPhoneNomorPonsel_Root/SelectAreaCode").gameObject:GetComponent("Dropdown") --选择手机区域码
    self.RegisteredToEmailButton = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/RegPhoneNomorPonsel_Root/PhoneNomorPonsel_InputField/ToEmail_Button").gameObject --邮件登陆按钮
    self.RegisteredKataSandiInputField = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/KataSandi_Root/KataSandi_InputField").gameObject --密码输入框
    self.RegisteredCaptchaInputField = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/Captcha_Root/Captcha_InputField").gameObject --验证码输入框
    self.RegisteredSendCodeButton = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/Captcha_Root/SendCodeButton").gameObject --发送验证码按钮
    self.Captcha_Root = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/Captcha_Root").gameObject --验证框
    --self.RegisteredDaftarButton = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/PhoneDaftar_Button").gameObject --注册按钮
    self.RegisteredProtoToggle = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/ProtoToggle").gameObject --是否同意协议按钮
    self.RegisteredCatProtoLabelButton = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/ProtoToggle/CatProtoLabel_Button").gameObject --查看协议按钮
    self.RegisterPhoneCodeText = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/Captcha_Root/RegisterPhoneCodeText").gameObject
    self.RegisterCatPasswordButton = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/KataSandi_Root/CatPasswordButton").gameObject:GetComponent("Toggle") --查看密码按钮
    self.RegisterVeriflkCatPasswordButton = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/VeriflKataSandi_InputField/CatPasswordButton").gameObject:GetComponent("Toggle") --查看确认密码按钮
    self.Masuk_Toggle = self.transform:Find("Panel/PanelBg/SelectItem/Masuk_Toggle").gameObject:GetComponent("Toggle")--登陆页面按钮
    self.Pendaftaran_Toggle = self.transform:Find("Panel/PanelBg/SelectItem/Pendaftaran_Toggle").gameObject:GetComponent("Toggle")--注册页面按钮
    self.RegisterPassWordError = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/VeriflKataSandi_InputField/RegisterPassWordErrorText").gameObject--错误提示
    self.RegisterTypeContent = self.transform:Find("Panel/PanelBg/Registered/RegisterType/Viewport/Content")--注册类型按钮列表
    self.UserRegisteredContent = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content")--注册输入项列表
    self.ImageCode_Root = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/ImageCode_Root").gameObject --图形验证框
    self.ImageCodeInputField = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/ImageCode_Root/ImageCode_InputField").gameObject --图形验证码输入框
    self.ImageCodeSendCodeButton = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/ImageCode_Root/SendCodeButton").gameObject --获取图形验证码图片
    self.CurrencyType = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/CurrencyType_Root").gameObject--货币类型
    self.SelectCurrencyDropdown = self.transform:Find("Panel/PanelBg/Registered/UserRegistered/RegisterContent_Scroll/Viewport/Content/CurrencyType_Root/SelectCurrency_Dropdown"):GetComponent("Dropdown")--货币类型
end

--启动事件--
function LoginPanel.Awake(obj)
    self.gameObject = obj
    self.transform = obj.transform
    self.LuaBehaviour = self.gameObject:GetComponent("LuaBehaviour")
    self.FindComponent()
    self.InitPanel()
    self.AddOnClickEvent()
    --     self.GuiLoading:SetActive(false);
    --     self.VersionNum.text = "v1.11";
    --   local co=  coroutine.start(function()
    --         local address = "http://211.149.128.117:9522/getForseNotice/";
    --         local www =WWW(address);
    --         coroutine.www(www);
    --         if www.error ~="" and www.error ~= nil then
    --             return;
    --         end
    --         local str = www.text;
    --         local tab = json.decode(str);
    --         log(address.."------------------------------------------------------------------------"..tab.noticeState);
    --         if tab.noticeState ~= 0 then
    --             panelMgr:CreatePanel("View/Notice", {text=tab.noticeStr});
    --         end
    --     end)
    --     table.insert(self.AllCoroutine, co)
    for k, v in ipairs(GolbalResource.jsonData) do
        --中国香港（HK）
        --self.LoginSelectAreaCodeDropdown.options:Add(OptionData(v["AreaCode"] .. " " .. v["name"] .. "(" .. v["CodeName"] .. ")"))
        --self.RegisteredSelectAreaCodeDropdown.options:Add(OptionData(v["AreaCode"] .. " " .. v["name"] .. "(" .. v["CodeName"] .. ")"))

        self.LoginSelectAreaCodeDropdown.options:Add(OptionData(v["AreaCode"] .. " " .. "(" .. v["CodeName"] .. ")"))
        self.RegisteredSelectAreaCodeDropdown.options:Add(OptionData(v["AreaCode"] .. " " .. "(" .. v["CodeName"] .. ")"))
    end
    self.LoginSelectAreaCodeDropdown.value=0
    self.RegisteredSelectAreaCodeDropdown.value=0
    self.LoginSelectAreaCode.text=GolbalResource.jsonData[1]["AreaCode"]
    self.RegisteredSelectAreaCode.text=GolbalResource.jsonData[1]["AreaCode"]
    self.LoginSelectAreaCodeDropdown.options:Add(OptionData(""))
    self.RegisteredSelectAreaCodeDropdown.options:Add(OptionData(""))

    

     --注册输入项
    self.PendaftaranInputList={
        [1]={InputField=self.RegisteredAccountNomorRekeningInputField},
        [2]={InputField=self.RegPhoneNomorPonsel_Root},
        [3]={InputField=self.RegisteredEmailNomorPonselInputField},
        [4]={InputField=self.RegisteredAccountKataSandiInputField},
        [5]={InputField=self.RegisteredAccountVeriflKataSandiInputField},
        [6]={InputField=self.Captcha_Root},
        [7]={InputField=self.Captcha_Root},
        [8]={InputField=self.ImageCode_Root},
        [10]={InputField=self.CurrencyType}
    }

end

function LoginPanel.Start()
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {}
    local code = protobuf.encode("tutorial.Req15", ReqLoad)
    networkMgr:SendMessageBf(15, code)
    Event:Add("eventName15", self.Callback15)
end

function LoginPanel.InitPanel()
    if Util.HasKey(AppConst.AppPrefix .. "RememberPassword") then
        local IsRememberPasseord = Util.GetInt(AppConst.AppPrefix .. "RememberPassword")
        local file = io.open(AppConst.AccountLogPath)
        if file == nil  then
            return
        else
            local tab = ReadFile(file)
            if #tab / 2 >= 1 then
                local accounttext = Util.DecryptDES(tab[#tab - 1], gameDECkey)
                local pwdtext = Util.DecryptDES(tab[#tab], gameDECkey)
                if Util.HasKey(AppConst.AppPrefix .. "IsPhone") and Util.GetInt(AppConst.AppPrefix .. "IsPhone") == 0 then
                    self.LoginToPhone()
                    local codeAndPhoneNumber = Split(accounttext, ":")
                    self.LoginSelectAreaCode.text = codeAndPhoneNumber[1]
                    self.LoginNomorPonselInputField:GetComponent("InputField").text = codeAndPhoneNumber[2]
                else
                    self.LoginNameInputField:GetComponent("InputField").text = accounttext
                end
                if IsRememberPasseord ~= 1 then
                    self.LoginKataSandiInputField:GetComponent("InputField").text = pwdtext
                end
            --self.OnValueChangedAccountPhone(self.AccountPhone)
            end
        end
    end
end

function LoginPanel.Init()
   
end

function LoginPanel.Callback15(name, data)
    Event:Remove("eventName15", self.Callback15)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
      return
    end

    self.ControlRegisterList = data.controlRegisterList
    --货币类型下拉
    --print("===货币类型数量："..#data.allowCurrencyList)
    if #data.allowCurrencyList>0 then
        for k,v in pairs(data.allowCurrencyList) do
            --print(v)
            self.SelectCurrencyDropdown.options:Add(OptionData(v))
        end
        self.SelectCurrencyDropdown.value=0
        self.SelectCurrencyDropdown.options:Add(OptionData(""))
        self.SelectCurrencyDropdown.transform:Find("Label"):GetComponent("Text").text = data.allowCurrencyList[1] 
    end
    --注册类型按钮
    for i=0,self.RegisterTypeContent.childCount-1 do
        self.PendaftaranTypeButList[i] = self.RegisterTypeContent:GetChild(i)
        local rid = Split(self.PendaftaranTypeButList[i].name,"_")[2]

        if self.IsExistType(rid) then
            self.PendaftaranTypeButList[i].gameObject:SetActive(true)
            self.LuaBehaviour:AddClick(self.PendaftaranTypeButList[i].gameObject,function() self.OnPendaftaranType(rid) end)
        else
            self.PendaftaranTypeButList[i].gameObject:SetActive(false)
        end
     end
end

function LoginPanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(
        self.Bg,
        function()
            coroutine.start(self.HidePanelAnim)
        end
    )
    self.LuaBehaviour:AddClick(
        self.CloseButton,
        function()
            coroutine.start(self.HidePanelAnim)
        end
    )
    self.LuaBehaviour:AddClick(self.MASUKButton, self.OnClickLoginButton)
    self.LuaBehaviour:AddValueChanged(
        self.LoginCatPasswordButton,
        function(go, value)
            if value then
                self.LoginKataSandiInputField:GetComponent("InputField").contentType = ContentType.Alphanumeric
                self.LoginKataSandiInputField:GetComponent("InputField").enabled = false
                self.LoginKataSandiInputField:GetComponent("InputField").enabled = true
            else
                self.LoginKataSandiInputField:GetComponent("InputField").contentType = ContentType.Password
                self.LoginKataSandiInputField:GetComponent("InputField").enabled = false
                self.LoginKataSandiInputField:GetComponent("InputField").enabled = true
            end
            go.transform:Find("Background").gameObject:SetActive(not value)
        end
    )
    self.LuaBehaviour:AddValueChanged(
        self.RegisterCatPasswordButton,
        function(go, value)
            if value then
                self.RegisteredKataSandiInputField:GetComponent("InputField").contentType = ContentType.Alphanumeric
                self.RegisteredKataSandiInputField:GetComponent("InputField").enabled = false
                self.RegisteredKataSandiInputField:GetComponent("InputField").enabled = true
            else
                self.RegisteredKataSandiInputField:GetComponent("InputField").contentType = ContentType.Password
                self.RegisteredKataSandiInputField:GetComponent("InputField").enabled = false
                self.RegisteredKataSandiInputField:GetComponent("InputField").enabled = true
            end
            go.transform:Find("Background").gameObject:SetActive(not value)
        end
    )
    self.LuaBehaviour:AddValueChanged(
        self.RegisterVeriflkCatPasswordButton,
        function(go, value)
            if value then
                self.RegisteredAccountVeriflKataSandiInputField:GetComponent("InputField").contentType = ContentType.Alphanumeric
                self.RegisteredAccountVeriflKataSandiInputField:GetComponent("InputField").enabled = false
                self.RegisteredAccountVeriflKataSandiInputField:GetComponent("InputField").enabled = true
            else
                self.RegisteredAccountVeriflKataSandiInputField:GetComponent("InputField").contentType = ContentType.Password
                self.RegisteredAccountVeriflKataSandiInputField:GetComponent("InputField").enabled = false
                self.RegisteredAccountVeriflKataSandiInputField:GetComponent("InputField").enabled = true
            end
            go.transform:Find("Background").gameObject:SetActive(not value)
        end
    )
    self.LuaBehaviour:AddValueChanged(self.RegisteredAccountVeriflKataSandiInputField:GetComponent("InputField"), self.OnValueChangedAgainRegisterPassWord)
    self.LuaBehaviour:AddClick(self.LoginToPhoneButton, self.LoginToPhone)
    self.LuaBehaviour:AddClick(self.LoginToEmailButton, self.LoginToEmail)
    self.LuaBehaviour:AddClick(self.RegisteredAccountDaftarButton, self.OnClickRegister)
    self.LuaBehaviour:AddClick(self.RegisteredDaftarButton, self.OnClickRegister)
    self.LuaBehaviour:AddClick(self.RegisteredSendCodeButton, self.OnClickRegisterPhoneCode)
    self.LuaBehaviour:AddClick(self.ImageCodeSendCodeButton, function()
        self.OneOpenGetImgCode=false
        self.OnClickRegisterPhoneCode()
    end)
    self.LuaBehaviour:AddValueChanged(self.RegisteredSelectAreaCodeDropdown,self.OnSelectDropdownCallBack)
    self.LuaBehaviour:AddValueChanged(self.LoginSelectAreaCodeDropdown,self.OnSelectDropdownCallBack)
    self.LuaBehaviour:AddClick(
        self.RegisteredToPhoneButton,
        function()
            self.RegPhoneNomorPonsel_Root:SetActive(true)
            self.RegisteredEmailNomorPonselInputField:SetActive(false)
            self.RegisteredEmailNomorPonselInputField:GetComponent("InputField").text = ""
            self.RegisteredPhoneInput:GetComponent("InputField").text = ""
            self.RegisteredKataSandiInputField:GetComponent("InputField").text = ""
        end
    )
    self.LuaBehaviour:AddClick(
        self.RegisteredToEmailButton,
        function()
            self.RegPhoneNomorPonsel_Root:SetActive(false)
            self.RegisteredEmailNomorPonselInputField:SetActive(true)
            self.RegisteredPhoneInput:GetComponent("InputField").text = ""
            self.RegisteredEmailNomorPonselInputField:GetComponent("InputField").text = ""
            self.RegisteredKataSandiInputField:GetComponent("InputField").text = ""
        end
    )
    self.LuaBehaviour:AddValueChanged(self.Masuk_Toggle, self.OnValueChange)
    self.LuaBehaviour:AddValueChanged(self.Pendaftaran_Toggle,self.OnPendaftaran)
    self.LuaBehaviour:AddClick(
        self.LupaPasswordButton,
        function()
            --panelMgr:CreatePanel("View/PasswordSeting", nil)
            --coroutine.start(self.HidePanelAnim)
            panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(130)})
        end
    )
end

--选择注册类型
function LoginPanel.OnPendaftaranType(rid)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)

    self.NRegisterTypeID=rid
    for i=0,#self.PendaftaranTypeButList-1 do
        if Split(self.PendaftaranTypeButList[i].name,"_")[2] == rid then
            self.PendaftaranTypeButList[i]:GetComponent("Button").interactable = false
            self.PendaftaranTypeButList[i]:Find("Checkmark").gameObject:SetActive(true)
        else
            self.PendaftaranTypeButList[i]:GetComponent("Button").interactable = true
            self.PendaftaranTypeButList[i]:Find("Checkmark").gameObject:SetActive(false)
        end
    end
    self.transform:Find("Panel/PanelBg/Registered/UserRegistered/Scrollbar"):GetComponent("Scrollbar").value = 1
    for k,v in pairs(self.PendaftaranInputList) do
        v.InputField.gameObject:SetActive(false)
    end
    for k,v in pairs(self.ControlRegisterList) do
        if v.registerId == rid  then
            --print("===类型id="..rid)
            self.OpenInputList = v.openInputList
            for i=1,#v.openInputList do
                --print("===输入id="..v.openInputList[i])
                self.PendaftaranInputList[v.openInputList[i]].InputField.gameObject:SetActive(true)
            end
        end
    end

    self.RegisteredKataSandiInputField:GetComponent("InputField").text=""
    self.RegisteredAccountVeriflKataSandiInputField:GetComponent("InputField").text=""

    if ContainValue(8,self.OpenInputList) and self.OneOpenGetImgCode==false then
        self.OnClickRegisterPhoneCode()
    end

end

function LoginPanel.OnPendaftaran(go,value)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    
    if value and #self.ControlRegisterList==0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(235)}) --"注册渠道已关闭"
        coroutine.start(function()
            coroutine.wait(0.2)
            self.Pendaftaran_Toggle.isOn = false
            self.Masuk_Toggle.isOn = true
        end)
        
        return
    end

    if value and #self.ControlRegisterList>0 then
        local rand = math.floor(math.random(1, #self.ControlRegisterList))
        local rid = self.ControlRegisterList[rand].registerId
        self.OnPendaftaranType(rid)
    end
end

function LoginPanel.OnValueChange(go, value)
    if value then
        local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
        soundMgr:PlayX(music)
    end
end
function LoginPanel.LoginToPhone()
    self.PhoneNomorPonsel_Root:SetActive(true)
    self.LoginNameInputField:SetActive(false)
    self.LoginNomorPonselInputField:GetComponent("InputField").text = ""
    self.LoginNameInputField:GetComponent("InputField").text = ""
    self.LoginKataSandiInputField:GetComponent("InputField").text = ""
end
function LoginPanel.LoginToEmail()
    self.PhoneNomorPonsel_Root:SetActive(false)
    self.LoginNameInputField:SetActive(true)
    self.LoginNomorPonselInputField:GetComponent("InputField").text = ""
    self.LoginNameInputField:GetComponent("InputField").text = ""
    self.LoginKataSandiInputField:GetComponent("InputField").text = ""
end
function LoginPanel.RegisterCloseInput()
    self.RegisteredAccountNomorRekeningInputField:GetComponent("InputField").text=""
    self.RegisteredKataSandiInputField:GetComponent("InputField").text=""
    self.RegisteredAccountVeriflKataSandiInputField:GetComponent("InputField").text=""
    self.RegisteredPhoneInput:GetComponent("InputField").text=""
    self.RegisteredEmailNomorPonselInputField:GetComponent("InputField").text=""
    self.ImageCodeInputField:GetComponent("InputField").text=""
    self.RegisteredCaptchaInputField:GetComponent("InputField").text=""
    self.RegisteredCaptchaInputField:GetComponent("InputField").text=""
end

function LoginPanel.OnClickLoginButton(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if self.LoginNameInputField.activeSelf then
        if self.LoginNameInputField:GetComponent("InputField").text == "" then
            panelMgr:CreatePanel("View/Notice", {text =GeLanguageById(12) }) --"请输入账号或者邮箱"
            return
        end
    elseif self.PhoneNomorPonsel_Root.activeSelf then --手机登陆
        if self.LoginNomorPonselInputField:GetComponent("InputField").text == "" then
            panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(12)}) --"请输入手机号码"
            return
        end
    end
    if self.LoginKataSandiInputField:GetComponent("InputField").text == "" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(14)}) --"请输入密码"
        return
    end
    LoginPanel.SendLogin()
end

--点击账号登录
function LoginPanel.OnClickAccountLogin()
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    if self.AccountPhone:GetComponent("InputField").text == "" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(38)}) --"请输入账号"
        return
    end
    if self.AccountPassWord:GetComponent("InputField").text == "" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(14) })--"请输入密码"
        return
    end
    LoginPanel.SendLogin(5)
end

--登录
function LoginPanel.SendLogin(GroupState)
    local co =
        coroutine.start(
        function()
            local time = tostring(os.time())
            local des = gameMgrMgr:GetMD5(gameMD5key .. time)
            local address = ""
            local languageKey = "Indonesia"
            if Util.HasKey("CurrentSelectLanguage") then
                languageKey = Util.GetString("CurrentSelectLanguage")
            end
            if self.LoginNameInputField.activeSelf then
                address = "http://"..AppConst.LoginRul..
                        ":"..AppConst.LoginPort..
                        "/VerificationLogin/?name="..UrlEncode(self.LoginNameInputField:GetComponent("InputField").text)..
                        "&password="..UrlEncode(self.LoginKataSandiInputField:GetComponent("InputField").text) ..
                        "&time="..time..
                        "&sign="..des..
                        "&languageKey="..languageKey
            elseif self.PhoneNomorPonsel_Root.activeSelf then
                local AreaCode = Split(self.LoginSelectAreaCode.text, " ")[1]
                local Ac, cc = string.gsub(AreaCode, "+", "")
                address = "http://"..AppConst.LoginRul..
                        ":"..AppConst.LoginPort..
                        "/VerificationLogin/?name="..UrlEncode(Ac .. self.LoginNomorPonselInputField:GetComponent("InputField").text) ..
                        "&password="..UrlEncode(self.LoginKataSandiInputField:GetComponent("InputField").text)..
                        "&time="..time..
                        "&sign="..des..
                        "&languageKey="..languageKey
            end
            local www = WWW(address)
            coroutine.www(www)
            if www.error ~= "" and www.error ~= nil then
                --error("获取错误");
                return
            end
            local str = www.text
            local tab = json.decode(str)
            if tab.state ~= 0 then
                panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(tab.message))})
            else
                self.OnClickLoginTime = 5
                self.OnClickLogin = true
                --error(Util.GetString(AppConst.ApifpPrefix .. "AppUnid"));
                --self.Mask.gameObject:SetActive(true);
                --Util.SetString(AppConst.AppPrefix.."Account",self.LoginKataSandiInputField:GetComponent("InputField").text);
                self.Send1(GroupState or 1, tab.accountId, tab.token, Util.GetString(AppConst.AppPrefix .. Util.GetString(AppConst.AppPrefix .. "Account") .. "AppUnid"), tab.token)
            end
        end
    )
    table.insert(self.AllCoroutine, co)
end

-- 忘记密码按钮 事件
function LoginPanel.OnClickForget(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    local co =
        coroutine.start(
        function()
            coroutine.start(self.HideAccountAnim)
            coroutine.wait(0.2)
            coroutine.start(self.ShowGetPasswordAnim)
        end
    )
    table.insert(self.AllCoroutine, co)
end

function LoginPanel.OnClickRegisterPanel(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    local co =
        coroutine.start(
        function()
            coroutine.start(self.HideAccountAnim)
            coroutine.wait(0.2)
            coroutine.start(self.ShowRegisterAnim)
        end
    )
    table.insert(self.AllCoroutine, co)
end

function LoginPanel.OnClickAccountReturn(obj)
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    Application.Quit()
end

function LoginPanel.OnClickGetPassword(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    local phoneNumber = self.GetPasswordPhone:GetComponent("InputField").text
    local NewPassWord = self.NewPassWord:GetComponent("InputField").text
    local AgainNewPassWord = self.AgainNewPassWord:GetComponent("InputField").text
    local PhoneCode = self.GetPasswordPhoneCode:GetComponent("InputField").text
    if phoneNumber == "" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(42)}) --"请输入手机号"
        return
    end

    if PhoneCode == "" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(45)}) --"请输入验证码"
        return
    end

    if NewPassWord ~= AgainNewPassWord then
        self.GetPassWordError.gameObject:SetActive(true)
        return
    else
        self.GetPassWordError.gameObject:SetActive(false)
    end
    local co =
        coroutine.start(
        function()
            local time = tostring(os.time())
            local des = gameMgrMgr:GetMD5(gameMD5key .. time)
            local address =
                "http://" ..
                AppConst.LoginRul ..
                    ":" ..
                        AppConst.LoginPort ..
                            "/ForgetPasswdSet/?phoneNumber=" ..
                                UrlEncode(phoneNumber) .. "&time=" .. time .. "&phoneKey=" .. UrlEncode(PhoneCode) .. "&newPasswd=" .. UrlEncode(NewPassWord) .. "&sign=" .. des
            log(address)
            local www = WWW(address)
            coroutine.www(www)
            if www.error ~= "" and www.error ~= nil then
                return
            end
            local str = www.text
            local tab = json.decode(str)
            if tab.state ~= 0 then
                panelMgr:CreatePanel("View/Notice", {text =  GeLanguageById(tonumber(tab.message))})
            else
                panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(254)}) --"修改成功"
                self.OnClickGetPasswordReturn(nil)
            end
        end
    )
    table.insert(self.AllCoroutine, co)
end

function LoginPanel.OnClickGetPasswordReturn(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    local co =
        coroutine.start(
        function()
            coroutine.start(self.HideGetPasswordAnim)
            coroutine.wait(0.2)
            coroutine.start(self.ShowAccountAnim)
        end
    )
    table.insert(self.AllCoroutine, co)
end

function LoginPanel.OnValueChangedAgainNewPassWord(obj, Vaule)
    local NewPassWord = self.NewPassWord:GetComponent("InputField").text
    if NewPassWord ~= Vaule then
        self.GetPassWordError.gameObject:SetActive(true)
    else
        self.GetPassWordError.gameObject:SetActive(false)
    end
end

function LoginPanel.OnClickGetPasswordPhoneCode(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    phoneNumber = self.GetPasswordPhone:GetComponent("InputField").text
    if phoneNumber == "" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(42)}) --"请输入手机号"
        return
    end
    local co =
        coroutine.start(
        function()
            local time = tostring(os.time())
            local des = gameMgrMgr:GetMD5(gameMD5key .. time)
            local address = "http://" .. AppConst.LoginRul .. ":" .. AppConst.LoginPort .. "/ForgetPasswdSend/?phoneNumber=" .. UrlEncode(phoneNumber) .. "&time=" .. time .. "&sign=" .. des
            local www = WWW(address)
            coroutine.www(www)
            if www.error ~= "" and www.error ~= nil then
                --error("获取错误");
                return
            end
            local str = www.text
            local tab = json.decode(str)
            if tab.state ~= 0 then
                panelMgr:CreatePanel("View/Notice", {text =  GeLanguageById(tonumber(tab.message))})
            else
                self.GetPassWordCodeNumTime = 120
                self.GetPasswordPhoneCodeButton.gameObject:SetActive(false)
            end
        end
    )
    table.insert(self.AllCoroutine, co)
end

function LoginPanel.isRightEmail(str)
    if string.len(str or "") < 6 then
        return false
    end
    local b, e = string.find(str or "", "@")
    local bstr = ""
    local estr = ""
    if b then
        bstr = string.sub(str, 1, b - 1)
        estr = string.sub(str, e + 1, -1)
    else
        return false
    end
    local p1, p2 = string.find(bstr, "[%w_]+")
    if (p1 ~= 1) or (p2 ~= string.len(bstr)) then
        return false
    end
    if string.find(estr, "^[%.]+") then
        return false
    end
    if string.find(estr, "%.[%.]+") then
        return false
    end
    if string.find(estr, "@") then
        return false
    end
    if string.find(estr, "%s") then
        return false
    end
    if string.find(estr, "[%.]+$") then
        return false
    end
    _, count = string.gsub(estr, "%.", "")
    if (count < 1) or (count > 3) then
        return false
    end
    return true
end

function LoginPanel.checkPhone(var)
    local b = tonumber(var)
    print(b)
    if (b == nil) then
        print("is not number")
        return false
    end
    print("var==========" .. var)
    if (#var ~= 11) then
        return false
    end
    local array = {
        "133",
        "153",
        "180",
        "189",
        "130",
        "131",
        "132",
        "145",
        "155",
        "156",
        "185",
        "186",
        "134",
        "135",
        "136",
        "137",
        "138",
        "139",
        "147",
        "150",
        "151",
        "152",
        "157",
        "158",
        "159",
        "182",
        "187",
        "188"
    }
    print(string.sub(var, 0, 3))
    for i = 1, #array do
        if (array[i] == string.sub(var, 0, 3)) then
            return true
        end
    end
    return false
end
function LoginPanel.OnClickRegister(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    local RegisterName = ""
    local RegisterPhone=""
    local RegisterEmail=""
    local RegisterPassWord = ""
    local AgainRegisterPassWord = ""
    local RegisterPhoneCode = ""
    local RegisterEmailCode = ""
    local RegisterImageCode = ""
    local formClass =  self.NRegisterTypeID

    RegisterName = self.RegisteredAccountNomorRekeningInputField:GetComponent("InputField").text
    RegisterPassWord = self.RegisteredKataSandiInputField:GetComponent("InputField").text
    AgainRegisterPassWord = self.RegisteredAccountVeriflKataSandiInputField:GetComponent("InputField").text
    local AreaCode = Split(self.RegisteredSelectAreaCode:GetComponent("Text").text, " ")[1]
    local Ac, cc = string.gsub(AreaCode, "+", "")
    RegisterPhone = Ac .. self.RegisteredPhoneInput:GetComponent("InputField").text
    RegisterEmail = self.RegisteredEmailNomorPonselInputField:GetComponent("InputField").text
    RegisterImageCode = self.ImageCodeInputField:GetComponent("InputField").text
    RegisterEmailCode = self.RegisteredCaptchaInputField:GetComponent("InputField").text
    RegisterPhoneCode = self.RegisteredCaptchaInputField:GetComponent("InputField").text


    if ContainValue(1, self.OpenInputList) and RegisterName == "" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(38)}) --"请输入账号"
        return
    end
    if ContainValue(2, self.OpenInputList) and self.RegisteredPhoneInput:GetComponent("InputField").text == "" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(42)}) --"请输入手机号"
        return
    end
    if ContainValue(3, self.OpenInputList) then
        if RegisterEmail == "" then
            panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(40)}) --"请输入邮箱"
            return
        end
        local isEmail = self.isRightEmail(RegisterEmail)
        if not isEmail then
            panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(41)}) --"请输入正确的邮箱格式"
            return
        end
    end
    if ContainValue(4, self.OpenInputList) and RegisterPassWord == "" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(14)})-- "请输入密码"
        return
    end
    if ContainValue(5, self.OpenInputList) then
        if RegisterPassWord ~= AgainRegisterPassWord then
            self.RegisterPassWordError.gameObject:SetActive(true)
            return
        else
            self.RegisterPassWordError.gameObject:SetActive(false)
        end
    end
    if (ContainValue(6, self.OpenInputList) or ContainValue(7, self.OpenInputList)) and RegisterPhoneCode == "" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(45)}) --"请输入验证码"
        return
    end
    if ContainValue(8, self.OpenInputList) and RegisterImageCode == "" then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(45)}) --"请输入验证码"
        return
    end
    if not (self.RegisteredProtoToggle:GetComponent("Toggle").isOn) then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(48)}) --"需要同意用户协议"
        return
    end

    local languageKey = "Indonesia"
    if Util.HasKey("CurrentSelectLanguage") then
        languageKey = Util.GetString("CurrentSelectLanguage")
    end

    local co =
        coroutine.start(
        function()
            local time = tostring(os.time())
            local des = gameMgrMgr:GetMD5(gameMD5key .. time)
            local address =
                "http://" ..
                AppConst.LoginRul ..
                ":" ..
                AppConst.LoginPort ..
                "/OrdinaryLogin/?userName=" ..
                UrlEncode(RegisterName) ..
                "&phoneId="..UrlEncode(RegisterPhone)..
                "&mailAddress="..UrlEncode(RegisterEmail)..
                "&phoneCode="..UrlEncode(RegisterPhoneCode)..
                "&imgCode="..UrlEncode(RegisterImageCode)..
                "&mailCode="..UrlEncode(RegisterEmailCode)..
                "&time=" .. time .. "&password=" .. UrlEncode(RegisterPassWord) .. "&sign=" .. des .. "&formClass=" .. formClass..
                "&languageKey="..languageKey..
                "&currencyId="..self.SelectCurrencyDropdown.transform:Find("Label"):GetComponent("Text").text

            local www = WWW(address)
            --print(address)
            coroutine.www(www)
            if www.error ~= "" and www.error ~= nil then
                --error("获取错误");
                return
            end
            local str = www.text
            local tab = json.decode(str)
            if tab.state == 0 then
                --self.OnClickRegisterReturn(nil);
                if formClass == "100" then
                    self.LoginToPhone()
                    self.LoginSelectAreaCode.text = Split(self.RegisteredSelectAreaCode:GetComponent("Text").text, " ")[1]
                    self.LoginNomorPonselInputField:GetComponent("InputField").text = self.RegisteredPhoneInput:GetComponent("InputField").text
                    Util.SetInt(AppConst.AppPrefix .. "IsPhone", 0)
                elseif formClass == "200" then
                    self.LoginToEmail()
                    self.LoginNameInputField:GetComponent("InputField").text = RegisterEmail
                    Util.SetInt(AppConst.AppPrefix .. "IsPhone", 1)
                else
                    self.LoginToEmail()
                    self.LoginNameInputField:GetComponent("InputField").text = RegisterName
                    Util.SetInt(AppConst.AppPrefix .. "IsPhone", 1)
                end
                self.LoginKataSandiInputField:GetComponent("InputField").text = RegisterPassWord
                self.Pendaftaran_Toggle.isOn = false
                self.Masuk_Toggle.isOn = true
                panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(49), IsError = false}) --“注册成功”
                self.RegisterCloseInput()
            else
                panelMgr:CreatePanel("View/Notice", {text =  GeLanguageById(tonumber(tab.message))})
            end
        end
    )
    table.insert(self.AllCoroutine, co)
end
function LoginPanel.OnClickRegisterReturn(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    local co =
        coroutine.start(
        function()
            coroutine.start(self.HideRegisterAnim)
            coroutine.wait(0.2)
            coroutine.start(self.ShowAccountAnim)
        end
    )
    table.insert(self.AllCoroutine, co)
end
function LoginPanel.OnValueChangedAgainRegisterPassWord(obj, Vaule)
    local RegisterPassWord = self.RegisteredKataSandiInputField:GetComponent("InputField").text
    if RegisterPassWord ~= Vaule then
        self.RegisterPassWordError.gameObject:SetActive(true)
    else
        self.RegisterPassWordError.gameObject:SetActive(false)
    end
end

function LoginPanel.OnSelectDropdownCallBack(obj, Vaule)
    obj.transform:Find("Label"):GetComponent("Text").text=Split(obj.transform:Find("Label"):GetComponent("Text").text, " ")[1].." "
end

function LoginPanel.OnClickRegisterPhoneCode()
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    formClass = self.NRegisterTypeID
    if self.OneOpenGetImgCode==false then formClass="300" end
    self.OneOpenGetImgCode=true
    local useName = ""
    if formClass == "100" then
        local AreaCode = Split(self.RegisteredSelectAreaCode.text, " ")[1]
        local Ac, cc = string.gsub(AreaCode, "+", "")
        useName = Ac .. self.RegisteredPhoneInput:GetComponent("InputField").text
        if AreaCode == "" then
            panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(42)}) --"请输入手机号"
            return
        end
    elseif formClass == "200" then
        useName = self.RegisteredEmailNomorPonselInputField:GetComponent("InputField").text
        local isEmail = self.isRightEmail(useName)
        if not isEmail then
            panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(41)}) --"请输入正确的邮箱格式"
            return
        end
    elseif formClass=="300" then
        useName="null"
    end
    
    local co =
        coroutine.start(
        function()
            local time = tostring(os.time())
            local des = gameMgrMgr:GetMD5(gameMD5key .. time)
            
            local address =
                "http://" .. AppConst.LoginRul .. ":" .. AppConst.LoginPort .. "/UserSendCode/?useName=" .. UrlEncode(useName) .. "&time=" .. time .. "&sign=" .. des .. "&formClass=" .. formClass --formClass 100手机  200邮箱 300图片验证返回imgUrl
            local www = WWW(address)
            coroutine.www(www)
            if www.error ~= "" and www.error ~= nil then
                --error("获取错误");
                return
            end
            local str = www.text
            --print(address)
            --print(str)
            local tab = json.decode(str)
            if tab.state ~= 0 then
                panelMgr:CreatePanel("View/Notice", {text =  GeLanguageById(tonumber(tab.message))})
            elseif formClass == "100" or formClass == "200" then
                self.GetRegisterCodeNumTime = 120
                self.RegisteredSendCodeButton.gameObject:SetActive(false)
            end
            if ContainValue(8,self.OpenInputList) and tab.imgUrl~=nil then
                local imgUrl = "http://"..AppConst.LoginRul..":".. AppConst.LoginPort .."/".. tab.imgUrl
                --print(imgUrl)
                local wwwimg = WWW(imgUrl)
                coroutine.www(wwwimg)
                if wwwimg.error ~= "" and www.error ~= nil then
                    return
                end
                local texture = wwwimg.texture
                self.ImageCodeSendCodeButton.transform:Find("Image"):GetComponent("Image").sprite = UnityEngine.Sprite.Create(texture, UnityEngine.Rect(0, 0, texture.width, texture.height), Vector2(0, 0))
                self.ImageCodeSendCodeButton.transform:Find("Image").gameObject:SetActive(true)
            end
        end
    )
    table.insert(self.AllCoroutine, co)
end
function LoginPanel.OnClickAgreement(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)

    local co = coroutine.start(self.ShowAgreementAnim)
    table.insert(self.AllCoroutine, co)
end

function LoginPanel.OnClickAgreementClose(obj)
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    local co = coroutine.start(self.HideAgreementAnim)
    table.insert(self.AllCoroutine, co)
end
function LoginPanel.OnEnable(obj)
    --     GlobalBg.gameObject:SetActive(true);
    --     --此处当UI被激活时调用入场动画
    --     self.OnClickLogin = false;
    --     self.OnClickLoginTime = 0;
    --     self.Mask.gameObject:SetActive(false);

    if Util.HasKey(AppConst.AppPrefix .. "RememberPassword") then
        local IsRememberPasseord = Util.GetInt(AppConst.AppPrefix .. "RememberPassword")
        self.IngatkatasandiToggle.isOn = IsRememberPasseord == 0
    else
        self.IngatkatasandiToggle.isOn = true
    end
    local co = coroutine.start(self.ShowPanelAnim)
    table.insert(self.AllCoroutine, co)
end
function LoginPanel.ShowPanelAnim()
    LuaHelper.SetAlpha(self.Panel:GetComponent("CanvasGroup"), 0)
    self.PanelBg.transform.localScale = Vector3.zero
    LuaHelper.DOTweenAlpha(self.Panel:GetComponent("CanvasGroup"), 1, self.AlphaTime)
    self.PanelBg.transform:DOScale(1, self.AlphaTime)
    coroutine.wait(self.AlphaTime)
    -- local co = coroutine.start(self.ShowAccountAnim)
    -- table.insert(self.AllCoroutine, co)
end
--[[
    @desc: 
    author:{author}
    time:2020-06-24 17:27:56
    @return:
]]
function LoginPanel.HidePanelAnim()
    -- LuaHelper.DOTweenAlpha(self.Bg:GetComponent("CanvasGroup"),0,self.AlphaTime);
    -- LuaHelper.DOTweenAlpha(self.AccountPanel:GetComponent("CanvasGroup"),0,self.AlphaTime);
    -- LuaHelper.DOTweenAlpha(self.RegisterPanel:GetComponent("CanvasGroup"),0,self.AlphaTime);
    -- LuaHelper.DOTweenAlpha(self.GetPasswordPanel:GetComponent("CanvasGroup"),0,self.AlphaTime);
    -- coroutine.wait(self.AlphaTime);
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
    LuaHelper.DOTweenAlpha(self.Panel:GetComponent("CanvasGroup"), 0, self.AlphaTime)
    self.PanelBg.transform:DOScale(0, self.AlphaTime)
    coroutine.wait(self.AlphaTime)
    DestroyView("Login")
end
function LoginPanel.ShowAccountAnim()
    self.AccountPanel.gameObject:SetActive(true)
    LuaHelper.SetAlpha(self.AccountPanel:GetComponent("CanvasGroup"), 0)
    LuaHelper.DOTweenAlpha(self.AccountPanel:GetComponent("CanvasGroup"), 1, 0.2)
    coroutine.wait(0.2)
end
function LoginPanel.HideAccountAnim()
    LuaHelper.DOTweenAlpha(self.AccountPanel:GetComponent("CanvasGroup"), 0, 0.2)
    coroutine.wait(0.2)
    self.AccountPanel.gameObject:SetActive(false)
end
function LoginPanel.ShowRegisterAnim()
    self.RegisterPanel.gameObject:SetActive(true)
    self.AgreementToggle:GetComponent("Toggle").isOn = true
    LuaHelper.SetAlpha(self.RegisterPanel:GetComponent("CanvasGroup"), 0)
    LuaHelper.DOTweenAlpha(self.RegisterPanel:GetComponent("CanvasGroup"), 1, 0.2)
end
function LoginPanel.HideRegisterAnim()
    self.RegisterPhone:GetComponent("InputField").text = ""
    self.RegisterPassWord:GetComponent("InputField").text = ""
    self.AgainRegisterPassWord:GetComponent("InputField").text = ""
    self.RegisterPhoneCode:GetComponent("InputField").text = ""
    self.RegisterName:GetComponent("InputField").text = ""
    LuaHelper.DOTweenAlpha(self.RegisterPanel:GetComponent("CanvasGroup"), 0, 0.2)
    coroutine.wait(0.2)
    self.RegisterPanel.gameObject:SetActive(false)
end
function LoginPanel.ShowGetPasswordAnim()
    self.GetPasswordPhone:GetComponent("InputField").text = ""
    self.NewPassWord:GetComponent("InputField").text = ""
    self.AgainNewPassWord:GetComponent("InputField").text = ""
    self.GetPasswordPhoneCode:GetComponent("InputField").text = ""
    self.GetPasswordPanel.gameObject:SetActive(true)
    LuaHelper.SetAlpha(self.GetPasswordPanel:GetComponent("CanvasGroup"), 0)
    LuaHelper.DOTweenAlpha(self.GetPasswordPanel:GetComponent("CanvasGroup"), 1, 0.2)
    coroutine.wait(0.2)
end
function LoginPanel.HideGetPasswordAnim()
    LuaHelper.DOTweenAlpha(self.GetPasswordPanel:GetComponent("CanvasGroup"), 0, 0.2)
    coroutine.wait(0.2)
    self.GetPasswordPanel.gameObject:SetActive(false)
end
function LoginPanel.ShowAgreementAnim()
    self.AgreementPanel.gameObject:SetActive(true)
    LuaHelper.SetAlpha(self.AgreementPanel:GetComponent("CanvasGroup"), 0)
    self.AgreementPanel.transform:Find("Panel").localScale = Vector3.zero
    LuaHelper.DOTweenAlpha(self.AgreementPanel:GetComponent("CanvasGroup"), 1, 0.1)
    coroutine.wait(0.1)
    self.AgreementPanel.transform:Find("Panel").transform:DOScale(1, 0.1)
end
function LoginPanel.HideAgreementAnim()
    self.AgreementPanel.transform:Find("Panel").transform:DOScale(0, 0.1)
    coroutine.wait(0.1)
    LuaHelper.DOTweenAlpha(self.AgreementPanel:GetComponent("CanvasGroup"), 0, 0.1)
    coroutine.wait(0.1)
    self.AgreementPanel.gameObject:SetActive(false)
end

function LoginPanel.Send1(LoginState, UserName, token, appUnid, code)
    if token == nil then
        return
    end
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
        GroupState = LoginState,
        userName = UserName,
        Token = token
    }
    local code = protobuf.encode("tutorial.Req1", ReqLoad)
    networkMgr:SendMessageBf(1, code) --登录
    Event:Add("eventName1", Game.Callback1)
end

function LoginPanel.OnLoginOK()
    HallPanel.UpdateUserInfo()
    local co = coroutine.start(self.HidePanelAnim)
    --and self.IngatkatasandiToggle.isOn
    if file == nil then
        local tab = {}
        local accountObj = ""
        if self.LoginNameInputField.activeSelf then
            accountObj = self.LoginNameInputField:GetComponent("InputField").text
            Util.SetInt(AppConst.AppPrefix .. "IsPhone", 1)
        elseif self.PhoneNomorPonsel_Root.activeSelf then
            accountObj = Split(self.LoginSelectAreaCode.text, " ")[1] .. ":" .. self.LoginNomorPonselInputField:GetComponent("InputField").text
            Util.SetInt(AppConst.AppPrefix .. "IsPhone", 0)
        end
        local pwdObj = self.LoginKataSandiInputField:GetComponent("InputField")
        local id = Util.EncryptDES(accountObj, gameDECkey)
        local pwd = Util.EncryptDES(pwdObj.text, gameDECkey)
        table.insert(tab, id)
        table.insert(tab, pwd)
        local filewrite = io.open(AppConst.AccountLogPath, "w")
        WriteFile(filewrite, tab)
        filewrite:close()
    end
    -- if self.IngatkatasandiToggle.isOn == false then
    --     local rm_file = os.remove(AppConst.AccountLogPath)
    -- end
    Util.SetInt(AppConst.AppPrefix .. "RememberPassword", self.IngatkatasandiToggle.isOn and 0 or 1)
    table.insert(self.AllCoroutine, co)
    --签到
    -- if Game.IsOpenSignIn and Game.TodaySignInState then
    --     panelMgr:CreatePanel("View/Qiandao",nil)
    -- end
    
end

function LoginPanel.OnCallBack1()
    Util.SetString(AppConst.AppPrefix .. "Account", self.LoginNameInputField:GetComponent("InputField").text)
    --self.Mask.gameObject:SetActive(false);
    self.OnClickLogin = false
    self.OnClickLoginTime = 0
end

function LoginPanel.Update()
    if self.GetRegisterCodeNumTime > 0 then
        self.GetRegisterCodeNumTime = self.GetRegisterCodeNumTime - Time.deltaTime
        self.RegisterPhoneCodeText:GetComponent("Text").text = math.floor(self.GetRegisterCodeNumTime) .. " detik sebelum masuk"
        if self.GetRegisterCodeNumTime <= 0 then
            self.RegisteredSendCodeButton.gameObject:SetActive(true)
            self.GetRegisterCodeNumTime = 0
            self.RegisterPhoneCodeText:GetComponent("Text").text = ""
        end
    end
    if self.GetPassWordCodeNumTime > 0 then
        self.GetPassWordCodeNumTime = self.GetPassWordCodeNumTime - Time.deltaTime
        self.GetPasswordPhoneCodeText:GetComponent("Text").text = math.floor(self.GetPassWordCodeNumTime) .. " detik sebelum masuk"
        if self.GetPassWordCodeNumTime <= 0 then
            self.GetPasswordPhoneCodeButton.gameObject:SetActive(true)
            self.GetPassWordCodeNumTime = 0
            self.GetPasswordPhoneCodeText:GetComponent("Text").text = ""
        end
    end
    if self.OnClickLogin then
        self.OnClickLoginTime = self.OnClickLoginTime - Time.deltaTime
        if self.OnClickLoginTime <= 0 then
            -- self.Mask.gameObject:SetActive(false);
            self.OnClickLogin = false
            self.OnClickLoginTime = 0
        end
    end
end
function LoginPanel.Send0()
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {}
    local code = protobuf.encode("tutorial.Req0", ReqLoad)
    networkMgr:SendMessageBf(0, code)
    Event:Add("eventName0", self.Callback0)
end

function LoginPanel.Callback0(name, data)
    Event:Remove("eventName0", self.Callback0)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        --error("emsg"..data.emsg)
        return
    end
    gameMgrMgr:AliLogin(data.infoStr)
end

function LoginPanel.OnDestroy()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
    destroy(self.gameObject)
    Util.ClearMemory()
    logWarn("LoginPanel---->>>OnDestroy")
end

function LoginPanel.OnDisable()
    for k, v in pairs(self.AllCoroutine) do
        coroutine.stop(v)
    end
end

function LoginPanel.IsExistType(rid)
    for k,v in pairs(self.ControlRegisterList) do
        if v.registerId==tostring(rid) then
            return true;
        end
    end
    return false;
end
local transform
local gameObject
local LuaBehaviour

VIPPanel = {
    PlayerName = nil,
    PlayerHead = nil,
    JinduTiao = nil,
    LVSprite = {},
    ImgNowLv = nil,
    ImgNextLv = nil,
    AllCoroutine = {};
    TextRow0={};
    LvText = {GeLanguageById(187),GeLanguageById(188) ,GeLanguageById(189),GeLanguageById(190),GeLanguageById(191),GeLanguageById(192) }
}

local self = VIPPanel

function VIPPanel.Awake(obj)
    gameObject = obj
    transform = obj.transform
    LuaBehaviour = gameObject:GetComponent("LuaBehaviour")

    self.FindComponent()
    self.AddOnClickEvent()

    --resMgr:LoadPrefab("Person",{"FaceIconItem"},self.LoadFaceIconEnd);

    local co = coroutine.start(self.ShowPanelAnim)
    table.insert(self.AllCoroutine, co)
end


function VIPPanel.LoadFaceIconEnd()
end

function VIPPanel.OnEnable(obj)
    self.LoadUserInfo()
end

function VIPPanel.FindComponent()
    self.PlayerName = transform:Find("Panel/UserInfo/TxtName").gameObject
    self.PlayerHead = transform:Find("Panel/UserInfo/HeadImage/Icon").gameObject
    self.JinduTiao = transform:Find("Panel/UserInfo/ImgJinduBG/Jindu").gameObject
    self.NumJindu = transform:Find("Panel/UserInfo/NumJindu"):GetComponent("Text")
    self.ImgNowLv = transform:Find("Panel/UserInfo/ImgNowLv"):GetComponent("Image")
    self.ImgNextLv = transform:Find("Panel/UserInfo/ImgNextLv"):GetComponent("Image")
    self.VIPRincian = transform:Find("Panel/Top/VIPRincian").gameObject
    self.UserInfo = transform:Find("Panel/UserInfo")
    self.Top = transform:Find("Panel/Top")
    self.VIP_ScrollView = transform:Find("Panel/VIP_ScrollView")
    for i = 1, 6 do
        self.LVSprite[i] = transform:Find("Panel/VIP_ScrollView/Viewport/Content/DataBG/LV" .. i):GetComponent("Image")
        self.TextRow0[i] = transform:Find("Panel/VIP_ScrollView/Viewport/Content/DataBG/Row0/Text ("..(i-1)..")"):GetComponent("Text")
        self.TextRow0[i].text = FormatChineseNumbers(Game.VipGradeSetup[i])
    end
end

function VIPPanel.AddOnClickEvent()
    LuaBehaviour:AddClick(
        transform:Find("Panel/Top/ButClose").gameObject,
        function()
            DestroyView("VIP");
            panelMgr:CreatePanel("View/Hall",nil)
            local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
            soundMgr:PlayX(music)
        end
    )
    LuaBehaviour:AddClick(self.VIPRincian,self.OnVIPRincian)
end


local IsShowGameAnim=false
function VIPPanel.ShowPanelAnim()
    if IsShowGameAnim then return end
    IsShowGameAnim=true

    self.Top.localPosition = Vector3(0,200,0)
    self.Top:DOLocalMove(Vector3(0,0,0), 0.6, false)

    self.UserInfo.localPosition = Vector3(2436,self.UserInfo.localPosition.y,0)
    self.UserInfo:DOLocalMove(Vector3(0,self.UserInfo.localPosition.y,0), 0.6, false)
    Yield(0)
    self.VIP_ScrollView.localPosition = Vector3(2436,self.VIP_ScrollView.localPosition.y,0)
    self.VIP_ScrollView:DOLocalMove(Vector3(0,self.VIP_ScrollView.localPosition.y,0), 0.6, false)
end


function VIPPanel.LoadUserInfo()
    if Player.name ~= "" and Player.avater ~= 2 then
        self.PlayerName:GetComponent("Text").text = Player.name
        Game.GetLoadHeaderFile(Player.avater, self.PlayerHead)
    end
    local flo = 0
    if Player.NeedExp ~= 0 then
        flo = Player.Exp / Player.NeedExp
    end
    self.NumJindu.text = Player.Exp .."/".. Player.NeedExp

    if Player.Lv == 0 then
        self.ImgNowLv.gameObject:SetActive(true)
        self.ImgNextLv.gameObject:SetActive(true)
        self.ImgNowLv.sprite = self.LVSprite[Player.Lv + 1].sprite
        self.ImgNextLv.sprite = self.LVSprite[Player.Lv + 2].sprite
        self.ImgNowLv.transform:Find("Text"):GetComponent("Text").text = self.LvText[Player.Lv + 1]
        self.ImgNextLv.transform:Find("Text"):GetComponent("Text").text = self.LvText[Player.Lv + 2]
    elseif Player.Lv > 0 and Player.Lv < 5 then
        self.ImgNowLv.gameObject:SetActive(true)
        self.ImgNextLv.gameObject:SetActive(true)
        self.ImgNowLv.sprite = self.LVSprite[Player.Lv + 1].sprite
        self.ImgNextLv.sprite = self.LVSprite[Player.Lv + 2].sprite
        self.ImgNowLv.transform:Find("Text"):GetComponent("Text").text = self.LvText[Player.Lv + 1]
        self.ImgNextLv.transform:Find("Text"):GetComponent("Text").text = self.LvText[Player.Lv + 2]
    elseif Player.Lv >= 5 then
        self.ImgNowLv.gameObject:SetActive(true)
        self.ImgNextLv.gameObject:SetActive(false)
        self.ImgNowLv.sprite = self.LVSprite[6].sprite
        self.ImgNowLv.transform:Find("Text"):GetComponent("Text").text = self.LvText[6]
        flo = 1
    end
    --self.ImgNowLv:SetNativeSize()
    --self.ImgNextLv:SetNativeSize()
    --print("flo = "..flo)
    self.Jindu(flo)
end

function VIPPanel.Jindu(v)
    self.JinduTiao:GetComponent("RectTransform").sizeDelta = Vector2(1185 * v, 22)
end

function VIPPanel.PlayAudio()
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
end

function VIPPanel.OnVIPRincian(obj)
    self.PlayAudio()
    panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(130)}) --"此功能暂未开放，敬请期待！"
end
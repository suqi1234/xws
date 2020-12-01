local transform;
local gameObject;
local LuaBehaviour;
local uniWebView;

UniWebPanel = {
    GameUrl="";
    Platform="";
};

local self = UniWebPanel;

function UniWebPanel.Awake(obj)
    gameObject = obj;
    transform = gameObject.transform;
    local video = newObject(GameObject.Find("Canvas/UI").transform:Find("UniwebVideo").gameObject)
    video.transform:SetParent(transform:Find("Panel"))
    video.transform.localScale = Vector3(1,1,1)
    video:GetComponent("RectTransform").offsetMin = Vector2(0, 0)
    video:GetComponent("RectTransform").offsetMax = Vector2(0, 0)
    video.gameObject:SetActive(true)
    LuaBehaviour = gameObject:GetComponent('LuaBehaviour');
    uniWebView = GetComponentInChildren(transform:Find("Panel"),"UniWebView")
    if tostring(Application.platform) == "Android" then--安卓
        self.Platform = "1"
    elseif tostring(Application.platform) == "IPhonePlayer" then--苹果
        self.Platform = "2"
    end
end

function UniWebPanel.Init(data)
    self.GameUrl = data.GameUrl
    print("URL = "..self.GameUrl)
    if self.GameUrl~=nil then
        uniWebView.BackgroundColor = Color(0,0,0,0) --设置背景颜色
        uniWebView:SetShowSpinnerWhileLoading(false) --设置加载指示器中显示的文本
        uniWebView:SetHorizontalScrollBarEnabled(false) --设置当web内容超出web view边界时，水平滚动条是否应该显示
        uniWebView:SetVerticalScrollBarEnabled(false) --设置当web内容超出web view边界时，垂直滚动条是否应该显示。
        uniWebView:SetZoomEnabled(false); --设置web view是否支持缩放手势来更改内容大小
        uniWebView:Load(self.GameUrl.."&clientClass="..self.Platform.."&time="..tostring(os.time()),true);
    end
end

function UniWebPanel.OnDisable()
    self.ClosePanel()
end

function UniWebPanel.ClosePanel()
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
    }
    local code = protobuf.encode("tutorial.Req72", ReqLoad)
    networkMgr:SendMessageBf(72, code)
    Event:Add("eventName72", self.Callback72)
end
function UniWebPanel.Callback72(name, data)
    Event:Remove("eventName72", self.Callback72)
     if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    --CloseView("UniWeb")
end


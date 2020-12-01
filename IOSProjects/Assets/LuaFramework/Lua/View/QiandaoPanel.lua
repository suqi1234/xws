

QiandaoPanel = {
     transform,
     gameObject,
     LuaBehaviour,
    _arrButDay = {},
    _butQD = nil,
    _butClose = nil,
    _isSign =0,
}

local self = QiandaoPanel

function QiandaoPanel.Awake(obj)
    self.gameObject = obj
    self.transform = obj.transform
    self.LuaBehaviour = self.gameObject:GetComponent("LuaBehaviour")

    self.FindComponent()
    self.AddOnClickEvent()

    --resMgr:LoadPrefab("Person",{"FaceIconItem"},self.LoadFaceIconEnd);
end

function QiandaoPanel.LoadFaceIconEnd()
end

function QiandaoPanel.OnEnable(obj)
    self.SendGetData()
end

function QiandaoPanel.FindComponent()
    for i = 1, 7 do
        self._arrButDay[i] = self.transform:Find("Panel/qiandaoBox/ButDay" .. i).gameObject
    end
    self._butQD = self.transform:Find("Panel/qiandaoBox/ButtonQD").gameObject
    self._butClose = self.transform:Find("Panel/qiandaoBox/ButClose").gameObject
end

function QiandaoPanel.AddOnClickEvent()
    self.LuaBehaviour:AddClick(self._butQD,function()
        self.SendQDData()
        self.PlayAudio()
    end)
    self.LuaBehaviour:AddClick(self._butClose,function()
        CloseView("View/Qiandao")
        self.PlayExitAudio()
    end)
end

function QiandaoPanel.SendGetData()
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
    }
    local code = protobuf.encode("tutorial.Req21", ReqLoad)
    networkMgr:SendMessageBf(21, code)
    Event:Add("eventName21", self.Callback21)
end
function QiandaoPanel.Callback21(name, data)
    Event:Remove("eventName21", self.Callback21)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end
    print("已签到天数："..data.signedRow)
    print("今天是否可以签到："..data.isSignState)
    print("data.dayInfo数量："..#data.dayInfo)
    -- for k,v in pairs(data.dayInfo) do
    --     print("============="..v.imgUrl)
    -- end

    for i=1,#data.dayInfo do
        --加载图片
        coroutine.start(
        function()
            local imgUrl = data.dayInfo[i].imgUrl
            print(imgUrl)
            local wwwimg = WWW(imgUrl)
            coroutine.www(wwwimg)
            if wwwimg.error ~= "" and wwwimg.error ~= nil then
                return
            end
            local texture = wwwimg.texture
            self._arrButDay[i].transform:Find("Image"):GetComponent("Image").sprite = UnityEngine.Sprite.Create(texture, UnityEngine.Rect(0, 0, texture.width, texture.height), Vector2(0, 0))
        end)
        --标题
        self._arrButDay[i].transform:Find("txtAward"):GetComponent("Text").text = data.dayInfo[i].title
        
        --设置状态
        if i<=data.signedRow and i~=7 then
            self.SetDayStatus_2(i)
        elseif i~=7 then
            self.SetDayStatus_0(i)
        end
    end
     --当天可签到
     if data.isSignState==0 and data.signedRow<6 then
        self.SetDayStatus_1(data.signedRow+1)
        self._isSign=data.signedRow+1;
    end
end

--签到
function QiandaoPanel.SendQDData()
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
    }
    local code = protobuf.encode("tutorial.Req22", ReqLoad)
    networkMgr:SendMessageBf(22, code)
    Event:Add("eventName22", self.Callback22)
end
function QiandaoPanel.Callback22(name, data)
    Event:Remove("eventName22", self.Callback22)
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice", {text = GeLanguageById(tonumber(data.emsg))})
        return
    end

    local strAward = "恭喜获得"
    for k,v in pairs(data.data) do
        print("==k="..k.."v.goodsUnid="..v.goodsUnid..",v.goodsNum"..v.goodsNum)
        if v.goodsUnid=="0" then
            strAward = strAward..tostring(v.goodsNum).."金币 ";
        elseif v.goodsUnid=="1" then
            strAward = strAward..tostring(v.goodsNum).."钻石 ";
        elseif v.goodsUnid=="2" then
            strAward = strAward..tostring(v.goodsNum).."折扣券 ";
        elseif v.goodsUnid=="3" then
            strAward = strAward..tostring(v.goodsNum).."转盘次数 ";
        end
    end
    panelMgr:CreatePanel("View/Notice", {text = strAward,IsError = false})
    self.SetDayStatus_2(self._isSign)
end

--设置签到状态_未签到
function QiandaoPanel.SetDayStatus_0(index)
    print("----未签到index="..index)
    print(self._arrButDay[index].name)
    self._arrButDay[index]:GetComponent("Button").interactable = false;
    self._arrButDay[index].transform:Find("zhezhao").gameObject:SetActive(false)
end
--设置签到状态_可签到
function QiandaoPanel.SetDayStatus_1(index)
    self._arrButDay[index]:GetComponent("Button").interactable = true;
    self._arrButDay[index].transform:Find("zhezhao").gameObject:SetActive(false)
    self.LuaBehaviour:RemoveClick(self._arrButDay[index])
    self.LuaBehaviour:AddClick(self._arrButDay[index],function()
        self.SendQDData()
        self.PlayAudio()
    end)
end
--设置签到状态_已签到
function QiandaoPanel.SetDayStatus_2(index)
    self._arrButDay[index]:GetComponent("Button").interactable = false;
    self._arrButDay[index].transform:Find("zhezhao").gameObject:SetActive(true)
end

function QiandaoPanel.Jindu(v)
    self.JinduTiao:GetComponent("RectTransform").sizeDelta = Vector2(1185 * v, 22)
end

function QiandaoPanel.PlayAudio()
    local music = GolbalResource.Golbal_MusicResource["click"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
end

function QiandaoPanel.PlayExitAudio()
    local music = GolbalResource.Golbal_MusicResource["quite"]:GetComponent("AudioSource").clip
    soundMgr:PlayX(music)
end

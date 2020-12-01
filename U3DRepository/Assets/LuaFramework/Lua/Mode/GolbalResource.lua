local json = require "cjson"
GolbalResource = {};
GolbalResource.__index = GolbalResource;

GolbalResource.Golbal_MusicResource ={};

function GolbalResource.InitMusic()
    GolbalResource.LoadFaceMusicTable = {}; --音效名字表
    for k,v in pairs(conf_platform_music_max_get()) do  --conf_platform_music_max_get在platform_music.lua里面
        table.insert(GolbalResource.LoadFaceMusicTable,v.music_id);--根据配置文件加载音效名字
    end
    GolbalResource.Golbal_MusicResource = {};
    resMgr:LoadPrefab("HallMusic",GolbalResource.LoadFaceMusicTable,GolbalResource.LoadMusic);--加载音效预制件
end

function GolbalResource.LoadMusic(t)
    for i=0,#GolbalResource.LoadFaceMusicTable-1 do
        GolbalResource.Golbal_MusicResource[t[i].gameObject.name] = t[i].gameObject;
    end
    local PhoneAreaCode=  Resources.Load("PhoneAreaCode",typeof(TextAsset));
    GolbalResource.jsonData= json.decode(PhoneAreaCode.text)
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
    }
    local code = protobuf.encode("tutorial.Req0", ReqLoad)
    networkMgr:SendMessageBf(0, code)
    Event:Add("eventName0", GolbalResource.Callback0)
   
    --GolbalResource.InitImage(); 
end
function GolbalResource.Callback0(name, data)
     Event:Remove("eventName0", GolbalResource.Callback0)
    panelMgr:CreatePanel('View/Hall',data);
    GolbalResource.GameInitData=data
    GolbalResource.PayChannelList=data.payChannelList
    Game.GameList = data.gameClassList
    Game.ServiceCharge = data.serviceCharge
    Game.VipGradeSetup = data.vipGradeSetup
    GolbalResource.lineNoticeList={};
    for k,v in ipairs(data.lineNoticeList) do
        GolbalResource.lineNoticeList[v.msgid]=v;
     end
end
--[[function GolbalResource.InitImage()
    GolbalResource.LoadFaceImageTable = {};
    for k,v in pairs(conf_globalicon_max_get()) do
        table.insert(GolbalResource.LoadFaceImageTable,v.icon);
    end
    GolbalResource.Golbal_ImageResource = {};
    resMgr:LoadPrefab("GlobalImage",GolbalResource.LoadFaceImageTable,GolbalResource.LoadImage);
end

function GolbalResource.LoadImage(t)
    for i=0,#GolbalResource.LoadFaceImageTable-1 do
        GolbalResource.Golbal_ImageResource[t[i].gameObject.name] = t[i].gameObject;
    end
    GolbalResource.CallBack();
    --GolbalResource.InitHeadImage(); 
end]]--

--头像资源
--[[function GolbalResource.InitHeadImage()
    GolbalResource.LoadHeadImageTable = {};
    for k,v in pairs(conf_avataricon_max_get()) do
        table.insert(GolbalResource.LoadHeadImageTable,v.avatar_icon);
    end
    GolbalResource.GolbalHeadResource = {};
    resMgr:LoadPrefab("Heads",GolbalResource.LoadHeadImageTable,GolbalResource.LoadHeadImage);
end

function GolbalResource.LoadHeadImage(t)
    for i=0,#GolbalResource.LoadHeadImageTable-1 do
        GolbalResource.GolbalHeadResource[t[i].gameObject.name] = t[i].gameObject;
    end
    GolbalResource.CallBack();
end]]--
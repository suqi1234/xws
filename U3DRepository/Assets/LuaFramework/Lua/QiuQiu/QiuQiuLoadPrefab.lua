
require "Config/QiuQiu/QiuQiuInfo"
QiuQiuLoadPrefab={
    PokerPrefabs={},
    ClipPrefabs={},
    ScoreText="",
    PokerBack="",
    LoadEnd=false,
    Token="",
}
local self = QiuQiuLoadPrefab;
local PrefabName = {
    "Poker0",
    "Poker1",
    "Poker2",
    "Poker3",
    "Poker4",
    "Poker5",
    "Poker6",
    "Poker7",
    "Poker8",
    "Poker9",
    "Poker10",
    "Poker11",
    "Poker12",
    "Poker13",
    "Poker14",
    "Poker15",
    "Poker16",
    "Poker17",
    "Poker18",
    "Poker19",
    "Poker20",
    "Poker21",
    "Poker22",
    "Poker23",
    "Poker24",
    "Poker25",
    "Poker26",
    "Poker27",
    "PurpleChip_Image",
    "RedChip_Image",
    "GreenChip_Image",
    "ScoreText",
    "PokerBack"
}

function QiuQiuLoadPrefab.Init(GToken)
    self.Token=GToken
    resMgr:LoadPrefab("QiuQiuIcon",PrefabName,self.LoadPrefabEnd);
end

function QiuQiuLoadPrefab.LoadPrefabEnd(obj)
     for i = 0, #PrefabName - 1, 1 do
        if obj[i].gameObject.name=="PurpleChip_Image" or obj[i].gameObject.name=="RedChip_Image" or obj[i].gameObject.name=="GreenChip_Image" then
             self.ClipPrefabs[obj[i].gameObject.name] = obj[i].gameObject;
        elseif  obj[i].gameObject.name=="ScoreText" then
            self.ScoreText = obj[i].gameObject;
        elseif obj[i].gameObject.name=="PokerBack" then
                self.PokerBack = obj[i].gameObject;
        else
            self.PokerPrefabs[obj[i].gameObject.name] = obj[i].gameObject;
        end 
    end
    self.LoadEnd=true
    QiuQiuData.Send8401(self.Token)
end

function GetPokerPrefabSprite(PokerNumber)
   return self.PokerPrefabs[GetPokerIcon(PokerNumber).Icon]:GetComponent("SpriteRenderer").sprite;
end

function GetClipPrefab(Number)
    local Clip = self.ClipPrefabs["GreenChip_Image"]
    if Number > 10000 then
        Clip = self.ClipPrefabs["PurpleChip_Image"]
    elseif Number > 5000 then
        Clip = self.ClipPrefabs["RedChip_Image"]
    end
    return Clip;
end

function  GetScoreText()
    return self.ScoreText;
end

function  GetPokerBack()
    return self.PokerBack;
end

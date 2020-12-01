require "Common/define"
require "Common/functions"

QiuQiuCtrl = {
	GameMusicList = {};
    AudioSourceList={};
	QiuQiuMusicInitEnd = false;  --音效是否加载完成
	QiuQiuBGMMusicInitEnd = false; --的背景音乐是否加载完成
}
local self = QiuQiuCtrl;
local BGMMusic = {
    "bg",
}
local GameMusic = {
   
}
function QiuQiuCtrl.InitBGMMusic()
	if self.QiuQiuBGMMusicInitEnd then
		return;
	end
	resMgr:LoadPrefab("QiuQiuMusic",BGMMusic,self.LoadBGMMusic);
end

function QiuQiuCtrl.InitMusic()
	if self.QiuQiuMusicInitEnd then
		return;
	end
    resMgr:LoadPrefab("QiuQiuMusic",GameMusic,self.LoadMusic);
end

function QiuQiuCtrl.LoadMusic(Obj)
    for i=0,#GameMusic-1,1 do
    	--log("LoadMusic-------------------------------------("..Obj[i].gameObject.name);
        self.GameMusicList[Obj[i].gameObject.name] = Obj[i].gameObject;
    end
    self.QiuQiuMusicInitEnd = true;
    GameCallBack.CallFun("PlayQiuQiuEffectMusic"); --是否有在预制件加载前调用音效的播放
end

function QiuQiuCtrl.LoadBGMMusic(Obj)
    for i=0,#BGMMusic-1,1 do
    	--log("LoadMusic-------------------------------------("..Obj[i].gameObject.name);
        self.GameMusicList[Obj[i].gameObject.name] = Obj[i].gameObject;
    end
    self.QiuQiuBGMMusicInitEnd = true;
    GameCallBack.CallFun("PlayQiuQiuBGMMusic"); --播放回调
end

function QiuQiuCtrl.PlayQiuQiuEffectMusic(MusicName,time)
    local sequence = DG.Tweening.DOTween.Sequence()
    sequence:AppendInterval(time or 0)
    sequence:AppendCallback(
        function()
            if self.QiuQiuMusicInitEnd then  --如果音效加载未完成
                local music = self.GameMusicList[MusicName]:GetComponent("AudioSource").clip; --获取取播放器
                table.insert(self.AudioSourceList,soundMgr:PlayX(music)); --播放背景音效
            else
                GameCallBack.AddCallBack("PlayQiuQiuEffectMusic",self.PlayQiuQiuEffectMusic,MusicName); 
            end
        end
    )
end

function QiuQiuCtrl.PlayQiuQiuBGMMusic(MusicName)
	if self.QiuQiuBGMMusicInitEnd then
		local music = self.GameMusicList[MusicName]:GetComponent("AudioSource").clip;
	    soundMgr:PlayBacksoundAc(music,true);
	else
		GameCallBack.AddCallBack("PlayQiuQiuBGMMusic",self.PlayQiuQiuBGMMusic,MusicName);
	end
end

function QiuQiuCtrl.CloseAllEffectMusic()
       for k,v in ipairs(self.AudioSourceList)  do
            if not IsNil(v) then
            v:Stop();
            end
       end  
end
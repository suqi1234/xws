Player = {
	sessionId= 1,--登录id
	id = "",--唯一Id
	PhoneNum = "",
    IDCardNum = "",--身份证
	IsBankPassword = 1,
	avater=2,---头像
	name="",---昵称
    vip=4,---vip等级
	gold=-1,--- 金豆
	Diamonds = 0,--钻石
	gamelist = {},--游戏列表
	gameToken = "",
	bankGold = 0,
	Index = 0,
    ClassUnid = "",
    Sex = 0,--0女1男
    Lv = 0,
    Exp = 0,
    NeedExp = 0,
    MessageNotice = "",
    modelId = 0;
    Voucher = 0;
    PlayerType = 0;
    OpenRedPacket = 0;
    PriceSum = 0;
    ChangeHeadCount = 0;
    SignState = 0;
};
local self = Player;

------------广播消息相关---------------------------------------
function Player.Callback11(name, data)--金豆变化,ui改变
	if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice",{text = GeLanguageById(tonumber(data.emsg))});
        --error("emsg"..data.emsg)
        return;
    end
	Player.gold = data.integral;
	Player.Diamonds = data.moneyInt;

    Player.Lv = data.nowExpGrade;
    Player.Exp = data.expGradeAllInt - data.nextGradeNeedInt;
    Player.NeedExp = data.expGradeAllInt;
	Player.Voucher = data.voucherInt;
    log("Callback11-------------------------------------------------------------------integral("..data.integral..")moneyInt("..data.moneyInt);
	
    Event:Dispatch("ChangeGold",Player.gold);
	Event:Dispatch("ChangeDiamonds",Player.Diamonds);
    Event:Dispatch("ChangeLv", Player.Lv);
    Event:Dispatch("ChangeExp", Player.Exp);
    Event:Dispatch("ChangeVoucher", Player.Voucher);
end


function Player.Send18()
    -- 发送数据给服务器
    local t = parser.register("GamePlatfMsg.proto", Util.DataPath .. "lua/proto")
    local ReqLoad = {
    };
    local code = protobuf.encode("tutorial.Req18", ReqLoad)
    networkMgr:SendMessageBf(18, code);
    Event:Add("eventName18", self.Callback18);
end

--获取银行钱数
function Player.Callback18(name,data)
    Event:Remove("eventName18", self.Callback18);
    if data.state ~= 0 then
        panelMgr:CreatePanel("View/Notice",{text=data.emsg});
        --error("emsg"..data.emsg)
        return;
    end
    Player.bankGold = data.bankIntegral;
    panelMgr:CreatePanel("View/Bank",nil);--显示银行界面
end

namespace LuaFramework {
    public class Protocal {
        ///BUILD TABLE
        public const int Connect = 11001;     //连接服务器
        public const int Exception = 11002;     //异常掉线
        public const int Disconnect = 11003;     //正常断线   

        public const int WeiXinUserInfo = 1000004;        //获取微信信息
        public const int MessageBoxInfo = 1000005;        //提示信息
        public const int BuyGoodsSuccess = 1000006;        //购买成功
        public const int BuyGoodsFailed = 1000007;        //购买失败
        public const int OnWeiXinSuccess = 1000008;        //微信返回成功
        public const int OnWeiXinFailed = 1000009;        //微信返回失败
        public const int OnWeiXinCancel = 1000010;        //微信返回取消
        public const int OnlineState = 1000011;        //在线状态
        public const int WeiXinFreshHead = 1000012;        //微信刷新微信头像
        public const int WeiXinToken = 1000013;        //微信授权token
        public const int WeiXinPayNotify = 1000014;        //微信支付结果通知
        public const int OnWeiXinReturenCode = 1000015;        //微信返回code
    }
}
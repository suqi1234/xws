
namespace LuaFramework {
    public class Protocal {
        ///BUILD TABLE
        public const int Connect = 11001;     //���ӷ�����
        public const int Exception = 11002;     //�쳣����
        public const int Disconnect = 11003;     //��������   

        public const int WeiXinUserInfo = 1000004;        //��ȡ΢����Ϣ
        public const int MessageBoxInfo = 1000005;        //��ʾ��Ϣ
        public const int BuyGoodsSuccess = 1000006;        //����ɹ�
        public const int BuyGoodsFailed = 1000007;        //����ʧ��
        public const int OnWeiXinSuccess = 1000008;        //΢�ŷ��سɹ�
        public const int OnWeiXinFailed = 1000009;        //΢�ŷ���ʧ��
        public const int OnWeiXinCancel = 1000010;        //΢�ŷ���ȡ��
        public const int OnlineState = 1000011;        //����״̬
        public const int WeiXinFreshHead = 1000012;        //΢��ˢ��΢��ͷ��
        public const int WeiXinToken = 1000013;        //΢����Ȩtoken
        public const int WeiXinPayNotify = 1000014;        //΢��֧�����֪ͨ
        public const int OnWeiXinReturenCode = 1000015;        //΢�ŷ���code
    }
}
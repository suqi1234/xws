using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using LuaFramework;
using LuaInterface;
public class SocketCommand : ControllerCommand {

    public override void Execute(IMessage message) {
        object data = message.Body;
        if (data == null) return;
        KeyValuePair<int, ByteBuffer> buffer = (KeyValuePair<int, ByteBuffer>)data;
        /*switch (buffer.Key) {
            default: Util.CallMethod("Network", "OnSocket", buffer.Key, buffer.Value); break;
        }*/
        //Debug.LogWarning("key"+buffer.Key);
        if (buffer.Key >= 1000000)
        {
            Util.CallMethod("Network", "OnSocket", buffer.Key, 0, buffer.Value);
            return;
        }
        switch (buffer.Key)
        {
            case 11001:
                Util.CallMethod("Network", "OnSocket", buffer.Key, 0, buffer.Value);
                LuaHelper.GetNetManager().BeginSendHeart();
                break;
            case 11002:
            case 11003:
                //Debug.Log("close:" + buffer.Key);
                Util.CallMethod("Network", "OnSocket", buffer.Key, 0, buffer.Value);
                break;
            default:
               
                //int response = buffer.Value.ReadShort();
                byte[] bb = buffer.Value.ReadBytes1();
                //Debug.Log("close:" + buffer.Key+"|"+ response);
                Util.CallMethod("Network", "OnSocket", buffer.Key, 0, new LuaByteBuffer(bb));
                break;
        }
    }
}
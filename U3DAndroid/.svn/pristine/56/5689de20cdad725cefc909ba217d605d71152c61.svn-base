package com.qiqi.mylibrary;

import android.content.ClipData;
import android.content.ClipboardManager;
import android.content.Context;

public class UnityToAndroid {
    private Context context;
    public void Init(Context _context)
    {
        context = _context;
    }

    public void CopyTextToClipboard(String text) {
        ClipboardManager clipboardManager = (ClipboardManager) context.getSystemService(Context.CLIPBOARD_SERVICE);
        ClipData clipData = ClipData.newPlainText("text label", text);
        clipboardManager.setPrimaryClip(clipData);
    }
}

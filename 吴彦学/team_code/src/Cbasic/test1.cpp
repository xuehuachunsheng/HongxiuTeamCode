// GetDesktopWindow.cpp : 定义控制台应用程序的入口点。
#include "stdafx.h"
#define _AFXDLL
#include <afxwin.h>
// 何问起 hovertree.com
//错误    1   error C1189: #error :  Building MFC application with /MD[d] (CRT dll version) requires MFC shared dll version. 
//Please #define _AFXDLL or do not use /MD[d]   e:\programfilesx86\microsoftvisualstudio10\vc\atlmfc\include\afx.h  24  1   GetDesktopWindow

int _tmain(int argc, _TCHAR* argv[])
{
    //1.先获得桌面窗口
        CWnd* pDesktopWnd = CWnd::GetDesktopWindow();
    //2.获得一个子窗口
        CWnd* pWnd = pDesktopWnd->GetWindow(GW_CHILD);
    //3.循环取得桌面下的所有子窗口
        while(pWnd != NULL)
        {
            //获得窗口类名
            CString strClassName = _T("");
            ::GetClassName(pWnd->GetSafeHwnd(),strClassName.GetBuffer(256),256);

            //获得窗口标题
            CString strWindowText = _T("");
            ::GetWindowText(pWnd->GetSafeHwnd(),strWindowText.GetBuffer(256),256);

            //继续下一个子窗口
            pWnd = pWnd->GetWindow(GW_HWNDNEXT);
        }

    return 0;
}
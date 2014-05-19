#pragma once

class CMainWnd :
	public WindowImplBase
{
public:
	CMainWnd(void);
	~CMainWnd(void);

public:
    virtual LPCTSTR    GetWindowClassName() const   {   return _T("CMainWnd");  }
    virtual CDuiString GetSkinFile()                {   return _T("MainFrame.xml");  }
    virtual CDuiString GetSkinFolder()              {   return _T("");  }
};

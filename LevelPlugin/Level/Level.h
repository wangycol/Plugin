// Level.h : Level DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������
#include "LevelDlg.h"

// CLevelApp
// �йش���ʵ�ֵ���Ϣ������� Level.cpp
//

class CLevelApp : public CWinApp
{
public:
	CLevelApp();

private:
	CLevelDlg m_LevelDlg;

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
	afx_msg void OnImageLevel();
	afx_msg void OnUpdateImageLevel(CCmdUI* pCmdUI);
};
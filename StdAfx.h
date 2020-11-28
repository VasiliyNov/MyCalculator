// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)
#define AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_

#if _MSC_VER > 1000//контроль версии
#pragma once
#endif // _MSC_VER > 1000
//разрешает использовать вин заголовки
#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers

#include <windows.h>
#include <stdio.h>
#include <cstring>
#include <stack>

using namespace std;

#include "resource.h"
#include "Calc.h"

//#include <afxcontrolbars.h>

//LRESULT CALLBACK WFunc (HWND,UINT,WPARAM,LPARAM);
//буфер которым мы будем пользоваться
TCHAR str[256] = "";



BOOL CALLBACK DFunc(HWND, UINT, WPARAM, LPARAM);
 
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)

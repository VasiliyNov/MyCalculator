// stdafx.cpp : source file that includes just the standard includes
//	Sceleton.pch will be the pre-compiled header
//	stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

extern HINSTANCE hInst;


 
BOOL CALLBACK DFunc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	static HWND hEdit;
	static Calc calc;
	static string s;
	static bool bdot = true;
	static bool bmin = true;
	static bool bpl = false;

	static bool bx = false;
	static bool bl = false;

	

	switch (message)
	{
	case WM_INITDIALOG:
		hEdit = GetDlgItem(hDlg, IDC_EDIT1);
		SetFocus(hEdit);
		break;


	case WM_COMMAND:
		
		switch (LOWORD(wParam))
		{


//__________________________________________________________________________________________________________________________________________________________________________

		case IDC_BUTTON10:
			if (s == "0")
			{
				s = "1";
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
			}
			else
			{
				s.append("1");
				bpl = true;
				bmin = true;
				bx = true;
				bl = true;
			}
			SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());

			break;
//__________________________________________________________________________________________________________________________________________________________________________

		case IDC_BUTTON11:
			if (s == "0")
			{
				s = "2";
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
			}
			else
			{
				s.append("2");
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
			}

			SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());

			break;
//__________________________________________________________________________________________________________________________________________________________________________

		case IDC_BUTTON12:
			if (s == "0")
			{
				s = "3";
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
			}
			else
			{
				s.append("3");
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
			}

			SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());

			break;
//__________________________________________________________________________________________________________________________________________________________________________

		case IDC_BUTTON7:
			if (s == "0")
			{
				s = "4";
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
			}
			else
			{
				s.append("4");
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
			}
			SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());

			break;
//__________________________________________________________________________________________________________________________________________________________________________

		case IDC_BUTTON8:
			if (s == "0")
			{
				s = "5";
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
			}
			else
			{
				s.append("5");
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
			}

			SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());

			break;
//__________________________________________________________________________________________________________________________________________________________________________

		case IDC_BUTTON9:
			if (s == "0")
			{
				s = "6";
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
			}
			else
			{
				s.append("6");
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
			}

			SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());

			break;
//__________________________________________________________________________________________________________________________________________________________________________

		case IDC_BUTTON4:
			if (s == "0")
			{
				s = "7";
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
			}
			else
			{
				s.append("7");
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
			}

			SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());

			break;
//__________________________________________________________________________________________________________________________________________________________________________

		case IDC_BUTTON5:
			if (s == "0")
			{
				s = "8";
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
			}
			else
			{
				s.append("8");
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
			}

			SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());

			break;
//__________________________________________________________________________________________________________________________________________________________________________

		case IDC_BUTTON6:
			if (s == "0")
			{
				s = "9";
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
				
			}
			else
			{
				s.append("9");
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
				
			}

			SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());

			break;
//____________________________________________________________________0______________________________________________________________________________________________________

		case IDC_BUTTON19:                                
			//GetDlgItemText(hDlg, IDC_EDIT1, stmp1, 256);
			//SendMessage(hEdit, WM_GETTEXT, 256, (LPARAM)stmp1);
			

			if (s == "0")
			{
				s = "0";
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
				bdot = true;
			}
			else
			{
				s.append("0");
				bmin = true;
				bpl = true;
				bx = true;
				bl = true;
				bdot = true;
			}
			
			SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());

			break;
//______________________________________________________________________ ( ____________________________________________________________________________________________________

		case IDC_BUTTON2:
			if (s == "0")
			{
				s = "(";
				bmin = true;
				bdot = true;
				
			}
			else
			{
				s.append("(");
				bmin = true;
				bdot = true;
				
			}

			SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());

			break;
//_____________________________________________________________________________ ) _____________________________________________________________________________________________

		case IDC_BUTTON3:
			if (s == "0")
			{
				s = ")";
				bpl = true;
				bmin = true;
				bx = true;
				bl = true;
			}
			else
			{
				s.append(")");
				bpl = true;
				bmin = true;
				bx = true;
				bl = true;
				
			}

			SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());

			break;
//___________________________________________________________________________________ / _______________________________________________________________________________________

		case IDC_BUTTON15:

			if (s.length() != 0 && bl == true)
			{
				s.append("/");
				bdot = true;
				bmin = false;
				bpl = false;
				bx = false;
				bl = false;
				SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());
			}

			break;
//_______________________________________________________________________________________ * ___________________________________________________________________________________

		case IDC_BUTTON16:
			
			if (s.length() != 0 && bx == true)
			{
				s.append("*");
				bdot = true;
				bpl = false;
				bmin = false;
				bx = false;
				bl = false;
				SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());
			}

			break;
//___________________________________________________________________________________________ - _______________________________________________________________________________

		case IDC_BUTTON17:
			if (bmin == true)
			{
				s.append("-");
				bmin = false;
				bpl = false;
				bx = false;
				bl = false;
				bdot = true;
				SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());
			}
			break;
//_____________________________________________________________________________________________ + _____________________________________________________________________________

		case IDC_BUTTON18:
			if (s.length() != 0 && bpl == true)
			{
				s.append("+");
				bdot = true;
				bmin = false;
				bpl = false;
				bx = false;
				bl = false;
				SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());
			}
			
			break;
//_______________________________________________________________________ dot ___________________________________________________________________________________________________
		case IDC_BUTTON20:
			if (bdot == true)
			{
				s.append(".");
				bdot = false;
				bmin = false;
				bpl = false;
				bx = false;
				bl = false;
				SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());
			}
			
			

			break;
//____________________________________________________________ = ____________________________________________________________________________________________________________________________
		case IDC_BUTTON21:
			s.append("=");								
			SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());

			
			s+=calc.Ulator(s);
			SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());

			s = "";
			bmin = true;
			bpl = true;
			bx = true;
			bl = true;
			bdot = true;
			break;
//_____________________________________________________________________________________________________________________________________________________________________________________________
		case IDC_BUTTON13:
			s="";
			bmin = true;
			bpl = true;
			bx = true;
			bl = true;
			bdot = true;
			SetDlgItemText(hDlg, IDC_EDIT1, s.c_str());

			break;
//__________________________________________________________________________________________________________________________________________________________________________


		default:
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hDlg, 0);
		PostQuitMessage(0);
		break;
	}
	return FALSE;
}
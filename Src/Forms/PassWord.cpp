//---------------------------------------------------------------------
#include <vcl.h>
#include <System.Hash.hpp>
#pragma hdrstop

#include "PassWord.h"
#include "Tables.h"
//---------------------------------------------------------------------
#pragma resource "*.dfm"
TPasswordDlg *PasswordDlg;
//---------------------------------------------------------------------
__fastcall TPasswordDlg::TPasswordDlg(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------
void __fastcall TPasswordDlg::CancelBtnClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TPasswordDlg::FormCreate(TObject *Sender)
{
	//THashMD5::GetHashString("master") = eb0a191797624dd3a48fa681d3061212
	this->Authorized = false;
}
//---------------------------------------------------------------------------

void __fastcall TPasswordDlg::OKBtnClick(TObject *Sender)
{

	String login = QuotedStr(Trim(LowerCase(EdtLogin->Text)));
	String pwd = QuotedStr(THashMD5::GetHashString(Password->Text));

	LblMsg->Caption = EmptyStr;

	DmTables->dboUsers->Open();
	DmTables->dboUsers->Filtered = false;
	DmTables->dboUsers->Filter = "Login  = " + login + " AND " +
								 "Password = " + pwd;
	DmTables->dboUsers->Filtered = true;

	if (DmTables->dboUsers->RecNo > 0)
	{
		this->Authorized = true;
		DmTables->UserName = DmTables->dboUsers->FieldByName("Name")->AsString;
	}
	else
	{
		LblMsg->Caption = "Login e/ou senha inválidos";
	}

	DmTables->dboUsers->Close();

	if (this->Authorized) Close();
}
//---------------------------------------------------------------------------

void __fastcall TPasswordDlg::FormShow(TObject *Sender)
{
	LblMsg->Caption = EmptyStr;
}
//---------------------------------------------------------------------------

void __fastcall TPasswordDlg::PasswordKeyPress(TObject *Sender, System::WideChar &Key)

{
	if (Key == 13) OKBtnClick(this);
}
//---------------------------------------------------------------------------

void __fastcall TPasswordDlg::EdtLoginKeyPress(TObject *Sender, System::WideChar &Key)

{
	if (Key == 13) Password->SetFocus();
}
//---------------------------------------------------------------------------


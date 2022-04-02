//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmMain *FrmMain;
//---------------------------------------------------------------------------
__fastcall TFrmMain::TFrmMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmMain::AcSairExecute(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void TFrmMain::SetMainStatusBarWidth()
{
	MainStatusBar->Panels->Items[0]->Width = 25;

	MainStatusBar->Panels->Items[1]->Width = FrmMain->Width - 365; //Hints

	MainStatusBar->Panels->Items[2]->Width = 37; //FLTR
	MainStatusBar->Panels->Items[3]->Width = 37;
	MainStatusBar->Panels->Items[4]->Width = 37; //EXT
	MainStatusBar->Panels->Items[5]->Width = 37; //CAPS
	MainStatusBar->Panels->Items[6]->Width = 37;
	MainStatusBar->Panels->Items[7]->Width = 37; //NUM
	MainStatusBar->Panels->Items[8]->Width = 37; //SCRL
	MainStatusBar->Panels->Items[9]->Width = 37; //OVR

	MainStatusBar->Panels->Items[10]->Width = 25;
}
//---------------------------------------------------------------------------
void __fastcall TFrmMain::FormShow(TObject *Sender)
{
	SetMainStatusBarWidth();
}
//---------------------------------------------------------------------------
void __fastcall TFrmMain::FormResize(TObject *Sender)
{
	SetMainStatusBarWidth();
    MainStatusBar->Panels->Items[1]->Text = " Pronto";
}
//---------------------------------------------------------------------------
void __fastcall TFrmMain::ApplicationEventsIdle(TObject *Sender, bool &Done)
{
	ProcessKeyStates();
}
//---------------------------------------------------------------------------
void TFrmMain::ProcessKeyStates()
{
	//MainStatusBar->Panels->Items[4]->Text = ((GetKeyState(VK_F8) & 0x0001)!=0) ? "EXT" : "";
	MainStatusBar->Panels->Items[5]->Text = ((GetKeyState(VK_CAPITAL) & 0x0001)!=0) ? "CAPS" : "";
	MainStatusBar->Panels->Items[7]->Text = ((GetKeyState(VK_NUMLOCK) & 0x0001)!=0) ? "NUM" : "";
	MainStatusBar->Panels->Items[8]->Text = ((GetKeyState(VK_SCROLL) & 0x0001)!=0) ? "SCRL" : "";
	MainStatusBar->Panels->Items[9]->Text = ((GetKeyState(VK_INSERT) & 0x0001)!=0) ? "OVR" : "";
}
//---------------------------------------------------------------------------

void __fastcall TFrmMain::ApplicationEventsHint(TObject *Sender)
{
	MainStatusBar->Panels->Items[1]->Text = " " + Application->Hint;
}
//---------------------------------------------------------------------------


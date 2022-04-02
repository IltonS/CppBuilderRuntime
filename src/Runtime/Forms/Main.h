//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ToolWin.hpp>
#include <System.Classes.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.AppEvnts.hpp>
//---------------------------------------------------------------------------
class TFrmMain : public TForm
{
__published:	// IDE-managed Components
	TStatusBar *MainStatusBar;
	TPanel *PnlMainMenuToolBar;
	TToolBar *MainMenuToolBar;
	TToolButton *ToolButton1;
	TMainMenu *MainMenu;
	TMenuItem *Arquivo1;
	TMenuItem *N1;
	TMenuItem *Sair1;
	TActionList *MainMenuActionList;
	TAction *AcSair;
	TApplicationEvents *ApplicationEvents;
	void __fastcall AcSairExecute(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall ApplicationEventsIdle(TObject *Sender, bool &Done);
	void __fastcall ApplicationEventsHint(TObject *Sender);
private:	// User declarations
	void SetMainStatusBarWidth();
    void ProcessKeyStates();
public:		// User declarations
	__fastcall TFrmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmMain *FrmMain;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Master.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmMaster *FrmMaster;
//---------------------------------------------------------------------------
__fastcall TFrmMaster::TFrmMaster(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmMaster::FormShow(TObject *Sender)
{
	//Hide all pages and show main
	for(int page=0; page < PageControl->PageCount; page++)
	{
		PageControl->Pages[page]->TabVisible = False;
	}

	PageControl->ActivePage = TsMain;
}
//---------------------------------------------------------------------------
void __fastcall TFrmMaster::FormCreate(TObject *Sender)
{
	PnlMainButtons->ParentColor = True;

	//TsMain
	PnlBtnFile->Color = MAIN_COLOR;
	BtnFile->Font->Color = clWhite;

	//TsFile
	PnlLeftBar->Color = MAIN_COLOR;

	PnlPaddingTop->Color = MAIN_COLOR;
	PnlPaddingBottom->Color = MAIN_COLOR;

	PnlVoltar->Color = MAIN_COLOR;

	PnlSair->Color = MAIN_COLOR;
	PnlSair->Font->Color = clWhite;
}
//---------------------------------------------------------------------------
void __fastcall TFrmMaster::BtnFileClick(TObject *Sender)
{
	PageControl->ActivePage = TsFile;
}
//---------------------------------------------------------------------------
void __fastcall TFrmMaster::PnlSairClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrmMaster::VoltarClick(TObject *Sender)
{
	PageControl->ActivePage = TsMain;
}
//---------------------------------------------------------------------------
void __fastcall TFrmMaster::SetDarkBackground(TObject *Sender)
{
	TPanel *panel = static_cast<TPanel *>(Sender);
	panel->Color = MAIN_COLOR_10P_DARK;
}
//---------------------------------------------------------------------------
void __fastcall TFrmMaster::SetNormalBackground(TObject *Sender)
{
    TPanel *panel = static_cast<TPanel *>(Sender);
	panel->Color = MAIN_COLOR;
}
//---------------------------------------------------------------------------


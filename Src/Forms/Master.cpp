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

	ToolBar->HotTrackColor = HOT_TRACK_COLOR;

	PnlStatusBar->Color = MAIN_COLOR;
	PnlStatusBar->Font->Color = clWhite;

	//TsFile
	PnlLeftBar->Color = MAIN_COLOR;

	PnlPaddingTop->Color = MAIN_COLOR;
	PnlPaddingBottom->Color = MAIN_COLOR;

	PnlVoltar->Color = MAIN_COLOR;

	PnlLineTop->Color = clWhite;
	PnlLineTop->Height = 1;

	//Custom Actions------------------------------------------------------------
	//Hide all action pages and show first
	for(int page=0; page < PcAcoes->PageCount; page++)
	{
		PcAcoes->Pages[page]->TabVisible = False;
	}
	PcAcoes->ActivePageIndex = 0;

	PnlAcao1->Color = MAIN_COLOR;
	PnlAcao1->Font->Color = clWhite;

	PnlAcao2->Color = MAIN_COLOR;
	PnlAcao2->Font->Color = clWhite;

	//--------------------------------------------------------------------------

	PnlLineBottom->Color = clWhite;
	PnlLineBottom->Height = 1;

	PnlSobre->Color = MAIN_COLOR;
	PnlSobre->Font->Color = clWhite;

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


void __fastcall TFrmMaster::PnlSobreClick(TObject *Sender)
{
	AboutBox = new TAboutBox(this);
	AboutBox->ShowModal();
    delete AboutBox;
}
//---------------------------------------------------------------------------


void __fastcall TFrmMaster::ImgBackArrowMouseEnter(TObject *Sender)
{
    SetDarkBackground(PnlVoltar);
}
//---------------------------------------------------------------------------

void __fastcall TFrmMaster::ImgBackArrowMouseLeave(TObject *Sender)
{
    SetNormalBackground(PnlVoltar);
}
//---------------------------------------------------------------------------

void __fastcall TFrmMaster::Action1Execute(TObject *Sender)
{
    //Do Something
}
//---------------------------------------------------------------------------

void __fastcall TFrmMaster::Action2Execute(TObject *Sender)
{
    //Do something
}
//---------------------------------------------------------------------------


void __fastcall TFrmMaster::TimerTimer(TObject *Sender)
{
    PnlTimer->Caption = FormatDateTime("dd/mm/yyyy hh:mm:ss", Now());
}
//---------------------------------------------------------------------------

void __fastcall TFrmMaster::PnlAcao1Click(TObject *Sender)
{
    PcAcoes->ActivePageIndex = 0;
}
//---------------------------------------------------------------------------

void __fastcall TFrmMaster::PnlAcao2Click(TObject *Sender)
{
	PcAcoes->ActivePageIndex = 1;
}
//---------------------------------------------------------------------------


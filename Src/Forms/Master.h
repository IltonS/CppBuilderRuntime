//---------------------------------------------------------------------------

#ifndef MasterH
#define MasterH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
#include <RuntimeColors.h>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFrmMaster : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControl;
	TTabSheet *TsFile;
	TTabSheet *TsMain;
	TPanel *PnlMainButtons;
	TPanel *PnlBtnFile;
	TSpeedButton *BtnFile;
	TPanel *PnlLeftBar;
	TPanel *PnlPaddingBottom;
	TPanel *PnlSair;
	TPanel *PnlVoltar;
	TImage *Image1;
	TPanel *PnlPaddingTop;
	void __fastcall VoltarClick(TObject *Sender);
	void __fastcall SetDarkBackground(TObject *Sender);
	void __fastcall SetNormalBackground(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall BtnFileClick(TObject *Sender);
	void __fastcall PnlSairClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmMaster(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmMaster *FrmMaster;
//---------------------------------------------------------------------------
#endif

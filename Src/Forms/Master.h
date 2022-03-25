//---------------------------------------------------------------------------

#ifndef MasterH
#define MasterH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <About.h>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <System.SysUtils.hpp>
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
	TImage *ImgBackArrow;
	TPanel *PnlPaddingTop;
	TPanel *PnlSobre;
	TPanel *PnlLineBottom;
	TPanel *PnlLineTop;
	TPanel *PnlToolBar;
	TToolBar *ToolBar;
	TActionManager *ActionManager;
	TAction *Action1;
	TAction *Action2;
	TImageList *ImgLstToolBar;
	TToolButton *ToolButton1;
	TToolButton *ToolButton2;
	TPanel *PnlLineTopToolBar;
	TPanel *PnlStatusBar;
	TPanel *PnlTimer;
	TTimer *Timer;
	TPageControl *PcAcoes;
	TTabSheet *TsAcao1;
	TTabSheet *TsAcao2;
	TPanel *PnlAcao2;
	TPanel *PnlAcao1;
	TLabel *Label1;
	TLabel *Label2;
	TPanel *PnlUserName;
	void __fastcall VoltarClick(TObject *Sender);
	void __fastcall SetDarkBackground(TObject *Sender);
	void __fastcall SetNormalBackground(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall BtnFileClick(TObject *Sender);
	void __fastcall PnlSairClick(TObject *Sender);
	void __fastcall PnlSobreClick(TObject *Sender);
	void __fastcall ImgBackArrowMouseEnter(TObject *Sender);
	void __fastcall ImgBackArrowMouseLeave(TObject *Sender);
	void __fastcall Action1Execute(TObject *Sender);
	void __fastcall Action2Execute(TObject *Sender);
	void __fastcall TimerTimer(TObject *Sender);
	void __fastcall PnlAcao1Click(TObject *Sender);
	void __fastcall PnlAcao2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmMaster(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmMaster *FrmMaster;
//---------------------------------------------------------------------------
#endif

//----------------------------------------------------------------------------
#ifndef PassWordH
#define PassWordH
//----------------------------------------------------------------------------
#include <Vcl.Buttons.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <System.hpp>
#include <Vcl.ExtCtrls.hpp>
//----------------------------------------------------------------------------
class TPasswordDlg : public TForm
{
__published:
	TLabel *Label1;
	TEdit *Password;
	TButton *OKBtn;
	TButton *CancelBtn;
	TLabel *Label2;
	TImage *ImgLogo;
	TLabel *LblMsg;
	TEdit *EdtLogin;
	void __fastcall CancelBtnClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall OKBtnClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall PasswordKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall EdtLoginKeyPress(TObject *Sender, System::WideChar &Key);
private:
public:
	bool Authorized;
	virtual __fastcall TPasswordDlg(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TPasswordDlg *PasswordDlg;
//----------------------------------------------------------------------------
#endif    

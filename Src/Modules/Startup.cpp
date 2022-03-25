//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Startup.h"
#include "Master.h"
#include "Tables.h"
#include "PassWord.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void auto_exec()
{
	Application->CreateForm(__classid(TFrmMaster), &FrmMaster);
	Application->ShowMainForm = false;

	Application->CreateForm(__classid(TDmTables), &DmTables);
	DmTables->FDConnection->Open();

	if (DmTables->RequireAuth)
	{
		PasswordDlg = new TPasswordDlg(FrmMaster);
		PasswordDlg->ShowModal();

		if (PasswordDlg->Authorized)
		{
			FrmMaster->Visible = true;
		}
		else
		{
			Application->Terminate();
		}

		delete PasswordDlg;
	}
	else
	{
		FrmMaster->Visible = true;
	}


}

//---------------------------------------------------------------------------


#pragma hdrstop

#include "Tables.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TDmTables *DmTables;
//---------------------------------------------------------------------------
__fastcall TDmTables::TDmTables(TComponent* Owner)
	: TDataModule(Owner)
{
    this->RequireAuth = true;
}
//---------------------------------------------------------------------------

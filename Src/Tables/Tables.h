//---------------------------------------------------------------------------

#ifndef TablesH
#define TablesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.SQLite.hpp>
#include <FireDAC.Phys.SQLiteDef.hpp>
#include <FireDAC.Phys.SQLiteWrapper.Stat.hpp>
#include <FireDAC.Stan.ExprFuncs.hpp>
#include <FireDAC.Stan.Param.hpp>
//---------------------------------------------------------------------------
class TDmTables : public TDataModule
{
__published:	// IDE-managed Components
	TFDConnection *FDConnection;
	TFDPhysSQLiteDriverLink *FDPhysSQLiteDriverLink;
	TFDTable *dboUsers;
private:	// User declarations
public:		// User declarations

	bool RequireAuth;
    String UserName;
	__fastcall TDmTables(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDmTables *DmTables;
//---------------------------------------------------------------------------
#endif
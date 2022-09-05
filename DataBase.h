//---------------------------------------------------------------------------

#ifndef DataBaseH
#define DataBaseH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <IBX.IBCustomDataSet.hpp>
#include <IBX.IBDatabase.hpp>
#include <IBX.IBQuery.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TIBDatabase *IBDatabase;
	TIBTransaction *IBTransaction;
	TIBQuery *IBQuery;
	TDBGrid *DBGrid;
	TDataSource *DataSource;
	TMemo *Memo;
	TButton *ButtonEnter;
	TButton *ButtonClearC;
	TButton *StandartInsert;
	TButton *DeleteRow;
	TButton *EditField;
	TEdit *EditTask;
	TLabel *LabelT;
	TButton *TaskB;
	TButton *ShowDB;
	void __fastcall ButtonEnterClick(TObject *Sender);
	void __fastcall ButtonClearCClick(TObject *Sender);
	void __fastcall StandartInsertClick(TObject *Sender);
	void __fastcall DeleteRowClick(TObject *Sender);
	void __fastcall EditFieldClick(TObject *Sender);
	void __fastcall TaskBClick(TObject *Sender);
	void __fastcall ShowDBClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DataBase.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Memo->Text = "SELECT * from Clients";
	IBQuery->SQL->Add(Memo->Text);
	IBQuery->Open();
	Memo->Text = "";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ButtonEnterClick(TObject *Sender)
{
	if(Memo->Text=="")   {ShowMessage("Not query!");  return;}
	else
	{
		//отменить предыдущий запрос
		IBQuery->Close();
		//очистить свойство SQL
		IBQuery->SQL->Clear();
		//записать свойство SQL
		IBQuery->SQL->Add(Memo->Text);
		//выполнить команду SQL
		IBQuery->Open();
		//Повторяем тоже самое сразу, чтобы база данных отобразилась сразу с изменениями
		IBQuery->Close();
		IBQuery->SQL->Clear();
		IBQuery->SQL->Add("SELECT * from Clients");
		IBQuery->Open();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonClearCClick(TObject *Sender)
{
	Memo->Text = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StandartInsertClick(TObject *Sender)
{
	Memo->Text = "INSERT INTO Clients VALUES ('Example', '89555555555','01.01.77', '01.01.78', 50, 14);";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeleteRowClick(TObject *Sender)
{
	Memo->Text = "DELETE FROM Clients WHERE Phone = '89555554555';";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditFieldClick(TObject *Sender)
{
	Memo->Text = "UPDATE  Clients  SET  Second_Name = 'NoExample'  WHERE Credit_A = 14;";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TaskBClick(TObject *Sender)
{
	Memo->Text = "";
	IBQuery->Close();
	IBQuery->SQL->Clear();
	IBQuery->SQL->Add("SELECT * FROM Clients WHERE A_Owed < " + EditTask->Text + ";");
	IBQuery->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ShowDBClick(TObject *Sender)
{
	Memo->Text = "";
	IBQuery->Close();
	IBQuery->SQL->Clear();
	IBQuery->SQL->Add("SELECT * from Clients");
	IBQuery->Open();
}
//---------------------------------------------------------------------------

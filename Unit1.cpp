//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}



//---------------------------------------------------------------------------
void __fastcall TForm1::Button13Click(TObject *Sender)
{
	AnsiString num11 = edt1 ->Text;
	AnsiString num22 = edt2 ->Text;

	num1 = StrToInt(num11);
	num2 = StrToInt(num22);

	total = num1 / num2;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button16Click(TObject *Sender)
{
	AnsiString num11 = edt1 ->Text;
	AnsiString num22 = edt2 ->Text;

	num1 = StrToInt(num11);
	num2 = StrToInt(num22);

	total = num1 + num2;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button14Click(TObject *Sender)
{
	AnsiString num11 = edt1 ->Text;
	AnsiString num22 = edt2 ->Text;

	num1 = StrToInt(num11);
	num2 = StrToInt(num22);

	total = num1 - num2;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button15Click(TObject *Sender)
{
	AnsiString num11 = edt1 ->Text;
	AnsiString num22 = edt2 ->Text;

	num1 = StrToInt(num11);
	num2 = StrToInt(num22);

	total = num1 * num2;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	int num1 = 0;
	int num2 = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnEqualClick(TObject *Sender)
{
	AnsiString t = IntToStr(total);

	ShowMessage(t);

	edt1 ->Text = "";
    edt2 ->Text = "";
}
//---------------------------------------------------------------------------

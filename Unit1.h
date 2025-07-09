//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button13;
	TButton *Button14;
	TButton *Button15;
	TButton *Button16;
	TEdit *edt1;
	TEdit *edt2;
	TLabel *Label1;
	TLabel *Label2;
	TButton *btnEqual;
	void __fastcall Button13Click(TObject *Sender);
	void __fastcall Button16Click(TObject *Sender);
	void __fastcall Button14Click(TObject *Sender);
	void __fastcall Button15Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall btnEqualClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);

		int num1;
	int num2 ;
    int total;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

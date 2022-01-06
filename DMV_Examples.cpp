//---------------------------------------------------------------------------

#pragma hdrstop

#include "DMV_Examples.h"
#include "FMV_LoginExamples.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma link "VCL_NNConfig"
#pragma link "VCL_NNDmRes"
#pragma link "VCL_NNRightsManager"
#pragma resource "*.dfm"

TdmvExamples *dmvExamples;

//---------------------------------------------------------------------------
__fastcall TdmvExamples::TdmvExamples( TComponent* Owner )
  : inherited( Owner )
{
}
//---------------------------------------------------------------------------

void __fastcall TdmvExamples::dmvResCreate( TObject *Sender )
{
  fmvLoginExamples = new TfmvLoginExamples( Application );
  fmvLoginExamples->ShowFormLogin( conDB );
}
//---------------------------------------------------------------------------

void __fastcall TdmvExamples::conDBAfterConnect( TObject *Sender )
{
  //rmTest->Reload();
}
//---------------------------------------------------------------------------


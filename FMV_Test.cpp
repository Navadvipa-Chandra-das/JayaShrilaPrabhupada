//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FMV_Test.h"
#include "VCL_NNFmLogin.h"
#include "FMV_Examples.h"
#include "VCL_NNDmvNizhnyayaNavadvipa.h"
#include "DMV_Examples.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VCL_NNDBGrid"
#pragma link "VCL_NNStoryData"
#pragma link "VCL_NNConfig"
#pragma link "VCL_NNFlagBox"
#pragma link "VCL_NNFmRes"
#pragma link "VCL_NNRightsManager"
#pragma link "frxClass"
#pragma link "VCL_NNActionList"
#pragma resource "*.dfm"
TfmTestVCL *fmTestVCL;
//---------------------------------------------------------------------------
__fastcall TfmTestVCL::TfmTestVCL( TComponent* Owner )
  : inherited( Owner )
{
}
//---------------------------------------------------------------------------

void __fastcall TfmTestVCL::alExamplesExecute(TObject *Sender)
{
  NNV::FormCreate( __classid( TfmvExamples ), &fmvExamples );
  NNV::FormShow( fmvExamples );
}
//---------------------------------------------------------------------------

void __fastcall TfmTestVCL::aChangePassordExecute( TObject *Sender )
{
  dmvExamples->ChangePassword();
}
//---------------------------------------------------------------------------

void __fastcall TfmTestVCL::aFormListShowExecute( TObject *Sender )
{
  NNV::FormListShow();
}
//---------------------------------------------------------------------------


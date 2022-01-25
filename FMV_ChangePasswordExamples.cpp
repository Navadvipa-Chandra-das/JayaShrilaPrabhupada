//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FMV_ChangePasswordExamples.h"
#include "DMV_Examples.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VCL_NNActionList"
#pragma link "VCL_NNConfig"
#pragma link "VCL_NNFlagBox"
#pragma link "VCL_NNFmvChangePassord"
#pragma link "VCL_NNRightsManager"
#pragma resource "*.dfm"
TfmvChangePasswordExamples *fmvChangePasswordExamples;
//---------------------------------------------------------------------------
__fastcall TfmvChangePasswordExamples::TfmvChangePasswordExamples(TComponent* Owner)
  : TfmvChangePassword(Owner)
{
}
//---------------------------------------------------------------------------

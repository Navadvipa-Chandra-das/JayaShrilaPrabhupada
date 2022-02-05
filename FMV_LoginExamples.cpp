//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FMV_LoginExamples.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VCL_NNFmLogin"
#pragma link "VCL_NNFrLogin"
#pragma link "VCL_NNConfig"
#pragma link "VCL_NNFlagBox"
#pragma link "VCL_NNRightsManager"
#pragma link "VCL_NNActionList"
#pragma resource "*.dfm"
TfmvLoginExamples *fmvLoginExamples;
//---------------------------------------------------------------------------
__fastcall TfmvLoginExamples::TfmvLoginExamples( TComponent* Owner )
  : inherited( Owner )
{
}
//---------------------------------------------------------------------------


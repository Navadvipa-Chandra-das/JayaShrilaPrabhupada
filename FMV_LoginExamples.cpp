//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FMV_LoginExamples.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VCL_NNFmvLogin"
#pragma link "VCL_NNFrmLogin"
#pragma link "VCL_NNConfig"
#pragma link "VCL_NNFlagBox"
#pragma link "VCL_NNRightsManager"
#pragma resource "*.dfm"
TfmvLoginExamples *fmvLoginExamples;
//---------------------------------------------------------------------------
__fastcall TfmvLoginExamples::TfmvLoginExamples(TComponent* Owner)
  : inherited( Owner )
{
}
//---------------------------------------------------------------------------

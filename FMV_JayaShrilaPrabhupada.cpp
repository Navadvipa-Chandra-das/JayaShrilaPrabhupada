//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FMV_JayaShrilaPrabhupada.h"
#include "VCL_NNFmLogin.h"
#include "FMV_Explorer.h"
#include "VCL_NNDmvNizhnyayaNavadvipa.h"
#include "DMV_JayaShrilaPrabhupada.h"
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
TfmvJayaShrilaPrabhupada *fmvJayaShrilaPrabhupada;
//---------------------------------------------------------------------------
__fastcall TfmvJayaShrilaPrabhupada::TfmvJayaShrilaPrabhupada( TComponent* Owner )
  : inherited( Owner )
{
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::alExamplesExecute(TObject *Sender)
{
  NNV::FormCreate( __classid( TfmvExplorer ), &fmvExplorer );
  NNV::FormShow( fmvExplorer );
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::aChangePassordExecute( TObject *Sender )
{
  dmvJayaShrilaPrabhupada->ChangePassword( this );
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::aFormListShowExecute( TObject *Sender )
{
  NNV::FormListShow();
}
//---------------------------------------------------------------------------


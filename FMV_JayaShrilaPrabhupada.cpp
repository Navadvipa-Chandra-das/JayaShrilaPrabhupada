//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FMV_JayaShrilaPrabhupada.h"
#include "VCL_NNFmLogin.h"
#include "FMV_Explorer.h"
#include "VCL_NNDmvNizhnyayaNavadvipa.h"
#include "DMV_JayaShrilaPrabhupada.h"
#include "VCL_NNFormHistory.h"
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
  dmvNizhnyayaNavadvipa->ChangePassword( this );
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::aFormListShowExecute( TObject *Sender )
{
  NNV::FormListShow();
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::aCurrentMainExecute(TObject *Sender)
{
  if( Screen->ActiveForm == this ) {
    if( NNVConst::FormBack ) {
      if( NNVConst::FormBack->WindowState == wsMinimized )
        NNVConst::FormBack->WindowState = wsNormal;
      NNVConst::FormBack->Show();
    }
  } else
    Show();
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::aFormPrevExecute(TObject *Sender)
{
  NNV::FormHistory.Prev();
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::aFormNextExecute(TObject *Sender)
{
  NNV::FormHistory.Next();
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::aFormCyclePrevExecute(TObject *Sender)
{
  NNV::FormCycle.Prev();
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::aFormCycleNextExecute(TObject *Sender)
{
  NNV::FormCycle.Next();
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::aFormPrevUpdate(TObject *Sender)
{
  aFormPrev->Enabled = !NNV::FormHistory.Bof();
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::aFormNextUpdate(TObject *Sender)
{
  aFormNext->Enabled = !NNV::FormHistory.Eof();
}
//---------------------------------------------------------------------------


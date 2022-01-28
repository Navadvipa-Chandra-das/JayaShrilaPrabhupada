//---------------------------------------------------------------------------

#pragma hdrstop

#include "DMV_Examples.h"
#include "FMV_LoginExamples.h"
#include "VCL_NNDmvNizhnyayaNavadvipa.h"
#include "FMV_ChangePasswordExamples.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma link "VCL_NNConfig"
#pragma link "VCL_NNDmRes"
#pragma link "VCL_NNRightsManager"
#pragma link "VCL_NNDBTreeView"
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
  // чтение из базы данных возможно только после соединения с ней!
  inherited::dmvResCreate( Sender );
}
//---------------------------------------------------------------------------

void __fastcall TdmvExamples::conDBAfterConnect( TObject *Sender )
{
  //rmTest->Reload();
}
//---------------------------------------------------------------------------

void __fastcall TdmvExamples::SetNodeParamsCommodKind( TNNVNodeParams &NodeParams )
{
  NodeParams.Text = quCommodKindKind->DisplayText;

  if( quCommodKindActual->AsBoolean ) {
    NodeParams.ImageIndex    = (int)NNV::TImagesKind::imCommod;
    NodeParams.SelectedIndex = (int)NNV::TImagesKind::imCommod;
  } else {
    NodeParams.ImageIndex    = (int)NNV::TImagesKind::imCommodNA;
    NodeParams.SelectedIndex = (int)NNV::TImagesKind::imCommodNA;
  }
}

void __fastcall TdmvExamples::conDBBeforeConnect( TObject *Sender )
{
  //conDB->Params->Password = NNV::CriptPassword( conDB->Params->Password );
}
//---------------------------------------------------------------------------

void __fastcall TdmvExamples::ChangePassword()
{
  fmvChangePasswordExamples = new TfmvChangePasswordExamples( Application );
  //fmvChangePassword->ShowFormLogin( conDB );
  fmvChangePasswordExamples->ShowModal();
}
//---------------------------------------------------------------------------


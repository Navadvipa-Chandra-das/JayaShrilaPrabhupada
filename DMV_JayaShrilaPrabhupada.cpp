//---------------------------------------------------------------------------

#pragma hdrstop

#include "DMV_JayaShrilaPrabhupada.h"
#include "FMV_LoginJayaShrilaPrabhupada.h"
#include "VCL_NNDmvNizhnyayaNavadvipa.h"
#include "VCL_NNFmChangePassword.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma link "VCL_NNConfig"
#pragma link "VCL_NNDmRes"
#pragma link "VCL_NNRightsManager"
#pragma link "VCL_NNDBTreeView"
#pragma resource "*.dfm"

TdmvJayaShrilaPrabhupada *dmvJayaShrilaPrabhupada;

//---------------------------------------------------------------------------
__fastcall TdmvJayaShrilaPrabhupada::TdmvJayaShrilaPrabhupada( TComponent* Owner )
  : inherited( Owner )
{
}
//---------------------------------------------------------------------------

void __fastcall TdmvJayaShrilaPrabhupada::dmvResCreate( TObject *Sender )
{
  fmvLoginJayaShrilaPrabhupada = new TfmvLoginJayaShrilaPrabhupada( Application );
  fmvLoginJayaShrilaPrabhupada->ShowFormLogin( conDB );
  // чтение из базы данных возможно только после соединения с ней!
  inherited::dmvResCreate( Sender );
}
//---------------------------------------------------------------------------

void __fastcall TdmvJayaShrilaPrabhupada::conDBAfterConnect( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->Connection = conDB;
  //rmTest->Reload();
}
//---------------------------------------------------------------------------

void __fastcall TdmvJayaShrilaPrabhupada::SetNodeParamsCommodKind( TNNVNodeParams &NodeParams )
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

void __fastcall TdmvJayaShrilaPrabhupada::conDBBeforeConnect( TObject *Sender )
{
  conDB->Params->Password = NNV::CriptPassword( conDB->Params->Password );
}
//---------------------------------------------------------------------------

void __fastcall TdmvJayaShrilaPrabhupada::ChangePassword( TComponent *ASenderForm )
{
  fmvChangePassword = new TfmvChangePassword( Application );
  fmvChangePassword->ShowChangePassword( conDB->Params->UserName, ASenderForm );
}
//---------------------------------------------------------------------------

void __fastcall TdmvJayaShrilaPrabhupada::SetIsDeletedUser( bool AIsDeleted )
{
  quUsers->Edit();
  quUsersIsDeleted->AsBoolean = AIsDeleted;
  quUsers->Post();
}

void __fastcall TdmvJayaShrilaPrabhupada::quUsersPassportDateSetText( TField *Sender,
          const UnicodeString Text )
{
  ;
}
//---------------------------------------------------------------------------


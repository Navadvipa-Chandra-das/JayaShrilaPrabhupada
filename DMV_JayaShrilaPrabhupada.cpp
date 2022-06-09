//---------------------------------------------------------------------------

#pragma hdrstop

#include "DMV_JayaShrilaPrabhupada.h"
#include "FMV_LoginJayaShrilaPrabhupada.h"
#include "VCL_NNDmvNewNavadvipa.h"
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

void __fastcall TdmvJayaShrilaPrabhupada::DoLogin( TObject* Sender, TFDConnection *AConnection )
{
  AConnection->Params->UserName           = L"Navadvipa Chandra das";
  AConnection->Params->Database           = L"NewNavadvipa";
  AConnection->Params->Values[ "Server" ] = L"127.0.0.1";
  AConnection->Params->Values[ "Port" ]   = 5432;

  fmvLoginJayaShrilaPrabhupada = new TfmvLoginJayaShrilaPrabhupada( Application );
  fmvLoginJayaShrilaPrabhupada->ShowFormLogin( AConnection );
}


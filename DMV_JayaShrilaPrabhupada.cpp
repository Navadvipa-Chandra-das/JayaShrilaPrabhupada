//---------------------------------------------------------------------------

#pragma hdrstop

#include "DMV_JayaShrilaPrabhupada.h"
#include "FMV_LoginJayaShrilaPrabhupada.h"
#include "VCL_NNDmNewNavadvipa.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma link "VCL_NNDBMiracle"
#pragma link "VCL_NNDmRes"
#pragma link "VCL_NNRightsManager"
#pragma link "VCL_NNDBMiracle"
#pragma link "VCL_NNLanguageManager"
#pragma resource "*.dfm"

TdmvJayaShrilaPrabhupada *dmvJayaShrilaPrabhupada;

const String SuperUserName = L"Navadvipa Chandra das";

//---------------------------------------------------------------------------
__fastcall TdmvJayaShrilaPrabhupada::TdmvJayaShrilaPrabhupada( TComponent* Owner )
  : inherited( Owner )
{
}
//---------------------------------------------------------------------------

void __fastcall TdmvJayaShrilaPrabhupada::DoLogin( TObject* Sender, TFDConnection *AConnection )
{
  AConnection->Params->UserName                     = SuperUserName;
  AConnection->Params->Database                     = L"NewNavadvipa";
  AConnection->Params->Values[ "Server" ]           = L"127.0.0.1";
  AConnection->Params->Values[ "Port" ]             = 5432;
  AConnection->Params->Values[ "PrabhupadaSchema" ] = L"\"NewNavadvipa\".";

  fmvLoginJayaShrilaPrabhupada = new TfmvLoginJayaShrilaPrabhupada( Application );
  fmvLoginJayaShrilaPrabhupada->ShowFormLogin( AConnection );
}


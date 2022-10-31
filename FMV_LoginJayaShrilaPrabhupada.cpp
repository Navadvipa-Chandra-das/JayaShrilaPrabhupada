//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FMV_LoginJayaShrilaPrabhupada.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VCL_NNFmLogin"
#pragma link "VCL_NNFrLogin"
#pragma link "VCL_NNDBMiracle"
#pragma link "VCL_NNFlagBox"
#pragma link "VCL_NNRightsManager"
#pragma link "VCL_NNActionList"
#pragma link "VCL_NNLanguageManager"
#pragma resource "*.dfm"
TfmvLoginJayaShrilaPrabhupada *fmvLoginJayaShrilaPrabhupada;

//---------------------------------------------------------------------------
__fastcall TfmvLoginJayaShrilaPrabhupada::TfmvLoginJayaShrilaPrabhupada( TComponent* Owner )
  : inherited( Owner )
{
}
//---------------------------------------------------------------------------

void __fastcall TfmvLoginJayaShrilaPrabhupada::FormCreate( TObject *Sender )
{
  inherited::FormCreate( Sender );
  frvLogin->imLogin->Picture->LoadFromFile( "ShrilaPrabhupada.bmp" );
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FMV_JayaShrilaPrabhupada.h"
#include "VCL_NNFmLogin.h"
#include "FMV_Explorer.h"
#include "VCL_NNDmvNewNavadvipa.h"
#include "DMV_JayaShrilaPrabhupada.h"
#include "VCL_NNFormHistory.h"
#include "VCL_NNFmLock.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VCL_NNDBMiracle"
#pragma link "VCL_NNConfig"
#pragma link "VCL_NNFlagBox"
#pragma link "VCL_NNFmRes"
#pragma link "VCL_NNRightsManager"
#pragma link "VCL_NNActionList"
#pragma link "VCL_NNLanguageManager"
#pragma resource "*.dfm"
TfmvJayaShrilaPrabhupada *fmvJayaShrilaPrabhupada;
//---------------------------------------------------------------------------
__fastcall TfmvJayaShrilaPrabhupada::TfmvJayaShrilaPrabhupada( TComponent* Owner )
  : inherited( Owner )
{
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::alExamplesExecute( TObject *Sender )
{
  NNV::FormCreate( __classid( TfmvExplorer ), &fmvExplorer );
  NNV::FormShow( fmvExplorer );
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::aChangePassordExecute( TObject *Sender )
{
  dmvNewNavadvipa->ChangePassword( this );
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::aFormListShowExecute( TObject *Sender )
{
  NNV::FormListShow();
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::aCurrentMainExecute( TObject *Sender )
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

void __fastcall TfmvJayaShrilaPrabhupada::FormCreate( TObject *Sender )
{
  // «десь важно то, что dmvNewNavadvipa имеет своим хоз€ином главную форму, а не Application
  // Ёто важно, что разрушение объектов будет идти в дорлжном пор€дке
  dmvNewNavadvipa = new TdmvNewNavadvipa( this, dmvJayaShrilaPrabhupada->DoLogin );
  FixWhileEmbarcaderoBug();
  PrepareLanguages();
  inherited::FormCreate( Sender );
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::PrepareLanguages()
{
  dmvNewNavadvipa->lmDB->PrepareStrings( cbLanguage->Items );
  dmvNewNavadvipa->lmDB->CurrentLanguageID = NNVConst::MainLanguageID;
  NNVConst::MainLanguageIndex = dmvNewNavadvipa->lmDB->LanguageIDToItemIndex( dmvNewNavadvipa->lmDB->CurrentLanguageID );
}

void __fastcall TfmvJayaShrilaPrabhupada::aLockExecute(TObject *Sender)
{
  NNV::FormCreate( __classid( TfmvLock ), &fmvLock );

  fmvLock->aPrepareLock->OnExecute   = PrepareLock;
  fmvLock->aPrepareUnLock->OnExecute = PrepareUnLock;

  fmvLock->FormShow();
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::PrepareLock( TObject *Sender )
{
  Menu         = nullptr;
  alRes->State = asSuspended;
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::PrepareUnLock( TObject *Sender )
{
  Menu         = mmShrilaPrabhupada;
  alRes->State = asNormal;
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::aRightsRefreshExecute(TObject *Sender)
{
  dmvNewNavadvipa->rmDB->RefreshRights( dmvNewNavadvipa->UserID );
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::cbLanguageChange( TObject *Sender )
{
  dmvNewNavadvipa->lmDB->CurrentLanguageID = dmvNewNavadvipa->lmDB->LanguageVector[ cbLanguage->ItemIndex ].LanguageID;
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::lnResLanguage( TObject *Sender )
{
  inherited::lnResLanguage( Sender );
  cbLanguage->ItemIndex = dmvNewNavadvipa->lmDB->LanguageIDToItemIndex( dmvNewNavadvipa->lmDB->CurrentLanguageID );
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::coResLoad( TObject *Sender )
{
  inherited::coResLoad( Sender );
  dmvNewNavadvipa->lmDB->CurrentLanguageID = coRes->Filer->ReadLongLongInt();
}
//---------------------------------------------------------------------------

void __fastcall TfmvJayaShrilaPrabhupada::coResSave( TObject *Sender )
{
  inherited::coResSave( Sender );
  coRes->Filer->WriteLongLongInt( dmvNewNavadvipa->lmDB->CurrentLanguageID );
}
//---------------------------------------------------------------------------


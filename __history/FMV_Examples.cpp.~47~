//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FMV_Examples.h"
#include "VCL_NNDmvNizhnyayaNavadvipa.h"
#include "DMV_Examples.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VCL_NNConfig"
#pragma link "VCL_NNFlagBox"
#pragma link "VCL_NNFmDB"
#pragma link "VCL_NNPanel"
#pragma link "VCL_NNRightsManager"
#pragma link "VCL_NNDBTreeView"
#pragma link "VCL_NNSplitter"
#pragma link "VCL_NNDBGrid"
#pragma link "VCL_NNPageControl"
#pragma resource "*.dfm"
TfmvExamples *fmvExamples;
//---------------------------------------------------------------------------
__fastcall TfmvExamples::TfmvExamples(TComponent* Owner)
  : inherited( Owner )
{
}

//---------------------------------------------------------------------------
void __fastcall TfmvExamples::coResLoad(TObject *Sender)
{
  inherited::coResLoad( Sender );
  tvExamples->Width = coRes->Filer->ReadInt();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::coResSave( TObject *Sender )
{
  inherited::coResSave( Sender );
  coRes->Filer->WriteInt( tvExamples->Width );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::coResEndLoad( TObject *Sender )
{
  splExamples->Left = tvExamples->Left + tvExamples->Width + 1;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::naConfigEnter( TObject *Sender )
{
  //DataSet = dmCurrency->odCurrency;
  paConfig->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::naConfigExit( TObject *Sender )
{
  paConfig->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::naConfigLoadNodes( TObject *Sender )
{
  naConfig->CurrentNode = ((TNNTreeNode*)( tvExamples->Items->Add( NULL, "Пример сохранения настроек" ) ));
  naConfig->CurrentNode->NodeAdmin = naConfig;
  naConfig->CurrentNode->PK = NNV::EmptyPK;
  naConfig->CurrentNode->ImageIndex = (int)NNV::TImagesKind::imCurrency;
  naConfig->CurrentNode->SelectedIndex = (int)NNV::TImagesKind::imCurrency;
  naConfig->LocateNode = naConfig->CurrentNode;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::FormCreate(TObject *Sender)
{
  inherited::FormCreate( Sender );

  tvExamples->StartAdmin();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::FormDestroy(TObject *Sender)
{
  inherited::FormDestroy( Sender );

  tvExamples->FinishAdmin();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::naColorEnter(TObject *Sender )
{
  paColor->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::naColorExit(TObject *Sender )
{
  paColor->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::naColorLoadNodes(TObject *Sender )
{
  naColor->CurrentNode = ((TNNTreeNode*)( tvExamples->Items->Add( NULL, "Настройка цветов" ) ));
  naColor->CurrentNode->NodeAdmin = naColor;
  naColor->CurrentNode->PK = NNV::EmptyPK;
  naColor->CurrentNode->ImageIndex = (int)NNV::TImagesKind::imCommod;
  naColor->CurrentNode->SelectedIndex = (int)NNV::TImagesKind::imCommod;
  naColor->LocateNode = naColor->CurrentNode;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::naNumberToWordsEnter(TObject *Sender )
{
  paNumberToWords->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::naNumberToWordsExit(TObject *Sender )
{
  paNumberToWords->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::naNumberToWordsLoadNodes(TObject *Sender )
{
  naNumberToWords->CurrentNode = ((TNNTreeNode*)( tvExamples->Items->Add( NULL, "Преобразование числа в словесную форму" ) ));
  naNumberToWords->CurrentNode->NodeAdmin = naNumberToWords;
  naNumberToWords->CurrentNode->PK = NNV::EmptyPK;
  naNumberToWords->CurrentNode->ImageIndex = (int)NNV::TImagesKind::imPrimKind;
  naNumberToWords->CurrentNode->SelectedIndex = (int)NNV::TImagesKind::imPrimKind;
  naNumberToWords->LocateNode = naNumberToWords->CurrentNode;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::naUsersEnter(TObject *Sender )
{
  paUsers->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::naUsersExit(TObject *Sender )
{
  paUsers->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExamples::naUsersLoadNodes(TObject *Sender )
{
  naUsers->CurrentNode = ((TNNTreeNode*)( tvExamples->Items->Add( NULL, "Пользователи" ) ));
  naUsers->CurrentNode->NodeAdmin = naUsers;
  naUsers->CurrentNode->PK = NNV::EmptyPK;
  naUsers->CurrentNode->ImageIndex = (int)NNV::TImagesKind::imCash;
  naUsers->CurrentNode->SelectedIndex = (int)NNV::TImagesKind::imCash;
  naUsers->LocateNode = naUsers->CurrentNode;
}
//---------------------------------------------------------------------------


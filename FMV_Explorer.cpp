//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FMV_Explorer.h"
#include "VCL_NNDmvNizhnyayaNavadvipa.h"
#include "DMV_JayaShrilaPrabhupada.h"
#include "VCL_NNFmChangePassword.h"
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
#pragma link "VCL_NNNumberToWords"
#pragma link "VCL_NNActionList"
#pragma link "VCL_NNDialogExec"
#pragma link "VCL_NNDateTimeDialog"
#pragma link "VCL_NNComboBox"
#pragma link "VCL_NNComboBoxDateTime"
#pragma link "VCL_NNDBComboBoxDateTime"
#pragma link "VCL_NNDBComboBox"
#pragma link "VCL_NNDBSearchEdit"
#pragma link "VCL_NNDBSearchDialog"
#pragma link "VCL_NNFrPeriod"
#pragma link "VCL_NNFrDoubleDiapazon"
#pragma link "VCL_NNFrDiapazon"
#pragma link "VCL_NNFrIntDiapazon"
#pragma link "VCL_NNFrLongLongIntDiapazon"
#pragma link "VCL_NNFrShortIntDiapazon"
#pragma resource "*.dfm"
TfmvExplorer *fmvExplorer;
//---------------------------------------------------------------------------
__fastcall TfmvExplorer::TfmvExplorer(TComponent* Owner)
  : inherited( Owner )
{
}

//---------------------------------------------------------------------------
void __fastcall TfmvExplorer::coResLoad( TObject *Sender )
{
  inherited::coResLoad( Sender );
  LoadNodeAdmins();
  LoadTrees();
  LoadGrids();
  tvExamples->Width = coRes->Filer->ReadInt();
  edNumberToWords->Text = coRes->Filer->ReadString();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::coResSave( TObject *Sender )
{
  inherited::coResSave( Sender );
  SaveNodeAdmins();
  SaveTrees();
  SaveGrids();
  coRes->Filer->WriteInt( tvExamples->Width );
  coRes->Filer->WriteString( edNumberToWords->Text );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::LoadNodeAdmins()
{
  naConfig->LoadFromFiler( coRes->Filer );
  naColor->LoadFromFiler( coRes->Filer );
  naNumberToWords->LoadFromFiler( coRes->Filer );
  naUsers->LoadFromFiler( coRes->Filer );
  naCommodKind->LoadFromFiler( coRes->Filer );
}

void __fastcall TfmvExplorer::SaveNodeAdmins()
{
  naConfig->SaveToFiler( coRes->Filer );
  naColor->SaveToFiler( coRes->Filer );
  naNumberToWords->SaveToFiler( coRes->Filer );
  naUsers->SaveToFiler( coRes->Filer );
  naCommodKind->SaveToFiler( coRes->Filer );
}

void __fastcall TfmvExplorer::LoadTrees()
{
  tvExamples->LoadFromFiler( coRes->Filer );
}

void __fastcall TfmvExplorer::SaveTrees()
{
  tvExamples->SaveToFiler( coRes->Filer );
}

void __fastcall TfmvExplorer::LoadGrids()
{
  dgUsers->LoadFromFiler( coRes->Filer );
  dgCommod->LoadFromFiler( coRes->Filer );
}

void __fastcall TfmvExplorer::SaveGrids()
{
  dgUsers->SaveToFiler( coRes->Filer );
  dgCommod->SaveToFiler( coRes->Filer );
}

void __fastcall TfmvExplorer::coResEndLoad( TObject *Sender )
{
  splExamples->Left = tvExamples->Left + tvExamples->Width + 1;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naConfigEnter( TObject *Sender )
{
  //DataSet = dmCurrency->odCurrency;
  paConfig->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naConfigExit( TObject *Sender )
{
  paConfig->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naConfigLoadNodes( TObject *Sender )
{
  naConfig->CurrentNode = ((TNNVTreeNode*)( tvExamples->Items->Add( NULL, "Пример сохранения настроек" ) ));
  naConfig->CurrentNode->NodeAdmin = naConfig;
  naConfig->CurrentNode->PK = NNV::EmptyPK;
  naConfig->CurrentNode->ImageIndex = (int)NNV::TImagesKind::imCurrency;
  naConfig->CurrentNode->SelectedIndex = (int)NNV::TImagesKind::imCurrency;
  naConfig->LocateNode = naConfig->CurrentNode;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::FormCreate(TObject *Sender)
{
  inherited::FormCreate( Sender );

  tvExamples->StartAdmin();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::FormDestroy(TObject *Sender)
{
  inherited::FormDestroy( Sender );

  tvExamples->FinishAdmin();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorEnter(TObject *Sender )
{
  paColor->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorExit(TObject *Sender )
{
  paColor->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorLoadNodes(TObject *Sender )
{
  naColor->CurrentNode = ((TNNVTreeNode*)( tvExamples->Items->Add( NULL, "Настройка цветов" ) ));
  naColor->CurrentNode->NodeAdmin = naColor;
  naColor->CurrentNode->PK = NNV::EmptyPK;
  naColor->CurrentNode->ImageIndex = (int)NNV::TImagesKind::imCommod;
  naColor->CurrentNode->SelectedIndex = (int)NNV::TImagesKind::imCommod;
  naColor->LocateNode = naColor->CurrentNode;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naNumberToWordsEnter(TObject *Sender )
{
  paNumberToWords->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naNumberToWordsExit(TObject *Sender )
{
  paNumberToWords->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naNumberToWordsLoadNodes(TObject *Sender )
{
  naNumberToWords->CurrentNode = ((TNNVTreeNode*)( tvExamples->Items->Add( NULL, "Преобразование числа в словесную форму" ) ));
  naNumberToWords->CurrentNode->NodeAdmin = naNumberToWords;
  naNumberToWords->CurrentNode->PK = NNV::EmptyPK;
  naNumberToWords->CurrentNode->ImageIndex = (int)NNV::TImagesKind::imPrimKind;
  naNumberToWords->CurrentNode->SelectedIndex = (int)NNV::TImagesKind::imPrimKind;
  naNumberToWords->LocateNode = naNumberToWords->CurrentNode;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naUsersEnter(TObject *Sender )
{
  paUsers->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naUsersExit(TObject *Sender )
{
  paUsers->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naUsersLoadNodes(TObject *Sender )
{
  naUsers->CurrentNode = ((TNNVTreeNode*)( tvExamples->Items->Add( NULL, "Пользователи" ) ));
  naUsers->CurrentNode->NodeAdmin = naUsers;
  naUsers->CurrentNode->PK = NNV::EmptyPK;
  naUsers->CurrentNode->ImageIndex = (int)NNV::TImagesKind::imCash;
  naUsers->CurrentNode->SelectedIndex = (int)NNV::TImagesKind::imCash;
  naUsers->LocateNode = naUsers->CurrentNode;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::edNumberToWordsKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
  if ( Key == VK_RETURN ) {
    nwExamples->Value = edNumberToWords->Text;
    Key = 0;
  }
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::nwExamplesChange( TObject *Sender )
{
  meNumberToWords->Lines->Text = nwExamples->Text;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naNumberToWordsFirstEnter( TObject *Sender )
{
  nwExamples->Value = edNumberToWords->Text;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naUsersFirstEnter( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->quUsers->CWOpen();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naUsersLastExit( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->quUsers->CWClose();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naCommodKindLoadNodes(TObject *Sender)
{
  tvExamples->LoadNodeAdmin( NULL, naCommodKind, 1 );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naCommodKindEnter( TObject *Sender )
{
  DataSet = dmvNizhnyayaNavadvipa->quCommodKind;
  paCommod->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naCommodKindExit( TObject *Sender )
{
  paCommod->Visible = false;
}
//---------------------------------------------------------------------------


void __fastcall TfmvExplorer::naCommodKindFirstEnter( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->quCommodKind->CWOpen();
  dmvNizhnyayaNavadvipa->quCommod->CWOpen();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naCommodKindLastExit(TObject *param_05)
{
  dmvNizhnyayaNavadvipa->quCommod->CWClose();
  dmvNizhnyayaNavadvipa->quCommodKind->CWClose();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naCommodKindGetNodeParams( TObject *Sender, TNNVNodeParams &NodeParams )
{
  dmvNizhnyayaNavadvipa->SetNodeParamsCommodKind( NodeParams );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aNewUserExecute( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->SetIsDeletedUser( false );
  dmvNizhnyayaNavadvipa->CreateNewUser( dmvNizhnyayaNavadvipa->quUsersName->AsString
                                      , dmvNizhnyayaNavadvipa->quUsersName->AsString );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aSetUserPassordExecute( TObject *Sender )
{
  fmvChangePassword = new TfmvChangePassword( Application );
  fmvChangePassword->ShowChangePassword( dmvNizhnyayaNavadvipa->quUsersName->AsString, this );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aDeleteUserExecute(TObject *Sender)
{
  dmvNizhnyayaNavadvipa->SetIsDeletedUser( true );
  dmvNizhnyayaNavadvipa->DeleteUser( dmvNizhnyayaNavadvipa->quUsersName->AsString );
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FMV_Explorer.h"
#include "VCL_NNDmvNizhnyayaNavadvipa.h"
#include "DMV_JayaShrilaPrabhupada.h"
#include "VCL_NNFmChangePassword.h"
#include "VCL_NNColor.h"
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
#pragma link "VCL_NNDrawGrid"
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
  naConfig->CurrentNode = ((TNNVTreeNode*)( tvExamples->Items->Add( NULL, "������ ���������� ��������" ) ));
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
  dgColor->OptimalDefaultRowHeight();
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
  dgColor->RowCount = NNVColor::ColorMap.size() + 1;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorExit(TObject *Sender )
{
  paColor->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorLoadNodes(TObject *Sender )
{
  naColor->CurrentNode = ((TNNVTreeNode*)( tvExamples->Items->Add( NULL, "��������� ������" ) ));
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
  naNumberToWords->CurrentNode = ((TNNVTreeNode*)( tvExamples->Items->Add( NULL, "�������������� ����� � ��������� �����" ) ));
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
  naUsers->CurrentNode = ((TNNVTreeNode*)( tvExamples->Items->Add( NULL, "������������" ) ));
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

void __fastcall TfmvExplorer::dgColorDrawCell( TObject *Sender, int ACol, int ARow
                                             , TRect &Rect, TGridDrawState State )
{
  int L = Rect.Left + 2, R = Rect.Top + 2;
  if ( !ARow ) {
    switch ( ACol ) {
      case 0 :
        dgColor->Canvas->TextRect( Rect, L, R, "��������" );
        break;
      case 1 :
        dgColor->Canvas->TextRect( Rect, L, R, "�����" );
        break;
      case 2 :
        dgColor->Canvas->TextRect( Rect, L, R, "���" );
        break;
    }
    return;
  }
  NNVColor::TColorMap::iterator i = NNVColor::ColorMap.find( (NNVColor::TColorKind)( ARow - 1 ) );
  switch ( ACol ) {
    case 0 :
      dgColor->Canvas->Font->Color = (*i).second.FontColor;
      dgColor->Canvas->Brush->Color = (*i).second.FonColor;
      dgColor->Canvas->TextRect( Rect, L, R, (*i).second.Name );
      break;
    case 1 :
      dgColor->Canvas->Brush->Color = (*i).second.FontColor;
      dgColor->Canvas->FillRect( Rect );
      break;
    case 2 :
      dgColor->Canvas->Brush->Color = (*i).second.FonColor;
      dgColor->Canvas->FillRect( Rect );
      break;
  }
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgColorDblClick(TObject *Sender)
{
  if ( dgColor->Row )
    ExecuteColorSetup();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgColorKeyDown( TObject *Sender, WORD &Key, TShiftState Shift )
{
  if ( Key == VK_SPACE && dgColor->Col ) {
    ExecuteColorSetup();
    Key = 0;
  }
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::ExecuteColorSetup()
{
  NNVColor::TColorMap::iterator i;
  switch ( dgColor->Col ) {
    case 1 :
      i = NNVColor::ColorMap.find( (NNVColor::TColorKind)( dgColor->Row - 1 ) );
      dmvNizhnyayaNavadvipa->cdNN->Color = (*i).second.FontColor;
      if ( dmvNizhnyayaNavadvipa->cdNN->Execute() ) {
        (*i).second.FontColor = dmvNizhnyayaNavadvipa->cdNN->Color;
        NNVColor::ColorMap.Refresh();
        dgColor->Refresh();
      }
      break;
    case 2 :
      i = NNVColor::ColorMap.find( (NNVColor::TColorKind)( dgColor->Row - 1 ) );
      dmvNizhnyayaNavadvipa->cdNN->Color = (*i).second.FonColor;
      if ( dmvNizhnyayaNavadvipa->cdNN->Execute() ) {
        (*i).second.FonColor = dmvNizhnyayaNavadvipa->cdNN->Color;
        NNVColor::ColorMap.Refresh();
        dgColor->Refresh();
      }
  }
}

void __fastcall TfmvExplorer::dgCommodDBCopy( TObject *Sender )
{
  dgCommod->CWSelect( dmCommod->odCommodCOMMODNO, dmData->OracleBuffer, cw::ccCopy, cw::obCommod );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgCommodDBCut( TObject *Sender )
{
  dgCommod->CWSelect( dmCommod->odCommodCOMMODNO, dmData->OracleBuffer, cw::ccCut, cw::obCommod );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgCommodDBMerge( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->MergeCommod();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgCommodDBPaste( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->PasteCommod();
}
//---------------------------------------------------------------------------


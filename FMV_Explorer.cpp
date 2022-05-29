//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FMV_Explorer.h"
#include "VCL_NNDmvNizhnyayaNavadvipa.h"
#include "DMV_JayaShrilaPrabhupada.h"
#include "VCL_NNFmChangePassword.h"
#include "VCL_NNColor.h"
#include "VCL_NNFmvCode.h"
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
  naColorKind->LoadFromFiler( coRes->Filer );
  naNumberToWords->LoadFromFiler( coRes->Filer );
  naUsers->LoadFromFiler( coRes->Filer );
  naCommodKind->LoadFromFiler( coRes->Filer );
  naColor->LoadFromFiler( coRes->Filer );
  naRightsKind->LoadFromFiler( coRes->Filer );
  naRoleKind->LoadFromFiler( coRes->Filer );
}

void __fastcall TfmvExplorer::SaveNodeAdmins()
{
  naConfig->SaveToFiler( coRes->Filer );
  naColorKind->SaveToFiler( coRes->Filer );
  naNumberToWords->SaveToFiler( coRes->Filer );
  naUsers->SaveToFiler( coRes->Filer );
  naCommodKind->SaveToFiler( coRes->Filer );
  naColor->SaveToFiler( coRes->Filer );
  naRightsKind->SaveToFiler( coRes->Filer );
  naRoleKind->SaveToFiler( coRes->Filer );
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
  dgColor->LoadFromFiler( coRes->Filer );
}

void __fastcall TfmvExplorer::SaveGrids()
{
  dgUsers->SaveToFiler( coRes->Filer );
  dgCommod->SaveToFiler( coRes->Filer );
  dgColor->SaveToFiler( coRes->Filer );
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
  naConfig->CurrentNode = ((TNNVTreeNode*)( tvExamples->Items->Add( nullptr, "Пример сохранения настроек" ) ));
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
  drgColor->OptimalDefaultRowHeight();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::FormDestroy(TObject *Sender)
{
  inherited::FormDestroy( Sender );

  tvExamples->FinishAdmin();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorKindEnter(TObject *Sender )
{
  paColor->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorKindExit(TObject *Sender )
{
  paColor->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorKindLoadNodes(TObject *Sender )
{
  tvExamples->LoadNodeAdmin( nullptr, naColorKind, 72 );
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
  naNumberToWords->CurrentNode = ((TNNVTreeNode*)( tvExamples->Items->Add( nullptr, "Преобразование числа в словесную форму" ) ));
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
  naUsers->CurrentNode = ((TNNVTreeNode*)( tvExamples->Items->Add( nullptr, "Пользователи" ) ));
  naUsers->CurrentNode->NodeAdmin = naUsers;
  naUsers->CurrentNode->PK = NNV::EmptyPK;
  naUsers->CurrentNode->ImageIndex = (int)NNV::TImagesKind::imUsers;
  naUsers->CurrentNode->SelectedIndex = (int)NNV::TImagesKind::imUsers;
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
  tvExamples->LoadNodeAdmin( nullptr, naCommodKind, 1 );
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

void __fastcall TfmvExplorer::naCommodKindLastExit(TObject *Sender5)
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

void __fastcall TfmvExplorer::drgColorDrawCell( TObject *Sender, int ACol, int ARow
                                             , TRect &Rect, TGridDrawState State )
{
  int L = Rect.Left + 2, R = Rect.Top + 2;
  if ( !ARow ) {
    switch ( ACol ) {
      case 0 :
        drgColor->Canvas->TextRect( Rect, L, R, "Название" );
        break;
      case 1 :
        drgColor->Canvas->TextRect( Rect, L, R, "Шрифт" );
        break;
      case 2 :
        drgColor->Canvas->TextRect( Rect, L, R, "Фон" );
        break;
    }
    return;
  }
  NNV::TColorMap::iterator i = NNV::ColorMap.find( (NNV::TColorKind)( ARow - 1 ) );
  switch ( ACol ) {
    case 0 :
      drgColor->Canvas->Font->Color = (*i).second.FontColor;
      drgColor->Canvas->Brush->Color = (*i).second.FonColor;
      drgColor->Canvas->TextRect( Rect, L, R, (*i).second.Name );
      break;
    case 1 :
      drgColor->Canvas->Brush->Color = (*i).second.FontColor;
      drgColor->Canvas->FillRect( Rect );
      break;
    case 2 :
      drgColor->Canvas->Brush->Color = (*i).second.FonColor;
      drgColor->Canvas->FillRect( Rect );
      break;
  }
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::drgColorDblClick(TObject *Sender)
{
  if ( drgColor->Row )
    ExecuteColorSetup();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::drgColorKeyDown( TObject *Sender, WORD &Key, TShiftState Shift )
{
  if ( Key == VK_SPACE && drgColor->Col ) {
    ExecuteColorSetup();
    Key = 0;
  }
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::ExecuteColorSetup()
{
  NNV::TColorMap::iterator i;
  switch ( drgColor->Col ) {
    case 1 :
      i = NNV::ColorMap.find( (NNV::TColorKind)( drgColor->Row - 1 ) );
      dmvNizhnyayaNavadvipa->cdNN->Color = (*i).second.FontColor;
      if ( dmvNizhnyayaNavadvipa->cdNN->Execute() ) {
        (*i).second.FontColor = dmvNizhnyayaNavadvipa->cdNN->Color;
        NNV::ColorMap.Refresh();
        drgColor->Refresh();
      }
      break;
    case 2 :
      i = NNV::ColorMap.find( (NNV::TColorKind)( drgColor->Row - 1 ) );
      dmvNizhnyayaNavadvipa->cdNN->Color = (*i).second.FonColor;
      if ( dmvNizhnyayaNavadvipa->cdNN->Execute() ) {
        (*i).second.FonColor = dmvNizhnyayaNavadvipa->cdNN->Color;
        NNV::ColorMap.Refresh();
        drgColor->Refresh();
      }
  }
}

void __fastcall TfmvExplorer::dgCommodDBCut( TObject *Sender )
{
  dgCommod->CWSelect( dmvNizhnyayaNavadvipa->quCommodEntityID, &dmvNizhnyayaNavadvipa->BufferIntBox, true, L"Commod" );
};
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgCommodDBPaste( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->quCommod->DBPaste();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorKindFirstEnter( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->quColorKind->CWOpen();
  dmvNizhnyayaNavadvipa->quColor->CWOpen();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorKindLastExit( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->quColor->CWClose();
  dmvNizhnyayaNavadvipa->quColorKind->CWClose();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorKindGetNodeParams( TObject *Sender, TNNVNodeParams &NodeParams )
{
  dmvNizhnyayaNavadvipa->SetNodeParamsColorKind( NodeParams );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgColorDBCut( TObject *Sender )
{
  dgColor->CWSelect( dmvNizhnyayaNavadvipa->quColorEntityID, &dmvNizhnyayaNavadvipa->BufferIntBox, true, L"Color" );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgColorDBPaste( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->quColor->DBPaste();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgColorEditButtonClick(TObject *Sender)
{
  TField *f = CurrentDBGrid->SelectedField;
  TRect R   = CurrentDBGrid->CWRect;

  if ( f->DataType == ftInteger ) {
    dmvNizhnyayaNavadvipa->cdNN->Color = (TColor)f->AsInteger;
    if ( dmvNizhnyayaNavadvipa->cdNN->Execute() ) {
      TColor CL = dmvNizhnyayaNavadvipa->cdNN->Color;
      Query->CWCheckEditMode();
      f->AsInteger = CL;
      if ( f->FieldKind == fkCalculated ) {
        std::size_t I = dmvNizhnyayaNavadvipa->quColorVectorIndex->AsLargeInt;
        if ( f == dmvNizhnyayaNavadvipa->quColorFonColorUser )
          dmvNizhnyayaNavadvipa->ColorVector[ I ].FonColor = CL;
        else
          dmvNizhnyayaNavadvipa->ColorVector[ I ].FontColor = CL;
        Query->Post();
      }
    }
  }
}

//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aColorIndexGenerateExecute( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->ColorIndexGenerate();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorEnter( TObject *Sender )
{
  drgColor->Visible = true;
  drgColor->RowCount = NNV::ColorMap.size() + 1;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorExit( TObject *Sender )
{
  drgColor->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorLoadNodes( TObject *Sender )
{
  naColor->CurrentNode = ( (TNNVTreeNode*)( tvExamples->Items->Add( nullptr, "Настройка цвета" ) ) );
  naColor->CurrentNode->NodeAdmin = naColor;
  naColor->CurrentNode->PK = NNV::EmptyPK;
  naColor->CurrentNode->ImageIndex = (int)NNV::TImagesKind::imDepartment;
  naColor->CurrentNode->SelectedIndex = (int)NNV::TImagesKind::imDepartment;
  naColor->LocateNode = naColor->CurrentNode;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgColorDrawColumnCell( TObject *Sender, const TRect &Rect
                                                   , int DataCol, TColumn *Column
                                                   , TGridDrawState State )
{
  TNNVDBGrid *dg = dgColor;

  TField *f = Column->Field;

  TBrush *br = dg->Canvas->Brush;
  TFont  *fn = dg->Canvas->Font;

  if ( !State.Contains( gdFocused ) && !dmvNizhnyayaNavadvipa->quColorEntityID->IsNull ) {
    if ( f->FieldKind == fkData ) {
      br->Color = (TColor)dmvNizhnyayaNavadvipa->quColorFonColor->AsInteger;
      fn->Color = (TColor)dmvNizhnyayaNavadvipa->quColorFontColor->AsInteger;
    } else {
      br->Color = (TColor)dmvNizhnyayaNavadvipa->quColorFonColorUser->AsInteger;
      fn->Color = (TColor)dmvNizhnyayaNavadvipa->quColorFontColorUser->AsInteger;
    }
  }

  dg->DefaultDrawColumnCell( Rect, DataCol, Column, State );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRightsKindEnter( TObject *Sender )
{
  DataSet = dmvNizhnyayaNavadvipa->quRightsKind;
  paRights->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRightsKindExit( TObject *Sender )
{
  paRights->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRightsKindFirstEnter( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->quRightsKind->CWOpen();
  dmvNizhnyayaNavadvipa->quRights->CWOpen();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRightsKindGetNodeParams( TObject *Sender, TNNVNodeParams &NodeParams )
{
  dmvNizhnyayaNavadvipa->SetNodeParamsRightsKind( NodeParams );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRightsKindLastExit( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->quRights->CWClose();
  dmvNizhnyayaNavadvipa->quRightsKind->CWClose();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRightsKindLoadNodes( TObject *Sender )
{
  tvExamples->LoadNodeAdmin( nullptr, naRightsKind, 79 );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRoleKindEnter( TObject *Sender )
{
  DataSet = dmvNizhnyayaNavadvipa->quRoleKind;
  paRole->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRoleKindExit( TObject *Sender )
{
  paRole->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRoleKindFirstEnter( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->quRoleKind->CWOpen();
  dmvNizhnyayaNavadvipa->quRole->CWOpen();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRoleKindGetNodeParams( TObject *Sender, TNNVNodeParams &NodeParams )
{
  dmvNizhnyayaNavadvipa->SetNodeParamsRoleKind( NodeParams );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRoleKindLastExit( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->quRole->CWClose();
  dmvNizhnyayaNavadvipa->quRoleKind->CWClose();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRoleKindLoadNodes( TObject *Sender )
{
  tvExamples->LoadNodeAdmin( nullptr, naRoleKind, 80 );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgRightsDBCut( TObject *Sender )
{
  dgRights->CWSelect( dmvNizhnyayaNavadvipa->quRightsEntityID, &dmvNizhnyayaNavadvipa->BufferIntBox, true, L"Rights" );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgRightsDBPaste( TObject *Sender )
{
  dmvNizhnyayaNavadvipa->quRights->DBPaste();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgRightsDrawColumnCell( TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State  )
{
  if ( !State.Contains( gdFocused ) && !dgRights->IsCurrentSelected() ) {
    TField *f = dmvNizhnyayaNavadvipa->quRightsKindID;
    if ( !f->IsNull )
      dmvNizhnyayaNavadvipa->DBGridColor( dgRights, f->AsLargeInt );
  }
  dgRights->DefaultDrawColumnCell( Rect, DataCol, Column, State );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aGenerateColorConstsExecute( TObject *Sender )
{
  fmvCode = new TfmvCode( Application );

  TBookmark B = dmvNizhnyayaNavadvipa->quColor->Bookmark;
  dmvNizhnyayaNavadvipa->quColor->DisableControls();
  try {
    dmvNizhnyayaNavadvipa->quColor->First();
    while ( !dmvNizhnyayaNavadvipa->quColor->Eof ) {
      fmvCode->meCode->Lines->Add( dmvNizhnyayaNavadvipa->quColorEnumLiteral->AsString + L" = " + dmvNizhnyayaNavadvipa->quColorVectorIndex->AsString );
      dmvNizhnyayaNavadvipa->quColor->Next();
    }
    dmvNizhnyayaNavadvipa->quColor->Bookmark = B;
  } __finally {
    dmvNizhnyayaNavadvipa->quColor->EnableControls();
  }

  fmvCode->ShowDialog( this );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgColorTitleClick( TColumn *Column )
{
  dmvNizhnyayaNavadvipa->quColor->OrderByColumn = Column;
}
//---------------------------------------------------------------------------


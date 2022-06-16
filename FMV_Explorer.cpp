//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FMV_Explorer.h"
#include "VCL_NNDmvNewNavadvipa.h"
#include "DMV_JayaShrilaPrabhupada.h"
#include "VCL_NNFmChangePassword.h"
#include "VCL_NNColor.h"
#include "VCL_NNFmvCode.h"
#include "VCL_NNFmRights.h"
#include "VCL_NNFormAdmin.h"
#include "VCL_NNFmRoles.h"
#include "VCL_NNRightsIndex.h"
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
#pragma link "VCL_NNDialog"
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
  dgRole->Height = coRes->Filer->ReadInt();
  paUsersB->Height = coRes->Filer->ReadInt();
  dgUserRights->Width = coRes->Filer->ReadInt();
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
  coRes->Filer->WriteInt( dgRole->Height );
  coRes->Filer->WriteInt( paUsersB->Height );
  coRes->Filer->WriteInt( dgUserRights->Width );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::LoadNodeAdmins()
{
  naConfig->LoadFromFiler( coRes->Filer );
  naColorKind->LoadFromFiler( coRes->Filer );
  naNumberToWords->LoadFromFiler( coRes->Filer );
  naUsers->LoadFromFiler( coRes->Filer );
  naCommodKind->LoadFromFiler( coRes->Filer );
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
  dgRights->LoadFromFiler( coRes->Filer );
  dgRole->LoadFromFiler( coRes->Filer );
  dgRoleRights->LoadFromFiler( coRes->Filer );
  dgUserRights->LoadFromFiler( coRes->Filer );
  dgUserRoles->LoadFromFiler( coRes->Filer );
}

void __fastcall TfmvExplorer::SaveGrids()
{
  dgUsers->SaveToFiler( coRes->Filer );
  dgCommod->SaveToFiler( coRes->Filer );
  dgColor->SaveToFiler( coRes->Filer );
  dgRights->SaveToFiler( coRes->Filer );
  dgRole->SaveToFiler( coRes->Filer );
  dgRoleRights->SaveToFiler( coRes->Filer );
  dgUserRights->SaveToFiler( coRes->Filer );
  dgUserRoles->SaveToFiler( coRes->Filer );
}

void __fastcall TfmvExplorer::coResEndLoad( TObject *Sender )
{
  splExamples->Left = tvExamples->Left + tvExamples->Width + 1;
  splRole->Top = dgRole->Top + dgRole->Height + 1;
  splUsersB->Top = paUsersB->Top - 1;
  dgUserRights->Left = dgUserRights->Left + dgUserRights->Width + 1;
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

void __fastcall TfmvExplorer::FormCreate( TObject *Sender )
{
  inherited::FormCreate( Sender );

  SetColorPanelValueChange();

  tvExamples->StartAdmin();

  SetOnGetDialogFormsBecauseBug();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::SetColorPanelValueChange()
{
  paFonValueChange->Color       = NNVConst::FonColorValueChange;
  paFontValueChange->Color      = NNVConst::FontColorValueChange;
  paFonValueChange->Font->Color = NNVConst::FontColorValueChange;
}

void __fastcall TfmvExplorer::SetOnGetDialogFormsBecauseBug()
{
  DRoleRights->OnGetDialogForm = RightsGetDialogForm;
  DUserRights->OnGetDialogForm = RightsGetDialogForm;
  DUserRole->OnGetDialogForm   = RolesGetDialogForm;
}

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
  tvExamples->LoadNodeAdmin( nullptr, naColorKind, NNV::RootColorKindID );
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
  dmvNewNavadvipa->quUsers->CWOpen();
  dmvNewNavadvipa->quUserRights->CWOpen();
  dmvNewNavadvipa->quUserRoles->CWOpen();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naUsersLastExit( TObject *Sender )
{
  dmvNewNavadvipa->quUserRoles->CWClose();
  dmvNewNavadvipa->quUserRights->CWClose();
  dmvNewNavadvipa->quUsers->CWClose();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naCommodKindLoadNodes(TObject *Sender)
{
  tvExamples->LoadNodeAdmin( nullptr, naCommodKind, NNV::RootCommodKindID );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naCommodKindEnter( TObject *Sender )
{
  DataSet = dmvNewNavadvipa->quCommodKind;
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
  dmvNewNavadvipa->quCommodKind->CWOpen();
  dmvNewNavadvipa->quCommod->CWOpen();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naCommodKindLastExit(TObject *Sender5)
{
  dmvNewNavadvipa->quCommod->CWClose();
  dmvNewNavadvipa->quCommodKind->CWClose();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naCommodKindGetNodeParams( TObject *Sender, TNNVNodeParams &NodeParams )
{
  dmvNewNavadvipa->SetNodeParamsCommodKind( NodeParams );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aNewUserExecute( TObject *Sender )
{
  dmvNewNavadvipa->SetIsDeletedUser( false );
  dmvNewNavadvipa->CreateNewUser( dmvNewNavadvipa->quUsersName->AsString
                                , dmvNewNavadvipa->quUsersName->AsString
                                , SuperUserName
                                , false );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aNewSuperUserExecute(TObject *Sender)
{
  dmvNewNavadvipa->SetIsDeletedUser( false );
  dmvNewNavadvipa->CreateNewUser( dmvNewNavadvipa->quUsersName->AsString
                                , dmvNewNavadvipa->quUsersName->AsString
                                , SuperUserName
                                , true );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aSetUserPassordExecute( TObject *Sender )
{
  fmvChangePassword = new TfmvChangePassword( Application );
  fmvChangePassword->ShowChangePassword( dmvNewNavadvipa->quUsersName->AsString, this );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aDeleteUserExecute(TObject *Sender)
{
  if ( dmvNewNavadvipa->quUsersName->AsString != SuperUserName ) {
    dmvNewNavadvipa->SetIsDeletedUser( true );
    dmvNewNavadvipa->DeleteUser( dmvNewNavadvipa->quUsersName->AsString );
  }
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgCommodDBCut( TObject *Sender )
{
  dgCommod->CWSelect( dmvNewNavadvipa->quCommodEntityID, &dmvNewNavadvipa->BufferIntBox, true );
};
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgCommodDBPaste( TObject *Sender )
{
  dmvNewNavadvipa->quCommod->DBPaste( dmvNewNavadvipa->BufferIntBox, dmvNewNavadvipa->quDB, dmvNewNavadvipa->quCommodKindKindID );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorKindFirstEnter( TObject *Sender )
{
  dmvNewNavadvipa->quColorKind->CWOpen();
  dmvNewNavadvipa->quColor->CWOpen();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorKindLastExit( TObject *Sender )
{
  dmvNewNavadvipa->quColor->CWClose();
  dmvNewNavadvipa->quColorKind->CWClose();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naColorKindGetNodeParams( TObject *Sender, TNNVNodeParams &NodeParams )
{
  dmvNewNavadvipa->SetNodeParamsColorKind( NodeParams );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgColorDBCut( TObject *Sender )
{
  dgColor->CWSelect( dmvNewNavadvipa->quColorEntityID, &dmvNewNavadvipa->BufferIntBox, true );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgColorDBPaste( TObject *Sender )
{
  dmvNewNavadvipa->quColor->DBPaste( dmvNewNavadvipa->BufferIntBox, dmvNewNavadvipa->quDB, dmvNewNavadvipa->quColorKindKindID );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgColorEditButtonClick(TObject *Sender)
{
  TField *f = CurrentDBGrid->SelectedField;
  TRect R   = CurrentDBGrid->CWRect;

  if ( f->DataType == ftInteger ) {
    dmvNewNavadvipa->cdNN->Color = (TColor)f->AsInteger;
    if ( dmvNewNavadvipa->cdNN->Execute() ) {
      TColor CL = dmvNewNavadvipa->cdNN->Color;
      Query->CWCheckEditMode();
      f->AsInteger = CL;
      if ( f->FieldKind == fkCalculated ) {
        std::size_t I = dmvNewNavadvipa->quColorVectorIndex->AsLargeInt;
        if ( f == dmvNewNavadvipa->quColorFonColorUser )
          dmvNewNavadvipa->ColorVector[ I ].FonColor = CL;
        else
          dmvNewNavadvipa->ColorVector[ I ].FontColor = CL;
        Query->Post();
      }
    }
  }
}

//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aColorIndexGenerateExecute( TObject *Sender )
{
  dmvNewNavadvipa->ColorIndexGenerate();
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

  if ( !State.Contains( gdFocused ) && !dmvNewNavadvipa->quColorEntityID->IsNull ) {
    if ( f->FieldKind == fkData ) {
      br->Color = (TColor)dmvNewNavadvipa->quColorFonColor->AsInteger;
      fn->Color = (TColor)dmvNewNavadvipa->quColorFontColor->AsInteger;
    } else {
      br->Color = (TColor)dmvNewNavadvipa->quColorFonColorUser->AsInteger;
      fn->Color = (TColor)dmvNewNavadvipa->quColorFontColorUser->AsInteger;
    }
  }

  dg->DefaultDrawColumnCell( Rect, DataCol, Column, State );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRightsKindEnter( TObject *Sender )
{
  DataSet = dmvNewNavadvipa->quRightsKind;
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
  dmvNewNavadvipa->quRightsKind->CWOpen();
  dmvNewNavadvipa->quRights->CWOpen();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRightsKindGetNodeParams( TObject *Sender, TNNVNodeParams &NodeParams )
{
  dmvNewNavadvipa->SetNodeParamsRightsKind( NodeParams );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRightsKindLastExit( TObject *Sender )
{
  dmvNewNavadvipa->quRights->CWClose();
  dmvNewNavadvipa->quRightsKind->CWClose();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRightsKindLoadNodes( TObject *Sender )
{
  tvExamples->LoadNodeAdmin( nullptr, naRightsKind, NNV::RootRightsKindID );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRoleKindEnter( TObject *Sender )
{
  DataSet = dmvNewNavadvipa->quRoleKind;
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
  dmvNewNavadvipa->quRoleKind->CWOpen();
  dmvNewNavadvipa->quRole->CWOpen();
  dmvNewNavadvipa->quRoleRights->CWOpen();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRoleKindGetNodeParams( TObject *Sender, TNNVNodeParams &NodeParams )
{
  dmvNewNavadvipa->SetNodeParamsRoleKind( NodeParams );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRoleKindLastExit( TObject *Sender )
{
  dmvNewNavadvipa->quRoleRights->CWClose();
  dmvNewNavadvipa->quRole->CWClose();
  dmvNewNavadvipa->quRoleKind->CWClose();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::naRoleKindLoadNodes( TObject *Sender )
{
  tvExamples->LoadNodeAdmin( nullptr, naRoleKind, NNV::RootRoleKindID );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgRightsDBCut( TObject *Sender )
{
  dgRights->CWSelect( dmvNewNavadvipa->quRightsEntityID, &dmvNewNavadvipa->BufferIntBox, true );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgRightsDBPaste( TObject *Sender )
{
  dmvNewNavadvipa->quRights->DBPaste( dmvNewNavadvipa->BufferIntBox, dmvNewNavadvipa->quDB, dmvNewNavadvipa->quRightsKindKindID );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgRightsDrawColumnCell( TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State  )
{
  if ( !State.Contains( gdFocused ) && !dgRights->IsCurrentSelected() ) {
    TField *f = dmvNewNavadvipa->quRightsKindID;
    if ( !f->IsNull )
      dmvNewNavadvipa->DBGridColor( dgRights, f->AsLargeInt );
  }
  dgRights->DefaultDrawColumnCell( Rect, DataCol, Column, State );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::GenerateConsts( bool IsCpp
                                            , TNNVQuery *qu
                                            , TField* FLiteral
                                            , TField* FIndex )
{
  fmvCode = new TfmvCode( Application );

  TBookmark B = qu->Bookmark;
  qu->DisableControls();
  String S;
  try {
    qu->First();
    while ( !qu->Eof ) {
      S = L"const std::size_t " + FLiteral->AsString;
      if ( IsCpp )
        S = S + L" = " + FIndex->AsString + L";";
      else
        S = L"extern PACKAGE " + S + L";";
      fmvCode->meCode->Lines->Add( S );
      qu->Next();
    }
    qu->Bookmark = B;
  } __finally {
    qu->EnableControls();
  }

  fmvCode->ShowDialog( this );
}

void __fastcall TfmvExplorer::aGenerateColorConstsExecute( TObject *Sender )
{
  GenerateConsts( true
                , dmvNewNavadvipa->quColor
                , dmvNewNavadvipa->quColorEnumLiteral
                , dmvNewNavadvipa->quColorVectorIndex );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aGenerateColorConstsWithoutIndexExecute(TObject *Sender)
{
  GenerateConsts( false
                , dmvNewNavadvipa->quColor
                , dmvNewNavadvipa->quColorEnumLiteral
                , dmvNewNavadvipa->quColorVectorIndex );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgColorTitleClick( TColumn *Column )
{
  dmvNewNavadvipa->quColor->OrderByColumn = Column;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgRoleRightsDBCut( TObject *Sender )
{
  dgRoleRights->CWSelect( dmvNewNavadvipa->quRoleRightsRoleRightsID, &dmvNewNavadvipa->BufferIntBox, true );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgRoleRightsDBCopy( TObject *Sender )
{
  dgRoleRights->CWSelect( dmvNewNavadvipa->quRoleRightsRoleRightsID, &dmvNewNavadvipa->BufferIntBox, false );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgRoleRightsDBPaste( TObject *Sender )
{
  dmvNewNavadvipa->quRoleRights->DBPaste( dmvNewNavadvipa->BufferIntBox, dmvNewNavadvipa->quDB, dmvNewNavadvipa->quRoleEntityID );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgRoleDBCut( TObject *Sender )
{
  dgRole->CWSelect( dmvNewNavadvipa->quRoleEntityID, &dmvNewNavadvipa->BufferIntBox, true );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgRoleDBCopy( TObject *Sender )
{
  dmvNewNavadvipa->quRole->DBPaste( dmvNewNavadvipa->BufferIntBox, dmvNewNavadvipa->quDB, dmvNewNavadvipa->quRoleKindKindID );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgRoleDBPaste( TObject *Sender )
{
  dmvNewNavadvipa->quRole->DBPaste( dmvNewNavadvipa->BufferIntBox, dmvNewNavadvipa->quDB, dmvNewNavadvipa->quRoleKindKindID );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgRoleDrawColumnCell(TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State)
{
  if ( !State.Contains( gdFocused ) && !dgRole->IsCurrentSelected() ) {
    TField *f = dmvNewNavadvipa->quRoleKindID;
    if ( !f->IsNull )
      dmvNewNavadvipa->DBGridColor( dgRole, f->AsLargeInt );
  }
  dgRole->DefaultDrawColumnCell( Rect, DataCol, Column, State );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::DRoleRightsPrepare( TObject *Sender )
{
  fmvRights->FindID( dmvNewNavadvipa->quRoleRightsEntityID->AsLargeInt );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::RightsGetDialogForm( TObject *Sender, TCustomForm *&fm )
{
  NNVFormList.New( __classid( TfmvRights ), &fmvRights, this );
  fm = fmvRights;
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::DRoleRightsExecute( TObject *Sender )
{
  dmvNewNavadvipa->quRoleRights->CWCheckEditMode();
  NNV::SetFieldValue( dmvNewNavadvipa->quRoleRightsEntityID, fmvRights->ResultNo );
  NNV::SetFieldValue( dmvNewNavadvipa->quRoleRightsRight,    fmvRights->ResultNote );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::DUserRightsPrepare( TObject *Sender )
{
  fmvRights->FindID( dmvNewNavadvipa->quUserRightsEntityID->AsLargeInt );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::DUserRightsExecute( TObject *Sender )
{
  dmvNewNavadvipa->quUserRights->CWCheckEditMode();
  NNV::SetFieldValue( dmvNewNavadvipa->quUserRightsEntityID, fmvRights->ResultNo );
  NNV::SetFieldValue( dmvNewNavadvipa->quUserRightsRight,    fmvRights->ResultNote );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::DUserRolePrepare( TObject *Sender )
{
  fmvRoles->FindID( dmvNewNavadvipa->quUserRolesEntityID->AsLargeInt );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::DUserRoleExecute( TObject *Sender )
{
  dmvNewNavadvipa->quUserRoles->CWCheckEditMode();
  NNV::SetFieldValue( dmvNewNavadvipa->quUserRolesEntityID, fmvRoles->ResultNo );
  NNV::SetFieldValue( dmvNewNavadvipa->quUserRolesRole,     fmvRoles->ResultNote );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::RolesGetDialogForm( TObject *Sender, TCustomForm *&fm )
{
  NNVFormList.New( __classid( TfmvRoles ), &fmvRoles, this );
  fm = fmvRoles;
}
//---------------------------------------------------------------------------


void __fastcall TfmvExplorer::dgUserRightsDrawColumnCell(TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State)
{
  if ( !State.Contains( gdFocused ) && !dgUserRights->IsCurrentSelected() ) {
    TField *f = dmvNewNavadvipa->quUserRightsRightID;
    if ( !f->IsNull )
      dmvNewNavadvipa->DBGridColor( dgUserRights, f->AsLargeInt );
  }
  dgUserRights->DefaultDrawColumnCell( Rect, DataCol, Column, State );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgRoleRightsDrawColumnCell(TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State)
{
  if ( !State.Contains( gdFocused ) && !dgRoleRights->IsCurrentSelected() ) {
    TField *f = dmvNewNavadvipa->quRoleRightsRightID;
    if ( !f->IsNull )
      dmvNewNavadvipa->DBGridColor( dgRoleRights, f->AsLargeInt );
  }
  dgRoleRights->DefaultDrawColumnCell( Rect, DataCol, Column, State );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgUserRolesDrawColumnCell(TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State)
{
  if ( !State.Contains( gdFocused ) && !dgUserRoles->IsCurrentSelected() ) {
    TField *f = dmvNewNavadvipa->quUserRolesRoleID;
    if ( !f->IsNull )
      dmvNewNavadvipa->DBGridColor( dgUserRoles, f->AsLargeInt );
  }
  dgUserRoles->DefaultDrawColumnCell( Rect, DataCol, Column, State );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::paFonValueChangeDblClick(TObject *Sender)
{
  dmvNewNavadvipa->cdNN->Color = paFonValueChange->Color;
  if ( dmvNewNavadvipa->cdNN->Execute() ) {
    NNVConst::FonColorValueChange = dmvNewNavadvipa->cdNN->Color;
    paFonValueChange->Color       = dmvNewNavadvipa->cdNN->Color;
  }
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::paFontValueChangeDblClick(TObject *Sender)
{
  dmvNewNavadvipa->cdNN->Color = paFontValueChange->Color;
  if ( dmvNewNavadvipa->cdNN->Execute() ) {
    NNVConst::FontColorValueChange = dmvNewNavadvipa->cdNN->Color;
    paFontValueChange->Color       = dmvNewNavadvipa->cdNN->Color;
    paFonValueChange->Font->Color  = dmvNewNavadvipa->cdNN->Color;
  }
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aGrantSuperUserExecute(TObject *Sender)
{
  dmvNewNavadvipa->SetUserRole( dmvNewNavadvipa->quUsersName->AsString
                              , SuperUserName
                              , true );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aRevokeSuperUserExecute(TObject *Sender)
{
  dmvNewNavadvipa->SetUserRole( dmvNewNavadvipa->quUsersName->AsString
                              , SuperUserName
                              , false );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgUserRightsDBCut( TObject *Sender )
{
  dgUserRights->CWSelect( dmvNewNavadvipa->quUserRightsUserRightsID, &dmvNewNavadvipa->BufferIntBox, true );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgUserRightsDBCopy( TObject *Sender )
{
  dgUserRights->CWSelect( dmvNewNavadvipa->quUserRightsUserRightsID, &dmvNewNavadvipa->BufferIntBox, false );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgUserRightsDBPaste( TObject *Sender )
{
  dmvNewNavadvipa->quUserRights->DBPaste( dmvNewNavadvipa->BufferIntBox, dmvNewNavadvipa->quDB, dmvNewNavadvipa->quUsersUserID );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgUserRolesDBCut(TObject *param_0$)
{
  dgUserRoles->CWSelect( dmvNewNavadvipa->quUserRolesUserRolesID, &dmvNewNavadvipa->BufferIntBox, true );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgUserRolesDBCopy( TObject *Sender )
{
  dgUserRoles->CWSelect( dmvNewNavadvipa->quUserRolesUserRolesID, &dmvNewNavadvipa->BufferIntBox, false );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::dgUserRolesDBPaste( TObject *Sender )
{
  dmvNewNavadvipa->quUserRoles->DBPaste( dmvNewNavadvipa->BufferIntBox, dmvNewNavadvipa->quDB, dmvNewNavadvipa->quUsersUserID );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aGenerateRightsConstsExecute(TObject *Sender)
{
  GenerateConsts( true
                , dmvNewNavadvipa->quRights
                , dmvNewNavadvipa->quRightsLiteral
                , dmvNewNavadvipa->quRightsVectorIndex );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aGenerateRightsConstsWithoutIndexExecute(TObject *Sender)

{
  GenerateConsts( false
                , dmvNewNavadvipa->quRights
                , dmvNewNavadvipa->quRightsLiteral
                , dmvNewNavadvipa->quRightsVectorIndex );
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::aRightsIndexGenerateExecute(TObject *Sender)
{
  dmvNewNavadvipa->RightsIndexGenerate();
}
//---------------------------------------------------------------------------

void __fastcall TfmvExplorer::rrResRight( TObject *Sender )
{
  NNV::TBoolVector &Rights = dmvNewNavadvipa->rmDB->Rights;

  aNewUser->Enabled         = Rights[ NNRights::UserEdit ];
  aSetUserPassord->Enabled  = Rights[ NNRights::UserEdit ];
  aDeleteUser->Enabled      = Rights[ NNRights::UserEdit ];
  aNewSuperUser->Enabled    = Rights[ NNRights::UserEdit ];
  aGrantSuperUser->Enabled  = Rights[ NNRights::UserEdit ];
  aRevokeSuperUser->Enabled = Rights[ NNRights::UserEdit ];

  dgUsers->ReadOnly         = !Rights[ NNRights::UserEdit ];
  dgUserRights->ReadOnly    = !Rights[ NNRights::UserEdit ];
  dgUserRoles->ReadOnly     = !Rights[ NNRights::UserEdit ];
  dgRights->ReadOnly        = !Rights[ NNRights::RightsEdit ];
  dgCommod->ReadOnly        = !Rights[ NNRights::CommodEdit ];
  dgColor->ReadOnly         = !Rights[ NNRights::ColorEdit ];
  dgRole->ReadOnly          = !Rights[ NNRights::RoleEdit ];
  dgRoleRights->ReadOnly    = !Rights[ NNRights::RoleEdit ];
}
//---------------------------------------------------------------------------


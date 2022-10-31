//---------------------------------------------------------------------------

#ifndef FMV_ExplorerH
#define FMV_ExplorerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "VCL_NNFlagBox.h"
#include "VCL_NNFmDB.h"
#include "VCL_NNPanel.h"
#include "VCL_NNRightsManager.h"
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "VCL_NNDBMiracle.h"
#include "VCL_NNSplitter.h"
#include <Vcl.ComCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include "VCL_NNPageControl.h"
#include <Vcl.ToolWin.hpp>
#include "VCL_NNNumberToWords.h"
#include "VCL_NNActionList.h"
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include "VCL_NNDateTimeDialog.h"
#include "VCL_NNDialogExec.h"
#include "VCL_NNComboBox.h"
#include "VCL_NNComboBoxDateTime.h"
#include "VCL_NNDBComboBoxDateTime.h"
#include <Vcl.Mask.hpp>
#include "VCL_NNDBComboBox.h"
#include <Vcl.Menus.hpp>
#include "VCL_NNFrPeriod.h"
#include "VCL_NNFrDoubleDiapazon.h"
#include "VCL_NNFrDiapazon.h"
#include "VCL_NNFrIntDiapazon.h"
#include "VCL_NNFrLongLongIntDiapazon.h"
#include "VCL_NNFrShortIntDiapazon.h"
#include "VCL_NNDrawGrid.h"
#include "VCL_NNDialog.h"
#include "VCL_NNLanguageManager.h"
#include "VCL_NNGolovolomka15.h"
#include <Vcl.NumberBox.hpp>
//---------------------------------------------------------------------------
class TfmvExplorer : public TfmvDB
{
__published:	// IDE-managed Components
  TNNVDBTreeView *tvExamples;
  TNNVSplitter *splExamples;
  TNNVPanel *paUsers;
  TNNVDBGrid *dgUsers;
  TNNVNodeAdmin *naGolovolomka15;
  TNNVNodeAdmin *naColorKind;
  TNNVNodeAdmin *naNumberToWords;
  TNNVNodeAdmin *naUsers;
  TNNVPanel *paGolovolomka15;
  TNNVPanel *paNumberToWords;
  TMemo *meNumberToWords;
  TNNVPanel *paNumberToWordsT;
  TLabel *laNumberToWords;
  TEdit *edNumberToWords;
  TNNVNumberToWords *nwExamples;
  TNNVPanel *paUsersT;
  TNNVNodeAdmin *naCommodKind;
  TNNVPanel *paCommod;
  TNNVPanel *paCommodT;
  TNNVPanel *paCommodProp;
  TNNVDBGrid *dgCommod;
  TToolBar *tbrUsers;
  TAction *aNewUser;
  TAction *aSetUserPassord;
  TToolButton *tbNewUser;
  TToolButton *tbSetUserPassord;
  TAction *aDeleteUser;
  TToolButton *tbDeleteUser;
  TNNVDBComboBoxDateTime *ddtUsersPassportDate;
  TNNVDBComboBox *dcbUsersNote;
  TNNVDBComboBoxDateTime *ddtUsersBirthDate;
  TNNVDBComboBoxDateTime *ddtUsersCreateDate;
  TLabel *laEntityCommodID;
  TDBEdit *edEntityCommodID;
  TDBEdit *edKindCommodID;
  TLabel *laKindCommodID1q;
  TDBEdit *edEntityCommod;
  TLabel *laEntityCommod;
  TDBEdit *dePriceCommod;
  TLabel *laPriceCommod;
  TNNVPanel *paColor;
  TNNVDBGrid *dgColor;
  TAction *aColorIndexGenerate;
  TNNVPanel *paRole;
  TNNVPanel *paRights;
  TNNVNodeAdmin *naRightsKind;
  TNNVNodeAdmin *naRoleKind;
  TNNVDBGrid *dgRights;
  TAction *aGenerateColorConsts;
  TToolBar *tbrRole;
  TNNVDBGrid *dgRole;
  TNNVSplitter *splRole;
  TNNVDBGrid *dgRoleRights;
  TNNVDialog *DRoleRights;
  TNNVPanel *paUsersB;
  TNNVDBGrid *dgUserRights;
  TNNVSplitter *splUserRights;
  TNNVSplitter *splUsersB;
  TNNVDBGrid *dgUserRoles;
  TNNVDialog *DUserRights;
  TNNVDialog *DUserRole;
  TAction *aGenerateColorConstsWithoutIndex;
  TNNVPanel *paColorT;
  TToolBar *tbColor;
  TToolButton *tbColorIndexGenerate;
  TToolButton *tbGenerateColorConsts;
  TToolButton *tbGenerateColorConstsWithoutIndex;
  TNNVPanel *paFonValueChange;
  TNNVPanel *paFontValueChange;
  TAction *aNewSuperUser;
  TToolButton *tbNewSuperUser;
  TAction *aGrantSuperUser;
  TAction *aRevokeSuperUser;
  TToolButton *tbGrantSuperUser;
  TToolButton *tbRevokeSuperUser;
  TAction *aGenerateRightsConsts;
  TAction *aGenerateRightsConstsWithoutIndex;
  TToolBar *tbrRights;
  TToolButton *tbGenerateRightsConsts;
  TToolButton *tbGenerateRightsConstsWithoutIndex;
  TAction *aRightsIndexGenerate;
  TToolButton *tbRightsIndexGenerate;
  TNNVGolovolomka15 *Golovolomka15;
  TToolBar *tbrGolovolomka15;
  TAction *aGolovolomka15StartPosition;
  TAction *aGolovolomka15Mix;
  TToolButton *tbGolovolomka15StartPosition;
  TToolButton *tbGolovolomka15Mix;
  TNumberBox *nbGolovolomka15MixCount;
  TNumberBox *nbGolovolomka15HodPause;
  TNNVNodeAdmin *naLanguages;
  TNNVPanel *paLanguages;
  TNNVDBGrid *dgLanguages;
  void __fastcall coResLoad( TObject *Sender );
  void __fastcall coResSave( TObject *Sender );
  void __fastcall coResEndLoad( TObject *Sender );
  void __fastcall naGolovolomka15Enter( TObject *Sender );
  void __fastcall naGolovolomka15Exit( TObject *Sender );
  void __fastcall naGolovolomka15LoadNodes( TObject *Sender );
  void __fastcall FormCreate(TObject *Sender);
  void __fastcall FormDestroy(TObject *Sender);
  void __fastcall naColorKindEnter(TObject *Sender );
  void __fastcall naColorKindExit(TObject *Sender );
  void __fastcall naColorKindLoadNodes(TObject *Sender );
  void __fastcall naNumberToWordsEnter(TObject *Sender );
  void __fastcall naNumberToWordsExit(TObject *Sender );
  void __fastcall naNumberToWordsLoadNodes(TObject *Sender );
  void __fastcall naUsersEnter(TObject *Sender );
  void __fastcall naUsersExit(TObject *Sender );
  void __fastcall naUsersLoadNodes(TObject *Sender );
  void __fastcall edNumberToWordsKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
  void __fastcall nwExamplesChange( TObject *Sender );
  void __fastcall naNumberToWordsFirstEnter( TObject *Sender);
  void __fastcall naUsersFirstEnter( TObject *Sender );
  void __fastcall naUsersLastExit( TObject *Sender );
  void __fastcall naCommodKindLoadNodes( TObject *Sender );
  void __fastcall naCommodKindEnter( TObject *Sender );
  void __fastcall naCommodKindExit( TObject *Sender );
  void __fastcall naCommodKindFirstEnter( TObject *Sender );
  void __fastcall naCommodKindLastExit( TObject *Sender );
  void __fastcall naCommodKindGetNodeParams( TObject *Sender, TNNVNodeParams &NodeParams );
  void __fastcall aNewUserExecute( TObject *Sender );
  void __fastcall aSetUserPassordExecute( TObject *Sender );
  void __fastcall aDeleteUserExecute(TObject *Sender);
  void __fastcall dgCommodDBCut( TObject *Sender );
  void __fastcall dgCommodDBPaste( TObject *Sender );
  void __fastcall naColorKindFirstEnter( TObject *Sender );
  void __fastcall naColorKindLastExit( TObject *Sender );
  void __fastcall naColorKindGetNodeParams( TObject *Sender, TNNVNodeParams &NodeParams );
  void __fastcall dgColorDBCut( TObject *Sender );
  void __fastcall dgColorDBPaste( TObject *Sender );
  void __fastcall dgColorEditButtonClick(TObject *Sender);
  void __fastcall aColorIndexGenerateExecute( TObject *Sender );
  void __fastcall dgColorDrawColumnCell(TObject *Sender, const TRect &Rect, int DataCol,
          TColumn *Column, TGridDrawState State);
  void __fastcall naRightsKindEnter( TObject *Sender );
  void __fastcall naRightsKindExit( TObject *Sender );
  void __fastcall naRightsKindFirstEnter( TObject *Sender );
  void __fastcall naRightsKindGetNodeParams( TObject *Sender, TNNVNodeParams &NodeParams );
  void __fastcall naRightsKindLastExit( TObject *Sender );
  void __fastcall naRightsKindLoadNodes( TObject *Sender );
  void __fastcall naRoleKindEnter( TObject *Sender );
  void __fastcall naRoleKindExit( TObject *Sender );
  void __fastcall naRoleKindFirstEnter( TObject *Sender );
  void __fastcall naRoleKindGetNodeParams( TObject *Sender, TNNVNodeParams &NodeParams );
  void __fastcall naRoleKindLastExit( TObject *Sender );
  void __fastcall naRoleKindLoadNodes( TObject *Sender );
  void __fastcall dgRightsDBCut( TObject *Sender );
  void __fastcall dgRightsDBPaste( TObject *Sender );
  void __fastcall dgRightsDrawColumnCell( TObject *Sender, const TRect &Rect, int DataCol,
          TColumn *Column, TGridDrawState State );
  void __fastcall aGenerateColorConstsExecute( TObject *Sender );
  void __fastcall dgColorTitleClick( TColumn *Column );
  void __fastcall dgRoleDBPaste( TObject *Sender );
  void __fastcall dgRoleDrawColumnCell(TObject *Sender, const TRect &Rect, int DataCol,
          TColumn *Column, TGridDrawState State);
  void __fastcall DRoleRightsPrepare( TObject *Sender );
  void __fastcall RightsGetDialogForm( TObject *Sender, TCustomForm *&fm );
  void __fastcall RolesGetDialogForm( TObject *Sender, TCustomForm *&fm );
  void __fastcall DRoleRightsExecute( TObject *Sender );
  void __fastcall DUserRightsPrepare( TObject *Sender );
  void __fastcall DUserRightsExecute( TObject *Sender );
  void __fastcall DUserRolePrepare(TObject *param_06hv�0);
  void __fastcall DUserRoleExecute(TObject *param_06hv�0);
  void __fastcall dgUserRightsDrawColumnCell(TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State);
  void __fastcall dgRoleRightsDrawColumnCell(TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State);
  void __fastcall dgUserRolesDrawColumnCell(TObject *Sender, const TRect &Rect, int DataCol,
          TColumn *Column, TGridDrawState State);
  void __fastcall aGenerateColorConstsWithoutIndexExecute( TObject *Sender );
  void __fastcall paFonValueChangeDblClick( TObject *Sender );
  void __fastcall paFontValueChangeDblClick( TObject *Sender );
  void __fastcall aNewSuperUserExecute( TObject *Sender );
  void __fastcall aGrantSuperUserExecute( TObject *Sender );
  void __fastcall aRevokeSuperUserExecute( TObject *Sender );
  void __fastcall dgUserRightsDBCut( TObject *Sender );
  void __fastcall dgUserRightsDBCopy( TObject *Sender );
  void __fastcall dgUserRightsDBPaste( TObject *Sender );
  void __fastcall dgUserRolesDBCut( TObject *Sender );
  void __fastcall dgUserRolesDBCopy( TObject *Sender );
  void __fastcall dgUserRolesDBPaste( TObject *Sender );
  void __fastcall dgRoleRightsDBCopy( TObject *Sender );
  void __fastcall dgRoleRightsDBPaste( TObject *Sender );
  void __fastcall dgRoleRightsDBCut( TObject *Sender );
  void __fastcall dgRoleDBCut( TObject *Sender );
  void __fastcall dgRoleDBCopy( TObject *Sender );
  void __fastcall aGenerateRightsConstsExecute(TObject *Sender);
  void __fastcall aGenerateRightsConstsWithoutIndexExecute(TObject *Sender);
  void __fastcall aRightsIndexGenerateExecute(TObject *Sender);
  void __fastcall rrResRight( TObject *Sender );
  void __fastcall aGolovolomka15StartPositionExecute(TObject *Sender);
  void __fastcall aGolovolomka15MixExecute(TObject *Sender);
  void __fastcall Golovolomka15Vijaya( TObject *Sender );
  void __fastcall naLanguagesEnter( TObject *Sender );
  void __fastcall naLanguagesExit( TObject *Sender );
  void __fastcall naLanguagesLoadNodes( TObject *Sender );
  void __fastcall naLanguagesFirstEnter( TObject *Sender );
  void __fastcall naLanguagesLastExit( TObject *Sender );
private:	// User declarations
  typedef TfmvDB inherited;
  void __fastcall LoadNodeAdmins();
  void __fastcall LoadTrees();
  void __fastcall LoadGrids();
  void __fastcall SaveNodeAdmins();
  void __fastcall SaveTrees();
  void __fastcall SaveGrids();
  void __fastcall ExecuteColorSetup();
  void __fastcall SetOnGetDialogFormsBecauseBug();
  void __fastcall GenerateConsts( bool IsCpp
                                , TNNVQuery *qu
                                , TField* FLiteral
                                , TField* FIndex );
  void __fastcall SetColorPanelValueChange();
public:		// User declarations
  __fastcall TfmvExplorer( TComponent* Owner );
};
//---------------------------------------------------------------------------
extern PACKAGE TfmvExplorer *fmvExplorer;
//---------------------------------------------------------------------------
#endif

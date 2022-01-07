//---------------------------------------------------------------------------

#ifndef FMV_ExamplesH
#define FMV_ExamplesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "VCL_NNConfig.h"
#include "VCL_NNFlagBox.h"
#include "VCL_NNFmDB.h"
#include "VCL_NNPanel.h"
#include "VCL_NNRightsManager.h"
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "VCL_NNDBTreeView.h"
#include "VCL_NNSplitter.h"
#include <Vcl.ComCtrls.hpp>
#include "VCL_NNDBGrid.h"
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include "VCL_NNPageControl.h"
#include <Vcl.ToolWin.hpp>
#include "VCL_NNNumberToWords.h"
//---------------------------------------------------------------------------
class TfmvExamples : public TfmvDB
{
__published:	// IDE-managed Components
  TNNVDBTreeView *tvExamples;
  TNNVSplitter *splExamples;
  TNNVPanel *paUsers;
  TNNVDBGrid *dgUsers;
  TNNVNodeAdmin *naConfig;
  TNNVNodeAdmin *naColor;
  TNNVNodeAdmin *naNumberToWords;
  TNNVNodeAdmin *naUsers;
  TNNVPanel *paConfig;
  TNNVPanel *paColor;
  TNNVPanel *paNumberToWords;
  TMemo *meNumberToWords;
  TNNVPanel *NNVPanel1;
  TLabel *laNumberToWords;
  TEdit *edNumberToWords;
  TNNVNumberToWords *nwExamples;
  void __fastcall coResLoad( TObject *Sender );
  void __fastcall coResSave( TObject *Sender );
  void __fastcall coResEndLoad( TObject *Sender );
  void __fastcall naConfigEnter( TObject *Sender );
  void __fastcall naConfigExit( TObject *Sender );
  void __fastcall naConfigLoadNodes( TObject *Sender );
  void __fastcall FormCreate(TObject *Sender);
  void __fastcall FormDestroy(TObject *Sender);
  void __fastcall naColorEnter(TObject *Sender );
  void __fastcall naColorExit(TObject *Sender );
  void __fastcall naColorLoadNodes(TObject *Sender );
  void __fastcall naNumberToWordsEnter(TObject *Sender );
  void __fastcall naNumberToWordsExit(TObject *Sender );
  void __fastcall naNumberToWordsLoadNodes(TObject *Sender );
  void __fastcall naUsersEnter(TObject *Sender );
  void __fastcall naUsersExit(TObject *Sender );
  void __fastcall naUsersLoadNodes(TObject *Sender );
  void __fastcall edNumberToWordsKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
  void __fastcall nwExamplesChange(TObject *Sender);
  void __fastcall naNumberToWordsFirstEnter(TObject *Sender);
private:	// User declarations
  typedef TfmvDB inherited;
  void __fastcall LoadNodeAdmins();
  void __fastcall LoadTrees();
  void __fastcall LoadGrids();
  void __fastcall SaveNodeAdmins();
  void __fastcall SaveTrees();
  void __fastcall SaveGrids();
public:		// User declarations
  __fastcall TfmvExamples( TComponent* Owner );
};
//---------------------------------------------------------------------------
extern PACKAGE TfmvExamples *fmvExamples;
//---------------------------------------------------------------------------
#endif

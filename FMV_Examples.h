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
  TEdit *Edit1;
  TMemo *Memo1;
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
private:	// User declarations
  typedef TfmvDB inherited;
public:		// User declarations
  __fastcall TfmvExamples( TComponent* Owner );
};
//---------------------------------------------------------------------------
extern PACKAGE TfmvExamples *fmvExamples;
//---------------------------------------------------------------------------
#endif

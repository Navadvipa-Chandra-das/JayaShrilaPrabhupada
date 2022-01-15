//---------------------------------------------------------------------------

#ifndef FMV_TestH
#define FMV_TestH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "VCL_NNDBGrid.h"
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include "VCL_NNStoryData.h"
#include "VCL_NNConfig.h"
#include "VCL_NNFlagBox.h"
#include "VCL_NNFmRes.h"
#include "VCL_NNRightsManager.h"
#include "frxClass.hpp"
#include <Vcl.ToolWin.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ActnCtrls.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>
#include <Vcl.Menus.hpp>
#include "VCL_NNActionList.h"
//---------------------------------------------------------------------------
class TfmTestVCL : public TfmvRes
{
__published:	// IDE-managed Components
  TfrxReport *frxReport1;
  TToolBar *tbrTest;
  TToolButton *tbExamples;
  TActionList *alTest;
  TAction *alExamples;
  TMainMenu *mmTest;
  TMenuItem *miTopExamples;
  TMenuItem *miExamples;
  void __fastcall alExamplesExecute( TObject *Sender );
private:	// User declarations
  typedef TfmvRes inherited;
public:		// User declarations
  __fastcall TfmTestVCL( TComponent* Owner );
};
//---------------------------------------------------------------------------
extern PACKAGE TfmTestVCL *fmTestVCL;
//---------------------------------------------------------------------------
#endif

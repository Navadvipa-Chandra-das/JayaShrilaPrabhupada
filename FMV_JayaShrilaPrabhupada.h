//---------------------------------------------------------------------------

#ifndef FMV_JayaShrilaPrabhupadaH
#define FMV_JayaShrilaPrabhupadaH
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
class TfmvJayaShrilaPrabhupada : public TfmvRes
{
__published:	// IDE-managed Components
  TfrxReport *frxReport1;
  TToolBar *tbrTest;
  TToolButton *tbExamples;
  TMainMenu *mmTest;
  TMenuItem *miAction;
  TMenuItem *miExamples;
  TToolButton *tbChangePassord;
  TAction *alExamples;
  TAction *aChangePassord;
  TAction *aFormListShow;
  TToolButton *tbFormListShow;
  TToolButton *tbActionListSetup;
  TAction *aCurrentMain;
  TAction *aFormPrev;
  TAction *aFormNext;
  TAction *aFormCyclePrev;
  TAction *aFormCycleNext;
  TMenuItem *miWindows;
  TMenuItem *miCurrentMain;
  TMenuItem *miFormPrev;
  TMenuItem *miFormCyclePrev;
  TMenuItem *miFormCycleNext;
  TMenuItem *miSetup;
  TMenuItem *miActionListSetup;
  TMenuItem *miChangePassord;
  TMenuItem *miFormNext;
  void __fastcall alExamplesExecute( TObject *Sender );
  void __fastcall aChangePassordExecute(TObject *Sender);
  void __fastcall aFormListShowExecute(TObject *Sender);
  void __fastcall aCurrentMainExecute(TObject *Sender);
  void __fastcall aFormPrevExecute(TObject *Sender);
  void __fastcall aFormNextExecute(TObject *Sender);
  void __fastcall aFormCyclePrevExecute(TObject *Sender);
  void __fastcall aFormCycleNextExecute(TObject *Sender);
  void __fastcall aFormPrevUpdate(TObject *Sender);
  void __fastcall aFormNextUpdate(TObject *Sender);
private:	// User declarations
  typedef TfmvRes inherited;
protected:
  virtual void __fastcall RegisterForHistory() {};
public:		// User declarations
  __fastcall TfmvJayaShrilaPrabhupada( TComponent* Owner );
};
//---------------------------------------------------------------------------
extern PACKAGE TfmvJayaShrilaPrabhupada *fmvJayaShrilaPrabhupada;
//---------------------------------------------------------------------------
#endif

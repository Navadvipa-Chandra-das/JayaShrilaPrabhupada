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
#include "VCL_NNDBMiracle.h"
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include "VCL_NNFlagBox.h"
#include "VCL_NNFmRes.h"
#include "VCL_NNRightsManager.h"
#include <Vcl.ToolWin.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ActnCtrls.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.Menus.hpp>
#include "VCL_NNActionList.h"
#include "VCL_NNLanguageManager.h"
//---------------------------------------------------------------------------
class TfmvJayaShrilaPrabhupada : public TfmvRes
{
__published:	// IDE-managed Components
  TToolBar *tbrTest;
  TToolButton *tbExamples;
  TMainMenu *mmShrilaPrabhupada;
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
  TAction *aLock;
  TToolButton *tbLock;
  TMenuItem *miLock;
  TAction *aRightsRefresh;
  TToolButton *tbRightsRefresh;
  TMenuItem *miRightsRefresh;
  TComboBox *cbLanguage;
  void __fastcall alExamplesExecute( TObject *Sender );
  void __fastcall aChangePassordExecute( TObject *Sender );
  void __fastcall aFormListShowExecute( TObject *Sender );
  void __fastcall aCurrentMainExecute( TObject *Sender );
  void __fastcall aFormPrevExecute( TObject *Sender );
  void __fastcall aFormNextExecute( TObject *Sender );
  void __fastcall aFormCyclePrevExecute( TObject *Sender );
  void __fastcall aFormCycleNextExecute( TObject *Sender );
  void __fastcall aFormPrevUpdate( TObject *Sender );
  void __fastcall aFormNextUpdate( TObject *Sender );
  void __fastcall FormCreate( TObject *Sender );
  void __fastcall aLockExecute( TObject *Sender );
  void __fastcall aRightsRefreshExecute( TObject *Sender );
  void __fastcall cbLanguageChange( TObject *Sender );
  void __fastcall lnResLanguage( TObject *Sender );
  void __fastcall coResLoad( TObject *Sender );
  void __fastcall coResSave( TObject *Sender );
private:	// User declarations
  typedef TfmvRes inherited;
  void __fastcall PrepareLock( TObject *Sender );
  void __fastcall PrepareUnLock( TObject *Sender );
  void __fastcall PrepareLanguages();
protected:
  virtual void __fastcall RegisterForHistory() {};
public:		// User declarations
  __fastcall TfmvJayaShrilaPrabhupada( TComponent* Owner );
};
//---------------------------------------------------------------------------
extern PACKAGE TfmvJayaShrilaPrabhupada *fmvJayaShrilaPrabhupada;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#ifndef FMV_LoginJayaShrilaPrabhupadaH
#define FMV_LoginJayaShrilaPrabhupadaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "VCL_NNFmLogin.h"
#include "VCL_NNFrLogin.h"
#include "VCL_NNConfig.h"
#include "VCL_NNFlagBox.h"
#include "VCL_NNRightsManager.h"
#include "VCL_NNActionList.h"
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include "VCL_NNLanguageManager.h"
//---------------------------------------------------------------------------
class TfmvLoginJayaShrilaPrabhupada : public TfmvLogin
{
__published:	// IDE-managed Components
  void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
  typedef TfmvLogin inherited;
public:		// User declarations
  __fastcall TfmvLoginJayaShrilaPrabhupada(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfmvLoginJayaShrilaPrabhupada *fmvLoginJayaShrilaPrabhupada;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#ifndef FMV_LoginExamplesH
#define FMV_LoginExamplesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "VCL_NNFmvLogin.h"
#include "VCL_NNFrmLogin.h"
#include "VCL_NNConfig.h"
#include "VCL_NNFlagBox.h"
#include "VCL_NNRightsManager.h"
#include "VCL_NNActionList.h"
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
//---------------------------------------------------------------------------
class TfmvLoginExamples : public TfmvLogin
{
__published:	// IDE-managed Components
private:	// User declarations
  typedef TfmvLogin inherited;
public:		// User declarations
  __fastcall TfmvLoginExamples(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfmvLoginExamples *fmvLoginExamples;
//---------------------------------------------------------------------------
#endif

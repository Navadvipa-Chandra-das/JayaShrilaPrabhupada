//---------------------------------------------------------------------------

#ifndef FMV_ChangePasswordExamplesH
#define FMV_ChangePasswordExamplesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "VCL_NNActionList.h"
#include "VCL_NNConfig.h"
#include "VCL_NNFlagBox.h"
#include "VCL_NNFmvChangePassord.h"
#include "VCL_NNRightsManager.h"
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
//---------------------------------------------------------------------------
class TfmvChangePasswordExamples : public TfmvChangePassword
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
  __fastcall TfmvChangePasswordExamples(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfmvChangePasswordExamples *fmvChangePasswordExamples;
//---------------------------------------------------------------------------
#endif

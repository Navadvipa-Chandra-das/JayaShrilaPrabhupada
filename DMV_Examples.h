//---------------------------------------------------------------------------

#ifndef VCL_DMNizhnyayaNavadvipaH
#define VCL_DMNizhnyayaNavadvipaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include "VCL_NNConfig.h"
#include "VCL_NNDmRes.h"
#include "VCL_NNRightsManager.h"
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <FireDAC.Phys.PG.hpp>
#include <FireDAC.Phys.PGDef.hpp>
#include <System.ImageList.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ImgList.hpp>
#include <FireDAC.Moni.Base.hpp>
#include <FireDAC.Moni.RemoteClient.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Stan.Param.hpp>
#include "VCL_NNDBTreeView.h"
//---------------------------------------------------------------------------
class TdmvExamples : public TdmvRes
{
__published:	// IDE-managed Components
  TFDConnection *conDB;
  TFDTransaction *trDB;
  TFDPhysPgDriverLink *PgDrLinkDB;
  TNNVRightsManager *rmDB;
  TFDMoniRemoteClientLink *monDB;
  TNNVQuery *quCommodKind;
  TNNVQuery *quUsers;
  TIntegerField *quUsersUserID;
  TWideStringField *quUsersName;
  TWideStringField *quUsersFIO;
  TWideStringField *quUsersNote;
  TWideStringField *quUsersINN;
  TWideStringField *quUsersPassport;
  TWideStringField *quUsersPassportKemVydan;
  TDateField *quUsersPassportDate;
  TDataSource *dsUsers;
  TNNVQuery *quCommod;
  TIntegerField *quCommodKindKindID;
  TIntegerField *quCommodKindParentID;
  TWideStringField *quCommodKindKind;
  TIntegerField *quCommodKindSortNum;
  TBooleanField *quCommodKindActual;
  TBooleanField *quCommodKindInPrice;
  TIntegerField *quCommodKindLevel;
  TDataSource *dsCommodKind;
  void __fastcall dmvResCreate( TObject *Sender );
  void __fastcall conDBAfterConnect( TObject *Sender );
private:	// User declarations
  typedef TdmvRes inherited;
public:		// User declarations
  __fastcall TdmvExamples( TComponent* Owner );
  void __fastcall SetNodeParamsCommodKind( TNNVNodeParams &NodeParams );
};
//---------------------------------------------------------------------------
extern PACKAGE TdmvExamples *dmvExamples;
//---------------------------------------------------------------------------
#endif

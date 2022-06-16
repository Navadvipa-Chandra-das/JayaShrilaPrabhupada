// ---------------------------------------------------------------------------
#ifndef VCL_NNColorH
#define VCL_NNColorH
// ---------------------------------------------------------------------------

#include <map>
#include "VCL_NNStream.h"

namespace NNV {

extern PACKAGE const std::size_t iclCycleColor0;
extern PACKAGE const std::size_t iclCycleColor3;
extern PACKAGE const std::size_t iclCycleColor4;
extern PACKAGE const std::size_t iclService;
extern PACKAGE const std::size_t iclCommodAss;
extern PACKAGE const std::size_t iclCommodAssOwner;
extern PACKAGE const std::size_t iclCommodAssDetail;
extern PACKAGE const std::size_t iclCommodLack;
extern PACKAGE const std::size_t iclCommodOld;
extern PACKAGE const std::size_t iclCommodWithNote;
extern PACKAGE const std::size_t iclCommentInPrim;
extern PACKAGE const std::size_t iclCommentSummaSecond;
extern PACKAGE const std::size_t iclErrorSubconto;
extern PACKAGE const std::size_t iclGrayLine;
extern PACKAGE const std::size_t iclCommentSummaFirst;
extern PACKAGE const std::size_t iclSummaFirst;
extern PACKAGE const std::size_t iclSummaSecond;
extern PACKAGE const std::size_t iclInDialogQuantity;
extern PACKAGE const std::size_t iclInDialogPriceBig;
extern PACKAGE const std::size_t iclCycleColor21;
extern PACKAGE const std::size_t iclSerialWithGuaranty;
extern PACKAGE const std::size_t iclSerialWaitWithGuaranty;
extern PACKAGE const std::size_t iclSerialSupplierWithoutGuaranty;
extern PACKAGE const std::size_t iclCycleColor10;
extern PACKAGE const std::size_t iclCycleColor11;
extern PACKAGE const std::size_t iclCycleColor12;
extern PACKAGE const std::size_t iclCycleColor13;
extern PACKAGE const std::size_t iclCycleColor22;
extern PACKAGE const std::size_t iclCycleColor23;
extern PACKAGE const std::size_t iclCycleColor24;
extern PACKAGE const std::size_t iclCycleColor26;
extern PACKAGE const std::size_t iclSerialWithoutGuaranty;
extern PACKAGE const std::size_t iclSerialSaleWithGuaranty;
extern PACKAGE const std::size_t iclSerialSaleWithoutGuaranty;
extern PACKAGE const std::size_t iclSerialWaitWithoutGuaranty;
extern PACKAGE const std::size_t iclSerialTemporaryWithGuaranty;
extern PACKAGE const std::size_t iclSerialTemporaryWithoutGuaranty;
extern PACKAGE const std::size_t iclSerialSupplierWithGuaranty;
extern PACKAGE const std::size_t iclSerialXWithGuaranty;
extern PACKAGE const std::size_t iclSerialXWithoutGuaranty;
extern PACKAGE const std::size_t iclSerialPayAndStore;
extern PACKAGE const std::size_t iclCycleColor5;
extern PACKAGE const std::size_t iclCycleColor6;
extern PACKAGE const std::size_t iclCycleColor7;
extern PACKAGE const std::size_t iclCycleColor8;
extern PACKAGE const std::size_t iclCycleColor9;
extern PACKAGE const std::size_t iclSerialNotPayAndStore;
extern PACKAGE const std::size_t iclSerialChangeSupplierWithGuaranty;
extern PACKAGE const std::size_t iclSerialChangeSupplierWithoutGuaranty;
extern PACKAGE const std::size_t iclCommentPartSumma3;
extern PACKAGE const std::size_t iclPartSumma3;
extern PACKAGE const std::size_t iclNotActualOper;
extern PACKAGE const std::size_t iclPrimWithComment;
extern PACKAGE const std::size_t iclActualComment;
extern PACKAGE const std::size_t iclPriceCommodPayBig;
extern PACKAGE const std::size_t iclPartPay;
extern PACKAGE const std::size_t iclHotKey;
extern PACKAGE const std::size_t iclHotKeyWithoutShift;
extern PACKAGE const std::size_t iclEmptyHotKey;
extern PACKAGE const std::size_t iclChessMinusSumma;
extern PACKAGE const std::size_t iclChessNeutralConstr;
extern PACKAGE const std::size_t iclChessAccount;
extern PACKAGE const std::size_t iclChessItog;
extern PACKAGE const std::size_t iclKalaYantra;
extern PACKAGE const std::size_t iclInDialogPriceSmall;
extern PACKAGE const std::size_t iclInDialogCommodNullQuantity;
extern PACKAGE const std::size_t iclInDialogCommodMinusQuantity;
extern PACKAGE const std::size_t iclCycleColor14;
extern PACKAGE const std::size_t iclCycleColor15;
extern PACKAGE const std::size_t iclCycleColor16;
extern PACKAGE const std::size_t iclCycleColor17;
extern PACKAGE const std::size_t iclCycleColor18;
extern PACKAGE const std::size_t iclCycleColor19;
extern PACKAGE const std::size_t iclCycleColor20;
extern PACKAGE const std::size_t iclCycleColor25;
extern PACKAGE const std::size_t iclSummaSmallOpt;
extern PACKAGE const std::size_t iclSummaDiler;
extern PACKAGE const std::size_t iclSummaOpt;
extern PACKAGE const std::size_t iclSummaEntry;
extern PACKAGE const std::size_t iclSummaSmallThanEntry;
extern PACKAGE const std::size_t iclSummaMoreThanRetail;
extern PACKAGE const std::size_t iclCommodMarkdown1;
extern PACKAGE const std::size_t iclCommodMarkdown2;
extern PACKAGE const std::size_t iclCommodMarkdown3;
extern PACKAGE const std::size_t iclCommodMarkdown4;
extern PACKAGE const std::size_t iclSlyUserEnter;
extern PACKAGE const std::size_t iclSlyUserDelete;
extern PACKAGE const std::size_t iclSlyUserCreate;
extern PACKAGE const std::size_t iclStorehousOperAndPrimDifferent;
extern PACKAGE const std::size_t iclKaemkaIndicatorNormal;
extern PACKAGE const std::size_t iclFieldIndicatorNormal;
extern PACKAGE const std::size_t iclKaemkaIndicatorSignal;
extern PACKAGE const std::size_t iclFieldIndicatorSignal;
extern PACKAGE const std::size_t iclPrimPayAndNotShipment;
extern PACKAGE const std::size_t iclPrimShipmentAndNotPay;
extern PACKAGE const std::size_t iclTabelVyhodovNotAny;
extern PACKAGE const std::size_t iclTabelVyhodovProgul;
extern PACKAGE const std::size_t iclPriceLastCommod;
extern PACKAGE const std::size_t iclSerialPay;
extern PACKAGE const std::size_t iclSerialPayByNotSrok;
extern PACKAGE const std::size_t iclOperComokNotPayDebetPrim;
extern PACKAGE const std::size_t iclOperComokNotPayCreditPrim;
extern PACKAGE const std::size_t iclCommodVeryOld;
extern PACKAGE const std::size_t iclCommentColorWinow;
extern PACKAGE const std::size_t iclSchetCreditPayBeznalAndNotDocuments;
extern PACKAGE const std::size_t iclSchetCreditAcceptlAndNotPayAndNotOtgr;
extern PACKAGE const std::size_t iclSerialStoreButNotPayProvider;
extern PACKAGE const std::size_t iclCycleColor2;
extern PACKAGE const std::size_t iclCycleColor1;
extern PACKAGE const std::size_t iclServiceClient1_7;
extern PACKAGE const std::size_t iclServiceClient8_14;
extern PACKAGE const std::size_t iclSerialDifferentCommod;
extern PACKAGE const std::size_t iclServiceClient15_21;
extern PACKAGE const std::size_t iclServiceClient22_28;
extern PACKAGE const std::size_t iclServiceClientMore29;
extern PACKAGE const std::size_t iclTabelVyhodovOtpusk;
extern PACKAGE const std::size_t iclTabelVyhodovBolnichnyi;
extern PACKAGE const std::size_t iclTabelVyhodovNotStandartTime;
extern PACKAGE const std::size_t iclTabelVyhodovPolovinaStavka;
extern PACKAGE const std::size_t iclSummaRetail;
extern PACKAGE const std::size_t iclSerialPayButNotPayProvider;
extern PACKAGE const std::size_t iclExitFromProgram;
extern PACKAGE const std::size_t iclPrintPrim;
extern PACKAGE const std::size_t iclProgramTryVzlom;
extern PACKAGE const std::size_t iclCommodPay;
extern PACKAGE const std::size_t iclBuhgalterCommod;
extern PACKAGE const std::size_t iclDoctorZayavkaNotExecute;

extern PACKAGE const std::size_t ColorCount;

struct PACKAGE TColorFonFont
{
private:
  TColor FFontColor;
  TColor FFonColor;
public:
  TColorFonFont();
  TColorFonFont( TColor AFontColor
               , TColor AFonColor );

  __property TColor FontColor = { read = FFontColor, write = FFontColor };
  __property TColor FonColor = { read = FFonColor, write = FFonColor };
};

class PACKAGE TColorVector : public std::vector< TColorFonFont >
{
private:
  typedef std::vector< TColorFonFont > inherited;
public:
  TColorVector();
  ~TColorVector();
  void __fastcall LoadFromFiler( TNNVTextStream *Filer );
  void __fastcall SaveToFiler( TNNVTextStream *Filer );
};

extern PACKAGE void __fastcall CycleColor( long long int ColorNo_
                                         , TColor &FonColor_
                                         , TColor &FontColor_ );

extern PACKAGE const long long int CycleColorCount;

};
#endif

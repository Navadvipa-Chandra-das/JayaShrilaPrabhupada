// ---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "VCL_NNColor.h"
#include "VCL_NNDmvNewNavadvipa.h"
// #include <math.h>

// ---------------------------------------------------------------------------
#pragma package(smart_init)

namespace NNV {

const std::size_t iclCycleColor0 = 0;
const std::size_t iclCycleColor3 = 1;
const std::size_t iclCycleColor4 = 2;
const std::size_t iclService = 3;
const std::size_t iclCommodAss = 4;
const std::size_t iclCommodAssOwner = 5;
const std::size_t iclCommodAssDetail = 6;
const std::size_t iclCommodLack = 7;
const std::size_t iclCommodOld = 8;
const std::size_t iclCommodWithNote = 9;
const std::size_t iclCommentInPrim = 10;
const std::size_t iclCommentSummaSecond = 11;
const std::size_t iclErrorSubconto = 12;
const std::size_t iclGrayLine = 13;
const std::size_t iclCommentSummaFirst = 14;
const std::size_t iclSummaFirst = 15;
const std::size_t iclSummaSecond = 16;
const std::size_t iclInDialogQuantity = 17;
const std::size_t iclInDialogPriceBig = 18;
const std::size_t iclCycleColor21 = 19;
const std::size_t iclSerialWithGuaranty = 20;
const std::size_t iclSerialWaitWithGuaranty = 21;
const std::size_t iclSerialSupplierWithoutGuaranty = 22;
const std::size_t iclCycleColor10 = 23;
const std::size_t iclCycleColor11 = 24;
const std::size_t iclCycleColor12 = 25;
const std::size_t iclCycleColor13 = 26;
const std::size_t iclCycleColor22 = 27;
const std::size_t iclCycleColor23 = 28;
const std::size_t iclCycleColor24 = 29;
const std::size_t iclCycleColor26 = 30;
const std::size_t iclSerialWithoutGuaranty = 31;
const std::size_t iclSerialSaleWithGuaranty = 32;
const std::size_t iclSerialSaleWithoutGuaranty = 33;
const std::size_t iclSerialWaitWithoutGuaranty = 34;
const std::size_t iclSerialTemporaryWithGuaranty = 35;
const std::size_t iclSerialTemporaryWithoutGuaranty = 36;
const std::size_t iclSerialSupplierWithGuaranty = 37;
const std::size_t iclSerialXWithGuaranty = 38;
const std::size_t iclSerialXWithoutGuaranty = 39;
const std::size_t iclSerialPayAndStore = 40;
const std::size_t iclCycleColor5 = 41;
const std::size_t iclCycleColor6 = 42;
const std::size_t iclCycleColor7 = 43;
const std::size_t iclCycleColor8 = 44;
const std::size_t iclCycleColor9 = 45;
const std::size_t iclSerialNotPayAndStore = 46;
const std::size_t iclSerialChangeSupplierWithGuaranty = 47;
const std::size_t iclSerialChangeSupplierWithoutGuaranty = 48;
const std::size_t iclCommentPartSumma3 = 49;
const std::size_t iclPartSumma3 = 50;
const std::size_t iclNotActualOper = 51;
const std::size_t iclPrimWithComment = 52;
const std::size_t iclActualComment = 53;
const std::size_t iclPriceCommodPayBig = 54;
const std::size_t iclPartPay = 55;
const std::size_t iclHotKey = 56;
const std::size_t iclHotKeyWithoutShift = 57;
const std::size_t iclEmptyHotKey = 58;
const std::size_t iclChessMinusSumma = 59;
const std::size_t iclChessNeutralConstr = 60;
const std::size_t iclChessAccount = 61;
const std::size_t iclChessItog = 62;
const std::size_t iclKalaYantra = 63;
const std::size_t iclInDialogPriceSmall = 64;
const std::size_t iclInDialogCommodNullQuantity = 65;
const std::size_t iclInDialogCommodMinusQuantity = 66;
const std::size_t iclCycleColor14 = 67;
const std::size_t iclCycleColor15 = 68;
const std::size_t iclCycleColor16 = 69;
const std::size_t iclCycleColor17 = 70;
const std::size_t iclCycleColor18 = 71;
const std::size_t iclCycleColor19 = 72;
const std::size_t iclCycleColor20 = 73;
const std::size_t iclCycleColor25 = 74;
const std::size_t iclSummaSmallOpt = 75;
const std::size_t iclSummaDiler = 76;
const std::size_t iclSummaOpt = 77;
const std::size_t iclSummaEntry = 78;
const std::size_t iclSummaSmallThanEntry = 79;
const std::size_t iclSummaMoreThanRetail = 80;
const std::size_t iclCommodMarkdown1 = 81;
const std::size_t iclCommodMarkdown2 = 82;
const std::size_t iclCommodMarkdown3 = 83;
const std::size_t iclCommodMarkdown4 = 84;
const std::size_t iclSlyUserEnter = 85;
const std::size_t iclSlyUserDelete = 86;
const std::size_t iclSlyUserCreate = 87;
const std::size_t iclStorehousOperAndPrimDifferent = 88;
const std::size_t iclKaemkaIndicatorNormal = 89;
const std::size_t iclFieldIndicatorNormal = 90;
const std::size_t iclKaemkaIndicatorSignal = 91;
const std::size_t iclFieldIndicatorSignal = 92;
const std::size_t iclPrimPayAndNotShipment = 93;
const std::size_t iclPrimShipmentAndNotPay = 94;
const std::size_t iclTabelVyhodovNotAny = 95;
const std::size_t iclTabelVyhodovProgul = 96;
const std::size_t iclPriceLastCommod = 97;
const std::size_t iclSerialPay = 98;
const std::size_t iclSerialPayByNotSrok = 99;
const std::size_t iclOperComokNotPayDebetPrim = 100;
const std::size_t iclOperComokNotPayCreditPrim = 101;
const std::size_t iclCommodVeryOld = 102;
const std::size_t iclCommentColorWinow = 103;
const std::size_t iclSchetCreditPayBeznalAndNotDocuments = 104;
const std::size_t iclSchetCreditAcceptlAndNotPayAndNotOtgr = 105;
const std::size_t iclSerialStoreButNotPayProvider = 106;
const std::size_t iclCycleColor2 = 107;
const std::size_t iclCycleColor1 = 108;
const std::size_t iclServiceClient1_7 = 109;
const std::size_t iclServiceClient8_14 = 110;
const std::size_t iclSerialDifferentCommod = 111;
const std::size_t iclServiceClient15_21 = 112;
const std::size_t iclServiceClient22_28 = 113;
const std::size_t iclServiceClientMore29 = 114;
const std::size_t iclTabelVyhodovOtpusk = 115;
const std::size_t iclTabelVyhodovBolnichnyi = 116;
const std::size_t iclTabelVyhodovNotStandartTime = 117;
const std::size_t iclTabelVyhodovPolovinaStavka = 118;
const std::size_t iclSummaRetail = 119;
const std::size_t iclSerialPayButNotPayProvider = 120;
const std::size_t iclExitFromProgram = 121;
const std::size_t iclPrintPrim = 122;
const std::size_t iclProgramTryVzlom = 123;
const std::size_t iclCommodPay = 124;
const std::size_t iclBuhgalterCommod = 125;
const std::size_t iclDoctorZayavkaNotExecute = 126;

const std::size_t ColorCount = 127;

const long long int CycleColorCount = 27;

TColorFonFont::TColorFonFont()
  : FFontColor( clBlack )
  , FFonColor( clWhite )
{
};

TColorFonFont::TColorFonFont( TColor AFontColor
                            , TColor AFonColor )
  : FFontColor( AFontColor )
  , FFonColor( AFonColor )
{
};

TColorVector::TColorVector()
  : inherited()
{
  reserve( ColorCount );

  TColorFonFont FP;
  for ( std::size_t i = 0; i < ColorCount; ++i )
    push_back( FP );
}

TColorVector::~TColorVector()
{
}

void __fastcall TColorVector::LoadFromFiler( TNNVTextStream *Filer )
{
  std::size_t L = Filer->ReadSizeType();
  reserve( L );

  TColorFonFont FP;
  for ( std::size_t i = 0; i < L; ++i ) {
    FP.FontColor = Filer->ReadColor();
    FP.FonColor  = Filer->ReadColor();
    operator[]( i ) = FP;
  }
}

void __fastcall TColorVector::SaveToFiler( TNNVTextStream *Filer )
{
  std::size_t L = size();
  Filer->WriteSizeType( L );
  for ( std::size_t i = 0; i < L; ++i ) {
    Filer->WriteColor( operator[]( i ).FontColor );
    Filer->WriteColor( operator[]( i ).FonColor );
  }
}

void __fastcall CycleColor( long long int ColorNo_
                          , TColor &FonColor_
                          , TColor &FontColor_)
{
  ColorNo_ = fmod( ColorNo_, CycleColorCount );
  int N = ColorNo_;
  switch ( N ) {
  case 0:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor0 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor0 ].FonColor;
    break;
  case 1:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor1 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor1 ].FonColor;
    break;
  case 2:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor2 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor2 ].FonColor;
    break;
  case 3:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor3 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor3 ].FonColor;
    break;
  case 4:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor4 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor4 ].FonColor;
    break;
  case 5:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor5 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor5 ].FonColor;
    break;
  case 6:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor6 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor6 ].FonColor;
    break;
  case 7:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor7 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor7 ].FonColor;
    break;
  case 8:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor8 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor8 ].FonColor;
    break;
  case 9:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor9 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor9 ].FonColor;
    break;
  case 10:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor10 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor10 ].FonColor;
    break;
  case 11:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor11 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor11 ].FonColor;
    break;
  case 12:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor12 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor12 ].FonColor;
    break;
  case 13:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor13 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor13 ].FonColor;
    break;
  case 14:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor14 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor14 ].FonColor;
    break;
  case 15:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor15 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor15 ].FonColor;
    break;
  case 16:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor16 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor16 ].FonColor;
    break;
  case 17:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor17 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor17 ].FonColor;
    break;
  case 18:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor18 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor18 ].FonColor;
    break;
  case 19:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor19 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor19 ].FonColor;
    break;
  case 20:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor20 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor20 ].FonColor;
    break;
  case 21:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor21 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor21 ].FonColor;
    break;
  case 22:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor22 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor22 ].FonColor;
    break;
  case 23:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor23 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor23 ].FonColor;
    break;
  case 24:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor24 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor24 ].FonColor;
    break;
  case 25:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor25 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor25 ].FonColor;
    break;
  case 26:
    FontColor_ = dmvNewNavadvipa->ColorVector[ iclCycleColor26 ].FontColor;
    FonColor_  = dmvNewNavadvipa->ColorVector[ iclCycleColor26 ].FonColor;
    break;
  default:
    throw Exception("Непонятный циклический цвет");
  }
}

};


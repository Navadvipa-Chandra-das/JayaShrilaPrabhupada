//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFrDoubleDiapazon.cpp", frvDoubleDiapazon); /* TFrame: File Type */
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFrDiapazon.cpp", frvDiapazon); /* TFrame: File Type */
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFmRes.cpp", fmvRes);
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFmLogin.cpp", fmvLogin);
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFmLock.cpp", fmvLock);
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFrShortIntDiapazon.cpp", frvShortIntDiapazon); /* TFrame: File Type */
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFrPeriod.cpp", frvPeriod); /* TFrame: File Type */
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFrLongLongIntDiapazon.cpp", frvLongLongIntDiapazon); /* TFrame: File Type */
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFrLogin.cpp", frvLogin); /* TFrame: File Type */
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFrIntDiapazon.cpp", frvIntDiapazon); /* TFrame: File Type */
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFmDB.cpp", fmvDB);
USEFORM("FMV_LoginJayaShrilaPrabhupada.cpp", fmvLoginJayaShrilaPrabhupada);
USEFORM("FMV_JayaShrilaPrabhupada.cpp", fmvJayaShrilaPrabhupada);
USEFORM("FMV_Explorer.cpp", fmvExplorer);
USEFORM("DMV_JayaShrilaPrabhupada.cpp", dmvJayaShrilaPrabhupada); /* TDataModule: File Type */
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFmDateTime.cpp", fmvDateTime);
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFmChangePassword.cpp", fmvChangePassword);
USEFORM("..\NizhnyayaNavadvipa\VCL_NNDmvNizhnyayaNavadvipa.cpp", dmvNizhnyayaNavadvipa); /* TDataModule: File Type */
USEFORM("..\NizhnyayaNavadvipa\VCL_NNDmRes.cpp", dmvRes); /* TDataModule: File Type */
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFmvCode.cpp", fmvCode);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
  try
  {
    Application->Initialize();
    Application->MainFormOnTaskBar = true;
    Application->Title = "Джая Шрила Прабхупада!";
    Application->Name = "JayaShrilaPrabhupada";
    Application->HintHidePause = 3000;
    Application->HintShortCuts = true;
    Application->CreateForm(__classid(TdmvJayaShrilaPrabhupada), &dmvJayaShrilaPrabhupada);
     Application->CreateForm(__classid(TfmvJayaShrilaPrabhupada), &fmvJayaShrilaPrabhupada);
     Application->Run();
  }
  catch (Exception &exception)
  {
    Application->ShowException(&exception);
  }
  catch (...)
  {
    try
    {
      throw Exception("");
    }
    catch (Exception &exception)
    {
      Application->ShowException(&exception);
    }
  }
  return 0;
}
//---------------------------------------------------------------------------

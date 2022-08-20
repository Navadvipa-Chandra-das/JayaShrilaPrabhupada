//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("..\NewNavadvipa\VCL_NNFmRights.cpp", fmvRights);
USEFORM("..\NewNavadvipa\VCL_NNFmRoles.cpp", fmvRoles);
USEFORM("..\NewNavadvipa\VCL_NNFmvCode.cpp", fmvCode);
USEFORM("..\NewNavadvipa\VCL_NNFmLock.cpp", fmvLock);
USEFORM("..\NewNavadvipa\VCL_NNFmLogin.cpp", fmvLogin);
USEFORM("..\NewNavadvipa\VCL_NNFmRes.cpp", fmvRes);
USEFORM("..\NewNavadvipa\VCL_NNFrDiapazon.cpp", frvDiapazon); /* TFrame: File Type */
USEFORM("..\NewNavadvipa\VCL_NNFrLongLongIntDiapazon.cpp", frvLongLongIntDiapazon); /* TFrame: File Type */
USEFORM("..\NewNavadvipa\VCL_NNFrPeriod.cpp", frvPeriod); /* TFrame: File Type */
USEFORM("..\NewNavadvipa\VCL_NNFrShortIntDiapazon.cpp", frvShortIntDiapazon); /* TFrame: File Type */
USEFORM("..\NewNavadvipa\VCL_NNFrDoubleDiapazon.cpp", frvDoubleDiapazon); /* TFrame: File Type */
USEFORM("..\NewNavadvipa\VCL_NNFrIntDiapazon.cpp", frvIntDiapazon); /* TFrame: File Type */
USEFORM("..\NewNavadvipa\VCL_NNFrLogin.cpp", frvLogin); /* TFrame: File Type */
USEFORM("FMV_LoginJayaShrilaPrabhupada.cpp", fmvLoginJayaShrilaPrabhupada);
USEFORM("DMV_JayaShrilaPrabhupada.cpp", dmvJayaShrilaPrabhupada); /* TDataModule: File Type */
USEFORM("FMV_Explorer.cpp", fmvExplorer);
USEFORM("FMV_JayaShrilaPrabhupada.cpp", fmvJayaShrilaPrabhupada);
USEFORM("..\NewNavadvipa\VCL_NNFmDateTime.cpp", fmvDateTime);
USEFORM("..\NewNavadvipa\VCL_NNFmDB.cpp", fmvDB);
USEFORM("..\NewNavadvipa\VCL_NNDmRes.cpp", dmvRes); /* TDataModule: File Type */
USEFORM("..\NewNavadvipa\VCL_NNDmvNewNavadvipa.cpp", dmvNewNavadvipa); /* TDataModule: File Type */
USEFORM("..\NewNavadvipa\VCL_NNFmChangePassword.cpp", fmvChangePassword);
USEFORM("..\NewNavadvipa\VCL_NNFmLanguage.cpp", fmvLanguage);
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

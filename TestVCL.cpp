//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("FMV_LoginExamples.cpp", fmvLoginExamples);
USEFORM("FMV_Examples.cpp", fmvExamples);
USEFORM("DMV_Examples.cpp", dmvExamples); /* TDataModule: File Type */
USEFORM("FMV_Test.cpp", fmTestVCL);
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFrmLogin.cpp", frmLogin); /* TFrame: File Type */
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFmDB.cpp", fmvDB);
USEFORM("..\NizhnyayaNavadvipa\VCL_NNDmvNizhnyayaNavadvipa.cpp", dmvNizhnyayaNavadvipa); /* TDataModule: File Type */
USEFORM("..\NizhnyayaNavadvipa\VCL_NNDmRes.cpp", dmvRes); /* TDataModule: File Type */
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFmvLogin.cpp", fmvLogin);
USEFORM("..\NizhnyayaNavadvipa\VCL_NNFmRes.cpp", fmvRes);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
  try
  {
    Application->Initialize();
    Application->MainFormOnTaskBar = true;
    Application->Title = "Примеры для библиотеки VCL_NyzhnyayaNavadvipa";
    Application->Name = "TestVCL";
    Application->CreateForm(__classid(TdmvNizhnyayaNavadvipa), &dmvNizhnyayaNavadvipa);
     Application->CreateForm(__classid(TdmvExamples), &dmvExamples);
     Application->CreateForm(__classid(TfmTestVCL), &fmTestVCL);
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

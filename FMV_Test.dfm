inherited fmTestVCL: TfmTestVCL
  Left = 13
  Top = 13
  Caption = 'fmvTest'
  ClientHeight = 61
  ClientWidth = 663
  Constraints.MaxHeight = 120
  Constraints.MaxWidth = 679
  Constraints.MinHeight = 120
  Constraints.MinWidth = 679
  Menu = mmTest
  OldCreateOrder = True
  Position = poDesigned
  ShowHint = True
  ExplicitWidth = 679
  ExplicitHeight = 120
  PixelsPerInch = 96
  TextHeight = 13
  object tbrTest: TToolBar [0]
    Left = 0
    Top = 0
    Width = 663
    Height = 29
    Caption = 'tbrTest'
    Images = dmvNizhnyayaNavadvipa.ilDB
    TabOrder = 0
    object tbExamples: TToolButton
      Left = 0
      Top = 0
      Action = alExamples
    end
  end
  inherited fbRes: TNNVFlagBox
    caFree = True
    Left = 12
    Top = 8
  end
  inherited coRes: TNNVConfig
    Version = #1
    Connection = dmvExamples.conDB
    Left = 40
    Top = 8
  end
  inherited rrRes: TNNVRight
    Left = 68
    Top = 8
  end
  object frxReport1: TfrxReport
    Version = '2022.1.3'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick, pbCopy, pbSelection]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 44564.540367372680000000
    ReportOptions.LastChange = 44564.540367372680000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      'begin'
      ''
      'end.')
    Left = 116
    Top = 8
    Datasets = <>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      PaperWidth = 210.000000000000000000
      PaperHeight = 297.000000000000000000
      PaperSize = 9
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      Frame.Typ = []
      MirrorMode = []
    end
  end
  object alTest: TActionList
    Images = dmvNizhnyayaNavadvipa.ilDB
    Left = 176
    Top = 8
    object alExamples: TAction
      Category = 'Forms'
      Caption = #1055#1088#1080#1084#1077#1088#1099
      Hint = #1055#1088#1080#1084#1077#1088#1099' '#1073#1080#1073#1083#1080#1086#1090#1077#1082#1080' '#1053#1080#1078#1085#1103#1103' '#1053#1072#1074#1072#1076#1074#1080#1087#1072
      ImageIndex = 10
      ShortCut = 16497
      OnExecute = alExamplesExecute
    end
  end
  object mmTest: TMainMenu
    Images = dmvNizhnyayaNavadvipa.ilDB
    Left = 228
    Top = 8
    object miTopExamples: TMenuItem
      Caption = '&'#1055#1088#1080#1084#1077#1088#1099
      object miExamples: TMenuItem
        Action = alExamples
      end
    end
  end
end

inherited fmvJayaShrilaPrabhupada: TfmvJayaShrilaPrabhupada
  Left = 13
  Top = 13
  Caption = #1044#1078#1072#1103' '#1064#1088#1080#1083#1072' '#1055#1088#1072#1073#1093#1091#1087#1072#1076#1072
  ClientHeight = 61
  ClientWidth = 663
  Constraints.MaxHeight = 120
  Constraints.MaxWidth = 679
  Constraints.MinHeight = 120
  Constraints.MinWidth = 679
  Menu = mmShrilaPrabhupada
  OldCreateOrder = True
  Position = poDesigned
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
    Images = dmvNewNavadvipa.ilDB
    TabOrder = 0
    object tbExamples: TToolButton
      Left = 0
      Top = 0
      Hint = #1055#1088#1080#1084#1077#1088#1099' '#1073#1080#1073#1083#1080#1086#1090#1077#1082#1080' '#1053#1080#1078#1085#1103#1103' '#1053#1072#1074#1072#1076#1074#1080#1087#1072
      Caption = #1055#1088#1080#1084#1077#1088#1099
      ImageIndex = 10
      OnClick = alExamplesExecute
    end
    object tbChangePassord: TToolButton
      Left = 23
      Top = 0
      Hint = #1057#1084#1077#1085#1080#1090#1100' '#1087#1072#1088#1086#1083#1100
      Caption = #1057#1084#1077#1085#1080#1090#1100' '#1087#1072#1088#1086#1083#1100
      ImageIndex = 76
      OnClick = aChangePassordExecute
    end
    object tbFormListShow: TToolButton
      Left = 46
      Top = 0
      Action = aFormListShow
    end
    object tbActionListSetup: TToolButton
      Left = 69
      Top = 0
      Action = aActionListSetup
    end
    object tbLock: TToolButton
      Left = 92
      Top = 0
      Action = aLock
    end
  end
  inherited fbRes: TNNVFlagBox
    caFree = True
    ShowInWindowList = True
    Left = 12
    Top = 8
  end
  inherited coRes: TNNVConfig
    Version = #1
    Left = 40
    Top = 8
  end
  inherited rrRes: TNNVRight
    Left = 68
    Top = 8
  end
  inherited alRes: TNNVActionList
    Left = 155
    Top = 7
    object alExamples: TAction [0]
      Category = 'Forms'
      Caption = #1055#1088#1080#1084#1077#1088#1099
      Hint = #1055#1088#1080#1084#1077#1088#1099' '#1073#1080#1073#1083#1080#1086#1090#1077#1082#1080' '#1053#1080#1078#1085#1103#1103' '#1053#1072#1074#1072#1076#1074#1080#1087#1072
      ImageIndex = 10
      ShortCut = 16497
      OnExecute = alExamplesExecute
    end
    object aChangePassord: TAction [1]
      Category = 'Forms'
      Caption = #1057#1084#1077#1085#1080#1090#1100' '#1087#1072#1088#1086#1083#1100
      Hint = #1057#1084#1077#1085#1080#1090#1100' '#1087#1072#1088#1086#1083#1100
      ImageIndex = 76
      OnExecute = aChangePassordExecute
    end
    object aFormListShow: TAction [2]
      Category = 'Windows'
      Caption = #1054#1090#1082#1088#1099#1090#1099#1077' '#1086#1082#1085#1072
      Hint = #1054#1090#1082#1088#1099#1090#1099#1077' '#1086#1082#1085#1072
      ImageIndex = 19
      ShortCut = 8315
      OnExecute = aFormListShowExecute
    end
    object aCurrentMain: TAction
      Category = 'Windows'
      Caption = #1043#1083#1072#1074#1085#1086#1077' - '#1090#1077#1082#1091#1097#1077#1077' '#1086#1082#1085#1086
      Hint = #1043#1083#1072#1074#1085#1086#1077' - '#1090#1077#1082#1091#1097#1077#1077#13#10#1086#1082#1085#1086
      ImageIndex = 23
      ShortCut = 122
      OnExecute = aCurrentMainExecute
    end
    object aFormPrev: TAction
      Category = 'Windows'
      Caption = #1055#1088#1077#1076#1099#1076#1091#1097#1077#1077' '#1086#1082#1085#1086
      Hint = #1055#1088#1077#1076#1099#1076#1091#1097#1077#1077#13#10#1086#1082#1085#1086
      ImageIndex = 97
      ShortCut = 16506
      OnExecute = aFormPrevExecute
      OnUpdate = aFormPrevUpdate
    end
    object aFormNext: TAction
      Category = 'Windows'
      Caption = #1057#1083#1077#1076#1091#1102#1097#1077#1077' '#1086#1082#1085#1086
      Hint = #1057#1083#1077#1076#1091#1102#1097#1077#1077' '#1086#1082#1085#1086
      ImageIndex = 98
      ShortCut = 16507
      OnExecute = aFormNextExecute
      OnUpdate = aFormNextUpdate
    end
    object aFormCyclePrev: TAction
      Category = 'Windows'
      Caption = #1055#1088#1077#1076#1099#1076#1091#1097#1077#1077' '#1086#1082#1085#1086' '#1087#1086' '#1094#1080#1082#1083#1091
      Hint = #1055#1088#1077#1076#1099#1076#1091#1097#1077#1077' '#1086#1082#1085#1086#13#10#1087#1086' '#1094#1080#1082#1083#1091
      ImageIndex = 146
      ShortCut = 24696
      OnExecute = aFormCyclePrevExecute
    end
    object aFormCycleNext: TAction
      Category = 'Windows'
      Caption = #1057#1083#1077#1076#1091#1102#1097#1077#1077' '#1086#1082#1085#1086' '#1087#1086' '#1094#1080#1082#1083#1091
      Hint = #1057#1083#1077#1076#1091#1102#1097#1077#1077' '#1086#1082#1085#1086#13#10#1087#1086' '#1094#1080#1082#1083#1091
      ImageIndex = 145
      ShortCut = 16504
      OnExecute = aFormCycleNextExecute
    end
    object aLock: TAction
      Category = 'Windows'
      Caption = #1041#1083#1086#1082#1080#1088#1086#1074#1082#1072
      Hint = #1041#1083#1086#1082#1080#1088#1086#1074#1082#1072
      ImageIndex = 22
      ShortCut = 16460
      OnExecute = aLockExecute
    end
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
  object mmShrilaPrabhupada: TMainMenu
    Images = dmvNewNavadvipa.ilDB
    Left = 185
    Top = 8
    object miAction: TMenuItem
      Caption = '&'#1044#1077#1081#1089#1090#1074#1080#1103
      object miExamples: TMenuItem
        Caption = #1055#1088#1080#1084#1077#1088#1099
        Hint = #1055#1088#1080#1084#1077#1088#1099' '#1073#1080#1073#1083#1080#1086#1090#1077#1082#1080' '#1053#1080#1078#1085#1103#1103' '#1053#1072#1074#1072#1076#1074#1080#1087#1072
        ImageIndex = 10
        ShortCut = 16497
        OnClick = alExamplesExecute
      end
      object miChangePassord: TMenuItem
        Action = aChangePassord
      end
    end
    object miWindows: TMenuItem
      Caption = '&'#1054#1082#1085#1072
      GroupIndex = 2
      object miCurrentMain: TMenuItem
        Action = aCurrentMain
      end
      object miFormPrev: TMenuItem
        Action = aFormPrev
      end
      object miFormNext: TMenuItem
        Action = aFormNext
      end
      object miFormCyclePrev: TMenuItem
        Action = aFormCyclePrev
      end
      object miFormCycleNext: TMenuItem
        Action = aFormCycleNext
      end
      object miLock: TMenuItem
        Action = aLock
      end
    end
    object miSetup: TMenuItem
      Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1072
      GroupIndex = 4
      object miActionListSetup: TMenuItem
        Action = aActionListSetup
      end
    end
  end
end

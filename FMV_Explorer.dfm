inherited fmvExplorer: TfmvExplorer
  ActiveControl = tvExamples
  Caption = #1055#1088#1080#1084#1077#1088#1099' '#1076#1083#1103' '#1073#1080#1073#1083#1080#1086#1090#1077#1082#1080' '#1053#1080#1078#1085#1103#1103' '#1053#1072#1074#1072#1076#1074#1080#1087#1072' VCL '#1074#1077#1088#1089#1080#1080
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object splExamples: TNNVSplitter [0]
    Left = 189
    Top = 57
    Height = 717
    ExplicitLeft = 186
  end
  object tvExamples: TNNVDBTreeView [1]
    Left = 0
    Top = 57
    Width = 189
    Height = 717
    Align = alLeft
    Constraints.MinWidth = 120
    Images = dmvNizhnyayaNavadvipa.ilDB
    Indent = 19
    TabOrder = 0
    OnEnter = DBTreeEnter
    ActiveOrder = 0
  end
  object paConfig: TNNVPanel [2]
    Left = 192
    Top = 57
    Width = 993
    Height = 717
    Align = alClient
    TabOrder = 2
    Visible = False
  end
  inherited paT: TNNVPanel
    TabOrder = 3
    inherited pcDB: TNNVPageControl
      inherited tsSetup: TTabSheet
        inherited tbSetup: TToolBar
          Height = 28
          ExplicitHeight = 28
        end
      end
    end
    inherited paTL: TNNVPanel
      inherited dbngDB: TDBNavigator
        Hints.Strings = ()
      end
    end
  end
  object paColor: TNNVPanel [4]
    Left = 192
    Top = 57
    Width = 993
    Height = 717
    Align = alClient
    TabOrder = 4
    Visible = False
  end
  object paNumberToWords: TNNVPanel [5]
    Left = 192
    Top = 57
    Width = 993
    Height = 717
    Align = alClient
    TabOrder = 5
    Visible = False
    object meNumberToWords: TMemo
      Left = 0
      Top = 53
      Width = 993
      Height = 664
      Align = alClient
      ReadOnly = True
      TabOrder = 0
    end
    object paNumberToWordsT: TNNVPanel
      Left = 0
      Top = 0
      Width = 993
      Height = 53
      Align = alTop
      TabOrder = 1
      DesignSize = (
        993
        53)
      object laNumberToWords: TLabel
        Left = 12
        Top = 1
        Width = 164
        Height = 13
        Caption = #1042#1074#1077#1076#1080#1090#1077' '#1095#1080#1089#1083#1086' '#1080' '#1085#1072#1078#1084#1080#1090#1077' Enter!'
      end
      object edNumberToWords: TEdit
        Left = 6
        Top = 20
        Width = 979
        Height = 21
        Anchors = [akLeft, akTop, akRight]
        TabOrder = 0
        Text = '1234567890'
        OnKeyDown = edNumberToWordsKeyDown
      end
    end
  end
  object paCommod: TNNVPanel [6]
    Left = 192
    Top = 57
    Width = 993
    Height = 717
    Align = alClient
    TabOrder = 6
    Visible = False
    object paCommodT: TNNVPanel
      Left = 0
      Top = 0
      Width = 993
      Height = 41
      Align = alTop
      TabOrder = 0
    end
    object paCommodProp: TNNVPanel
      Left = 0
      Top = 352
      Width = 993
      Height = 365
      Align = alBottom
      TabOrder = 1
      object NNVDBGrid1: TNNVDBGrid
        Left = 0
        Top = 0
        Width = 993
        Height = 365
        Align = alClient
        DataSource = dmvJayaShrilaPrabhupada.dsCommodKind
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'Tahoma'
        TitleFont.Style = []
        OnEnter = DBGridEnter
        Columns = <
          item
            Expanded = False
            FieldName = 'KindID'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'ParentID'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Kind'
            Width = 130
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'SortNum'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Actual'
            Width = 64
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Level'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'InPrice'
            Width = 64
            Visible = True
          end>
      end
    end
    object dgCommod: TNNVDBGrid
      Left = 0
      Top = 41
      Width = 993
      Height = 311
      Align = alClient
      TabOrder = 2
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      OnEnter = DBGridEnter
      OnExit = DBGridExit
    end
  end
  object paUsers: TNNVPanel [7]
    Left = 192
    Top = 57
    Width = 993
    Height = 717
    Align = alClient
    TabOrder = 1
    Visible = False
    object dgUsers: TNNVDBGrid
      Left = 0
      Top = 41
      Width = 993
      Height = 676
      Align = alClient
      DataSource = dmvJayaShrilaPrabhupada.dsUsers
      Options = [dgEditing, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgMultiSelect, dgTitleClick, dgTitleHotTrack]
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      OnEnter = DBGridEnter
      OnExit = DBGridExit
      Columns = <
        item
          Expanded = False
          FieldName = 'UserID'
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'IsDeleted'
          Font.Charset = SYMBOL_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'Wingdings'
          Font.Style = []
          ReadOnly = True
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Name'
          Width = 64
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'FIO'
          Width = 64
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Note'
          Width = 64
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'INN'
          Width = 64
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Passport'
          Width = 64
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'PassportKemVydan'
          Width = 64
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'PassportDate'
          Width = 64
          Visible = True
        end>
    end
    object paUsersT: TNNVPanel
      Left = 0
      Top = 0
      Width = 993
      Height = 41
      Align = alTop
      TabOrder = 1
      object tbUsers: TToolBar
        Left = 0
        Top = 0
        Width = 993
        Height = 29
        Caption = 'tbUsers'
        Images = dmvNizhnyayaNavadvipa.ilDB
        TabOrder = 0
        object tbNewUser: TToolButton
          Left = 0
          Top = 0
          Action = aNewUser
        end
        object tbSetUserPassord: TToolButton
          Left = 23
          Top = 0
          Action = aSetUserPassord
        end
        object tbDeleteUser: TToolButton
          Left = 46
          Top = 0
          Action = aDeleteUser
        end
      end
    end
  end
  inherited fbRes: TNNVFlagBox
    caFree = True
    Left = 88
    Top = 152
  end
  inherited coRes: TNNVConfig
    Version = #3
    Connection = dmvJayaShrilaPrabhupada.conDB
    Left = 116
    Top = 152
  end
  inherited rrRes: TNNVRight
    Left = 144
    Top = 152
  end
  object naConfig: TNNVNodeAdmin [11]
    OnLoadNodes = naConfigLoadNodes
    OnEnter = naConfigEnter
    OnExit = naConfigExit
    ReadOnly = True
    DragDropKind = ddkSort
    TreeView = tvExamples
    LoadOrder = 0
    Left = 88
    Top = 100
  end
  object naColor: TNNVNodeAdmin [12]
    OnLoadNodes = naColorLoadNodes
    OnEnter = naColorEnter
    OnExit = naColorExit
    ReadOnly = True
    DragDropKind = ddkSort
    TreeView = tvExamples
    Left = 116
    Top = 100
  end
  object naNumberToWords: TNNVNodeAdmin [13]
    OnLoadNodes = naNumberToWordsLoadNodes
    OnFirstEnter = naNumberToWordsFirstEnter
    OnEnter = naNumberToWordsEnter
    OnExit = naNumberToWordsExit
    ReadOnly = True
    DragDropKind = ddkSort
    TreeView = tvExamples
    LoadOrder = 2
    Left = 144
    Top = 100
  end
  object naUsers: TNNVNodeAdmin [14]
    OnLoadNodes = naUsersLoadNodes
    OnFirstEnter = naUsersFirstEnter
    OnEnter = naUsersEnter
    OnExit = naUsersExit
    OnLastExit = naUsersLastExit
    ReadOnly = True
    DragDropKind = ddkSort
    TreeView = tvExamples
    LoadOrder = 3
    Left = 172
    Top = 100
  end
  object nwExamples: TNNVNumberToWords [15]
    OnChange = nwExamplesChange
    Left = 256
    Top = 101
  end
  inherited alRes: TNNVActionList
    Left = 172
    Top = 152
    object aNewUser: TAction
      Category = 'Users'
      Caption = #1057#1086#1079#1076#1072#1090#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      Hint = #1057#1086#1079#1076#1072#1090#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      ImageIndex = 100
      OnExecute = aNewUserExecute
    end
    object aSetUserPassord: TAction
      Category = 'Users'
      Caption = #1047#1072#1076#1072#1090#1100' '#1087#1072#1088#1086#1083#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1102
      Hint = #1047#1072#1076#1072#1090#1100' '#1087#1072#1088#1086#1083#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1102
      ImageIndex = 76
      OnExecute = aSetUserPassordExecute
    end
    object aDeleteUser: TAction
      Category = 'Users'
      Caption = #1059#1076#1072#1083#1080#1090#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      Hint = #1059#1076#1072#1083#1080#1090#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      ImageIndex = 177
      OnExecute = aDeleteUserExecute
    end
  end
  inherited dsData: TDataSource
    Left = 200
    Top = 152
  end
  object naCommodKind: TNNVNodeAdmin
    OnLoadNodes = naCommodKindLoadNodes
    OnGetNodeParams = naCommodKindGetNodeParams
    OnFirstEnter = naCommodKindFirstEnter
    OnEnter = naCommodKindEnter
    OnExit = naCommodKindExit
    OnLastExit = naCommodKindLastExit
    DragDropKind = ddkSort
    TreeView = tvExamples
    LoadOrder = 4
    DataSet = dmvJayaShrilaPrabhupada.quCommodKind
    Left = 200
    Top = 101
  end
end

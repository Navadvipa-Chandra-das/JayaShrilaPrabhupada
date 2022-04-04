inherited fmvExplorer: TfmvExplorer
  ActiveControl = tvExamples
  Caption = #1055#1088#1086#1074#1086#1076#1085#1080#1082' "'#1044#1078#1072#1103' '#1064#1088#1080#1083#1072' '#1055#1088#1072#1073#1093#1091#1087#1072#1076#1072'"'
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object splExamples: TNNVSplitter [0]
    Left = 189
    Top = 57
    Height = 687
    ExplicitLeft = 186
    ExplicitHeight = 717
  end
  object tvExamples: TNNVDBTreeView [1]
    Left = 0
    Top = 57
    Width = 189
    Height = 687
    Align = alLeft
    Constraints.MinWidth = 120
    Images = dmvNizhnyayaNavadvipa.ilDB
    Indent = 19
    TabOrder = 0
    OnEnter = DBTreeViewEnter
    OnNodeAdminChange = DBTreeViewNodeAdminChange
    ActiveOrder = 0
  end
  object paConfig: TNNVPanel [2]
    Left = 192
    Top = 57
    Width = 993
    Height = 687
    Align = alClient
    TabOrder = 2
    Visible = False
  end
  inherited paT: TNNVPanel
    TabOrder = 3
    inherited pcDB: TNNVPageControl
      ActivePage = tsDB
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
    Height = 687
    Align = alClient
    TabOrder = 4
    Visible = False
  end
  object paNumberToWords: TNNVPanel [5]
    Left = 192
    Top = 57
    Width = 993
    Height = 687
    Align = alClient
    TabOrder = 5
    Visible = False
    object meNumberToWords: TMemo
      Left = 0
      Top = 53
      Width = 993
      Height = 634
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
  object paUsers: TNNVPanel [6]
    Left = 192
    Top = 57
    Width = 993
    Height = 687
    Align = alClient
    TabOrder = 7
    Visible = False
    object dgUsers: TNNVDBGrid
      Left = 0
      Top = 59
      Width = 993
      Height = 628
      Align = alClient
      DataSource = dmvNizhnyayaNavadvipa.dsUsers
      Options = [dgEditing, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgMultiSelect, dgTitleClick, dgTitleHotTrack]
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      OnEditButtonClick = dgUsersEditButtonClick
      OnEnter = DBGridEnter
      Columns = <
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
          FieldName = 'UserID'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Name'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Note'
          Width = 143
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Anketa.FIO'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Anketa.INN'
          Width = 100
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Anketa.Passport'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Anketa.PassportKemVydan'
          Width = 100
          Visible = True
        end
        item
          ButtonStyle = cbsEllipsis
          Expanded = False
          FieldName = 'Anketa.PassportDate'
          Visible = True
        end
        item
          ButtonStyle = cbsEllipsis
          Expanded = False
          FieldName = 'BirthDate'
          Width = 100
          Visible = True
        end
        item
          ButtonStyle = cbsEllipsis
          Expanded = False
          FieldName = 'CreateDate'
          Width = 100
          Visible = True
        end>
    end
    object paUsersT: TNNVPanel
      Left = 0
      Top = 0
      Width = 993
      Height = 59
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
      object ddtUsersPassportDate: TNNVDBComboBoxDateTime
        Left = 6
        Top = 32
        Width = 121
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        MaxLength = 10
        ParentFont = False
        TabOrder = 1
        NeedTime = False
        DataField = 'Anketa.PassportDate'
        DataSource = dmvNizhnyayaNavadvipa.dsUsers
      end
      object dcbUsersNote: TNNVDBComboBox
        Left = 134
        Top = 32
        Width = 114
        Height = 21
        DataField = 'Note'
        DataSource = dmvNizhnyayaNavadvipa.dsUsers
        TabOrder = 2
      end
      object ddtUsersBirthDate: TNNVDBComboBoxDateTime
        Left = 248
        Top = 32
        Width = 121
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        MaxLength = 19
        ParentFont = False
        TabOrder = 3
        DataField = 'BirthDate'
        DataSource = dmvNizhnyayaNavadvipa.dsUsers
      end
      object ddtUsersCreateDate: TNNVDBComboBoxDateTime
        Left = 377
        Top = 32
        Width = 121
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        MaxLength = 19
        ParentFont = False
        TabOrder = 4
        DataField = 'CreateDate'
        DataSource = dmvNizhnyayaNavadvipa.dsUsers
      end
      object NNVComboBoxDateTime1: TNNVComboBoxDateTime
        Left = 503
        Top = 32
        Width = 183
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        MaxLength = 19
        ParentFont = False
        TabOrder = 5
        IsUserCanChangeCheckStyle = True
      end
    end
  end
  object paCommod: TNNVPanel [7]
    Left = 192
    Top = 57
    Width = 993
    Height = 687
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
      Top = 322
      Width = 993
      Height = 365
      Align = alBottom
      TabOrder = 2
      object laEntityCommodID: TLabel
        Left = 9
        Top = 7
        Width = 48
        Height = 13
        Caption = #1058#1086#1074#1072#1088' '#1048#1044
      end
      object laKindCommodID1q: TLabel
        Left = 132
        Top = 7
        Width = 76
        Height = 13
        Caption = #1042#1080#1076' '#1090#1086#1074#1072#1088#1072' '#1048#1044
      end
      object laEntityCommod: TLabel
        Left = 9
        Top = 32
        Width = 30
        Height = 13
        Caption = #1058#1086#1074#1072#1088
      end
      object laPriceCommod: TLabel
        Left = 340
        Top = 27
        Width = 26
        Height = 13
        Caption = #1062#1077#1085#1072
      end
      object edEntityCommodID: TDBEdit
        Left = 61
        Top = 4
        Width = 63
        Height = 21
        DataField = 'EntityID'
        DataSource = dmvNizhnyayaNavadvipa.dsCommod
        TabOrder = 0
      end
      object edKindCommodID: TDBEdit
        Left = 213
        Top = 3
        Width = 121
        Height = 21
        DataField = 'KindID'
        DataSource = dmvNizhnyayaNavadvipa.dsCommod
        TabOrder = 1
      end
      object edEntityCommod: TDBEdit
        Left = 58
        Top = 27
        Width = 273
        Height = 21
        DataField = 'Entity'
        DataSource = dmvNizhnyayaNavadvipa.dsCommod
        TabOrder = 2
      end
      object dePriceCommod: TDBEdit
        Left = 392
        Top = 24
        Width = 93
        Height = 21
        DataField = 'Price'
        DataSource = dmvNizhnyayaNavadvipa.dsCommod
        TabOrder = 3
      end
    end
    object dgCommod: TNNVDBGrid
      Left = 0
      Top = 41
      Width = 993
      Height = 281
      Align = alClient
      DataSource = dmvNizhnyayaNavadvipa.dsCommod
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      OnEnter = DBGridEnter
      OnKeyDown = DBGridKeyDown
      Columns = <
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Actual'
          Font.Charset = SYMBOL_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'Wingdings'
          Font.Style = []
          ReadOnly = True
          Width = 30
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'EntityID'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'KindID'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'Entity'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Price'
          Visible = True
        end>
    end
  end
  inherited fbRes: TNNVFlagBox
    caFree = True
    ShowInWindowList = True
    Left = 88
    Top = 152
  end
  inherited coRes: TNNVConfig
    Version = #3
    Connection = dmvNizhnyayaNavadvipa.conDB
    Left = 116
    Top = 152
  end
  object naConfig: TNNVNodeAdmin [11]
    OnLoadNodes = naConfigLoadNodes
    OnEnter = naConfigEnter
    OnExit = naConfigExit
    ReadOnly = True
    DragDropKind = ddkSort
    ReloadEnabled = False
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
    ReloadEnabled = False
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
    ReloadEnabled = False
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
    ReloadEnabled = False
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
  inherited rrRes: TNNVRight
    Left = 144
    Top = 152
  end
  inherited alRes: TNNVActionList
    Left = 172
    Top = 152
    object aNewUser: TAction [11]
      Category = 'Users'
      Caption = #1057#1086#1079#1076#1072#1090#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      Hint = #1057#1086#1079#1076#1072#1090#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      ImageIndex = 100
      OnExecute = aNewUserExecute
    end
    object aSetUserPassord: TAction [12]
      Category = 'Users'
      Caption = #1047#1072#1076#1072#1090#1100' '#1087#1072#1088#1086#1083#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1102
      Hint = #1047#1072#1076#1072#1090#1100' '#1087#1072#1088#1086#1083#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1102
      ImageIndex = 76
      OnExecute = aSetUserPassordExecute
    end
    object aDeleteUser: TAction [13]
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
    ActualOnlyNeed = True
    EndToEndViewingNeed = True
    TreeView = tvExamples
    LoadOrder = 4
    DetailDataSource = dmvNizhnyayaNavadvipa.dsCommod
    DataSource = dmvNizhnyayaNavadvipa.dsCommodKind
    Left = 200
    Top = 101
  end
  object ddUsers: TNNVDateTimeDialog
    NeedTime = True
    OnPrepare = ddUsersPrepare
    OnExecute = ddUsersExecute
    Left = 229
    Top = 152
  end
end

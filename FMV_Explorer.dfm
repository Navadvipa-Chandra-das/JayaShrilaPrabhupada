inherited fmvExplorer: TfmvExplorer
  ActiveControl = tvExamples
  Caption = #1055#1088#1086#1074#1086#1076#1085#1080#1082' "'#1044#1078#1072#1103' '#1064#1088#1080#1083#1072' '#1055#1088#1072#1073#1093#1091#1087#1072#1076#1072'"'
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object splExamples: TNNVSplitter [0]
    Left = 189
    Top = 57
    Height = 695
    ExplicitLeft = 186
    ExplicitHeight = 717
  end
  object tvExamples: TNNVDBTreeView [1]
    Left = 0
    Top = 57
    Width = 189
    Height = 695
    Align = alLeft
    Constraints.MinWidth = 120
    DragMode = dmAutomatic
    Images = dmvNizhnyayaNavadvipa.ilDB
    Indent = 19
    TabOrder = 2
    OnEnter = DBTreeViewEnter
    EditKindID = deKindID
    OnNodeAdminChange = DBTreeViewNodeAdminChange
    ActiveOrder = 0
  end
  object paConfig: TNNVPanel [2]
    Left = 192
    Top = 57
    Width = 993
    Height = 695
    Align = alClient
    TabOrder = 1
    Visible = False
  end
  inherited paT: TNNVPanel
    TabOrder = 3
    inherited paTL: TNNVPanel
      inherited dbngDB: TDBNavigator
        Hints.Strings = ()
      end
    end
  end
  object paNumberToWords: TNNVPanel [4]
    Left = 192
    Top = 57
    Width = 993
    Height = 695
    Align = alClient
    TabOrder = 4
    Visible = False
    object meNumberToWords: TMemo
      Left = 0
      Top = 53
      Width = 993
      Height = 642
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
  inherited tbStatus: TNNVPanel
    Top = 752
    Height = 22
    ExplicitTop = 752
    ExplicitHeight = 22
  end
  object paUsers: TNNVPanel [6]
    Left = 192
    Top = 57
    Width = 993
    Height = 695
    Align = alClient
    TabOrder = 6
    Visible = False
    object dgUsers: TNNVDBGrid
      Left = 0
      Top = 62
      Width = 993
      Height = 633
      Align = alClient
      DataSource = dmvNizhnyayaNavadvipa.dsUsers
      Options = [dgEditing, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgMultiSelect, dgTitleClick, dgTitleHotTrack]
      PopupMenu = pmDBGrid
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      OnEditButtonClick = DBGridEditButtonClick
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
      Height = 62
      Align = alTop
      TabOrder = 1
      object tbrUsers: TToolBar
        Left = 0
        Top = 0
        Width = 993
        Height = 23
        Caption = 'tbrUsers'
        Images = dmvNizhnyayaNavadvipa.ilDB
        TabOrder = 0
        inline frvUserPeriod: TfrvPeriod
          Left = 0
          Top = 0
          Width = 346
          Height = 22
          AutoSize = True
          TabOrder = 0
          inherited tbrDiapazon: TToolBar
            inherited tbApplyDiapazon: TToolButton
              ExplicitWidth = 38
            end
          end
        end
        object tbNewUser: TToolButton
          Left = 346
          Top = 0
          Action = aNewUser
        end
        object tbSetUserPassord: TToolButton
          Left = 369
          Top = 0
          Action = aSetUserPassord
        end
        object tbDeleteUser: TToolButton
          Left = 392
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
        Width = 160
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        MaxLength = 22
        ParentFont = False
        TabOrder = 5
        IsUserCanChangeCheckStyle = True
        CheckStyle = GreaterOrEqual
        CheckStyleSetKind = Greater
      end
    end
  end
  object paCommod: TNNVPanel [7]
    Left = 192
    Top = 57
    Width = 993
    Height = 695
    Align = alClient
    TabOrder = 5
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
      Top = 330
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
      Height = 289
      Align = alClient
      DataSource = dmvNizhnyayaNavadvipa.dsCommod
      Options = [dgEditing, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgMultiSelect, dgTitleClick, dgTitleHotTrack]
      PopupMenu = pmDBGrid
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      OnEnter = DBGridEnter
      OnKeyDown = DBGridKeyDown
      OnDBCut = dgCommodDBCut
      OnDBPaste = dgCommodDBPaste
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
  object drgColor: TNNVDrawGrid [8]
    Left = 192
    Top = 57
    Width = 993
    Height = 695
    Align = alClient
    ColCount = 3
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goThumbTracking]
    TabOrder = 8
    Visible = False
    OnDblClick = drgColorDblClick
    OnDrawCell = drgColorDrawCell
    OnKeyDown = drgColorKeyDown
    ColWidths = (
      434
      83
      78)
    RowHeights = (
      24
      23
      24
      25
      24)
  end
  object paRole: TNNVPanel [9]
    Left = 192
    Top = 57
    Width = 993
    Height = 695
    Align = alClient
    TabOrder = 9
    Visible = False
  end
  object paColor: TNNVPanel [10]
    Left = 192
    Top = 57
    Width = 993
    Height = 695
    Align = alClient
    TabOrder = 7
    Visible = False
    object tbColor: TToolBar
      Left = 0
      Top = 0
      Width = 993
      Height = 23
      Caption = 'tbColor'
      Images = dmvNizhnyayaNavadvipa.ilDB
      TabOrder = 0
      object tbColorIndexGenerate: TToolButton
        Left = 0
        Top = 0
        Action = aColorIndexGenerate
      end
    end
    object dgColor: TNNVDBGrid
      Left = 0
      Top = 23
      Width = 993
      Height = 672
      Align = alClient
      DataSource = dmvNizhnyayaNavadvipa.dsColor
      Options = [dgEditing, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgMultiSelect, dgTitleClick, dgTitleHotTrack]
      PopupMenu = pmDBGrid
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      OnDrawColumnCell = dgColorDrawColumnCell
      OnEditButtonClick = dgColorEditButtonClick
      OnEnter = DBGridEnter
      OnKeyDown = DBGridKeyDown
      OnDBCut = dgColorDBCut
      OnDBPaste = dgColorDBPaste
      Columns = <
        item
          Expanded = False
          FieldName = 'Actual'
          Visible = False
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
          Width = 334
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'EnumLiteral'
          Width = 90
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'VectorIndex'
          Width = 60
          Visible = True
        end
        item
          ButtonStyle = cbsEllipsis
          Expanded = False
          FieldName = 'FonColor'
          Visible = True
        end
        item
          ButtonStyle = cbsEllipsis
          Expanded = False
          FieldName = 'FontColor'
          Visible = True
        end
        item
          ButtonStyle = cbsEllipsis
          Expanded = False
          FieldName = 'FonColorUser'
          Visible = True
        end
        item
          ButtonStyle = cbsEllipsis
          Expanded = False
          FieldName = 'FontColorUser'
          Visible = True
        end>
    end
  end
  object paRights: TNNVPanel [11]
    Left = 192
    Top = 57
    Width = 993
    Height = 695
    Align = alClient
    TabOrder = 10
    Visible = False
    object paRightsT: TNNVPanel
      Left = 0
      Top = 0
      Width = 993
      Height = 27
      Align = alTop
      TabOrder = 0
    end
    object dgRights: TNNVDBGrid
      Left = 0
      Top = 27
      Width = 993
      Height = 668
      Align = alClient
      DataSource = dmvNizhnyayaNavadvipa.dsRights
      Options = [dgEditing, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgMultiSelect, dgTitleClick, dgTitleHotTrack]
      PopupMenu = pmDBGrid
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      OnDrawColumnCell = dgRightsDrawColumnCell
      OnEnter = DBGridEnter
      OnKeyDown = DBGridKeyDown
      OnDBCut = dgRightsDBCut
      OnDBPaste = dgRightsDBPaste
      Columns = <
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
          Alignment = taCenter
          Expanded = False
          FieldName = 'Actual'
          Font.Charset = SYMBOL_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'Wingdings'
          Font.Style = []
          ReadOnly = True
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'Entity'
          Width = 563
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Literal'
          Width = 87
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'VectorIndex'
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
  object naConfig: TNNVNodeAdmin [14]
    OnLoadNodes = naConfigLoadNodes
    OnEnter = naConfigEnter
    OnExit = naConfigExit
    ReadOnly = True
    ReloadEnabled = False
    TreeView = tvExamples
    LoadOrder = 0
    Left = 88
    Top = 100
  end
  object naColorKind: TNNVNodeAdmin [15]
    OnLoadNodes = naColorKindLoadNodes
    OnGetNodeParams = naColorKindGetNodeParams
    OnFirstEnter = naColorKindFirstEnter
    OnEnter = naColorKindEnter
    OnExit = naColorKindExit
    OnLastExit = naColorKindLastExit
    EndToEndViewingNeed = True
    TreeView = tvExamples
    DetailDataSource = dmvNizhnyayaNavadvipa.dsColor
    DataSource = dmvNizhnyayaNavadvipa.dsColorKind
    Left = 116
    Top = 100
  end
  object naNumberToWords: TNNVNodeAdmin [16]
    OnLoadNodes = naNumberToWordsLoadNodes
    OnFirstEnter = naNumberToWordsFirstEnter
    OnEnter = naNumberToWordsEnter
    OnExit = naNumberToWordsExit
    ReadOnly = True
    ReloadEnabled = False
    TreeView = tvExamples
    LoadOrder = 2
    Left = 144
    Top = 100
  end
  object naUsers: TNNVNodeAdmin [17]
    OnLoadNodes = naUsersLoadNodes
    OnFirstEnter = naUsersFirstEnter
    OnEnter = naUsersEnter
    OnExit = naUsersExit
    OnLastExit = naUsersLastExit
    ReadOnly = True
    ReloadEnabled = False
    TreeView = tvExamples
    LoadOrder = 3
    DetailDataSource = dmvNizhnyayaNavadvipa.dsUsers
    Left = 172
    Top = 100
  end
  object nwExamples: TNNVNumberToWords [18]
    OnChange = nwExamplesChange
    Left = 150
    Top = 53
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
    object aColorIndexGenerate: TAction
      Category = 'Color'
      Caption = #1043#1077#1085#1077#1088#1072#1094#1080#1103' '#1080#1085#1076#1077#1082#1089#1086#1074' '#1094#1074#1077#1090#1086#1074
      Hint = #1043#1077#1085#1077#1088#1072#1094#1080#1103' '#1080#1085#1076#1077#1082#1089#1086#1074' '#1094#1074#1077#1090#1086#1074
      ImageIndex = 38
      OnExecute = aColorIndexGenerateExecute
    end
  end
  inherited dsData: TDataSource
    Left = 200
    Top = 152
  end
  inherited mmDB: TMainMenu
    Left = 10
    Top = 54
  end
  inherited sdDB: TNNVDBSearchDialog
    Left = 38
    Top = 54
  end
  inherited pmSearchEdit: TPopupMenu
    Left = 66
    Top = 54
    inherited mipSECaseSensitive: TMenuItem
      Checked = True
    end
    inherited mipSEFiltered: TMenuItem
      Checked = True
    end
  end
  object naCommodKind: TNNVNodeAdmin [25]
    OnLoadNodes = naCommodKindLoadNodes
    OnGetNodeParams = naCommodKindGetNodeParams
    OnFirstEnter = naCommodKindFirstEnter
    OnEnter = naCommodKindEnter
    OnExit = naCommodKindExit
    OnLastExit = naCommodKindLastExit
    ActualOnlyNeed = True
    EndToEndViewingNeed = True
    TreeView = tvExamples
    LoadOrder = 4
    DetailDataSource = dmvNizhnyayaNavadvipa.dsCommod
    DataSource = dmvNizhnyayaNavadvipa.dsCommodKind
    Left = 200
    Top = 101
  end
  inherited ddDB: TNNVDateTimeDialog
    Left = 94
    Top = 54
  end
  inherited pmDBGrid: TPopupMenu
    Left = 122
    Top = 54
  end
  object naColor: TNNVNodeAdmin
    OnLoadNodes = naColorLoadNodes
    OnEnter = naColorEnter
    OnExit = naColorExit
    ReadOnly = True
    KeyEnabled = False
    MoveEnabled = False
    ReloadEnabled = False
    TreeView = tvExamples
    LoadOrder = 5
    Left = 227
    Top = 100
  end
  object naRightsKind: TNNVNodeAdmin
    OnLoadNodes = naRightsKindLoadNodes
    OnGetNodeParams = naRightsKindGetNodeParams
    OnFirstEnter = naRightsKindFirstEnter
    OnEnter = naRightsKindEnter
    OnExit = naRightsKindExit
    OnLastExit = naRightsKindLastExit
    ActualOnlyNeed = True
    EndToEndViewingNeed = True
    TreeView = tvExamples
    LoadOrder = 6
    DetailDataSource = dmvNizhnyayaNavadvipa.dsRights
    DataSource = dmvNizhnyayaNavadvipa.dsRightsKind
    Left = 253
    Top = 100
  end
  object naRoleKind: TNNVNodeAdmin
    OnLoadNodes = naRoleKindLoadNodes
    OnGetNodeParams = naRoleKindGetNodeParams
    OnFirstEnter = naRoleKindFirstEnter
    OnEnter = naRoleKindEnter
    OnExit = naRoleKindExit
    OnLastExit = naRoleKindLastExit
    ActualOnlyNeed = True
    EndToEndViewingNeed = True
    TreeView = tvExamples
    LoadOrder = 7
    DetailDataSource = dmvNizhnyayaNavadvipa.dsRole
    DataSource = dmvNizhnyayaNavadvipa.dsRoleKind
    Left = 281
    Top = 100
  end
end

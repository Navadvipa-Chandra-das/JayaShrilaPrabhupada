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
  object paConfig: TNNVPanel [1]
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
  object paNumberToWords: TNNVPanel [3]
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
  object paCommod: TNNVPanel [5]
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
        DataSource = dmvNewNavadvipa.dsCommod
        TabOrder = 0
      end
      object edKindCommodID: TDBEdit
        Left = 213
        Top = 3
        Width = 121
        Height = 21
        DataField = 'KindID'
        DataSource = dmvNewNavadvipa.dsCommod
        TabOrder = 1
      end
      object edEntityCommod: TDBEdit
        Left = 58
        Top = 27
        Width = 273
        Height = 21
        DataField = 'Entity'
        DataSource = dmvNewNavadvipa.dsCommod
        TabOrder = 2
      end
      object dePriceCommod: TDBEdit
        Left = 392
        Top = 24
        Width = 93
        Height = 21
        DataField = 'Price'
        DataSource = dmvNewNavadvipa.dsCommod
        TabOrder = 3
      end
    end
    object dgCommod: TNNVDBGrid
      Left = 0
      Top = 41
      Width = 993
      Height = 289
      Align = alClient
      DataSource = dmvNewNavadvipa.dsCommod
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
      OnTitleClick = DBGridTitleClick
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
  object tvExamples: TNNVDBTreeView [6]
    Left = 0
    Top = 57
    Width = 189
    Height = 695
    Align = alLeft
    Constraints.MinWidth = 120
    DragMode = dmAutomatic
    Images = dmvNewNavadvipa.ilDB
    Indent = 19
    PopupMenu = pmDBTreeView
    TabOrder = 2
    OnEnter = DBTreeViewEnter
    EditKindID = deKindID
    OnNodeAdminChange = DBTreeViewNodeAdminChange
    ActiveOrder = 0
  end
  object paColor: TNNVPanel [7]
    Left = 192
    Top = 57
    Width = 993
    Height = 695
    Align = alClient
    TabOrder = 7
    Visible = False
    object dgColor: TNNVDBGrid
      Left = 0
      Top = 25
      Width = 993
      Height = 670
      Align = alClient
      DataSource = dmvNewNavadvipa.dsColor
      Options = [dgEditing, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgMultiSelect, dgTitleClick, dgTitleHotTrack]
      PopupMenu = pmDBGrid
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      OnDrawColumnCell = dgColorDrawColumnCell
      OnEditButtonClick = dgColorEditButtonClick
      OnEnter = DBGridEnter
      OnKeyDown = DBGridKeyDown
      OnTitleClick = DBGridTitleClick
      OnDBCut = dgColorDBCut
      OnDBPaste = dgColorDBPaste
      Columns = <
        item
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
          OrderBy = 'a."EnumLiteral"'
        end
        item
          Expanded = False
          FieldName = 'VectorIndex'
          Width = 60
          Visible = True
          OrderBy = 'a."VectorIndex"'
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
    object paColorT: TNNVPanel
      Left = 0
      Top = 0
      Width = 993
      Height = 25
      Align = alTop
      TabOrder = 1
      object tbColor: TToolBar
        Left = 0
        Top = 2
        Width = 79
        Height = 23
        Align = alNone
        Caption = 'tbColor'
        Images = dmvNewNavadvipa.ilDB
        TabOrder = 0
        object tbColorIndexGenerate: TToolButton
          Left = 0
          Top = 0
          Action = aColorIndexGenerate
        end
        object tbGenerateColorConsts: TToolButton
          Left = 23
          Top = 0
          Action = aGenerateColorConsts
        end
        object tbGenerateColorConstsWithoutIndex: TToolButton
          Left = 46
          Top = 0
          Action = aGenerateColorConstsWithoutIndex
        end
      end
      object paFonValueChange: TNNVPanel
        Left = 86
        Top = 3
        Width = 49
        Height = 18
        Hint = #1062#1074#1077#1090' '#1092#1086#1085#1072' '#1101#1083#1077#1084#1077#1085#1090#1086#1074' '#1074#1074#1086#1076#1072' '#1076#1080#1072#1087#1072#1079#1086#1085#1086#1074
        BevelOuter = bvLowered
        Caption = #1055#1088#1080#1084#1077#1088
        ParentBackground = False
        TabOrder = 1
        OnDblClick = paFonValueChangeDblClick
      end
      object paFontValueChange: TNNVPanel
        Left = 145
        Top = 3
        Width = 49
        Height = 18
        Hint = #1062#1074#1077#1090' '#1096#1088#1080#1092#1090#1072' '#1101#1083#1077#1084#1077#1085#1090#1086#1074' '#1074#1074#1086#1076#1072' '#1076#1080#1072#1087#1072#1079#1086#1085#1086#1074
        BevelOuter = bvLowered
        ParentBackground = False
        TabOrder = 2
        OnDblClick = paFontValueChangeDblClick
      end
    end
  end
  object paRole: TNNVPanel [8]
    Left = 192
    Top = 57
    Width = 993
    Height = 695
    Align = alClient
    TabOrder = 8
    Visible = False
    object splRole: TNNVSplitter
      Left = 0
      Top = 326
      Width = 993
      Height = 3
      Cursor = crVSplit
      Align = alTop
      ExplicitWidth = 369
    end
    object tbRole: TToolBar
      Left = 0
      Top = 0
      Width = 993
      Height = 29
      Caption = 'tbRole'
      Images = dmvNewNavadvipa.ilDB
      TabOrder = 0
    end
    object dgRoleRights: TNNVDBGrid
      Left = 0
      Top = 329
      Width = 993
      Height = 366
      Align = alClient
      DataSource = dmvNewNavadvipa.dsRoleRights
      Options = [dgEditing, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgMultiSelect, dgTitleClick, dgTitleHotTrack]
      PopupMenu = pmDBGrid
      TabOrder = 2
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      OnDrawColumnCell = dgRoleRightsDrawColumnCell
      OnEditButtonClick = DBGridEditButtonClick
      OnEnter = DBGridEnter
      OnKeyDown = DBGridKeyDown
      OnTitleClick = DBGridTitleClick
      OnDBCut = dgRoleRightsDBCut
      OnDBCopy = dgRoleRightsDBCopy
      OnDBPaste = dgRoleRightsDBPaste
      Columns = <
        item
          Expanded = False
          FieldName = 'RoleRightsID'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'RoleID'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'EntityID'
          Visible = False
        end
        item
          ButtonStyle = cbsEllipsis
          Expanded = False
          FieldName = 'Right'
          ReadOnly = True
          Width = 445
          Visible = True
          Dialog = DRoleRights
        end>
    end
    object dgRole: TNNVDBGrid
      Left = 0
      Top = 29
      Width = 993
      Height = 297
      Align = alTop
      DataSource = dmvNewNavadvipa.dsRole
      Options = [dgEditing, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgMultiSelect, dgTitleClick, dgTitleHotTrack]
      PopupMenu = pmDBGrid
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      OnDrawColumnCell = dgRoleDrawColumnCell
      OnEnter = DBGridEnter
      OnKeyDown = DBGridKeyDown
      OnTitleClick = DBGridTitleClick
      OnDBCut = dgRoleDBCut
      OnDBCopy = dgRoleDBCopy
      OnDBPaste = dgRoleDBPaste
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
          Expanded = False
          FieldName = 'Actual'
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
          FieldName = 'Entity'
          Width = 400
          Visible = True
        end>
    end
  end
  object paRights: TNNVPanel [9]
    Left = 192
    Top = 57
    Width = 993
    Height = 695
    Align = alClient
    TabOrder = 9
    Visible = False
    object dgRights: TNNVDBGrid
      Left = 0
      Top = 23
      Width = 993
      Height = 672
      Align = alClient
      DataSource = dmvNewNavadvipa.dsRights
      Options = [dgEditing, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgMultiSelect, dgTitleClick, dgTitleHotTrack]
      PopupMenu = pmDBGrid
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      OnDrawColumnCell = dgRightsDrawColumnCell
      OnEnter = DBGridEnter
      OnKeyDown = DBGridKeyDown
      OnTitleClick = DBGridTitleClick
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
          Width = 303
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
    object tbrRights: TToolBar
      Left = 0
      Top = 0
      Width = 993
      Height = 23
      Caption = 'tbrRights'
      Images = dmvNewNavadvipa.ilDB
      TabOrder = 1
      object tbRightsIndexGenerate: TToolButton
        Left = 0
        Top = 0
        Action = aRightsIndexGenerate
      end
      object tbGenerateRightsConsts: TToolButton
        Left = 23
        Top = 0
        Action = aGenerateRightsConsts
      end
      object tbGenerateRightsConstsWithoutIndex: TToolButton
        Left = 46
        Top = 0
        Action = aGenerateRightsConstsWithoutIndex
      end
    end
  end
  object paUsers: TNNVPanel [10]
    Left = 192
    Top = 57
    Width = 993
    Height = 695
    Align = alClient
    TabOrder = 6
    Visible = False
    object splUsersB: TNNVSplitter
      Left = 0
      Top = 345
      Width = 993
      Height = 3
      Cursor = crVSplit
      Align = alBottom
      ExplicitTop = 62
      ExplicitWidth = 286
    end
    object dgUsers: TNNVDBGrid
      Left = 0
      Top = 62
      Width = 993
      Height = 283
      Align = alClient
      DataSource = dmvNewNavadvipa.dsUsers
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
      OnTitleClick = DBGridTitleClick
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
        Images = dmvNewNavadvipa.ilDB
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
        object tbNewSuperUser: TToolButton
          Left = 69
          Top = 0
          Action = aNewSuperUser
        end
        object tbGrantSuperUser: TToolButton
          Left = 92
          Top = 0
          Action = aGrantSuperUser
        end
        object tbRevokeSuperUser: TToolButton
          Left = 115
          Top = 0
          Action = aRevokeSuperUser
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
        DataSource = dmvNewNavadvipa.dsUsers
      end
      object dcbUsersNote: TNNVDBComboBox
        Left = 134
        Top = 32
        Width = 114
        Height = 21
        DataField = 'Note'
        DataSource = dmvNewNavadvipa.dsUsers
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
        DataSource = dmvNewNavadvipa.dsUsers
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
        DataSource = dmvNewNavadvipa.dsUsers
      end
    end
    object paUsersB: TNNVPanel
      Left = 0
      Top = 348
      Width = 993
      Height = 347
      Align = alBottom
      TabOrder = 2
      object splUserRights: TNNVSplitter
        Left = 511
        Top = 0
        Height = 347
        ExplicitLeft = 526
        ExplicitTop = 98
        ExplicitHeight = 100
      end
      object dgUserRights: TNNVDBGrid
        Left = 0
        Top = 0
        Width = 511
        Height = 347
        Align = alLeft
        DataSource = dmvNewNavadvipa.dsUserRights
        Options = [dgEditing, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgMultiSelect, dgTitleClick, dgTitleHotTrack]
        PopupMenu = pmDBGrid
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'Tahoma'
        TitleFont.Style = []
        OnDrawColumnCell = dgUserRightsDrawColumnCell
        OnEditButtonClick = DBGridEditButtonClick
        OnEnter = DBGridEnter
        OnKeyDown = DBGridKeyDown
        OnTitleClick = DBGridTitleClick
        OnDBCut = dgUserRightsDBCut
        OnDBCopy = dgUserRightsDBCopy
        OnDBPaste = dgUserRightsDBPaste
        Columns = <
          item
            Expanded = False
            FieldName = 'UserRightsID'
            Visible = False
          end
          item
            Expanded = False
            FieldName = 'UserID'
            Visible = False
          end
          item
            Expanded = False
            FieldName = 'EntityID'
            Visible = False
          end
          item
            Expanded = False
            FieldName = 'IsPlus'
            ReadOnly = True
            Visible = True
          end
          item
            ButtonStyle = cbsEllipsis
            Expanded = False
            FieldName = 'Right'
            ReadOnly = True
            Width = 383
            Visible = True
            Dialog = DUserRights
          end>
      end
      object dgUserRoles: TNNVDBGrid
        Left = 514
        Top = 0
        Width = 479
        Height = 347
        Align = alClient
        DataSource = dmvNewNavadvipa.dsUserRoles
        Options = [dgEditing, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgMultiSelect, dgTitleClick, dgTitleHotTrack]
        PopupMenu = pmDBGrid
        TabOrder = 1
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'Tahoma'
        TitleFont.Style = []
        OnDrawColumnCell = dgUserRolesDrawColumnCell
        OnEditButtonClick = DBGridEditButtonClick
        OnEnter = DBGridEnter
        OnTitleClick = DBGridTitleClick
        OnDBCut = dgUserRolesDBCut
        OnDBCopy = dgUserRolesDBCopy
        OnDBPaste = dgUserRolesDBPaste
        Columns = <
          item
            Expanded = False
            FieldName = 'UserRolesID'
            Visible = False
          end
          item
            Expanded = False
            FieldName = 'UserID'
            Visible = False
          end
          item
            Expanded = False
            FieldName = 'EntityID'
            Visible = False
          end
          item
            ButtonStyle = cbsEllipsis
            Expanded = False
            FieldName = 'Role'
            ReadOnly = True
            Width = 424
            Visible = True
            Dialog = DUserRole
          end>
      end
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
    OnEndLoad = coResEndLoad
    Left = 116
    Top = 151
  end
  object naConfig: TNNVNodeAdmin [13]
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
  object naColorKind: TNNVNodeAdmin [14]
    OnLoadNodes = naColorKindLoadNodes
    OnGetNodeParams = naColorKindGetNodeParams
    OnFirstEnter = naColorKindFirstEnter
    OnEnter = naColorKindEnter
    OnExit = naColorKindExit
    OnLastExit = naColorKindLastExit
    EndToEndViewingNeed = True
    TreeView = tvExamples
    DetailDataSource = dmvNewNavadvipa.dsColor
    DataSource = dmvNewNavadvipa.dsColorKind
    Left = 116
    Top = 100
  end
  object naNumberToWords: TNNVNodeAdmin [15]
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
  object naUsers: TNNVNodeAdmin [16]
    OnLoadNodes = naUsersLoadNodes
    OnFirstEnter = naUsersFirstEnter
    OnEnter = naUsersEnter
    OnExit = naUsersExit
    OnLastExit = naUsersLastExit
    ReadOnly = True
    ReloadEnabled = False
    TreeView = tvExamples
    LoadOrder = 3
    DetailDataSource = dmvNewNavadvipa.dsUsers
    Left = 172
    Top = 100
  end
  object nwExamples: TNNVNumberToWords [17]
    OnChange = nwExamplesChange
    Left = 150
    Top = 53
  end
  inherited rrRes: TNNVRight
    OnRight = rrResRight
    Left = 144
    Top = 152
  end
  inherited alRes: TNNVActionList
    Left = 172
    Top = 152
    object aRightsIndexGenerate: TAction [0]
      Category = 'Rights'
      Caption = #1043#1077#1085#1077#1088#1072#1094#1080#1103' '#1080#1085#1076#1077#1082#1089#1086#1074' '#1087#1088#1072#1074
      Hint = #1043#1077#1085#1077#1088#1072#1094#1080#1103' '#1080#1085#1076#1077#1082#1089#1086#1074' '#1087#1088#1072#1074
      ImageIndex = 38
      OnExecute = aRightsIndexGenerateExecute
    end
    object aNewUser: TAction [12]
      Category = 'Users'
      Caption = #1057#1086#1079#1076#1072#1090#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      Hint = #1057#1086#1079#1076#1072#1090#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      ImageIndex = 100
      OnExecute = aNewUserExecute
    end
    object aSetUserPassord: TAction [13]
      Category = 'Users'
      Caption = #1047#1072#1076#1072#1090#1100' '#1087#1072#1088#1086#1083#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1102
      Hint = #1047#1072#1076#1072#1090#1100' '#1087#1072#1088#1086#1083#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1102
      ImageIndex = 76
      OnExecute = aSetUserPassordExecute
    end
    object aDeleteUser: TAction [14]
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
    object aGenerateColorConsts: TAction
      Category = 'Color'
      Caption = #1057#1086#1079#1076#1072#1085#1080#1077' '#1089#1087#1080#1089#1082#1072' '#1082#1086#1085#1089#1090#1072#1085#1090' '#1094#1074#1077#1090#1086#1074' '#1076#1083#1103' *.cpp'
      Hint = #1057#1086#1079#1076#1072#1085#1080#1077' '#1089#1087#1080#1089#1082#1072' '#1082#1086#1085#1089#1090#1072#1085#1090' '#1094#1074#1077#1090#1086#1074' '#1076#1083#1103' *.cpp'
      ImageIndex = 5
      OnExecute = aGenerateColorConstsExecute
    end
    object aGenerateColorConstsWithoutIndex: TAction
      Category = 'Color'
      Caption = #1057#1086#1079#1076#1072#1085#1080#1077' '#1089#1087#1080#1089#1082#1072' '#1082#1086#1085#1089#1090#1072#1085#1090' '#1094#1074#1077#1090#1086#1074' '#1076#1083#1103' *.h'
      Hint = #1057#1086#1079#1076#1072#1085#1080#1077' '#1089#1087#1080#1089#1082#1072' '#1082#1086#1085#1089#1090#1072#1085#1090' '#1094#1074#1077#1090#1086#1074' '#1076#1083#1103' *.h'
      ImageIndex = 10
      OnExecute = aGenerateColorConstsWithoutIndexExecute
    end
    object aNewSuperUser: TAction
      Category = 'Users'
      Caption = #1057#1086#1079#1076#1072#1090#1100' '#1089#1091#1087#1077#1088' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      Hint = #1057#1086#1079#1076#1072#1090#1100' '#1089#1091#1087#1077#1088' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      ImageIndex = 106
      OnExecute = aNewSuperUserExecute
    end
    object aGrantSuperUser: TAction
      Category = 'Users'
      Caption = #1044#1072#1090#1100' '#1087#1088#1072#1074#1072' '#1089#1091#1087#1077#1088#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      Hint = #1044#1072#1090#1100' '#1087#1088#1072#1074#1072' '#1089#1091#1087#1077#1088#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      ImageIndex = 187
      OnExecute = aGrantSuperUserExecute
    end
    object aRevokeSuperUser: TAction
      Category = 'Users'
      Caption = #1047#1072#1073#1088#1072#1090#1100' '#1087#1088#1072#1074#1072' '#1089#1091#1087#1077#1088#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      Hint = #1047#1072#1073#1088#1072#1090#1100' '#1087#1088#1072#1074#1072' '#1089#1091#1087#1077#1088#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      ImageIndex = 188
      OnExecute = aRevokeSuperUserExecute
    end
    object aGenerateRightsConsts: TAction
      Category = 'Rights'
      Caption = #1057#1086#1079#1076#1072#1085#1080#1077' '#1089#1087#1080#1089#1082#1072' '#1082#1086#1085#1089#1090#1072#1085#1090' '#1087#1088#1072#1074' '#1076#1083#1103' *.cpp'
      Hint = #1057#1086#1079#1076#1072#1085#1080#1077' '#1089#1087#1080#1089#1082#1072' '#1082#1086#1085#1089#1090#1072#1085#1090' '#1087#1088#1072#1074' '#1076#1083#1103' *.cpp'
      ImageIndex = 5
      OnExecute = aGenerateRightsConstsExecute
    end
    object aGenerateRightsConstsWithoutIndex: TAction
      Category = 'Rights'
      Caption = #1057#1086#1079#1076#1072#1085#1080#1077' '#1089#1087#1080#1089#1082#1072' '#1082#1086#1085#1089#1090#1072#1085#1090' '#1087#1088#1072#1074' '#1076#1083#1103' *.h'
      Hint = #1057#1086#1079#1076#1072#1085#1080#1077' '#1089#1087#1080#1089#1082#1072' '#1082#1086#1085#1089#1090#1072#1085#1090' '#1087#1088#1072#1074' '#1076#1083#1103' *.h'
      ImageIndex = 10
      OnExecute = aGenerateRightsConstsWithoutIndexExecute
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
  object naCommodKind: TNNVNodeAdmin [24]
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
    DetailDataSource = dmvNewNavadvipa.dsCommod
    DataSource = dmvNewNavadvipa.dsCommodKind
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
  object naRightsKind: TNNVNodeAdmin [27]
    OnLoadNodes = naRightsKindLoadNodes
    OnGetNodeParams = naRightsKindGetNodeParams
    OnFirstEnter = naRightsKindFirstEnter
    OnEnter = naRightsKindEnter
    OnExit = naRightsKindExit
    OnLastExit = naRightsKindLastExit
    ActualOnlyNeed = True
    EndToEndViewingNeed = True
    TreeView = tvExamples
    LoadOrder = 5
    DetailDataSource = dmvNewNavadvipa.dsRights
    DataSource = dmvNewNavadvipa.dsRightsKind
    Left = 228
    Top = 101
  end
  object naRoleKind: TNNVNodeAdmin [28]
    OnLoadNodes = naRoleKindLoadNodes
    OnGetNodeParams = naRoleKindGetNodeParams
    OnFirstEnter = naRoleKindFirstEnter
    OnEnter = naRoleKindEnter
    OnExit = naRoleKindExit
    OnLastExit = naRoleKindLastExit
    ActualOnlyNeed = True
    EndToEndViewingNeed = True
    TreeView = tvExamples
    LoadOrder = 6
    DetailDataSource = dmvNewNavadvipa.dsRole
    DataSource = dmvNewNavadvipa.dsRoleKind
    Left = 256
    Top = 101
  end
  object DRoleRights: TNNVDialog [29]
    OnPrepare = DRoleRightsPrepare
    OnExecute = DRoleRightsExecute
    Left = 228
    Top = 153
  end
  object DUserRights: TNNVDialog [30]
    OnPrepare = DUserRightsPrepare
    OnExecute = dUserRightsExecute
    Left = 255
    Top = 153
  end
  object DUserRole: TNNVDialog [31]
    OnPrepare = DUserRolePrepare
    OnExecute = DUserRoleExecute
    Left = 283
    Top = 153
  end
  inherited pmDBTreeView: TPopupMenu
    Left = 310
    Top = 153
  end
end

inherited fmvExamples: TfmvExamples
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
    ActiveOrder = 0
  end
  object paUsers: TNNVPanel [2]
    Left = 192
    Top = 57
    Width = 993
    Height = 717
    Align = alClient
    TabOrder = 1
    Visible = False
    object dgUsers: TNNVDBGrid
      Left = 0
      Top = 0
      Width = 993
      Height = 717
      Align = alClient
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
    end
  end
  object paConfig: TNNVPanel [3]
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
      inherited tsDBTree: TTabSheet
        ExplicitTop = 25
        ExplicitHeight = 28
      end
    end
    inherited paTL: TNNVPanel
      inherited dbngDB: TDBNavigator
        Hints.Strings = ()
      end
    end
  end
  object paColor: TNNVPanel [5]
    Left = 192
    Top = 57
    Width = 993
    Height = 717
    Align = alClient
    TabOrder = 4
    Visible = False
  end
  object paNumberToWords: TNNVPanel [6]
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
    object NNVPanel1: TNNVPanel
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
  inherited fbRes: TNNVFlagBox
    caFree = True
  end
  inherited coRes: TNNVConfig
    Version = #3
    Connection = dmvExamples.conDB
  end
  object naConfig: TNNVNodeAdmin
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
  object naColor: TNNVNodeAdmin
    OnLoadNodes = naColorLoadNodes
    OnEnter = naColorEnter
    OnExit = naColorExit
    ReadOnly = True
    DragDropKind = ddkSort
    TreeView = tvExamples
    Left = 116
    Top = 100
  end
  object naNumberToWords: TNNVNodeAdmin
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
  object naUsers: TNNVNodeAdmin
    OnLoadNodes = naUsersLoadNodes
    OnEnter = naUsersEnter
    OnExit = naUsersExit
    ReadOnly = True
    DragDropKind = ddkSort
    TreeView = tvExamples
    LoadOrder = 3
    Left = 172
    Top = 100
  end
  object nwExamples: TNNVNumberToWords
    OnChange = nwExamplesChange
    Left = 256
    Top = 101
  end
end

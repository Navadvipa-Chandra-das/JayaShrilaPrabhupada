inherited dmvJayaShrilaPrabhupada: TdmvJayaShrilaPrabhupada
  OldCreateOrder = True
  Height = 315
  Width = 409
  inherited coData: TNNVConfig
    Connection = conDB
  end
  object conDB: TFDConnection
    Params.Strings = (
      'DriverID=PG_N'
      'Database=NizhnyayaNavadvipa'
      'User_Name=Navadvipa Chandra das'
      'Server=127.0.0.1'
      'MonitorBy=Remote')
    ConnectedStoredUsage = [auDesignTime]
    Connected = True
    Transaction = trDB
    AfterConnect = conDBAfterConnect
    BeforeConnect = conDBBeforeConnect
    Left = 88
    Top = 116
  end
  object trDB: TFDTransaction
    Connection = conDB
    Left = 152
    Top = 116
  end
  object PgDrLinkDB: TFDPhysPgDriverLink
    DriverID = 'PG_N'
    VendorLib = 'C:\PostgreSQL\psqlODBC\bin\libpq.dll'
    Left = 88
    Top = 12
  end
  object rmDB: TNNVRightsManager
    Connection = conDB
    Left = 152
    Top = 12
  end
  object monDB: TFDMoniRemoteClientLink
    Tracing = True
    Left = 228
    Top = 116
  end
  object quCommodKind: TNNVQuery
    Connection = conDB
    UpdateOptions.AssignedValues = [uvEUpdate, uvUpdateChngFields, uvUpdateMode, uvGeneratorName, uvUpdateNonBaseFields]
    UpdateOptions.GeneratorName = 'Kind_KindID_seq'
    UpdateOptions.UpdateTableName = 'public."CommodKind"'
    UpdateObject = usCommodKind
    SQL.Strings = (
      'select'
      '  a."KindID"'
      ', a."ParentID"'
      ', a."Kind"'
      ', a."SortNum"'
      ', a."Actual"'
      ', 1 as "Level"'
      ', a."InPrice"'
      'from'
      '  "CommodKind" a;')
    Left = 88
    Top = 172
    object quCommodKindKindID: TIntegerField
      AutoGenerateValue = arDefault
      FieldName = 'KindID'
      Origin = '"KindID"'
    end
    object quCommodKindParentID: TIntegerField
      FieldName = 'ParentID'
      Origin = '"ParentID"'
    end
    object quCommodKindKind: TWideStringField
      DisplayLabel = #1042#1080#1076
      FieldName = 'Kind'
      Origin = '"Kind"'
      Size = 100
    end
    object quCommodKindSortNum: TIntegerField
      DisplayLabel = #1055#1086#1083#1077' '#1089#1086#1088#1090#1080#1088#1086#1074#1082#1080
      FieldName = 'SortNum'
      Origin = '"SortNum"'
    end
    object quCommodKindActual: TBooleanField
      DefaultExpression = 'True'
      DisplayLabel = #1040#1082#1090#1091#1072#1083#1100#1085#1086#1089#1090#1100
      FieldName = 'Actual'
      Origin = '"Actual"'
    end
    object quCommodKindInPrice: TBooleanField
      DisplayLabel = #1042#1082#1083#1102#1095#1072#1090#1100' '#1074' '#1087#1088#1072#1081#1089
      FieldName = 'InPrice'
      Origin = '"InPrice"'
    end
  end
  object quUsers: TNNVQuery
    Connection = conDB
    UpdateOptions.AssignedValues = [uvGeneratorName]
    UpdateOptions.GeneratorName = '"Users_UserID_seq"'
    SQL.Strings = (
      'SELECT'
      '  a."UserID"'
      ', a."IsDeleted"'
      ', a."Name"'
      ', a."FIO"'
      ', a."Note"'
      ', a."INN"'
      ', a."Passport"'
      ', a."PassportKemVydan"'
      ', a."PassportDate"'
      ', a."BirthDate"'
      ', a."CreateDate"'
      'FROM'
      '  public."Users" a;')
    Left = 191
    Top = 171
    object quUsersUserID: TIntegerField
      AutoGenerateValue = arDefault
      FieldName = 'UserID'
      Origin = '"UserID"'
    end
    object quUsersIsDeleted: TBooleanField
      DefaultExpression = 'True'
      DisplayLabel = #1059#1076#1072#1083#1105#1085' '#1083#1080'?'
      FieldName = 'IsDeleted'
      Origin = '"IsDeleted"'
      Required = True
      OnGetText = BoolGalkaGetText
    end
    object quUsersName: TWideStringField
      DisplayLabel = #1051#1086#1075#1080#1085' '#1080#1084#1103
      FieldName = 'Name'
      Origin = '"Name"'
      Size = 32
    end
    object quUsersFIO: TWideStringField
      DisplayLabel = #1060#1072#1084#1080#1083#1080#1103' '#1048#1084#1103' '#1054#1090#1095#1077#1089#1090#1074#1086
      FieldName = 'FIO'
      Origin = '"FIO"'
      Size = 100
    end
    object quUsersNote: TWideStringField
      DisplayLabel = #1050#1086#1084#1084#1077#1085#1090#1072#1088#1080#1081
      FieldName = 'Note'
      Origin = '"Note"'
      Size = 100
    end
    object quUsersINN: TWideStringField
      DisplayLabel = #1048#1085#1076#1080#1074#1080#1076#1091#1072#1083#1100#1085#1099#1081' '#1085#1072#1083#1086#1075#1086#1074#1099#1081' '#1085#1086#1084#1077#1088
      FieldName = 'INN'
      Origin = '"INN"'
      Size = 12
    end
    object quUsersPassport: TWideStringField
      DisplayLabel = #1055#1072#1089#1087#1086#1088#1090
      FieldName = 'Passport'
      Origin = '"Passport"'
      Size = 12
    end
    object quUsersPassportKemVydan: TWideStringField
      DisplayLabel = #1050#1077#1084' '#1074#1099#1076#1072#1085' '#1087#1072#1089#1087#1086#1088#1090
      FieldName = 'PassportKemVydan'
      Origin = '"PassportKemVydan"'
      Size = 50
    end
    object quUsersPassportDate: TDateField
      DisplayLabel = #1044#1072#1090#1072' '#1074#1099#1076#1072#1095#1080' '#1087#1072#1089#1087#1086#1088#1090#1072
      FieldName = 'PassportDate'
      Origin = '"PassportDate"'
      OnSetText = ClearDateSetText
    end
    object quUsersBirthDate: TSQLTimeStampField
      FieldName = 'BirthDate'
      Origin = '"BirthDate"'
      OnSetText = ClearDateSetText
    end
    object quUsersCreateDate: TSQLTimeStampField
      FieldName = 'CreateDate'
      Origin = '"CreateDate"'
      OnSetText = ClearDateSetText
    end
  end
  object dsUsers: TDataSource
    DataSet = quUsers
    Left = 192
    Top = 220
  end
  object quCommod: TNNVQuery
    Connection = conDB
    Left = 256
    Top = 172
  end
  object dsCommodKind: TDataSource
    DataSet = quCommodKind
    Left = 88
    Top = 216
  end
  object usCommodKind: TFDUpdateSQL
    Connection = conDB
    ModifySQL.Strings = (
      'update "CommodKind" set'
      '  "ParentID" = :ParentID'
      ', "Kind"     = :Kind'
      ', "SortNum"  = :SortNum'
      ', "Actual"   = :Actual'
      ', "InPrice"  = :InPrice'
      'where'
      '  "KindID" = :KindID;')
    Left = 88
    Top = 256
  end
end

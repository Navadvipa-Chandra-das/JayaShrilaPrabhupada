inherited dmvExamples: TdmvExamples
  Height = 290
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
    Transaction = trDB
    AfterConnect = conDBAfterConnect
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
  object quCommodKind: TFDQuery
    Connection = conDB
    Left = 88
    Top = 172
  end
  object quUsers: TFDQuery
    Connection = conDB
    UpdateOptions.AssignedValues = [uvGeneratorName]
    UpdateOptions.GeneratorName = '"Users_UserID_seq"'
    SQL.Strings = (
      'SELECT'
      '  a."UserID",'
      '  a."Name",'
      '  a."FIO",'
      '  a."Note",'
      '  a."INN",'
      '  a."Passport",'
      '  a."PassportKemVydan",'
      '  a."PassportDate"'
      'FROM'
      '  public."Users" a;')
    Left = 192
    Top = 172
    object quUsersUserID: TIntegerField
      AutoGenerateValue = arDefault
      FieldName = 'UserID'
      Origin = '"UserID"'
    end
    object quUsersName: TWideStringField
      FieldName = 'Name'
      Origin = '"Name"'
      Size = 32
    end
    object quUsersFIO: TWideStringField
      FieldName = 'FIO'
      Origin = '"FIO"'
      Size = 100
    end
    object quUsersNote: TWideStringField
      FieldName = 'Note'
      Origin = '"Note"'
      Size = 100
    end
    object quUsersINN: TWideStringField
      FieldName = 'INN'
      Origin = '"INN"'
      Size = 12
    end
    object quUsersPassport: TWideStringField
      FieldName = 'Passport'
      Origin = '"Passport"'
      Size = 12
    end
    object quUsersPassportKemVydan: TWideStringField
      FieldName = 'PassportKemVydan'
      Origin = '"PassportKemVydan"'
      Size = 50
    end
    object quUsersPassportDate: TDateField
      FieldName = 'PassportDate'
      Origin = '"PassportDate"'
    end
  end
  object dsUsers: TDataSource
    DataSet = quUsers
    Left = 192
    Top = 220
  end
end

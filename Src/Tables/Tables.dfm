object DmTables: TDmTables
  OldCreateOrder = False
  Height = 283
  Width = 384
  object FDConnection: TFDConnection
    Params.Strings = (
      'DriverID=SQLite'
      
        'Database=C:\Users\Ilton\Documents\Embarcadero\Studio\Projects\Cp' +
        'pBuilderRuntime\Src\Tables\App.db'
      'LockingMode=Normal')
    LoginPrompt = False
    Left = 160
    Top = 16
  end
  object FDPhysSQLiteDriverLink: TFDPhysSQLiteDriverLink
    Left = 48
    Top = 16
  end
  object dboUsers: TFDTable
    Connection = FDConnection
    TableName = '"dbo.Users"'
    Left = 32
    Top = 80
  end
end

object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'DataBase'
  ClientHeight = 477
  ClientWidth = 694
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object LabelT: TLabel
    Left = 32
    Top = 345
    Width = 36
    Height = 21
    Caption = 'Task'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object DBGrid: TDBGrid
    Left = 0
    Top = 0
    Width = 694
    Height = 177
    Align = alTop
    DataSource = DataSource
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Memo: TMemo
    Left = 0
    Top = 192
    Width = 591
    Height = 80
    Color = clWhite
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = []
    Lines.Strings = (
      'Memo1')
    ParentFont = False
    TabOrder = 1
  end
  object ButtonEnter: TButton
    Left = 597
    Top = 192
    Width = 97
    Height = 41
    Caption = 'Enter'
    TabOrder = 2
    OnClick = ButtonEnterClick
  end
  object ButtonClearC: TButton
    Left = 605
    Top = 239
    Width = 81
    Height = 33
    Caption = 'Clear commads'
    TabOrder = 3
    OnClick = ButtonClearCClick
  end
  object StandartInsert: TButton
    Left = 32
    Top = 292
    Width = 115
    Height = 30
    Caption = 'Example "INSERT"'
    TabOrder = 4
    OnClick = StandartInsertClick
  end
  object DeleteRow: TButton
    Left = 168
    Top = 293
    Width = 115
    Height = 30
    Caption = 'Example "DELETE"'
    TabOrder = 5
    OnClick = DeleteRowClick
  end
  object EditField: TButton
    Left = 304
    Top = 293
    Width = 115
    Height = 30
    Caption = 'Example "UPDATE"'
    TabOrder = 6
    OnClick = EditFieldClick
  end
  object EditTask: TEdit
    Left = 32
    Top = 372
    Width = 129
    Height = 21
    TabOrder = 7
  end
  object TaskB: TButton
    Left = 56
    Top = 416
    Width = 75
    Height = 25
    Caption = 'Filter'
    TabOrder = 8
    OnClick = TaskBClick
  end
  object ShowDB: TButton
    Left = 568
    Top = 293
    Width = 115
    Height = 30
    Caption = 'Show DataBase'
    TabOrder = 9
    OnClick = ShowDBClick
  end
  object IBDatabase: TIBDatabase
    Connected = True
    DatabaseName = 'localhost/3050@C:\temp\DATABASE.GDB'
    Params.Strings = (
      'user_name=SYSDBA'
      'password=masterkey')
    LoginPrompt = False
    DefaultTransaction = IBTransaction
    ServerType = 'IBServer'
    Left = 416
    Top = 424
  end
  object IBTransaction: TIBTransaction
    DefaultDatabase = IBDatabase
    Left = 488
    Top = 424
  end
  object IBQuery: TIBQuery
    Database = IBDatabase
    Transaction = IBTransaction
    BufferChunks = 1000
    CachedUpdates = False
    ParamCheck = True
    Left = 560
    Top = 424
  end
  object DataSource: TDataSource
    DataSet = IBQuery
    Left = 624
    Top = 424
  end
end

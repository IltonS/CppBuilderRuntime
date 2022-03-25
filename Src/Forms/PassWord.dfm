object PasswordDlg: TPasswordDlg
  Left = 245
  Top = 108
  BorderStyle = bsDialog
  Caption = 'Password Dialog'
  ClientHeight = 391
  ClientWidth = 360
  Color = clWhite
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 225
    Width = 34
    Height = 13
    Caption = 'Senha:'
  end
  object Label2: TLabel
    Left = 16
    Top = 168
    Width = 29
    Height = 13
    Caption = 'Login:'
  end
  object ImgLogo: TImage
    Left = 112
    Top = 24
    Width = 128
    Height = 128
  end
  object LblMsg: TLabel
    Left = 16
    Top = 344
    Width = 32
    Height = 13
    Caption = 'LblMsg'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clMaroon
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsItalic]
    ParentFont = False
  end
  object Password: TEdit
    Left = 16
    Top = 243
    Width = 321
    Height = 21
    PasswordChar = '*'
    TabOrder = 1
    OnKeyPress = PasswordKeyPress
  end
  object OKBtn: TButton
    Left = 56
    Top = 299
    Width = 75
    Height = 25
    Caption = 'OK'
    TabOrder = 2
    OnClick = OKBtnClick
  end
  object CancelBtn: TButton
    Left = 214
    Top = 299
    Width = 75
    Height = 25
    Cancel = True
    Caption = 'Cancelar'
    TabOrder = 3
    OnClick = CancelBtnClick
  end
  object EdtLogin: TEdit
    Left = 16
    Top = 187
    Width = 321
    Height = 21
    TabOrder = 0
    OnKeyPress = EdtLoginKeyPress
  end
end

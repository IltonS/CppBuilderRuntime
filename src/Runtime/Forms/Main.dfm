object FrmMain: TFrmMain
  Left = 0
  Top = 0
  Caption = 'Runtime'
  ClientHeight = 547
  ClientWidth = 1005
  Color = clAppWorkSpace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Segoe UI'
  Font.Style = []
  FormStyle = fsMDIForm
  Menu = MainMenu
  OldCreateOrder = False
  Position = poScreenCenter
  OnResize = FormResize
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object MainStatusBar: TStatusBar
    Left = 0
    Top = 528
    Width = 1005
    Height = 19
    BiDiMode = bdLeftToRight
    Panels = <
      item
        Width = 50
      end
      item
        Width = 50
      end
      item
        Width = 50
      end
      item
        Width = 50
      end
      item
        Width = 50
      end
      item
        Width = 50
      end
      item
        Width = 50
      end
      item
        Width = 50
      end
      item
        Width = 50
      end
      item
        Width = 50
      end
      item
        Width = 50
      end>
    ParentBiDiMode = False
  end
  object PnlMainMenuToolBar: TPanel
    Left = 0
    Top = 0
    Width = 1005
    Height = 34
    Align = alTop
    BevelEdges = [beBottom]
    BevelOuter = bvNone
    Color = clWhite
    Ctl3D = False
    ParentBackground = False
    ParentCtl3D = False
    TabOrder = 1
    object MainMenuToolBar: TToolBar
      AlignWithMargins = True
      Left = 10
      Top = 5
      Width = 985
      Height = 26
      Margins.Left = 10
      Margins.Top = 5
      Margins.Right = 10
      Align = alClient
      Caption = 'MainMenuToolBar'
      TabOrder = 0
      object ToolButton1: TToolButton
        Left = 0
        Top = 0
        Caption = 'ToolButton1'
        ImageIndex = 0
      end
    end
  end
  object MainMenu: TMainMenu
    Left = 32
    Top = 48
    object Arquivo1: TMenuItem
      Caption = '&Arquivo'
      object N1: TMenuItem
        Caption = '-'
      end
      object Sair1: TMenuItem
        Action = AcSair
      end
    end
  end
  object MainMenuActionList: TActionList
    Left = 120
    Top = 48
    object AcSair: TAction
      Category = 'Arquivo'
      Caption = '&Sair'
      Hint = 'Sair da programa'
      OnExecute = AcSairExecute
    end
  end
  object ApplicationEvents: TApplicationEvents
    OnIdle = ApplicationEventsIdle
    OnHint = ApplicationEventsHint
    Left = 216
    Top = 48
  end
end

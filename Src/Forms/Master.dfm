object FrmMaster: TFrmMaster
  Left = 0
  Top = 0
  ClientHeight = 555
  ClientWidth = 976
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  WindowState = wsMaximized
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl: TPageControl
    Left = 0
    Top = 0
    Width = 976
    Height = 555
    ActivePage = TsFile
    Align = alClient
    Style = tsFlatButtons
    TabOrder = 0
    ExplicitHeight = 651
    object TsFile: TTabSheet
      Caption = 'TsFile'
      object PnlLeftBar: TPanel
        Left = 0
        Top = 0
        Width = 185
        Height = 524
        Align = alLeft
        BevelOuter = bvNone
        Color = clSkyBlue
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentBackground = False
        ParentFont = False
        TabOrder = 0
        ExplicitLeft = 456
        ExplicitTop = 312
        ExplicitHeight = 41
        object PnlPaddingBottom: TPanel
          Left = 0
          Top = 499
          Width = 185
          Height = 25
          Align = alBottom
          BevelOuter = bvNone
          Color = clMedGray
          ParentBackground = False
          TabOrder = 0
          ExplicitTop = 472
        end
        object PnlSair: TPanel
          Left = 0
          Top = 467
          Width = 185
          Height = 32
          Align = alBottom
          Alignment = taLeftJustify
          BevelOuter = bvNone
          Caption = '      Sair'
          ParentBackground = False
          TabOrder = 1
          OnClick = PnlSairClick
          OnMouseEnter = SetDarkBackground
          OnMouseLeave = SetNormalBackground
          ExplicitTop = 440
        end
        object PnlVoltar: TPanel
          Left = 0
          Top = 25
          Width = 185
          Height = 49
          Align = alTop
          BevelOuter = bvNone
          ParentBackground = False
          TabOrder = 2
          OnClick = VoltarClick
          OnMouseEnter = SetDarkBackground
          OnMouseLeave = SetNormalBackground
          ExplicitLeft = 8
          ExplicitTop = 112
          object Image1: TImage
            Left = 8
            Top = 8
            Width = 32
            Height = 32
            Picture.Data = {
              0954506E67496D61676589504E470D0A1A0A0000000D49484452000000200000
              00200806000001047D4A62000000097048597300000B1300000B1301009A9C18
              0000001974455874536F6674776172650041646F626520496D61676552656164
              7971C9653C000002CB4944415478DAC5578D79E2300C8D37800D92090E36081B
              9409AE9DA03041E9048509E84D009D806C001B341B940D52BD20BBB22287D0FB
              EEEAEF734564FD3C3FCB4AEA32351CFE344D3371CE9D4836CEAFB40F18F221B2
              08314839A2C5B354349D2CA602AE243EC20227D4593F488C85D3511B20CA827E
              AE587F1FE524C58EC41DCD07327A3541F58194DB79A5080F1D902ADD3BA90AAD
              6C049F1703FA51D28F4A33466306BDB70E46FA44FC83266841624FBADAA45A02
              EEE501A9D9A1BACA133B4C481C39FD3CB17696702544C0ABA423EB40FA52D349
              628CC20B2C913848524860CF3385B806312812FABD75920C45B1272C1CB942B0
              2571AF03AC483C295D743F2C3B6744075120ACA6B9A179A2F91B19D9A4C03606
              1DE390F16F03DC5C4892E184FD5893AA2BD19F7F4414AF1D4800D1149DAF1300
              1714CEB24C135B3A482451E1A81A686BDF68150830F1897C8023933595CE59BA
              129BA890F872B4BD4E3AD3FC1311C6A7C1F651CB090A5189D628F8329901D6FE
              DAFA207AFF7D5BC0B96F15896610D2A3B5EF3A9749F2208F4D5721DB3DFB1788
              0C909378D7410C67BBA5A920186B9A6F4CE8234DAC9DFC519B0144A09613A1C2
              36E6FA1E2403DC32FE3AC07F03C0FC824B94419E30AB69EE696E7437F81600BE
              563B9510ADE48DA53F13ACFFCA2EED46DE228098CBF63308002746D718711294
              E6FE166A552121C6CC026275E41589277E9CA712F391E47DED9EEDF0A5F2C28F
              E1029A0094F1D442ACD831831A3E25FB602CC97E9D02E0BFD24263EB496CF6EA
              1E10D8D8A24D6A7D9E299433492DBFAEF2A1C9C4082CA6E2775E61FCA89BEA88
              9D7D8523E832EB1FB5BC8AAA280330EB7D59B27361D0A8810C3E06C1223E41C3
              57A33312B45F07DAB007C89022F46F595CC722FA87EA8A4344D7AD43D1DE7913
              2501B0B3AEFA8A775B5D495A66973E52B22AD9847A01A8A00B0E3A1A62CF4937
              D78E66308004A83CFBBA9AE7EF1ED38FBF8E3F0157C3F969AE1A33D500000000
              49454E44AE426082}
            OnClick = VoltarClick
          end
        end
        object PnlPaddingTop: TPanel
          Left = 0
          Top = 0
          Width = 185
          Height = 25
          Align = alTop
          BevelOuter = bvNone
          Color = clMedGray
          ParentBackground = False
          TabOrder = 3
        end
      end
    end
    object TsMain: TTabSheet
      Caption = 'TsMain'
      ImageIndex = 1
      object PnlMainButtons: TPanel
        Left = 0
        Top = 0
        Width = 968
        Height = 33
        Align = alTop
        BevelOuter = bvNone
        Color = clMedGray
        ParentBackground = False
        TabOrder = 0
        object PnlBtnFile: TPanel
          Left = 0
          Top = 0
          Width = 89
          Height = 33
          Align = alLeft
          BevelOuter = bvNone
          Color = clSkyBlue
          ParentBackground = False
          TabOrder = 0
          ExplicitLeft = 6
          ExplicitTop = 5
          object BtnFile: TSpeedButton
            Left = 0
            Top = 0
            Width = 89
            Height = 33
            Align = alClient
            Caption = 'Arquivo'
            Flat = True
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -11
            Font.Name = 'Segoe UI'
            Font.Style = []
            ParentFont = False
            OnClick = BtnFileClick
            ExplicitTop = -8
          end
        end
      end
    end
  end
end

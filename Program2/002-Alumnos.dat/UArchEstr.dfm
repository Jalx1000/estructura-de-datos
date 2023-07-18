object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 300
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnCreate = FormCreate
  TextHeight = 15
  object Label1: TLabel
    Left = 128
    Top = 8
    Width = 97
    Height = 15
    Caption = 'ABM Alumnos.dat'
  end
  object Label2: TLabel
    Left = 56
    Top = 80
    Width = 39
    Height = 15
    Caption = 'Codigo'
  end
  object Label3: TLabel
    Left = 56
    Top = 112
    Width = 44
    Height = 15
    Caption = 'Nombre'
  end
  object Label4: TLabel
    Left = 56
    Top = 144
    Width = 50
    Height = 15
    Caption = 'Direccion'
  end
  object Label5: TLabel
    Left = 24
    Top = 205
    Width = 112
    Height = 15
    Caption = 'Fecha de Nacimiento'
  end
  object Button1: TButton
    Left = 56
    Top = 248
    Width = 75
    Height = 25
    Caption = 'Guardar'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 137
    Top = 248
    Width = 75
    Height = 25
    Caption = 'Eliminar'
    TabOrder = 1
  end
  object Button3: TButton
    Left = 456
    Top = 248
    Width = 75
    Height = 25
    Caption = 'Reestructurar'
    TabOrder = 2
  end
  object Edit1: TEdit
    Left = 152
    Top = 80
    Width = 121
    Height = 23
    TabOrder = 3
    Text = '0'
    OnExit = Edit1Exit
  end
  object Edit2: TEdit
    Left = 152
    Top = 115
    Width = 249
    Height = 23
    TabOrder = 4
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 152
    Top = 144
    Width = 249
    Height = 23
    TabOrder = 5
    Text = 'Edit3'
  end
  object MaskEdit1: TMaskEdit
    Left = 152
    Top = 202
    Width = 114
    Height = 23
    EditMask = '!99/99/0000;1;_'
    MaxLength = 10
    TabOrder = 6
    Text = '  -  -    '
  end
  object Button4: TButton
    Left = 456
    Top = 16
    Width = 75
    Height = 25
    Caption = 'Iniciar'
    TabOrder = 7
  end
  object Button5: TButton
    Left = 416
    Top = 47
    Width = 75
    Height = 25
    Caption = '<='
    TabOrder = 8
  end
  object Button6: TButton
    Left = 497
    Top = 47
    Width = 75
    Height = 25
    Caption = '=>'
    TabOrder = 9
  end
  object Button7: TButton
    Left = 456
    Top = 78
    Width = 75
    Height = 25
    Caption = 'Finalizar'
    TabOrder = 10
  end
end

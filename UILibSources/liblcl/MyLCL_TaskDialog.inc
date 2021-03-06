
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function TaskDialog_Create(AOwner: TComponent): TTaskDialog; extdecl;
begin
  Result :=  TTaskDialog.Create(AOwner);
end;

procedure TaskDialog_Free(AObj: TTaskDialog); extdecl;
begin
  AObj.Free;
end;

function TaskDialog_Execute(AObj: TTaskDialog): LongBool; extdecl;
begin
  Result :=  AObj.Execute;
end;

function TaskDialog_FindComponent(AObj: TTaskDialog; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function TaskDialog_GetNamePath(AObj: TTaskDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function TaskDialog_HasParent(AObj: TTaskDialog): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure TaskDialog_Assign(AObj: TTaskDialog; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function TaskDialog_ClassType(AObj: TTaskDialog): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function TaskDialog_ClassName(AObj: TTaskDialog): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function TaskDialog_InstanceSize(AObj: TTaskDialog): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function TaskDialog_InheritsFrom(AObj: TTaskDialog; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function TaskDialog_Equals(AObj: TTaskDialog; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function TaskDialog_GetHashCode(AObj: TTaskDialog): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function TaskDialog_ToString(AObj: TTaskDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function TaskDialog_GetButtons(AObj: TTaskDialog): TTaskDialogButtons; extdecl;
begin
  Result :=  AObj.Buttons;
end;

procedure TaskDialog_SetButtons(AObj: TTaskDialog; AValue: TTaskDialogButtons); extdecl;
begin
  AObj.Buttons := AValue;
end;

function TaskDialog_GetCaption(AObj: TTaskDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.Caption);
end;

procedure TaskDialog_SetCaption(AObj: TTaskDialog; AValue: PChar); extdecl;
begin
  AObj.Caption := AValue;
end;

function TaskDialog_GetCommonButtons(AObj: TTaskDialog): TTaskDialogCommonButtons; extdecl;
begin
  Result :=  AObj.CommonButtons;
end;

procedure TaskDialog_SetCommonButtons(AObj: TTaskDialog; AValue: TTaskDialogCommonButtons); extdecl;
begin
  AObj.CommonButtons := AValue;
end;

function TaskDialog_GetDefaultButton(AObj: TTaskDialog): TTaskDialogCommonButton; extdecl;
begin
  Result :=  AObj.DefaultButton;
end;

procedure TaskDialog_SetDefaultButton(AObj: TTaskDialog; AValue: TTaskDialogCommonButton); extdecl;
begin
  AObj.DefaultButton := AValue;
end;

function TaskDialog_GetExpandButtonCaption(AObj: TTaskDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.ExpandButtonCaption);
end;

procedure TaskDialog_SetExpandButtonCaption(AObj: TTaskDialog; AValue: PChar); extdecl;
begin
  AObj.ExpandButtonCaption := AValue;
end;

function TaskDialog_GetExpandedText(AObj: TTaskDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.ExpandedText);
end;

procedure TaskDialog_SetExpandedText(AObj: TTaskDialog; AValue: PChar); extdecl;
begin
  AObj.ExpandedText := AValue;
end;

function TaskDialog_GetFlags(AObj: TTaskDialog): TTaskDialogFlags; extdecl;
begin
  Result :=  AObj.Flags;
end;

procedure TaskDialog_SetFlags(AObj: TTaskDialog; AValue: TTaskDialogFlags); extdecl;
begin
  AObj.Flags := AValue;
end;

function TaskDialog_GetFooterIcon(AObj: TTaskDialog): TTaskDialogIcon; extdecl;
begin
  Result :=  AObj.FooterIcon;
end;

procedure TaskDialog_SetFooterIcon(AObj: TTaskDialog; AValue: TTaskDialogIcon); extdecl;
begin
  AObj.FooterIcon := AValue;
end;

function TaskDialog_GetFooterText(AObj: TTaskDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.FooterText);
end;

procedure TaskDialog_SetFooterText(AObj: TTaskDialog; AValue: PChar); extdecl;
begin
  AObj.FooterText := AValue;
end;

function TaskDialog_GetMainIcon(AObj: TTaskDialog): TTaskDialogIcon; extdecl;
begin
  Result :=  AObj.MainIcon;
end;

procedure TaskDialog_SetMainIcon(AObj: TTaskDialog; AValue: TTaskDialogIcon); extdecl;
begin
  AObj.MainIcon := AValue;
end;

function TaskDialog_GetRadioButtons(AObj: TTaskDialog): TTaskDialogButtons; extdecl;
begin
  Result :=  AObj.RadioButtons;
end;

procedure TaskDialog_SetRadioButtons(AObj: TTaskDialog; AValue: TTaskDialogButtons); extdecl;
begin
  AObj.RadioButtons := AValue;
end;

function TaskDialog_GetText(AObj: TTaskDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.Text);
end;

procedure TaskDialog_SetText(AObj: TTaskDialog; AValue: PChar); extdecl;
begin
  AObj.Text := AValue;
end;

function TaskDialog_GetTitle(AObj: TTaskDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.Title);
end;

procedure TaskDialog_SetTitle(AObj: TTaskDialog; AValue: PChar); extdecl;
begin
  AObj.Title := AValue;
end;

function TaskDialog_GetVerificationText(AObj: TTaskDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.VerificationText);
end;

procedure TaskDialog_SetVerificationText(AObj: TTaskDialog; AValue: PChar); extdecl;
begin
  AObj.VerificationText := AValue;
end;

procedure TaskDialog_SetOnButtonClicked(AObj: TTaskDialog; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnButtonClicked}
  {$DEFINE EventMethodName := TaskDialogOnButtonClicked}
  EventMethodCode
end;

function TaskDialog_GetButton(AObj: TTaskDialog): TTaskDialogButtonItem; extdecl;
begin
  Result :=  AObj.Button;
end;

procedure TaskDialog_SetButton(AObj: TTaskDialog; AValue: TTaskDialogButtonItem); extdecl;
begin
  AObj.Button := AValue;
end;

function TaskDialog_GetModalResult(AObj: TTaskDialog): TModalResult; extdecl;
begin
  Result :=  AObj.ModalResult;
end;

procedure TaskDialog_SetModalResult(AObj: TTaskDialog; AValue: TModalResult); extdecl;
begin
  AObj.ModalResult := AValue;
end;

function TaskDialog_GetRadioButton(AObj: TTaskDialog): TTaskDialogRadioButtonItem; extdecl;
begin
  Result :=  AObj.RadioButton;
end;

function TaskDialog_GetComponentCount(AObj: TTaskDialog): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function TaskDialog_GetComponentIndex(AObj: TTaskDialog): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure TaskDialog_SetComponentIndex(AObj: TTaskDialog; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function TaskDialog_GetOwner(AObj: TTaskDialog): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function TaskDialog_GetName(AObj: TTaskDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure TaskDialog_SetName(AObj: TTaskDialog; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function TaskDialog_GetTag(AObj: TTaskDialog): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure TaskDialog_SetTag(AObj: TTaskDialog; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function TaskDialog_GetComponents(AObj: TTaskDialog; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function TaskDialog_StaticClassType: TClass; extdecl;
begin
  Result := TTaskDialog;
end;

exports
  TaskDialog_Create,
  TaskDialog_Free,
  TaskDialog_Execute,
  TaskDialog_FindComponent,
  TaskDialog_GetNamePath,
  TaskDialog_HasParent,
  TaskDialog_Assign,
  TaskDialog_ClassType,
  TaskDialog_ClassName,
  TaskDialog_InstanceSize,
  TaskDialog_InheritsFrom,
  TaskDialog_Equals,
  TaskDialog_GetHashCode,
  TaskDialog_ToString,
  TaskDialog_GetButtons,
  TaskDialog_SetButtons,
  TaskDialog_GetCaption,
  TaskDialog_SetCaption,
  TaskDialog_GetCommonButtons,
  TaskDialog_SetCommonButtons,
  TaskDialog_GetDefaultButton,
  TaskDialog_SetDefaultButton,
  TaskDialog_GetExpandButtonCaption,
  TaskDialog_SetExpandButtonCaption,
  TaskDialog_GetExpandedText,
  TaskDialog_SetExpandedText,
  TaskDialog_GetFlags,
  TaskDialog_SetFlags,
  TaskDialog_GetFooterIcon,
  TaskDialog_SetFooterIcon,
  TaskDialog_GetFooterText,
  TaskDialog_SetFooterText,
  TaskDialog_GetMainIcon,
  TaskDialog_SetMainIcon,
  TaskDialog_GetRadioButtons,
  TaskDialog_SetRadioButtons,
  TaskDialog_GetText,
  TaskDialog_SetText,
  TaskDialog_GetTitle,
  TaskDialog_SetTitle,
  TaskDialog_GetVerificationText,
  TaskDialog_SetVerificationText,
  TaskDialog_SetOnButtonClicked,
  TaskDialog_GetButton,
  TaskDialog_SetButton,
  TaskDialog_GetModalResult,
  TaskDialog_SetModalResult,
  TaskDialog_GetRadioButton,
  TaskDialog_GetComponentCount,
  TaskDialog_GetComponentIndex,
  TaskDialog_SetComponentIndex,
  TaskDialog_GetOwner,
  TaskDialog_GetName,
  TaskDialog_SetName,
  TaskDialog_GetTag,
  TaskDialog_SetTag,
  TaskDialog_GetComponents,
  TaskDialog_StaticClassType;


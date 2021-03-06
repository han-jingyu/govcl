
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function WinControl_Create(AOwner: TComponent): TWinControl; stdcall;
begin
  Result :=  TWinControl.Create(AOwner);
end;

procedure WinControl_Free(AObj: TWinControl); stdcall;
begin
  AObj.Free;
end;

function WinControl_CanFocus(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.CanFocus;
end;

function WinControl_ContainsControl(AObj: TWinControl; Control: TControl): LongBool; stdcall;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function WinControl_ControlAtPos(AObj: TWinControl; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool; AllLevels: LongBool): TControl; stdcall;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls, AllLevels);
end;

procedure WinControl_DisableAlign(AObj: TWinControl); stdcall;
begin
  AObj.DisableAlign;
end;

procedure WinControl_EnableAlign(AObj: TWinControl); stdcall;
begin
  AObj.EnableAlign;
end;

function WinControl_FindChildControl(AObj: TWinControl; ControlName: PChar): TControl; stdcall;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure WinControl_FlipChildren(AObj: TWinControl; AllLevels: LongBool); stdcall;
begin
  AObj.FlipChildren(AllLevels);
end;

function WinControl_Focused(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.Focused;
end;

function WinControl_HandleAllocated(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure WinControl_InsertControl(AObj: TWinControl; AControl: TControl); stdcall;
begin
  AObj.InsertControl(AControl);
end;

procedure WinControl_Invalidate(AObj: TWinControl); stdcall;
begin
  AObj.Invalidate;
end;

procedure WinControl_PaintTo(AObj: TWinControl; DC: HDC; X: Integer; Y: Integer); stdcall;
begin
  AObj.PaintTo(DC, X, Y);
end;

procedure WinControl_RemoveControl(AObj: TWinControl; AControl: TControl); stdcall;
begin
  AObj.RemoveControl(AControl);
end;

procedure WinControl_Realign(AObj: TWinControl); stdcall;
begin
  AObj.Realign;
end;

procedure WinControl_Repaint(AObj: TWinControl); stdcall;
begin
  AObj.Repaint;
end;

procedure WinControl_ScaleBy(AObj: TWinControl; M: Integer; D: Integer); stdcall;
begin
  AObj.ScaleBy(M, D);
end;

procedure WinControl_ScrollBy(AObj: TWinControl; DeltaX: Integer; DeltaY: Integer); stdcall;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure WinControl_SetBounds(AObj: TWinControl; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); stdcall;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure WinControl_SetFocus(AObj: TWinControl); stdcall;
begin
  AObj.SetFocus;
end;

procedure WinControl_Update(AObj: TWinControl); stdcall;
begin
  AObj.Update;
end;

procedure WinControl_UpdateControlState(AObj: TWinControl); stdcall;
begin
  AObj.UpdateControlState;
end;

procedure WinControl_BringToFront(AObj: TWinControl); stdcall;
begin
  AObj.BringToFront;
end;

procedure WinControl_ClientToScreen(AObj: TWinControl; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure WinControl_ClientToParent(AObj: TWinControl; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function WinControl_Dragging(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.Dragging;
end;

function WinControl_HasParent(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.HasParent;
end;

procedure WinControl_Hide(AObj: TWinControl); stdcall;
begin
  AObj.Hide;
end;

function WinControl_Perform(AObj: TWinControl; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; stdcall;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure WinControl_Refresh(AObj: TWinControl); stdcall;
begin
  AObj.Refresh;
end;

procedure WinControl_ScreenToClient(AObj: TWinControl; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure WinControl_ParentToClient(AObj: TWinControl; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure WinControl_SendToBack(AObj: TWinControl); stdcall;
begin
  AObj.SendToBack;
end;

procedure WinControl_Show(AObj: TWinControl); stdcall;
begin
  AObj.Show;
end;

function WinControl_GetTextBuf(AObj: TWinControl; Buffer: PWideChar; BufSize: Integer): Integer; stdcall;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function WinControl_GetTextLen(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.GetTextLen;
end;

procedure WinControl_SetTextBuf(AObj: TWinControl; Buffer: PWideChar); stdcall;
begin
  AObj.SetTextBuf(Buffer);
end;

function WinControl_FindComponent(AObj: TWinControl; AName: PChar): TComponent; stdcall;
begin
  Result :=  AObj.FindComponent(AName);
end;

function WinControl_GetNamePath(AObj: TWinControl): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure WinControl_Assign(AObj: TWinControl; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure WinControl_DisposeOf(AObj: TWinControl); stdcall;
begin
  AObj.DisposeOf;
end;

function WinControl_ClassType(AObj: TWinControl): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function WinControl_ClassName(AObj: TWinControl): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function WinControl_InstanceSize(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function WinControl_InheritsFrom(AObj: TWinControl; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function WinControl_Equals(AObj: TWinControl; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function WinControl_GetHashCode(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function WinControl_ToString(AObj: TWinControl): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function WinControl_GetDockClientCount(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.DockClientCount;
end;

function WinControl_GetDockSite(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.DockSite;
end;

procedure WinControl_SetDockSite(AObj: TWinControl; AValue: LongBool); stdcall;
begin
  AObj.DockSite := AValue;
end;

function WinControl_GetDoubleBuffered(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure WinControl_SetDoubleBuffered(AObj: TWinControl; AValue: LongBool); stdcall;
begin
  AObj.DoubleBuffered := AValue;
end;

function WinControl_GetAlignDisabled(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.AlignDisabled;
end;

function WinControl_GetMouseInClient(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.MouseInClient;
end;

function WinControl_GetVisibleDockClientCount(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function WinControl_GetBrush(AObj: TWinControl): TBrush; stdcall;
begin
  Result :=  AObj.Brush;
end;

function WinControl_GetControlCount(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.ControlCount;
end;

function WinControl_GetHandle(AObj: TWinControl): HWND; stdcall;
begin
  Result :=  AObj.Handle;
end;

function WinControl_GetParentDoubleBuffered(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure WinControl_SetParentDoubleBuffered(AObj: TWinControl; AValue: LongBool); stdcall;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function WinControl_GetParentWindow(AObj: TWinControl): HWND; stdcall;
begin
  Result :=  AObj.ParentWindow;
end;

procedure WinControl_SetParentWindow(AObj: TWinControl; AValue: HWND); stdcall;
begin
  AObj.ParentWindow := AValue;
end;

function WinControl_GetTabOrder(AObj: TWinControl): TTabOrder; stdcall;
begin
  Result :=  AObj.TabOrder;
end;

procedure WinControl_SetTabOrder(AObj: TWinControl; AValue: TTabOrder); stdcall;
begin
  AObj.TabOrder := AValue;
end;

function WinControl_GetTabStop(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.TabStop;
end;

procedure WinControl_SetTabStop(AObj: TWinControl; AValue: LongBool); stdcall;
begin
  AObj.TabStop := AValue;
end;

function WinControl_GetUseDockManager(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.UseDockManager;
end;

procedure WinControl_SetUseDockManager(AObj: TWinControl; AValue: LongBool); stdcall;
begin
  AObj.UseDockManager := AValue;
end;

function WinControl_GetEnabled(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.Enabled;
end;

procedure WinControl_SetEnabled(AObj: TWinControl; AValue: LongBool); stdcall;
begin
  AObj.Enabled := AValue;
end;

function WinControl_GetAction(AObj: TWinControl): TBasicAction; stdcall;
begin
  Result :=  AObj.Action;
end;

procedure WinControl_SetAction(AObj: TWinControl; AValue: TBasicAction); stdcall;
begin
  AObj.Action := AValue;
end;

function WinControl_GetAlign(AObj: TWinControl): TAlign; stdcall;
begin
  Result :=  AObj.Align;
end;

procedure WinControl_SetAlign(AObj: TWinControl; AValue: TAlign); stdcall;
begin
  AObj.Align := AValue;
end;

function WinControl_GetAnchors(AObj: TWinControl): TAnchors; stdcall;
begin
  Result :=  AObj.Anchors;
end;

procedure WinControl_SetAnchors(AObj: TWinControl; AValue: TAnchors); stdcall;
begin
  AObj.Anchors := AValue;
end;

function WinControl_GetBiDiMode(AObj: TWinControl): TBiDiMode; stdcall;
begin
  Result :=  AObj.BiDiMode;
end;

procedure WinControl_SetBiDiMode(AObj: TWinControl; AValue: TBiDiMode); stdcall;
begin
  AObj.BiDiMode := AValue;
end;

procedure WinControl_GetBoundsRect(AObj: TWinControl; var Result: TRect); stdcall;
begin
  Result :=  AObj.BoundsRect;
end;

procedure WinControl_SetBoundsRect(AObj: TWinControl; var AValue: TRect); stdcall;
begin
  AObj.BoundsRect := AValue;
end;

function WinControl_GetClientHeight(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.ClientHeight;
end;

procedure WinControl_SetClientHeight(AObj: TWinControl; AValue: Integer); stdcall;
begin
  AObj.ClientHeight := AValue;
end;

procedure WinControl_GetClientOrigin(AObj: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure WinControl_GetClientRect(AObj: TWinControl; var Result: TRect); stdcall;
begin
  Result :=  AObj.ClientRect;
end;

function WinControl_GetClientWidth(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.ClientWidth;
end;

procedure WinControl_SetClientWidth(AObj: TWinControl; AValue: Integer); stdcall;
begin
  AObj.ClientWidth := AValue;
end;

function WinControl_GetConstraints(AObj: TWinControl): TSizeConstraints; stdcall;
begin
  Result :=  AObj.Constraints;
end;

procedure WinControl_SetConstraints(AObj: TWinControl; AValue: TSizeConstraints); stdcall;
begin
  AObj.Constraints := AValue;
end;

function WinControl_GetControlState(AObj: TWinControl): TControlState; stdcall;
begin
  Result :=  AObj.ControlState;
end;

procedure WinControl_SetControlState(AObj: TWinControl; AValue: TControlState); stdcall;
begin
  AObj.ControlState := AValue;
end;

function WinControl_GetControlStyle(AObj: TWinControl): TControlStyle; stdcall;
begin
  Result :=  AObj.ControlStyle;
end;

procedure WinControl_SetControlStyle(AObj: TWinControl; AValue: TControlStyle); stdcall;
begin
  AObj.ControlStyle := AValue;
end;

function WinControl_GetExplicitLeft(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.ExplicitLeft;
end;

function WinControl_GetExplicitTop(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.ExplicitTop;
end;

function WinControl_GetExplicitWidth(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.ExplicitWidth;
end;

function WinControl_GetExplicitHeight(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.ExplicitHeight;
end;

function WinControl_GetFloating(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.Floating;
end;

function WinControl_GetShowHint(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.ShowHint;
end;

procedure WinControl_SetShowHint(AObj: TWinControl; AValue: LongBool); stdcall;
begin
  AObj.ShowHint := AValue;
end;

function WinControl_GetVisible(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.Visible;
end;

procedure WinControl_SetVisible(AObj: TWinControl; AValue: LongBool); stdcall;
begin
  AObj.Visible := AValue;
end;

function WinControl_GetParent(AObj: TWinControl): TWinControl; stdcall;
begin
  Result :=  AObj.Parent;
end;

procedure WinControl_SetParent(AObj: TWinControl; AValue: TWinControl); stdcall;
begin
  AObj.Parent := AValue;
end;

function WinControl_GetStyleElements(AObj: TWinControl): TStyleElements; stdcall;
begin
  Result :=  AObj.StyleElements;
end;

procedure WinControl_SetStyleElements(AObj: TWinControl; AValue: TStyleElements); stdcall;
begin
  AObj.StyleElements := AValue;
end;

procedure WinControl_SetOnGesture(AObj: TWinControl; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnGesture := nil;
    TEventClass.Remove(AObj, @TEventClass.OnGesture);
    Exit;
  end;
  AObj.OnGesture := TEventClass.OnGesture;
  TEventClass.Add(AObj, @TEventClass.OnGesture, AEventId);
end;

function WinControl_GetAlignWithMargins(AObj: TWinControl): LongBool; stdcall;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure WinControl_SetAlignWithMargins(AObj: TWinControl; AValue: LongBool); stdcall;
begin
  AObj.AlignWithMargins := AValue;
end;

function WinControl_GetLeft(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.Left;
end;

procedure WinControl_SetLeft(AObj: TWinControl; AValue: Integer); stdcall;
begin
  AObj.Left := AValue;
end;

function WinControl_GetTop(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.Top;
end;

procedure WinControl_SetTop(AObj: TWinControl; AValue: Integer); stdcall;
begin
  AObj.Top := AValue;
end;

function WinControl_GetWidth(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.Width;
end;

procedure WinControl_SetWidth(AObj: TWinControl; AValue: Integer); stdcall;
begin
  AObj.Width := AValue;
end;

function WinControl_GetHeight(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.Height;
end;

procedure WinControl_SetHeight(AObj: TWinControl; AValue: Integer); stdcall;
begin
  AObj.Height := AValue;
end;

function WinControl_GetCursor(AObj: TWinControl): TCursor; stdcall;
begin
  Result :=  AObj.Cursor;
end;

procedure WinControl_SetCursor(AObj: TWinControl; AValue: TCursor); stdcall;
begin
  AObj.Cursor := AValue;
end;

function WinControl_GetHint(AObj: TWinControl): PChar; stdcall;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure WinControl_SetHint(AObj: TWinControl; AValue: PChar); stdcall;
begin
  AObj.Hint := AValue;
end;

function WinControl_GetMargins(AObj: TWinControl): TMargins; stdcall;
begin
  Result :=  AObj.Margins;
end;

procedure WinControl_SetMargins(AObj: TWinControl; AValue: TMargins); stdcall;
begin
  AObj.Margins := AValue;
end;

function WinControl_GetCustomHint(AObj: TWinControl): TCustomHint; stdcall;
begin
  Result :=  AObj.CustomHint;
end;

procedure WinControl_SetCustomHint(AObj: TWinControl; AValue: TCustomHint); stdcall;
begin
  AObj.CustomHint := AValue;
end;

function WinControl_GetComponentCount(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.ComponentCount;
end;

function WinControl_GetComponentIndex(AObj: TWinControl): Integer; stdcall;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure WinControl_SetComponentIndex(AObj: TWinControl; AValue: Integer); stdcall;
begin
  AObj.ComponentIndex := AValue;
end;

function WinControl_GetOwner(AObj: TWinControl): TComponent; stdcall;
begin
  Result :=  AObj.Owner;
end;

function WinControl_GetName(AObj: TWinControl): PChar; stdcall;
begin
  Result :=  PChar(AObj.Name);
end;

procedure WinControl_SetName(AObj: TWinControl; AValue: PChar); stdcall;
begin
  AObj.Name := AValue;
end;

function WinControl_GetTag(AObj: TWinControl): NativeInt; stdcall;
begin
  Result :=  AObj.Tag;
end;

procedure WinControl_SetTag(AObj: TWinControl; AValue: NativeInt); stdcall;
begin
  AObj.Tag := AValue;
end;

function WinControl_GetDockClients(AObj: TWinControl; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.DockClients[Index];
end;

function WinControl_GetControls(AObj: TWinControl; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.Controls[Index];
end;

function WinControl_GetComponents(AObj: TWinControl; AIndex: Integer): TComponent; stdcall;
begin
  Result :=  AObj.Components[AIndex];
end;

function WinControl_StaticClassType: TClass; stdcall;
begin
  Result := TWinControl;
end;

exports
  WinControl_Create,
  WinControl_Free,
  WinControl_CanFocus,
  WinControl_ContainsControl,
  WinControl_ControlAtPos,
  WinControl_DisableAlign,
  WinControl_EnableAlign,
  WinControl_FindChildControl,
  WinControl_FlipChildren,
  WinControl_Focused,
  WinControl_HandleAllocated,
  WinControl_InsertControl,
  WinControl_Invalidate,
  WinControl_PaintTo,
  WinControl_RemoveControl,
  WinControl_Realign,
  WinControl_Repaint,
  WinControl_ScaleBy,
  WinControl_ScrollBy,
  WinControl_SetBounds,
  WinControl_SetFocus,
  WinControl_Update,
  WinControl_UpdateControlState,
  WinControl_BringToFront,
  WinControl_ClientToScreen,
  WinControl_ClientToParent,
  WinControl_Dragging,
  WinControl_HasParent,
  WinControl_Hide,
  WinControl_Perform,
  WinControl_Refresh,
  WinControl_ScreenToClient,
  WinControl_ParentToClient,
  WinControl_SendToBack,
  WinControl_Show,
  WinControl_GetTextBuf,
  WinControl_GetTextLen,
  WinControl_SetTextBuf,
  WinControl_FindComponent,
  WinControl_GetNamePath,
  WinControl_Assign,
  WinControl_DisposeOf,
  WinControl_ClassType,
  WinControl_ClassName,
  WinControl_InstanceSize,
  WinControl_InheritsFrom,
  WinControl_Equals,
  WinControl_GetHashCode,
  WinControl_ToString,
  WinControl_GetDockClientCount,
  WinControl_GetDockSite,
  WinControl_SetDockSite,
  WinControl_GetDoubleBuffered,
  WinControl_SetDoubleBuffered,
  WinControl_GetAlignDisabled,
  WinControl_GetMouseInClient,
  WinControl_GetVisibleDockClientCount,
  WinControl_GetBrush,
  WinControl_GetControlCount,
  WinControl_GetHandle,
  WinControl_GetParentDoubleBuffered,
  WinControl_SetParentDoubleBuffered,
  WinControl_GetParentWindow,
  WinControl_SetParentWindow,
  WinControl_GetTabOrder,
  WinControl_SetTabOrder,
  WinControl_GetTabStop,
  WinControl_SetTabStop,
  WinControl_GetUseDockManager,
  WinControl_SetUseDockManager,
  WinControl_GetEnabled,
  WinControl_SetEnabled,
  WinControl_GetAction,
  WinControl_SetAction,
  WinControl_GetAlign,
  WinControl_SetAlign,
  WinControl_GetAnchors,
  WinControl_SetAnchors,
  WinControl_GetBiDiMode,
  WinControl_SetBiDiMode,
  WinControl_GetBoundsRect,
  WinControl_SetBoundsRect,
  WinControl_GetClientHeight,
  WinControl_SetClientHeight,
  WinControl_GetClientOrigin,
  WinControl_GetClientRect,
  WinControl_GetClientWidth,
  WinControl_SetClientWidth,
  WinControl_GetConstraints,
  WinControl_SetConstraints,
  WinControl_GetControlState,
  WinControl_SetControlState,
  WinControl_GetControlStyle,
  WinControl_SetControlStyle,
  WinControl_GetExplicitLeft,
  WinControl_GetExplicitTop,
  WinControl_GetExplicitWidth,
  WinControl_GetExplicitHeight,
  WinControl_GetFloating,
  WinControl_GetShowHint,
  WinControl_SetShowHint,
  WinControl_GetVisible,
  WinControl_SetVisible,
  WinControl_GetParent,
  WinControl_SetParent,
  WinControl_GetStyleElements,
  WinControl_SetStyleElements,
  WinControl_SetOnGesture,
  WinControl_GetAlignWithMargins,
  WinControl_SetAlignWithMargins,
  WinControl_GetLeft,
  WinControl_SetLeft,
  WinControl_GetTop,
  WinControl_SetTop,
  WinControl_GetWidth,
  WinControl_SetWidth,
  WinControl_GetHeight,
  WinControl_SetHeight,
  WinControl_GetCursor,
  WinControl_SetCursor,
  WinControl_GetHint,
  WinControl_SetHint,
  WinControl_GetMargins,
  WinControl_SetMargins,
  WinControl_GetCustomHint,
  WinControl_SetCustomHint,
  WinControl_GetComponentCount,
  WinControl_GetComponentIndex,
  WinControl_SetComponentIndex,
  WinControl_GetOwner,
  WinControl_GetName,
  WinControl_SetName,
  WinControl_GetTag,
  WinControl_SetTag,
  WinControl_GetDockClients,
  WinControl_GetControls,
  WinControl_GetComponents,
  WinControl_StaticClassType;


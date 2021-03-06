
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------


package vcl


import (
	. "github.com/ying32/govcl/vcl/api"
    . "github.com/ying32/govcl/vcl/types"
    "unsafe"
)

type TTaskDialogButtonItem struct {
    IObject
    instance uintptr
    // 特殊情况下使用，主要应对Go的GC问题，与VCL没有太多关系。
    ptr unsafe.Pointer
}

// NewTaskDialogButtonItem
// CN: 创建一个新的对象。
// EN: Create a new object.
func NewTaskDialogButtonItem() *TTaskDialogButtonItem {
    t := new(TTaskDialogButtonItem)
    t.instance = TaskDialogButtonItem_Create()
    t.ptr = unsafe.Pointer(t.instance)
    return t
}

// TaskDialogButtonItemFromInst
// CN: 新建一个对象来自已经存在的对象实例指针。
// EN: Create a new object from an existing object instance pointer.
func TaskDialogButtonItemFromInst(inst uintptr) *TTaskDialogButtonItem {
    t := new(TTaskDialogButtonItem)
    t.instance = inst
    t.ptr = unsafe.Pointer(inst)
    return t
}

// TaskDialogButtonItemFromObj
// CN: 新建一个对象来自已经存在的对象实例。
// EN: Create a new object from an existing object instance.
func TaskDialogButtonItemFromObj(obj IObject) *TTaskDialogButtonItem {
    t := new(TTaskDialogButtonItem)
    t.instance = CheckPtr(obj)
    t.ptr = unsafe.Pointer(t.instance)
    return t
}

// TaskDialogButtonItemFromUnsafePointer
// CN: 新建一个对象来自不安全的地址。注意：使用此函数可能造成一些不明情况，慎用。
// EN: Create a new object from an unsecure address. Note: Using this function may cause some unclear situations and be used with caution..
func TaskDialogButtonItemFromUnsafePointer(ptr unsafe.Pointer) *TTaskDialogButtonItem {
    t := new(TTaskDialogButtonItem)
    t.instance = uintptr(ptr)
    t.ptr = ptr
    return t
}

// Free 
// CN: 释放对象。
// EN: Free object.
func (t *TTaskDialogButtonItem) Free() {
    if t.instance != 0 {
        TaskDialogButtonItem_Free(t.instance)
        t.instance = 0
        t.ptr = unsafe.Pointer(uintptr(0))
    }
}

// Instance 
// CN: 返回对象实例指针。
// EN: Return object instance pointer.
func (t *TTaskDialogButtonItem) Instance() uintptr {
    return t.instance
}

// UnsafeAddr 
// CN: 获取一个不安全的地址。
// EN: Get an unsafe address.
func (t *TTaskDialogButtonItem) UnsafeAddr() unsafe.Pointer {
    return t.ptr
}

// IsValid 
// CN: 检测地址是否为空。
// EN: Check if the address is empty.
func (t *TTaskDialogButtonItem) IsValid() bool {
    return t.instance != 0
}

// TTaskDialogButtonItemClass
// CN: 获取类信息指针。
// EN: Get class information pointer.
func TTaskDialogButtonItemClass() TClass {
    return TaskDialogButtonItem_StaticClassType()
}

// Click
// CN: 单击。
// EN: .
func (t *TTaskDialogButtonItem) Click() {
    TaskDialogButtonItem_Click(t.instance)
}

// GetNamePath
// CN: 获取类名路径。
// EN: Get the class name path.
func (t *TTaskDialogButtonItem) GetNamePath() string {
    return TaskDialogButtonItem_GetNamePath(t.instance)
}

// Assign
// CN: 复制一个对象，如果对象实现了此方法的话。
// EN: Copy an object, if the object implements this method.
func (t *TTaskDialogButtonItem) Assign(Source IObject) {
    TaskDialogButtonItem_Assign(t.instance, CheckPtr(Source))
}

// DisposeOf
// CN: 丢弃当前对象。
// EN: Discard the current object.
func (t *TTaskDialogButtonItem) DisposeOf() {
    TaskDialogButtonItem_DisposeOf(t.instance)
}

// ClassType
// CN: 获取类的类型信息。
// EN: Get class type information.
func (t *TTaskDialogButtonItem) ClassType() TClass {
    return TaskDialogButtonItem_ClassType(t.instance)
}

// ClassName
// CN: 获取当前对象类名称。
// EN: Get the current object class name.
func (t *TTaskDialogButtonItem) ClassName() string {
    return TaskDialogButtonItem_ClassName(t.instance)
}

// InstanceSize
// CN: 获取当前对象实例大小。
// EN: Get the current object instance size.
func (t *TTaskDialogButtonItem) InstanceSize() int32 {
    return TaskDialogButtonItem_InstanceSize(t.instance)
}

// InheritsFrom
// CN: 判断当前类是否继承自指定类。
// EN: Determine whether the current class inherits from the specified class.
func (t *TTaskDialogButtonItem) InheritsFrom(AClass TClass) bool {
    return TaskDialogButtonItem_InheritsFrom(t.instance, AClass)
}

// Equals
// CN: 与一个对象进行比较。
// EN: Compare with an object.
func (t *TTaskDialogButtonItem) Equals(Obj IObject) bool {
    return TaskDialogButtonItem_Equals(t.instance, CheckPtr(Obj))
}

// GetHashCode
// CN: 获取类的哈希值。
// EN: Get the hash value of the class.
func (t *TTaskDialogButtonItem) GetHashCode() int32 {
    return TaskDialogButtonItem_GetHashCode(t.instance)
}

// ToString
// CN: 文本类信息。
// EN: Text information.
func (t *TTaskDialogButtonItem) ToString() string {
    return TaskDialogButtonItem_ToString(t.instance)
}

// CommandLinkHint
func (t *TTaskDialogButtonItem) CommandLinkHint() string {
    return TaskDialogButtonItem_GetCommandLinkHint(t.instance)
}

// SetCommandLinkHint
func (t *TTaskDialogButtonItem) SetCommandLinkHint(value string) {
    TaskDialogButtonItem_SetCommandLinkHint(t.instance, value)
}

// ElevationRequired
func (t *TTaskDialogButtonItem) ElevationRequired() bool {
    return TaskDialogButtonItem_GetElevationRequired(t.instance)
}

// SetElevationRequired
func (t *TTaskDialogButtonItem) SetElevationRequired(value bool) {
    TaskDialogButtonItem_SetElevationRequired(t.instance, value)
}

// ModalResult
// CN: 获取模态对话框显示结果。
// EN: .
func (t *TTaskDialogButtonItem) ModalResult() TModalResult {
    return TaskDialogButtonItem_GetModalResult(t.instance)
}

// SetModalResult
// CN: 设置模态对话框显示结果。
// EN: .
func (t *TTaskDialogButtonItem) SetModalResult(value TModalResult) {
    TaskDialogButtonItem_SetModalResult(t.instance, value)
}

// Caption
// CN: 获取控件标题。
// EN: Get the control title.
func (t *TTaskDialogButtonItem) Caption() string {
    return TaskDialogButtonItem_GetCaption(t.instance)
}

// SetCaption
// CN: 设置控件标题。
// EN: Set the control title.
func (t *TTaskDialogButtonItem) SetCaption(value string) {
    TaskDialogButtonItem_SetCaption(t.instance, value)
}

// Default
func (t *TTaskDialogButtonItem) Default() bool {
    return TaskDialogButtonItem_GetDefault(t.instance)
}

// SetDefault
func (t *TTaskDialogButtonItem) SetDefault(value bool) {
    TaskDialogButtonItem_SetDefault(t.instance, value)
}

// Enabled
// CN: 获取控件启用。
// EN: Get the control enabled.
func (t *TTaskDialogButtonItem) Enabled() bool {
    return TaskDialogButtonItem_GetEnabled(t.instance)
}

// SetEnabled
// CN: 设置控件启用。
// EN: Set the control enabled.
func (t *TTaskDialogButtonItem) SetEnabled(value bool) {
    TaskDialogButtonItem_SetEnabled(t.instance, value)
}

// Collection
func (t *TTaskDialogButtonItem) Collection() *TCollection {
    return CollectionFromInst(TaskDialogButtonItem_GetCollection(t.instance))
}

// SetCollection
func (t *TTaskDialogButtonItem) SetCollection(value *TCollection) {
    TaskDialogButtonItem_SetCollection(t.instance, CheckPtr(value))
}

// Index
func (t *TTaskDialogButtonItem) Index() int32 {
    return TaskDialogButtonItem_GetIndex(t.instance)
}

// SetIndex
func (t *TTaskDialogButtonItem) SetIndex(value int32) {
    TaskDialogButtonItem_SetIndex(t.instance, value)
}

// DisplayName
func (t *TTaskDialogButtonItem) DisplayName() string {
    return TaskDialogButtonItem_GetDisplayName(t.instance)
}

// SetDisplayName
func (t *TTaskDialogButtonItem) SetDisplayName(value string) {
    TaskDialogButtonItem_SetDisplayName(t.instance, value)
}


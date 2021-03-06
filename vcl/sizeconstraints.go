
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

type TSizeConstraints struct {
    IObject
    instance uintptr
    // 特殊情况下使用，主要应对Go的GC问题，与VCL没有太多关系。
    ptr unsafe.Pointer
}

// SizeConstraintsFromInst
// CN: 新建一个对象来自已经存在的对象实例指针。
// EN: Create a new object from an existing object instance pointer.
func SizeConstraintsFromInst(inst uintptr) *TSizeConstraints {
    s := new(TSizeConstraints)
    s.instance = inst
    s.ptr = unsafe.Pointer(inst)
    return s
}

// SizeConstraintsFromObj
// CN: 新建一个对象来自已经存在的对象实例。
// EN: Create a new object from an existing object instance.
func SizeConstraintsFromObj(obj IObject) *TSizeConstraints {
    s := new(TSizeConstraints)
    s.instance = CheckPtr(obj)
    s.ptr = unsafe.Pointer(s.instance)
    return s
}

// SizeConstraintsFromUnsafePointer
// CN: 新建一个对象来自不安全的地址。注意：使用此函数可能造成一些不明情况，慎用。
// EN: Create a new object from an unsecure address. Note: Using this function may cause some unclear situations and be used with caution..
func SizeConstraintsFromUnsafePointer(ptr unsafe.Pointer) *TSizeConstraints {
    s := new(TSizeConstraints)
    s.instance = uintptr(ptr)
    s.ptr = ptr
    return s
}

// Instance 
// CN: 返回对象实例指针。
// EN: Return object instance pointer.
func (s *TSizeConstraints) Instance() uintptr {
    return s.instance
}

// UnsafeAddr 
// CN: 获取一个不安全的地址。
// EN: Get an unsafe address.
func (s *TSizeConstraints) UnsafeAddr() unsafe.Pointer {
    return s.ptr
}

// IsValid 
// CN: 检测地址是否为空。
// EN: Check if the address is empty.
func (s *TSizeConstraints) IsValid() bool {
    return s.instance != 0
}

// TSizeConstraintsClass
// CN: 获取类信息指针。
// EN: Get class information pointer.
func TSizeConstraintsClass() TClass {
    return SizeConstraints_StaticClassType()
}

// Assign
// CN: 复制一个对象，如果对象实现了此方法的话。
// EN: Copy an object, if the object implements this method.
func (s *TSizeConstraints) Assign(Source IObject) {
    SizeConstraints_Assign(s.instance, CheckPtr(Source))
}

// GetNamePath
// CN: 获取类名路径。
// EN: Get the class name path.
func (s *TSizeConstraints) GetNamePath() string {
    return SizeConstraints_GetNamePath(s.instance)
}

// DisposeOf
// CN: 丢弃当前对象。
// EN: Discard the current object.
func (s *TSizeConstraints) DisposeOf() {
    SizeConstraints_DisposeOf(s.instance)
}

// ClassType
// CN: 获取类的类型信息。
// EN: Get class type information.
func (s *TSizeConstraints) ClassType() TClass {
    return SizeConstraints_ClassType(s.instance)
}

// ClassName
// CN: 获取当前对象类名称。
// EN: Get the current object class name.
func (s *TSizeConstraints) ClassName() string {
    return SizeConstraints_ClassName(s.instance)
}

// InstanceSize
// CN: 获取当前对象实例大小。
// EN: Get the current object instance size.
func (s *TSizeConstraints) InstanceSize() int32 {
    return SizeConstraints_InstanceSize(s.instance)
}

// InheritsFrom
// CN: 判断当前类是否继承自指定类。
// EN: Determine whether the current class inherits from the specified class.
func (s *TSizeConstraints) InheritsFrom(AClass TClass) bool {
    return SizeConstraints_InheritsFrom(s.instance, AClass)
}

// Equals
// CN: 与一个对象进行比较。
// EN: Compare with an object.
func (s *TSizeConstraints) Equals(Obj IObject) bool {
    return SizeConstraints_Equals(s.instance, CheckPtr(Obj))
}

// GetHashCode
// CN: 获取类的哈希值。
// EN: Get the hash value of the class.
func (s *TSizeConstraints) GetHashCode() int32 {
    return SizeConstraints_GetHashCode(s.instance)
}

// ToString
// CN: 文本类信息。
// EN: Text information.
func (s *TSizeConstraints) ToString() string {
    return SizeConstraints_ToString(s.instance)
}

// SetOnChange
// CN: 设置改变事件。
// EN: Set changed event.
func (s *TSizeConstraints) SetOnChange(fn TNotifyEvent) {
    SizeConstraints_SetOnChange(s.instance, fn)
}

// MaxHeight
func (s *TSizeConstraints) MaxHeight() TConstraintSize {
    return SizeConstraints_GetMaxHeight(s.instance)
}

// SetMaxHeight
func (s *TSizeConstraints) SetMaxHeight(value TConstraintSize) {
    SizeConstraints_SetMaxHeight(s.instance, value)
}

// MaxWidth
func (s *TSizeConstraints) MaxWidth() TConstraintSize {
    return SizeConstraints_GetMaxWidth(s.instance)
}

// SetMaxWidth
func (s *TSizeConstraints) SetMaxWidth(value TConstraintSize) {
    SizeConstraints_SetMaxWidth(s.instance, value)
}

// MinHeight
func (s *TSizeConstraints) MinHeight() TConstraintSize {
    return SizeConstraints_GetMinHeight(s.instance)
}

// SetMinHeight
func (s *TSizeConstraints) SetMinHeight(value TConstraintSize) {
    SizeConstraints_SetMinHeight(s.instance, value)
}

// MinWidth
func (s *TSizeConstraints) MinWidth() TConstraintSize {
    return SizeConstraints_GetMinWidth(s.instance)
}

// SetMinWidth
func (s *TSizeConstraints) SetMinWidth(value TConstraintSize) {
    SizeConstraints_SetMinWidth(s.instance, value)
}


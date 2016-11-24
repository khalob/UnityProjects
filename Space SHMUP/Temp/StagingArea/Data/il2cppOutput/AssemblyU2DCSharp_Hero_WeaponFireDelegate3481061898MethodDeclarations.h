#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Hero/WeaponFireDelegate
struct WeaponFireDelegate_t3481061898;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Hero/WeaponFireDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void WeaponFireDelegate__ctor_m3116063917 (WeaponFireDelegate_t3481061898 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Hero/WeaponFireDelegate::Invoke()
extern "C"  void WeaponFireDelegate_Invoke_m1159254765 (WeaponFireDelegate_t3481061898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Hero/WeaponFireDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WeaponFireDelegate_BeginInvoke_m3774870832 (WeaponFireDelegate_t3481061898 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Hero/WeaponFireDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void WeaponFireDelegate_EndInvoke_m915503011 (WeaponFireDelegate_t3481061898 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

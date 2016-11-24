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

// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.ContactPoint
struct ContactPoint_t1376425630;
struct ContactPoint_t1376425630_marshaled_pinvoke;
struct ContactPoint_t1376425630_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ContactPoint1376425630.h"

// UnityEngine.Collider UnityEngine.ContactPoint::get_thisCollider()
extern "C"  Collider_t3497673348 * ContactPoint_get_thisCollider_m4011390478 (ContactPoint_t1376425630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.ContactPoint::get_otherCollider()
extern "C"  Collider_t3497673348 * ContactPoint_get_otherCollider_m3939652266 (ContactPoint_t1376425630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.ContactPoint::ColliderFromInstanceId(System.Int32)
extern "C"  Collider_t3497673348 * ContactPoint_ColliderFromInstanceId_m2189829568 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ContactPoint_t1376425630;
struct ContactPoint_t1376425630_marshaled_pinvoke;

extern "C" void ContactPoint_t1376425630_marshal_pinvoke(const ContactPoint_t1376425630& unmarshaled, ContactPoint_t1376425630_marshaled_pinvoke& marshaled);
extern "C" void ContactPoint_t1376425630_marshal_pinvoke_back(const ContactPoint_t1376425630_marshaled_pinvoke& marshaled, ContactPoint_t1376425630& unmarshaled);
extern "C" void ContactPoint_t1376425630_marshal_pinvoke_cleanup(ContactPoint_t1376425630_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ContactPoint_t1376425630;
struct ContactPoint_t1376425630_marshaled_com;

extern "C" void ContactPoint_t1376425630_marshal_com(const ContactPoint_t1376425630& unmarshaled, ContactPoint_t1376425630_marshaled_com& marshaled);
extern "C" void ContactPoint_t1376425630_marshal_com_back(const ContactPoint_t1376425630_marshaled_com& marshaled, ContactPoint_t1376425630& unmarshaled);
extern "C" void ContactPoint_t1376425630_marshal_com_cleanup(ContactPoint_t1376425630_marshaled_com& marshaled);

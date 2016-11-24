#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// WeaponDefinition
struct WeaponDefinition_t2840985793;
// Part
struct Part_t3616564513;
// Weapon
struct Weapon_t3342669500;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_WeaponType3809625260.h"
#include "AssemblyU2DCSharp_WeaponDefinition2840985793.h"
#include "AssemblyU2DCSharp_Part3616564513.h"
#include "AssemblyU2DCSharp_Weapon3342669500.h"

#pragma once
// WeaponType[]
struct WeaponTypeU5BU5D_t2953680677  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// WeaponDefinition[]
struct WeaponDefinitionU5BU5D_t562480924  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) WeaponDefinition_t2840985793 * m_Items[1];

public:
	inline WeaponDefinition_t2840985793 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline WeaponDefinition_t2840985793 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, WeaponDefinition_t2840985793 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Part[]
struct PartU5BU5D_t650077500  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Part_t3616564513 * m_Items[1];

public:
	inline Part_t3616564513 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Part_t3616564513 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Part_t3616564513 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Weapon[]
struct WeaponU5BU5D_t3711789781  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Weapon_t3342669500 * m_Items[1];

public:
	inline Weapon_t3342669500 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Weapon_t3342669500 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Weapon_t3342669500 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: Visual C++
*/

#include <windows.h>
#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

#define __thiscall __cdecl // Test compile in C mode

cString *__stdcall rRegGetString(cString *a1, HKEY a2, const CHAR *hKey, const CHAR *lpSubKey, const char *lpValueName);
// void __usercall _L57016(int a1@<ebp>);
unsigned int __thiscall rRegGetDWord(void *this, HKEY hKey, LPCSTR lpSubKey, LPCSTR lpValueName, unsigned int a5);
HKEY __stdcall rRegGetBinary(HKEY hKey, LPCSTR lpSubKey, LPCSTR lpValueName, LPBYTE lpData, unsigned int a5);
LSTATUS __stdcall rRegSetString(HKEY hKey, LPCSTR lpSubKey, LPCSTR lpValueName, HKEY phkResult);
LSTATUS __stdcall rRegSetDWord(HKEY hKey, LPCSTR lpSubKey, LPCSTR lpValueName, BYTE Data);
LSTATUS __stdcall rRegSetBinary(HKEY hKey, LPCSTR lpSubKey, LPCSTR lpValueName, HKEY phkResult, DWORD cbData);
cString *__stdcall __RegEnumKey(cString *a1, HKEY a2, HKEY hKey, DWORD dwIndex);
// void __usercall _L57052(int a1@<ebp>);
const CHAR *__stdcall __RegDeleteAllSubKey(HKEY hKey, LPCSTR lpSubKey);
// void __usercall _L57068(int a1@<ebp>);
LSTATUS __stdcall rRegDeleteAllSubKey(HKEY hKey, LPCSTR lpSubKey, LPCSTR a3);
// void __usercall _L57085(int a1@<ebp>);
cString *__stdcall rRegEnumValue(cString *a1, HKEY a2, HKEY hKey, LPCSTR lpSubKey, DWORD dwIndex);
// void __usercall _L57094(int a1@<ebp>);
// void __thiscall cString::~cString(cString *__hidden this); idb
// cString *__thiscall cString::cString(cString *__hidden this, const struct cString *); idb
// LSTATUS __stdcall RegCloseKey(HKEY hKey);
// void __thiscall cString::ReleaseBuffer(cString *__hidden this); idb
// char *__thiscall cString::GetBuffer(cString *__hidden this, int); idb
// LSTATUS __stdcall RegQueryValueExA(HKEY hKey, LPCSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData);
// cString *__thiscall cString::cString(cString *__hidden this, const char *, int); idb
// LSTATUS __stdcall RegOpenKeyExA(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult);
// cString *__thiscall cString::cString(cString *__hidden this); idb
// LSTATUS __stdcall RegSetValueExA(HKEY hKey, LPCSTR lpValueName, DWORD Reserved, DWORD dwType, const BYTE *lpData, DWORD cbData);
// int __stdcall lstrlenA(LPCSTR lpString);
// LSTATUS __stdcall RegCreateKeyExA(HKEY hKey, LPCSTR lpSubKey, DWORD Reserved, LPSTR lpClass, DWORD dwOptions, REGSAM samDesired, const LPSECURITY_ATTRIBUTES lpSecurityAttributes, PHKEY phkResult, LPDWORD lpdwDisposition);
// LSTATUS __stdcall RegEnumKeyExA(HKEY hKey, DWORD dwIndex, LPSTR lpName, LPDWORD lpcchName, LPDWORD lpReserved, LPSTR lpClass, LPDWORD lpcchClass, PFILETIME lpftLastWriteTime);
// LSTATUS __stdcall RegQueryInfoKeyA(HKEY hKey, LPSTR lpClass, LPDWORD lpcchClass, LPDWORD lpReserved, LPDWORD lpcSubKeys, LPDWORD lpcbMaxSubKeyLen, LPDWORD lpcbMaxClassLen, LPDWORD lpcValues, LPDWORD lpcbMaxValueNameLen, LPDWORD lpcbMaxValueLen, LPDWORD lpcbSecurityDescriptor, PFILETIME lpftLastWriteTime);
// LSTATUS __stdcall RegDeleteKeyA(HKEY hKey, LPCSTR lpSubKey);
// int __thiscall cString::operator char const *(_DWORD); weak
// int __thiscall cString::operator=^(_DWORD, _DWORD); weak
// int __thiscall cString::operator=^(_DWORD, _DWORD); weak
// LSTATUS __stdcall RegEnumValueA(HKEY hKey, DWORD dwIndex, LPSTR lpValueName, LPDWORD lpcchValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData);

//-------------------------------------------------------------------------
// Data declarations

_UNKNOWN loc_2; // weak
_UNKNOWN loc_FC; // weak
_UNKNOWN _L57027; // weak
_UNKNOWN _L57061; // weak
char `string'; // idb
_UNKNOWN _L57078; // weak
_UNKNOWN _L57088; // weak
_UNKNOWN _L57100; // weak
// extern _UNKNOWN _except_list; weak


//----- (00000000) --------------------------------------------------------
cString *__stdcall rRegGetString(cString *a1, HKEY a2, const CHAR *hKey, const CHAR *lpSubKey, const char *lpValueName)
{
  char v5; // bl
  cString *v6; // esi
  LSTATUS (__stdcall *v7)(HKEY, LPCSTR, LPDWORD, LPDWORD, LPBYTE, LPDWORD); // ebp
  LSTATUS v8; // esi
  BYTE *v9; // eax
  const struct cString *v10; // eax
  cString *result; // eax
  HKEY v12; // [esp+14h] [ebp-2Ch] BYREF
  HKEY phkResult; // [esp+18h] [ebp-28h] BYREF
  DWORD cbData; // [esp+1Ch] [ebp-24h] BYREF
  char v15[4]; // [esp+28h] [ebp-18h] BYREF
  unsigned int v16[2]; // [esp+34h] [ebp-Ch] BYREF
  int v17; // [esp+3Ch] [ebp-4h]

  v17 = -1;
  v16[1] = (unsigned int)&_L57027;
  v16[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v16);
  v5 = 0;
  cString::cString((cString *)&cbData);
  v17 = 1;
  if ( RegOpenKeyExA(a2, hKey, 0, 0x20019u, &v12) )
  {
    v6 = a1;
    cString::cString(a1, lpValueName, -1);
  }
  else
  {
    v7 = RegQueryValueExA;
    v8 = RegQueryValueExA(v12, lpSubKey, 0, 0, 0, (LPDWORD)&phkResult);
    if ( !v8 )
    {
      v9 = (BYTE *)cString::GetBuffer((cString *)&cbData, (int)phkResult);
      v8 = v7(v12, lpSubKey, 0, 0, v9, (LPDWORD)&phkResult);
      cString::ReleaseBuffer((cString *)&cbData);
    }
    RegCloseKey(v12);
    if ( v8 )
    {
      v10 = cString::cString((cString *)v15, lpValueName, -1);
      v5 = 2;
      LOBYTE(v17) = 2;
    }
    else
    {
      v10 = (const struct cString *)&cbData;
    }
    v6 = a1;
    cString::cString(a1, v10);
    v17 = 1;
    if ( (((unsigned __int8)v5 | 1) & 2) != 0 )
      cString::~cString((cString *)v15);
  }
  LOBYTE(v17) = 0;
  cString::~cString((cString *)&cbData);
  result = v6;
  __writefsdword((unsigned int)&_except_list, v16[0]);
  return result;
}

//----- (00000150) --------------------------------------------------------
void __usercall _L57016(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 36));
}

//----- (000001C8) --------------------------------------------------------
unsigned int __thiscall rRegGetDWord(void *this, HKEY hKey, LPCSTR lpSubKey, LPCSTR lpValueName, unsigned int a5)
{
  LSTATUS v5; // esi
  unsigned int result; // eax
  BYTE Data[4]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)Data = this;
  if ( RegOpenKeyExA(hKey, lpSubKey, 0, 0x20019u, (PHKEY)&lpSubKey)
    || (hKey = (HKEY)(&loc_2 + 2),
        v5 = RegQueryValueExA((HKEY)lpSubKey, lpValueName, 0, 0, Data, (LPDWORD)&hKey),
        RegCloseKey((HKEY)lpSubKey),
        result = *(_DWORD *)Data,
        v5) )
  {
    result = a5;
  }
  return result;
}

//----- (00000238) --------------------------------------------------------
HKEY __stdcall rRegGetBinary(HKEY hKey, LPCSTR lpSubKey, LPCSTR lpValueName, LPBYTE lpData, unsigned int a5)
{
  const CHAR *v6; // edi
  LSTATUS (__stdcall *v7)(HKEY, LPCSTR, LPDWORD, LPDWORD, LPBYTE, LPDWORD); // ebx
  LSTATUS v8; // esi

  if ( RegOpenKeyExA(hKey, lpSubKey, 0, 0x20019u, (PHKEY)&lpSubKey) )
    return 0;
  v6 = lpValueName;
  v7 = RegQueryValueExA;
  v8 = RegQueryValueExA((HKEY)lpSubKey, lpValueName, 0, 0, 0, (LPDWORD)&hKey);
  if ( !v8 )
  {
    if ( (unsigned int)hKey > a5 )
    {
      RegCloseKey((HKEY)lpSubKey);
      return hKey;
    }
    v8 = v7((HKEY)lpSubKey, v6, 0, 0, lpData, (LPDWORD)&hKey);
  }
  RegCloseKey((HKEY)lpSubKey);
  return (HKEY)(v8 == 0 ? (unsigned int)hKey : 0);
}

//----- (000002E8) --------------------------------------------------------
LSTATUS __stdcall rRegSetString(HKEY hKey, LPCSTR lpSubKey, LPCSTR lpValueName, HKEY phkResult)
{
  const CHAR *v4; // edi
  LSTATUS v6; // esi
  int v7; // eax

  v4 = (const CHAR *)phkResult;
  if ( !phkResult )
    return 87;
  v6 = RegCreateKeyExA(hKey, lpSubKey, 0, 0, 0, 0x20006u, 0, &phkResult, 0);
  if ( !v6 )
  {
    v7 = lstrlenA(v4);
    v6 = RegSetValueExA(phkResult, lpValueName, 0, 1u, (const BYTE *)v4, v7 + 1);
    RegCloseKey(phkResult);
  }
  return v6;
}

//----- (00000358) --------------------------------------------------------
LSTATUS __stdcall rRegSetDWord(HKEY hKey, LPCSTR lpSubKey, LPCSTR lpValueName, BYTE Data)
{
  LSTATUS result; // eax
  LSTATUS v5; // esi

  result = RegCreateKeyExA(hKey, lpSubKey, 0, 0, 0, 0x20006u, 0, (PHKEY)&lpSubKey, 0);
  if ( !result )
  {
    v5 = RegSetValueExA((HKEY)lpSubKey, lpValueName, 0, 4u, &Data, 4u);
    RegCloseKey((HKEY)lpSubKey);
    result = v5;
  }
  return result;
}

//----- (000003B8) --------------------------------------------------------
LSTATUS __stdcall rRegSetBinary(HKEY hKey, LPCSTR lpSubKey, LPCSTR lpValueName, HKEY phkResult, DWORD cbData)
{
  const BYTE *v5; // edi
  LSTATUS v7; // esi

  v5 = (const BYTE *)phkResult;
  if ( !phkResult )
    return 87;
  v7 = RegCreateKeyExA(hKey, lpSubKey, 0, 0, 0, 0x20006u, 0, &phkResult, 0);
  if ( !v7 )
  {
    v7 = RegSetValueExA(phkResult, lpValueName, 0, 3u, v5, cbData);
    RegCloseKey(phkResult);
  }
  return v7;
}

//----- (00000428) --------------------------------------------------------
cString *__stdcall __RegEnumKey(cString *a1, HKEY a2, HKEY hKey, DWORD dwIndex)
{
  char v4; // bl
  HKEY v5; // edi
  LSTATUS v6; // esi
  CHAR *v7; // eax
  const struct cString *v8; // eax
  cString *result; // eax
  DWORD v10; // [esp+14h] [ebp-28h] BYREF
  DWORD cbMaxSubKeyLen; // [esp+18h] [ebp-24h] BYREF
  char v12[4]; // [esp+24h] [ebp-18h] BYREF
  unsigned int v13[2]; // [esp+30h] [ebp-Ch] BYREF
  int v14; // [esp+38h] [ebp-4h]

  v14 = -1;
  v13[1] = (unsigned int)&_L57061;
  v13[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v13);
  v4 = 0;
  cString::cString((cString *)&cbMaxSubKeyLen);
  v5 = a2;
  v14 = 1;
  v6 = RegQueryInfoKeyA(a2, 0, 0, 0, 0, &v10, 0, 0, 0, 0, 0, 0);
  if ( !v6 )
  {
    a2 = (HKEY)(2 * v10 + 2);
    v7 = cString::GetBuffer((cString *)&cbMaxSubKeyLen, (int)a2);
    v6 = RegEnumKeyExA(v5, (DWORD)hKey, v7, (LPDWORD)&a2, 0, 0, 0, 0);
    cString::ReleaseBuffer((cString *)&cbMaxSubKeyLen);
  }
  if ( dwIndex )
    *(_DWORD *)dwIndex = v6;
  if ( v6 )
  {
    v8 = cString::cString((cString *)v12, &`string', -1);
    v4 = 1;
    LOBYTE(v14) = 2;
  }
  else
  {
    v8 = (const struct cString *)&cbMaxSubKeyLen;
  }
  cString::cString(a1, v8);
  v14 = 1;
  if ( (((unsigned __int8)v4 | 2) & 1) != 0 )
    cString::~cString((cString *)v12);
  LOBYTE(v14) = 0;
  cString::~cString((cString *)&cbMaxSubKeyLen);
  result = a1;
  __writefsdword((unsigned int)&_except_list, v13[0]);
  return result;
}

//----- (00000538) --------------------------------------------------------
void __usercall _L57052(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 36));
}

//----- (000005B4) --------------------------------------------------------
const CHAR *__stdcall __RegDeleteAllSubKey(HKEY hKey, LPCSTR lpSubKey)
{
  const char *v2; // esi
  HKEY v3; // edi
  const CHAR *result; // eax
  const CHAR *v5; // eax
  const CHAR *v6; // eax
  char v7[12]; // [esp+Ch] [ebp-24h] BYREF
  char v8[12]; // [esp+18h] [ebp-18h] BYREF
  unsigned int v9[2]; // [esp+24h] [ebp-Ch] BYREF
  int v10; // [esp+2Ch] [ebp-4h]

  v10 = -1;
  v9[1] = (unsigned int)&_L57078;
  v9[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v9);
  v2 = lpSubKey;
  v3 = hKey;
  result = (const CHAR *)RegOpenKeyExA(hKey, lpSubKey, 0, 0x2001Fu, &hKey);
  lpSubKey = result;
  if ( !result )
  {
    while ( 1 )
    {
      __RegEnumKey((cString *)v7, hKey, 0, (DWORD)&lpSubKey);
      v10 = 0;
      if ( lpSubKey == (_BYTE *)&loc_FC + 7 )
        break;
      if ( !lpSubKey )
      {
        cString::cString((cString *)v8, v2, -1);
        LOBYTE(v10) = 1;
        cString::operator=^(v8, v7);
        v5 = (const CHAR *)cString::operator char const *(v8);
        lpSubKey = (LPCSTR)__RegDeleteAllSubKey(v3, v5);
        if ( !lpSubKey )
        {
          v6 = (const CHAR *)cString::operator char const *(v7);
          lpSubKey = (LPCSTR)RegDeleteKeyA(hKey, v6);
        }
        LOBYTE(v10) = 0;
        cString::~cString((cString *)v8);
      }
      v10 = -1;
      cString::~cString((cString *)v7);
      if ( lpSubKey )
        goto LABEL_10;
    }
    lpSubKey = 0;
    v10 = -1;
    cString::~cString((cString *)v7);
LABEL_10:
    RegCloseKey(hKey);
    result = lpSubKey;
  }
  __writefsdword((unsigned int)&_except_list, v9[0]);
  return result;
}
// 9D4: using guessed type int __thiscall cString::operator char const *(_DWORD);
// 9D8: using guessed type int __thiscall cString::operator=^(_DWORD, _DWORD);

//----- (000006D4) --------------------------------------------------------
void __usercall _L57068(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 36));
}

//----- (00000720) --------------------------------------------------------
LSTATUS __stdcall rRegDeleteAllSubKey(HKEY hKey, LPCSTR lpSubKey, LPCSTR a3)
{
  const char *v3; // esi
  LSTATUS result; // eax
  const CHAR *v5; // ebx
  const CHAR *v6; // eax
  const CHAR *v7; // esi
  int v8[3]; // [esp+Ch] [ebp-18h] BYREF
  unsigned int v9[2]; // [esp+18h] [ebp-Ch] BYREF
  int v10; // [esp+20h] [ebp-4h]

  v10 = -1;
  v9[1] = (unsigned int)&_L57088;
  v9[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v9);
  v3 = lpSubKey;
  result = RegOpenKeyExA(hKey, lpSubKey, 0, 0x2001Fu, (PHKEY)&lpSubKey);
  if ( !result )
  {
    cString::cString((cString *)v8, v3, -1);
    v5 = a3;
    v10 = 0;
    cString::operator=^(v8, a3);
    v6 = (const CHAR *)cString::operator char const *(v8);
    v7 = __RegDeleteAllSubKey(hKey, v6);
    if ( !v7 )
      v7 = (const CHAR *)RegDeleteKeyA((HKEY)lpSubKey, v5);
    RegCloseKey((HKEY)lpSubKey);
    v10 = -1;
    cString::~cString((cString *)v8);
    result = (LSTATUS)v7;
  }
  __writefsdword((unsigned int)&_except_list, v9[0]);
  return result;
}
// 9D4: using guessed type int __thiscall cString::operator char const *(_DWORD);
// 9DC: using guessed type int __thiscall cString::operator=^(_DWORD, _DWORD);

//----- (000007E0) --------------------------------------------------------
void __usercall _L57085(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 24));
}

//----- (0000081C) --------------------------------------------------------
cString *__stdcall rRegEnumValue(cString *a1, HKEY a2, HKEY hKey, LPCSTR lpSubKey, DWORD dwIndex)
{
  CHAR *v5; // eax
  cString *result; // eax
  HKEY v7; // [esp+4h] [ebp-20h] BYREF
  HKEY phkResult; // [esp+8h] [ebp-1Ch]
  char v9[4]; // [esp+Ch] [ebp-18h] BYREF
  unsigned int v10[2]; // [esp+18h] [ebp-Ch] BYREF
  int v11; // [esp+20h] [ebp-4h]

  v11 = -1;
  v10[1] = (unsigned int)&_L57100;
  v10[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v10);
  phkResult = 0;
  cString::cString((cString *)v9);
  v11 = 1;
  if ( !RegOpenKeyExA(a2, (LPCSTR)hKey, 0, 0x20019u, &v7) )
  {
    if ( !RegQueryInfoKeyA(v7, 0, 0, 0, 0, 0, 0, 0, (LPDWORD)&hKey, 0, 0, 0) )
    {
      hKey = (HKEY)((char *)hKey + 1);
      v5 = cString::GetBuffer((cString *)v9, (int)hKey);
      a2 = hKey;
      RegEnumValueA(v7, (DWORD)lpSubKey, v5, (LPDWORD)&a2, 0, (LPDWORD)dwIndex, 0, 0);
      cString::ReleaseBuffer((cString *)v9);
    }
    RegCloseKey(v7);
  }
  cString::cString(a1, (const struct cString *)v9);
  phkResult = (HKEY)(rRegGetString + 1);
  LOBYTE(v11) = 0;
  cString::~cString((cString *)v9);
  result = a1;
  __writefsdword((unsigned int)&_except_list, v10[0]);
  return result;
}

//----- (0000092C) --------------------------------------------------------
void __usercall _L57094(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 24));
}

// nfuncs=36 queued=15 decompiled=15 lumina nreq=0 worse=0 better=0
// ALL OK, 15 function(s) have been successfully decompiled

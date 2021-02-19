/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: Visual C++
*/

#include <windows.h>
#include <defs.h>

#include <stdarg.h>


//-------------------------------------------------------------------------
// Function declarations

#define __thiscall __cdecl // Test compile in C mode

cString *__thiscall cString::cString(cString *__hidden this); // idb
cString *__thiscall cString::cString(cString *__hidden this, LPCSTR lpString, int); // idb
cString *__thiscall cString::cString(cString *__hidden this, const struct cString *); // idb
cString *__thiscall cString::cString(cString *__hidden this, UINT uID, HINSTANCE hInstance); // idb
void __thiscall cString::~cString(cString *__hidden this); // idb
void __thiscall cString::Init(cString *__hidden this); // idb
void __thiscall cString::AllocAndCopy(cString *__hidden this, LPCSTR lpString2, int); // idb
char *__thiscall cString::GetBuffer(cString *__hidden this, int); // idb
// void __usercall _L57976(int a1@<ebp>);
void __thiscall cString::ReleaseBuffer(cString *__hidden this); // idb
void __thiscall cString::Append(cString *__hidden this, LPCSTR lpString); // idb
int cString::Format(cString *__hidden this, const char *Format, ...); // idb
int cString::Format(cString *__hidden this, UINT uID, HINSTANCE hInstance, ...); // idb
// void __usercall _L58000(int a1@<ebp>);
int __thiscall cString::LoadStringA(cString *__hidden this, UINT uID, HINSTANCE hInstance); // idb
void cString::FormatMessageA(cString *__hidden this, LPCVOID lpSource, ...); // idb
void cString::FormatMessageA(cString *__hidden this, UINT uID, HINSTANCE hInstance, ...); // idb
// void __usercall _L58017(int a1@<ebp>);
void __thiscall cString::Release(cString *__hidden this); // idb
char __thiscall cString::GetAt(cString *__hidden this, int); // idb
void __thiscall cString::SetAt(cString *__hidden this, int, char); // idb
int __thiscall cString::operator char const *(void *this);
cString *__thiscall cString::operator=(cString *this, int a2);
cString *__thiscall cString::operator=(cString *this, LPCSTR lpString);
cString *__stdcall operator+(cString *a1, struct cString *a2, int a3);
// void __usercall _L58045(int a1@<ebp>);
cString *__stdcall operator+(cString *a1, struct cString *a2, LPCSTR lpString);
// void __usercall _L58057(int a1@<ebp>);
cString *__stdcall operator+(cString *a1, LPCSTR lpString, int a3);
// void __usercall _L58069(int a1@<ebp>);
cString *__stdcall operator^(cString *a1, struct cString *a2, int a3);
// void __usercall _L58081(int a1@<ebp>);
cString *__stdcall operator^(cString *a1, struct cString *a2, LPCSTR lpString);
// void __usercall _L58105(int a1@<ebp>);
cString *__stdcall operator^(cString *a1, LPCSTR lpString, int a3);
// void __usercall _L58125(int a1@<ebp>);
cString *__thiscall cString::operator+=(cString *this, int a2);
cString *__thiscall cString::operator+=(cString *this, LPCSTR lpString);
cString *__thiscall cString::operator=^(cString *this, int a2);
cString *__thiscall cString::operator=^(cString *this, LPCSTR lpString);
int __thiscall cString::Find(cString *__hidden this, char, int); // idb
int __thiscall cString::Find(cString *__hidden this, const char *Substr, int); // idb
int __thiscall cString::FindNoCase(cString *__hidden this, LPCSTR lpString, int); // idb
int __thiscall cString::ReverseFind(cString *__hidden this, char); // idb
int __thiscall cString::FindOneOf(cString *__hidden this, const char *Control, int); // idb
cString *__thiscall cString::Mid(_DWORD *this, cString *a2, int a3, int a4);
// void __usercall _L58238(int a1@<ebp>);
cString *__thiscall cString::Right(_DWORD *this, cString *a2, int a3);
// void __usercall _L58262(int a1@<ebp>);
cString *__thiscall cString::Left(int this, cString *a2, int a3);
// void __usercall _L58285(int a1@<ebp>);
int __thiscall cString::Compare(cString *__hidden this, const char *); // idb
int __thiscall cString::CompareNoCase(cString *__hidden this, const char *); // idb
// int __stdcall lstrlenA(LPCSTR lpString);
// LPSTR __stdcall lstrcpynA(LPSTR lpString1, LPCSTR lpString2, int iMaxLength);
// void *__cdecl operator new(unsigned int); idb
// int __cdecl _vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList);
// int __stdcall LoadStringA(HINSTANCE hInstance, UINT uID, LPSTR lpBuffer, int cchBufferMax);
// HLOCAL __stdcall LocalFree(HLOCAL hMem);
// DWORD __stdcall FormatMessageA(DWORD dwFlags, LPCVOID lpSource, DWORD dwMessageId, DWORD dwLanguageId, LPSTR lpBuffer, DWORD nSize, va_list *Arguments);
// void __cdecl operator delete(void *); idb
// unsigned __int8 *__cdecl _mbschr(const unsigned __int8 *Str, unsigned int C);
// unsigned __int8 *__cdecl _mbsstr(const unsigned __int8 *Str, const unsigned __int8 *Substr);
// int __cdecl _strnicmp(const char *String1, const char *String2, size_t MaxCount);
// unsigned __int8 *__cdecl _mbsrchr(const unsigned __int8 *String, unsigned int C);
// unsigned __int8 *__cdecl _mbspbrk(const unsigned __int8 *String, const unsigned __int8 *Control);
// int __stdcall lstrcmpA(LPCSTR lpString1, LPCSTR lpString2);
// int __stdcall lstrcmpiA(LPCSTR lpString1, LPCSTR lpString2);

//-------------------------------------------------------------------------
// Data declarations

_UNKNOWN cc_pNull; // weak
_UNKNOWN _L57981; // weak
_UNKNOWN _L58004; // weak
_UNKNOWN _L58020; // weak
_UNKNOWN _L58051; // weak
_UNKNOWN _L58063; // weak
_UNKNOWN _L58075; // weak
_UNKNOWN _L58099; // weak
_UNKNOWN _L58119; // weak
_UNKNOWN _L58143; // weak
_UNKNOWN _L58256; // weak
_UNKNOWN _L58279; // weak
_UNKNOWN _L58298; // weak
// extern _UNKNOWN _except_list; weak


//----- (00000004) --------------------------------------------------------
cString *__thiscall cString::cString(cString *this)
{
  cString::Init(this);
  return this;
}

//----- (00000014) --------------------------------------------------------
cString *__thiscall cString::cString(cString *this, LPCSTR lpString, int a3)
{
  int v4; // eax

  cString::Init(this);
  if ( lpString )
  {
    v4 = a3;
    if ( a3 < 0 )
      v4 = lstrlenA(lpString);
    cString::AllocAndCopy(this, lpString, v4);
  }
  return this;
}

//----- (00000044) --------------------------------------------------------
cString *__thiscall cString::cString(cString *this, const struct cString *a2)
{
  const CHAR *v3; // eax
  int v5; // [esp-4h] [ebp-8h]

  cString::Init(this);
  v5 = *((_DWORD *)a2 + 2);
  v3 = (const CHAR *)cString::operator char const *(a2);
  cString::AllocAndCopy(this, v3, v5);
  return this;
}

//----- (00000074) --------------------------------------------------------
cString *__thiscall cString::cString(cString *this, UINT uID, HINSTANCE hInstance)
{
  cString::Init(this);
  cString::LoadStringA(this, uID, hInstance);
  return this;
}

//----- (000000A4) --------------------------------------------------------
void __thiscall cString::Init(cString *this)
{
  *(_DWORD *)this = &cc_pNull;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
}

//----- (000000B4) --------------------------------------------------------
void __thiscall cString::AllocAndCopy(cString *this, LPCSTR lpString2, int a3)
{
  CHAR *v4; // eax

  cString::Release(this);
  if ( a3 )
  {
    v4 = (CHAR *)operator new(a3 + 1);
    *(_DWORD *)this = v4;
    *((_DWORD *)this + 1) = a3 + 1;
    if ( lpString2 )
    {
      lstrcpynA(v4, lpString2, a3 + 1);
      *((_DWORD *)this + 2) = lstrlenA(*(LPCSTR *)this);
    }
    else
    {
      *v4 = 0;
      *((_DWORD *)this + 2) = 0;
    }
  }
}

//----- (00000114) --------------------------------------------------------
char *__thiscall cString::GetBuffer(cString *this, int a2)
{
  char *result; // eax
  const CHAR *v4; // eax
  char *v5; // esi
  char v6[12]; // [esp+0h] [ebp-18h] BYREF
  unsigned int v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+14h] [ebp-4h]

  v8 = -1;
  v7[1] = (unsigned int)&_L57981;
  v7[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v7);
  if ( *((_DWORD *)this + 1) < a2 )
  {
    cString::cString((cString *)v6, *(LPCSTR *)this, -1);
    v8 = 0;
    v4 = (const CHAR *)cString::operator char const *(v6);
    cString::AllocAndCopy(this, v4, a2);
    v5 = *(char **)this;
    v8 = -1;
    cString::~cString((cString *)v6);
    result = v5;
  }
  else
  {
    result = *(char **)this;
  }
  __writefsdword((unsigned int)&_except_list, v7[0]);
  return result;
}

//----- (000001A4) --------------------------------------------------------
void __usercall _L57976(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 24));
}

//----- (000001E0) --------------------------------------------------------
void __thiscall cString::ReleaseBuffer(cString *this)
{
  *((_DWORD *)this + 2) = lstrlenA(*(LPCSTR *)this);
}

//----- (00000200) --------------------------------------------------------
void __thiscall cString::Append(cString *this, LPCSTR lpString)
{
  int v3; // eax
  int v4; // ebp
  char *v5; // [esp+8h] [ebp-8h]

  if ( lpString )
  {
    if ( *(_DWORD *)this )
    {
      v4 = *((_DWORD *)this + 2) + lstrlenA(lpString);
      v5 = (char *)operator new(v4 + 1);
      qmemcpy(v5, *(const void **)this, *((_DWORD *)this + 2));
      qmemcpy(&v5[*((_DWORD *)this + 2)], lpString, lstrlenA(lpString) + 1);
      cString::Release(this);
      *((_DWORD *)this + 2) = v4;
      *(_DWORD *)this = v5;
      *((_DWORD *)this + 1) = v4 + 1;
    }
    else
    {
      v3 = lstrlenA(lpString);
      cString::AllocAndCopy(this, lpString, v3);
    }
  }
}

//----- (000002C0) --------------------------------------------------------
int cString::Format(cString *this, const char *Format, ...)
{
  int v2; // esi
  int result; // eax
  int v4; // edi
  va_list ArgList; // [esp+Ch] [ebp+Ch] BYREF

  va_start(ArgList, Format);
  if ( !Format || !*Format )
    return 0;
  v2 = 32;
  while ( 1 )
  {
    cString::AllocAndCopy(this, 0, v2);
    result = _vsnprintf(*(char *const *)this, v2, Format, ArgList);
    v4 = result;
    if ( result < v2 && result != -1 )
      break;
    v2 *= 2;
    if ( v2 > 4096 )
      return result;
  }
  if ( result >= -1 )
    *((_DWORD *)this + 2) = lstrlenA(*(LPCSTR *)this);
  else
    cString::Release(this);
  return v4;
}

//----- (00000340) --------------------------------------------------------
int cString::Format(cString *this, UINT uID, HINSTANCE hInstance, ...)
{
  int result; // eax
  int v4; // esi
  const char *v5; // eax
  int v6; // eax
  int v7; // edi
  char v8[12]; // [esp+0h] [ebp-18h] BYREF
  unsigned int v9[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-4h]
  va_list ArgList; // [esp+28h] [ebp+10h] BYREF

  va_start(ArgList, hInstance);
  v10 = -1;
  v9[1] = (unsigned int)&_L58004;
  v9[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v9);
  cString::cString((cString *)v8);
  v10 = 0;
  if ( cString::LoadStringA((cString *)v8, uID, hInstance) > 0 )
  {
    v4 = 32;
    while ( 1 )
    {
      cString::AllocAndCopy(this, 0, v4);
      v5 = (const char *)cString::operator char const *(v8);
      v6 = _vsnprintf(*(char *const *)this, v4, v5, ArgList);
      v7 = v6;
      if ( v6 < v4 && v6 != -1 )
        break;
      v4 *= 2;
      if ( v4 > 4096 )
        goto LABEL_11;
    }
    if ( v6 >= -1 )
      *((_DWORD *)this + 2) = lstrlenA(*(LPCSTR *)this);
    else
      cString::Release(this);
LABEL_11:
    v10 = -1;
    cString::~cString((cString *)v8);
    result = v7;
    __writefsdword((unsigned int)&_except_list, v9[0]);
  }
  else
  {
    v10 = -1;
    cString::~cString((cString *)v8);
    result = 0;
    __writefsdword((unsigned int)&_except_list, v9[0]);
  }
  return result;
}

//----- (00000430) --------------------------------------------------------
void __usercall _L58000(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 24));
}

//----- (0000046C) --------------------------------------------------------
int __thiscall cString::LoadStringA(cString *this, UINT uID, HINSTANCE hInstance)
{
  int i; // esi
  int v5; // edi
  int result; // eax
  int v7; // ebx

  for ( i = 32; ; i *= 2 )
  {
    v5 = 2 * i;
    cString::AllocAndCopy(this, 0, 2 * i);
    result = LoadStringA(hInstance, uID, *(LPSTR *)this, i);
    v7 = result;
    if ( result < i - 2 )
      break;
    if ( v5 > 4096 )
      return result;
  }
  if ( result )
  {
    *((_DWORD *)this + 2) = lstrlenA(*(LPCSTR *)this);
    result = v7;
  }
  else
  {
    cString::Release(this);
    result = 0;
  }
  return result;
}

//----- (000004EC) --------------------------------------------------------
void cString::FormatMessageA(cString *this, LPCVOID lpSource, ...)
{
  int v2; // eax
  CHAR Buffer[4]; // [esp+0h] [ebp-8h] BYREF
  va_list Arguments; // [esp+4h] [ebp-4h] BYREF
  va_list va; // [esp+14h] [ebp+Ch] BYREF

  va_start(va, lpSource);
  if ( lpSource )
  {
    if ( *(_BYTE *)lpSource )
    {
      va_copy(Arguments, va);
      if ( FormatMessageA(0x500u, lpSource, 0, 0, Buffer, 0, &Arguments) )
      {
        if ( *(_DWORD *)Buffer )
        {
          v2 = lstrlenA(*(LPCSTR *)Buffer);
          cString::AllocAndCopy(this, *(LPCSTR *)Buffer, v2);
          LocalFree(*(HLOCAL *)Buffer);
        }
      }
    }
  }
}

//----- (0000055C) --------------------------------------------------------
void cString::FormatMessageA(cString *this, UINT uID, HINSTANCE hInstance, ...)
{
  const void *v3; // eax
  int v4; // eax
  CHAR Buffer[4]; // [esp+0h] [ebp-20h] BYREF
  va_list Arguments; // [esp+4h] [ebp-1Ch] BYREF
  char v7[12]; // [esp+8h] [ebp-18h] BYREF
  unsigned int v8[2]; // [esp+14h] [ebp-Ch] BYREF
  int v9; // [esp+1Ch] [ebp-4h]
  va_list va; // [esp+30h] [ebp+10h] BYREF

  va_start(va, hInstance);
  v9 = -1;
  v8[1] = (unsigned int)&_L58020;
  v8[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v8);
  cString::cString((cString *)v7);
  v9 = 0;
  if ( cString::LoadStringA((cString *)v7, uID, hInstance) > 0 )
  {
    va_copy(Arguments, va);
    v3 = (const void *)cString::operator char const *(v7);
    if ( FormatMessageA(0x500u, v3, 0, 0, Buffer, 0, &Arguments) )
    {
      if ( *(_DWORD *)Buffer )
      {
        v4 = lstrlenA(*(LPCSTR *)Buffer);
        cString::AllocAndCopy(this, *(LPCSTR *)Buffer, v4);
        LocalFree(*(HLOCAL *)Buffer);
        Arguments = 0;
      }
    }
  }
  v9 = -1;
  cString::~cString((cString *)v7);
  __writefsdword((unsigned int)&_except_list, v8[0]);
}

//----- (0000062C) --------------------------------------------------------
void __usercall _L58017(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 24));
}

//----- (00000668) --------------------------------------------------------
void __thiscall cString::Release(cString *this)
{
  if ( *((_DWORD *)this + 1) )
  {
    if ( *(_DWORD *)this )
    {
      operator delete(*(void **)this);
      cString::Init(this);
    }
  }
}

//----- (00000698) --------------------------------------------------------
char __thiscall cString::GetAt(cString *this, int a2)
{
  char result; // al

  if ( a2 < *((_DWORD *)this + 2) )
    result = *(_BYTE *)(*(_DWORD *)this + a2);
  else
    result = 0;
  return result;
}

//----- (000006B8) --------------------------------------------------------
void __thiscall cString::SetAt(cString *this, int a2, char a3)
{
  if ( a2 < *((_DWORD *)this + 2) )
    *(_BYTE *)(*(_DWORD *)this + a2) = a3;
}

//----- (000006D8) --------------------------------------------------------
int __thiscall cString::operator char const *(void *this)
{
  return *(_DWORD *)this;
}

//----- (000006E8) --------------------------------------------------------
cString *__thiscall cString::operator=(cString *this, int a2)
{
  const CHAR *v3; // eax
  int v5; // [esp-4h] [ebp-8h]

  if ( *(_DWORD *)this != *(_DWORD *)a2 )
  {
    v5 = *(_DWORD *)(a2 + 8);
    v3 = (const CHAR *)cString::operator char const *((void *)a2);
    cString::AllocAndCopy(this, v3, v5);
  }
  return this;
}

//----- (00000718) --------------------------------------------------------
cString *__thiscall cString::operator=(cString *this, LPCSTR lpString)
{
  int v3; // eax

  if ( lpString )
  {
    v3 = lstrlenA(lpString);
    cString::AllocAndCopy(this, lpString, v3);
  }
  return this;
}

//----- (00000748) --------------------------------------------------------
cString *__stdcall operator+(cString *a1, struct cString *a2, int a3)
{
  const CHAR *v3; // eax
  cString *result; // eax
  char v5[12]; // [esp+4h] [ebp-18h] BYREF
  unsigned int v6[2]; // [esp+10h] [ebp-Ch] BYREF
  int v7; // [esp+18h] [ebp-4h]

  v7 = -1;
  v6[1] = (unsigned int)&_L58051;
  v6[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v6);
  cString::cString((cString *)v5, a2);
  v7 = 1;
  v3 = (const CHAR *)cString::operator char const *((void *)a3);
  cString::Append((cString *)v5, v3);
  cString::cString(a1, (const struct cString *)v5);
  LOBYTE(v7) = 0;
  cString::~cString((cString *)v5);
  result = a1;
  __writefsdword((unsigned int)&_except_list, v6[0]);
  return result;
}

//----- (000007D8) --------------------------------------------------------
void __usercall _L58045(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 24));
}

//----- (00000834) --------------------------------------------------------
cString *__stdcall operator+(cString *a1, struct cString *a2, LPCSTR lpString)
{
  cString *result; // eax
  char v4[12]; // [esp+4h] [ebp-18h] BYREF
  unsigned int v5[2]; // [esp+10h] [ebp-Ch] BYREF
  int v6; // [esp+18h] [ebp-4h]

  v6 = -1;
  v5[1] = (unsigned int)&_L58063;
  v5[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v5);
  cString::cString((cString *)v4, a2);
  v6 = 1;
  cString::Append((cString *)v4, lpString);
  cString::cString(a1, (const struct cString *)v4);
  LOBYTE(v6) = 0;
  cString::~cString((cString *)v4);
  result = a1;
  __writefsdword((unsigned int)&_except_list, v5[0]);
  return result;
}

//----- (000008B4) --------------------------------------------------------
void __usercall _L58057(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 24));
}

//----- (00000910) --------------------------------------------------------
cString *__stdcall operator+(cString *a1, LPCSTR lpString, int a3)
{
  const CHAR *v3; // eax
  cString *result; // eax
  char v5[12]; // [esp+4h] [ebp-18h] BYREF
  unsigned int v6[2]; // [esp+10h] [ebp-Ch] BYREF
  int v7; // [esp+18h] [ebp-4h]

  v7 = -1;
  v6[1] = (unsigned int)&_L58075;
  v6[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v6);
  cString::cString((cString *)v5, lpString, -1);
  v7 = 1;
  v3 = (const CHAR *)cString::operator char const *((void *)a3);
  cString::Append((cString *)v5, v3);
  cString::cString(a1, (const struct cString *)v5);
  LOBYTE(v7) = 0;
  cString::~cString((cString *)v5);
  result = a1;
  __writefsdword((unsigned int)&_except_list, v6[0]);
  return result;
}

//----- (000009A0) --------------------------------------------------------
void __usercall _L58069(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 24));
}

//----- (000009FC) --------------------------------------------------------
cString *__stdcall operator^(cString *a1, struct cString *a2, int a3)
{
  const CHAR *v3; // eax
  cString *result; // eax
  char v5[8]; // [esp+4h] [ebp-18h] BYREF
  int v6; // [esp+Ch] [ebp-10h]
  unsigned int v7[2]; // [esp+10h] [ebp-Ch] BYREF
  int v8; // [esp+18h] [ebp-4h]

  v8 = -1;
  v7[1] = (unsigned int)&_L58099;
  v7[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v7);
  cString::cString((cString *)v5, a2);
  v8 = 1;
  if ( v6 && *(_DWORD *)(a3 + 8) && cString::GetAt((cString *)v5, v6 - 1) != 92 )
    cString::Append((cString *)v5, "\\");
  v3 = (const CHAR *)cString::operator char const *((void *)a3);
  cString::Append((cString *)v5, v3);
  cString::cString(a1, (const struct cString *)v5);
  LOBYTE(v8) = 0;
  cString::~cString((cString *)v5);
  result = a1;
  __writefsdword((unsigned int)&_except_list, v7[0]);
  return result;
}

//----- (00000ABC) --------------------------------------------------------
void __usercall _L58081(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 24));
}

//----- (00000B1C) --------------------------------------------------------
cString *__stdcall operator^(cString *a1, struct cString *a2, LPCSTR lpString)
{
  cString *result; // eax
  char v4[8]; // [esp+4h] [ebp-18h] BYREF
  int v5; // [esp+Ch] [ebp-10h]
  unsigned int v6[2]; // [esp+10h] [ebp-Ch] BYREF
  int v7; // [esp+18h] [ebp-4h]

  v7 = -1;
  v6[1] = (unsigned int)&_L58119;
  v6[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v6);
  cString::cString((cString *)v4, a2);
  v7 = 1;
  if ( v5 && lpString && lstrlenA(lpString) && cString::GetAt((cString *)v4, v5 - 1) != 92 )
    cString::Append((cString *)v4, "\\");
  cString::Append((cString *)v4, lpString);
  cString::cString(a1, (const struct cString *)v4);
  LOBYTE(v7) = 0;
  cString::~cString((cString *)v4);
  result = a1;
  __writefsdword((unsigned int)&_except_list, v6[0]);
  return result;
}

//----- (00000BDC) --------------------------------------------------------
void __usercall _L58105(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 24));
}

//----- (00000C38) --------------------------------------------------------
cString *__stdcall operator^(cString *a1, LPCSTR lpString, int a3)
{
  const CHAR *v3; // eax
  cString *result; // eax
  char v5[8]; // [esp+4h] [ebp-18h] BYREF
  int v6; // [esp+Ch] [ebp-10h]
  unsigned int v7[2]; // [esp+10h] [ebp-Ch] BYREF
  int v8; // [esp+18h] [ebp-4h]

  v8 = -1;
  v7[1] = (unsigned int)&_L58143;
  v7[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v7);
  cString::cString((cString *)v5, lpString, -1);
  v8 = 1;
  if ( v6 && *(_DWORD *)(a3 + 8) && cString::GetAt((cString *)v5, v6 - 1) != 92 )
    cString::Append((cString *)v5, "\\");
  v3 = (const CHAR *)cString::operator char const *((void *)a3);
  cString::Append((cString *)v5, v3);
  cString::cString(a1, (const struct cString *)v5);
  LOBYTE(v8) = 0;
  cString::~cString((cString *)v5);
  result = a1;
  __writefsdword((unsigned int)&_except_list, v7[0]);
  return result;
}

//----- (00000CF8) --------------------------------------------------------
void __usercall _L58125(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 24));
}

//----- (00000D54) --------------------------------------------------------
cString *__thiscall cString::operator+=(cString *this, int a2)
{
  const CHAR *v3; // eax

  if ( *(_DWORD *)this != cString::operator char const *((void *)a2) )
  {
    v3 = (const CHAR *)cString::operator char const *((void *)a2);
    cString::Append(this, v3);
  }
  return this;
}

//----- (00000D84) --------------------------------------------------------
cString *__thiscall cString::operator+=(cString *this, LPCSTR lpString)
{
  if ( *(LPCSTR *)this != lpString )
    cString::Append(this, lpString);
  return this;
}

//----- (00000DA4) --------------------------------------------------------
cString *__thiscall cString::operator=^(cString *this, int a2)
{
  int v3; // eax
  const CHAR *v4; // eax

  if ( *(_DWORD *)this != cString::operator char const *((void *)a2) )
  {
    v3 = *((_DWORD *)this + 2);
    if ( v3 && *(_DWORD *)(a2 + 8) && cString::GetAt(this, v3 - 1) != 92 )
      cString::Append(this, "\\");
    v4 = (const CHAR *)cString::operator char const *((void *)a2);
    cString::Append(this, v4);
  }
  return this;
}

//----- (00000DF4) --------------------------------------------------------
cString *__thiscall cString::operator=^(cString *this, LPCSTR lpString)
{
  if ( *(LPCSTR *)this != lpString )
  {
    if ( *((_DWORD *)this + 2)
      && lpString
      && lstrlenA(lpString)
      && cString::GetAt(this, *((_DWORD *)this + 2) - 1) != 92 )
    {
      cString::Append(this, "\\");
    }
    cString::Append(this, lpString);
  }
  return this;
}

//----- (00000E44) --------------------------------------------------------
int __thiscall cString::Find(cString *this, char a2, int a3)
{
  unsigned __int8 *v4; // eax
  int result; // eax

  if ( a3 >= 0
    && a3 < *((_DWORD *)this + 2)
    && (v4 = _mbschr((const unsigned __int8 *)(a3 + *(_DWORD *)this), (unsigned __int8)a2)) != 0 )
  {
    result = (int)&v4[-*(_DWORD *)this];
  }
  else
  {
    result = -1;
  }
  return result;
}

//----- (00000E84) --------------------------------------------------------
int __thiscall cString::Find(cString *this, const char *Substr, int a3)
{
  unsigned __int8 *v4; // eax
  int result; // eax

  if ( a3 >= 0
    && a3 < *((_DWORD *)this + 2)
    && Substr
    && *Substr
    && (v4 = _mbsstr((const unsigned __int8 *)(a3 + *(_DWORD *)this), (const unsigned __int8 *)Substr)) != 0 )
  {
    result = (int)&v4[-*(_DWORD *)this];
  }
  else
  {
    result = -1;
  }
  return result;
}

//----- (00000EC4) --------------------------------------------------------
int __thiscall cString::FindNoCase(cString *this, LPCSTR lpString, int a3)
{
  int v3; // esi
  int v5; // edi

  v3 = a3;
  if ( a3 < 0 )
    return -1;
  if ( a3 >= *((_DWORD *)this + 2) )
    return -1;
  if ( !lpString )
    return -1;
  if ( !*lpString )
    return -1;
  v5 = lstrlenA(lpString);
  if ( a3 > *((_DWORD *)this + 2) - v5 )
    return -1;
  while ( _strnicmp((const char *)(v3 + *(_DWORD *)this), lpString, v5) )
  {
    if ( ++v3 > *((_DWORD *)this + 2) - v5 )
      return -1;
  }
  return v3;
}

//----- (00000F34) --------------------------------------------------------
int __thiscall cString::ReverseFind(cString *this, char a2)
{
  unsigned __int8 *v3; // eax
  int result; // eax

  v3 = _mbsrchr(*(const unsigned __int8 **)this, (unsigned __int8)a2);
  if ( v3 )
    result = (int)&v3[-*(_DWORD *)this];
  else
    result = -1;
  return result;
}

//----- (00000F64) --------------------------------------------------------
int __thiscall cString::FindOneOf(cString *this, const char *Control, int a3)
{
  unsigned __int8 *v4; // eax
  int result; // eax

  if ( a3 >= 0
    && a3 < *((_DWORD *)this + 2)
    && Control
    && *Control
    && (v4 = _mbspbrk((const unsigned __int8 *)(a3 + *(_DWORD *)this), (const unsigned __int8 *)Control)) != 0 )
  {
    result = (int)&v4[-*(_DWORD *)this];
  }
  else
  {
    result = -1;
  }
  return result;
}

//----- (00000FA4) --------------------------------------------------------
cString *__thiscall cString::Mid(_DWORD *this, cString *a2, int a3, int a4)
{
  int v4; // edx
  int v5; // eax
  int v6; // esi
  cString *result; // eax
  char v8[12]; // [esp+4h] [ebp-18h] BYREF
  unsigned int v9[2]; // [esp+10h] [ebp-Ch] BYREF
  int v10; // [esp+18h] [ebp-4h]

  v10 = -1;
  v9[1] = (unsigned int)&_L58256;
  v9[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v9);
  v4 = a3;
  if ( a3 < 0 )
    v4 = 0;
  v5 = a4;
  if ( a4 < 0 )
    v5 = 0;
  v6 = this[2];
  if ( v4 + v5 > v6 )
    v5 = v6 - v4;
  if ( v4 > v6 )
    v5 = 0;
  cString::cString((cString *)v8, (LPCSTR)(v4 + *this), v5);
  v10 = 1;
  cString::cString(a2, (const struct cString *)v8);
  LOBYTE(v10) = 0;
  cString::~cString((cString *)v8);
  result = a2;
  __writefsdword((unsigned int)&_except_list, v9[0]);
  return result;
}

//----- (00001044) --------------------------------------------------------
void __usercall _L58238(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 24));
}

//----- (000010A0) --------------------------------------------------------
cString *__thiscall cString::Right(_DWORD *this, cString *a2, int a3)
{
  int v3; // eax
  cString *result; // eax
  char v5[12]; // [esp+4h] [ebp-18h] BYREF
  unsigned int v6[2]; // [esp+10h] [ebp-Ch] BYREF
  int v7; // [esp+18h] [ebp-4h]

  v7 = -1;
  v6[1] = (unsigned int)&_L58279;
  v6[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v6);
  v3 = a3;
  if ( a3 >= 0 )
  {
    if ( a3 > this[2] )
      v3 = this[2];
  }
  else
  {
    v3 = 0;
  }
  cString::cString((cString *)v5, (LPCSTR)(this[2] + *this - v3), v3);
  v7 = 1;
  cString::cString(a2, (const struct cString *)v5);
  LOBYTE(v7) = 0;
  cString::~cString((cString *)v5);
  result = a2;
  __writefsdword((unsigned int)&_except_list, v6[0]);
  return result;
}

//----- (00001130) --------------------------------------------------------
void __usercall _L58262(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 24));
}

//----- (0000118C) --------------------------------------------------------
cString *__thiscall cString::Left(int this, cString *a2, int a3)
{
  int v3; // eax
  cString *result; // eax
  char v5[12]; // [esp+4h] [ebp-18h] BYREF
  unsigned int v6[2]; // [esp+10h] [ebp-Ch] BYREF
  int v7; // [esp+18h] [ebp-4h]

  v7 = -1;
  v6[1] = (unsigned int)&_L58298;
  v6[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v6);
  v3 = a3;
  if ( a3 >= 0 )
  {
    if ( a3 > *(_DWORD *)(this + 8) )
      v3 = *(_DWORD *)(this + 8);
  }
  else
  {
    v3 = 0;
  }
  cString::cString((cString *)v5, *(LPCSTR *)this, v3);
  v7 = 1;
  cString::cString(a2, (const struct cString *)v5);
  LOBYTE(v7) = 0;
  cString::~cString((cString *)v5);
  result = a2;
  __writefsdword((unsigned int)&_except_list, v6[0]);
  return result;
}

//----- (0000121C) --------------------------------------------------------
void __usercall _L58285(int a1@<ebp>)
{
  cString::~cString((cString *)(a1 - 24));
}

//----- (00001278) --------------------------------------------------------
int __thiscall cString::Compare(cString *this, const char *lpString2)
{
  int result; // eax

  if ( lpString2 )
    result = lstrcmpA(*(LPCSTR *)this, lpString2);
  else
    result = 1;
  return result;
}

//----- (00001298) --------------------------------------------------------
int __thiscall cString::CompareNoCase(cString *this, const char *lpString2)
{
  int result; // eax

  if ( lpString2 )
    result = lstrcmpiA(*(LPCSTR *)this, lpString2);
  else
    result = 1;
  return result;
}

// nfuncs=70 queued=52 decompiled=52 lumina nreq=0 worse=0 better=0
// ALL OK, 52 function(s) have been successfully decompiled

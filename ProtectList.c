/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: Visual C++
*/

#include <windows.h>
#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

#define __thiscall __cdecl // Test compile in C mode

CProtectFile *__thiscall CProtectFile::CProtectFile(CProtectFile *this);
CProtectFile *__thiscall CProtectFile::`scalar deleting destructor'(CProtectFile *this, char a2);
const unsigned __int8 *__thiscall CProtectFile::GetAttribute(CProtectFile *this, const char *String);
CProtectFile *__thiscall CProtectFile::CProtectFile(CProtectFile *__hidden this, const struct _PTFILE_ITEM *); // idb
void __thiscall CProtectFile::~CProtectFile(CProtectFile *__hidden this); // idb
DWORD __thiscall CProtectFile::GetFileVersion(CProtectFile *this, const char *lptstrFilename);
void __thiscall CProtectFile::BuildFileItem(CProtectFile *__hidden this, struct _PTFILE_ITEM *); // idb
CProtectList *__thiscall CProtectList::CProtectList(CProtectList *__hidden this); // idb
CProtectList *__thiscall CProtectList::`scalar deleting destructor'(CProtectList *this, char a2);
void __thiscall CProtectList::~CProtectList(CProtectList *__hidden this); // idb
// int __usercall _L62122@<eax>(int a1@<ebp>);
unsigned int __thiscall CProtectList::LoadProtectListFile(CProtectList *__hidden this, const char *); // idb
// void __usercall _L62449(int a1@<ebp>);
int __thiscall CProtectList::VerityList(CProtectList *__hidden this, LPCSTR lpString2, int); // idb
// void __usercall _L62701(int a1@<ebp>);
void __thiscall CProtectList::ClearList(CProtectList *__hidden this); // idb
void __thiscall CProtectList::MakePassword(CProtectList *__hidden this, const char *String, char *); // idb
BOOL __thiscall CProtectList::GetLastWriteTime(CProtectList *this, HANDLE hFile, struct _SYSTEMTIME *lpSystemTime);
int __thiscall std::list<CProtectFile *>::~list<CProtectFile *>(int this);
// void __cdecl operator delete(void *); idb
// void __stdcall ValueToHex(const unsigned __int8 *, unsigned int, char *); idb
// unsigned __int8 *__stdcall MDbinary(const char *); idb
// BOOL __stdcall CloseHandle(HANDLE hObject);
// DWORD __stdcall GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh);
// HANDLE __stdcall CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
// LPSTR __stdcall lstrcpyA(LPSTR lpString1, LPCSTR lpString2);
// void *__cdecl operator new(unsigned int); idb
// int __stdcall lstrlenA(LPCSTR lpString);
// unsigned __int8 *__cdecl _mbsrchr(const unsigned __int8 *String, unsigned int C);
// void __cdecl free(void *Block);
// int _wsprintfA(LPSTR, LPCSTR, ...);
// BOOL __stdcall VerQueryValueA(LPCVOID pBlock, LPCSTR lpSubBlock, LPVOID *lplpBuffer, PUINT puLen);
// BOOL __stdcall GetFileVersionInfoA(LPCSTR lptstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData);
// void *__cdecl malloc(size_t Size);
// DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename, LPDWORD lpdwHandle);
// char *__cdecl strncpy(char *Destination, const char *Source, size_t Count);
// int __cdecl rand();
// void __thiscall CBlowfish::Decrypt(CBlowfish *__hidden this, void *, unsigned int); idb
// unsigned int __stdcall static CCrc32Static::BufferCrc32(const unsigned __int8 *, unsigned int, unsigned int *); idb
// void __thiscall CBlowfish::SetPassword(CBlowfish *__hidden this, char *); idb
// CBlowfish *__thiscall CBlowfish::CBlowfish(CBlowfish *__hidden this); idb
// BOOL __stdcall ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);
// BOOL __stdcall DeleteFileA(LPCSTR lpFileName);
// int __stdcall lstrcmpA(LPCSTR lpString1, LPCSTR lpString2);
// int __stdcall IsFileExist(const char *); idb
// LPSTR __stdcall lstrcatA(LPSTR lpString1, LPCSTR lpString2);
// unsigned __int8 *__cdecl _mbsupr(unsigned __int8 *String);
// BOOL __stdcall FileTimeToSystemTime(const FILETIME *lpFileTime, LPSYSTEMTIME lpSystemTime);
// BOOL __stdcall FileTimeToLocalFileTime(const FILETIME *lpFileTime, LPFILETIME lpLocalFileTime);
// BOOL __stdcall GetFileTime(HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime);

//-------------------------------------------------------------------------
// Data declarations

void *CProtectFile::`vftable' = &CProtectFile::`vector deleting destructor'; // weak
void *CProtectList::`vftable' = &CProtectList::`vector deleting destructor'; // weak
_UNKNOWN _L62431; // weak
_UNKNOWN _L62673; // weak
_UNKNOWN _L62812; // weak
// extern _UNKNOWN _except_list; weak


//----- (00000000) --------------------------------------------------------
CProtectFile *__thiscall CProtectFile::CProtectFile(CProtectFile *this)
{
  *(_DWORD *)this = &CProtectFile::`vftable';
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  memset((char *)this + 20, 0, 0x28u);
  *((_BYTE *)this + 60) = 0;
  return this;
}
// 30: using guessed type void *CProtectFile::`vftable';

//----- (00000034) --------------------------------------------------------
CProtectFile *__thiscall CProtectFile::`scalar deleting destructor'(CProtectFile *this, char a2)
{
  CProtectFile::~CProtectFile(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

//----- (00000054) --------------------------------------------------------
const unsigned __int8 *__thiscall CProtectFile::GetAttribute(CProtectFile *this, const char *String)
{
  unsigned __int8 *v3; // eax
  const CHAR *v4; // ebx
  const unsigned __int8 *result; // eax
  unsigned int v6; // edi
  void *v7; // eax
  HANDLE v8; // eax
  void *v9; // edi
  DWORD v10; // eax

  v3 = _mbsrchr((const unsigned __int8 *)String, 0x5Cu);
  v4 = (const CHAR *)(v3 + 1);
  if ( v3 == (unsigned __int8 *)-1 )
    return 0;
  v6 = lstrlenA((LPCSTR)v3 + 1) + 1;
  v7 = operator new(v6);
  *((_DWORD *)this + 2) = v7;
  memset(v7, 0, v6);
  lstrcpyA(*((LPSTR *)this + 2), v4);
  if ( !CProtectFile::GetFileVersion(this, String) )
    *((_DWORD *)this + 3) = 0;
  v8 = CreateFileA(String, 0, 1u, 0, 3u, 0, 0);
  v9 = v8;
  if ( v8 == (HANDLE)-1 )
    return 0;
  v10 = GetFileSize(v8, 0);
  *((_DWORD *)this + 4) = v10;
  if ( v10 == -1 )
    return 0;
  CloseHandle(v9);
  result = MDbinary(String);
  if ( result )
  {
    ValueToHex(result, 0x14u, (char *)this + 20);
    result = (_BYTE *)(CProtectFile::CProtectFile + 1);
  }
  return result;
}

//----- (00000134) --------------------------------------------------------
CProtectFile *__thiscall CProtectFile::CProtectFile(CProtectFile *this, const struct _PTFILE_ITEM *a2)
{
  unsigned int v3; // edi
  void *v4; // eax
  unsigned int v5; // edi
  void *v6; // eax
  CProtectFile *result; // eax

  *(_DWORD *)this = &CProtectFile::`vftable';
  *((_DWORD *)this + 1) = *(_DWORD *)a2;
  v3 = lstrlenA((LPCSTR)a2 + 4) + 1;
  v4 = operator new(v3);
  *((_DWORD *)this + 2) = v4;
  memset(v4, 0, v3);
  lstrcpyA(*((LPSTR *)this + 2), (LPCSTR)a2 + 4);
  v5 = lstrlenA((LPCSTR)a2 + 260) + 1;
  v6 = operator new(v5);
  *((_DWORD *)this + 3) = v6;
  memset(v6, 0, v5);
  lstrcpyA(*((LPSTR *)this + 3), (LPCSTR)a2 + 260);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 73);
  result = this;
  qmemcpy((char *)this + 20, (char *)a2 + 296, 0x28u);
  *((_BYTE *)this + 60) = 0;
  return result;
}
// 30: using guessed type void *CProtectFile::`vftable';

//----- (000001F4) --------------------------------------------------------
void __thiscall CProtectFile::~CProtectFile(CProtectFile *this)
{
  void *v2; // eax

  v2 = (void *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &CProtectFile::`vftable';
  if ( v2 )
  {
    operator delete(v2);
    *((_DWORD *)this + 2) = 0;
  }
  if ( *((_DWORD *)this + 3) )
  {
    operator delete(*((void **)this + 3));
    *((_DWORD *)this + 3) = 0;
  }
}
// 30: using guessed type void *CProtectFile::`vftable';

//----- (00000234) --------------------------------------------------------
DWORD __thiscall CProtectFile::GetFileVersion(CProtectFile *this, const char *lptstrFilename)
{
  DWORD result; // eax
  DWORD v3; // esi
  void *v4; // edi
  DWORD v5; // ebp
  CHAR *v6; // eax
  const CHAR *v7; // edx
  LPVOID lpBuffer; // [esp+8h] [ebp-214h] BYREF
  unsigned int puLen; // [esp+Ch] [ebp-210h] BYREF
  unsigned int v10; // [esp+10h] [ebp-20Ch] BYREF
  CProtectFile *v11; // [esp+14h] [ebp-208h]
  DWORD dwHandle; // [esp+18h] [ebp-204h] BYREF
  CHAR SubBlock[512]; // [esp+1Ch] [ebp-200h] BYREF

  v11 = this;
  result = GetFileVersionInfoSizeA(lptstrFilename, &dwHandle);
  v3 = result;
  if ( result )
  {
    v4 = malloc(result);
    v5 = 0;
    if ( GetFileVersionInfoA(lptstrFilename, dwHandle, v3, v4) )
    {
      if ( VerQueryValueA(v4, "\\VarFileInfo\\Translation", &lpBuffer, &puLen) )
      {
        if ( puLen )
        {
          _wsprintfA(
            SubBlock,
            "\\StringFileInfo\\%04hX%04hX\\FileVersion",
            *(unsigned __int16 *)lpBuffer,
            HIWORD(*(_DWORD *)lpBuffer));
          if ( VerQueryValueA(v4, SubBlock, &lpBuffer, &v10) )
          {
            if ( v10 )
            {
              if ( lpBuffer )
              {
                v6 = (CHAR *)operator new(v10 + 1);
                v7 = (const CHAR *)lpBuffer;
                *((_DWORD *)v11 + 3) = v6;
                lstrcpyA(v6, v7);
                v5 = 1;
              }
            }
          }
        }
      }
    }
    free(v4);
    result = v5;
  }
  return result;
}

//----- (00000378) --------------------------------------------------------
void __thiscall CProtectFile::BuildFileItem(CProtectFile *this, struct _PTFILE_ITEM *a2)
{
  int i; // esi
  const char *v4; // eax
  int j; // esi

  *(_DWORD *)a2 = *((_DWORD *)this + 1);
  strcpy((char *)a2 + 4, *((const char **)this + 2));
  for ( i = lstrlenA(*((LPCSTR *)this + 2)) + 1; i < 256; *((_BYTE *)a2 + i + 3) = rand() % 255 )
    ++i;
  v4 = (const char *)*((_DWORD *)this + 3);
  if ( v4 )
  {
    strncpy((char *)a2 + 260, v4, 0x20u);
  }
  else
  {
    for ( j = 1; j < 32; *((_BYTE *)a2 + j + 259) = rand() % 255 )
      ++j;
  }
  *((_DWORD *)a2 + 73) = *((_DWORD *)this + 4);
  qmemcpy((char *)a2 + 296, (char *)this + 20, 0x28u);
}

//----- (00000438) --------------------------------------------------------
CProtectList *__thiscall CProtectList::CProtectList(CProtectList *this)
{
  _DWORD *v2; // eax
  char v4; // [esp+7h] [ebp-1h]

  *((_BYTE *)this + 4) = v4;
  v2 = operator new(0xCu);
  *v2 = v2;
  v2[1] = v2;
  *((_DWORD *)this + 2) = v2;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &CProtectList::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  return this;
}
// 442: variable 'v4' is possibly undefined
// 488: using guessed type void *CProtectList::`vftable';

//----- (0000048C) --------------------------------------------------------
CProtectList *__thiscall CProtectList::`scalar deleting destructor'(CProtectList *this, char a2)
{
  CProtectList::~CProtectList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

//----- (000004AC) --------------------------------------------------------
void __thiscall CProtectList::~CProtectList(CProtectList *this)
{
  _DWORD **v2; // ebx
  _DWORD *i; // esi
  _DWORD **v4; // eax
  unsigned int v5; // ecx
  int v6[3]; // [esp+4h] [ebp-Ch] BYREF

  v6[1] = (int)&_L62431;
  v6[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v6);
  *(_DWORD *)this = &CProtectList::`vftable';
  v6[2] = 0;
  CProtectList::ClearList(this);
  v2 = (_DWORD **)*((_DWORD *)this + 2);
  for ( i = *v2; i != v2; --*((_DWORD *)this + 3) )
  {
    v4 = (_DWORD **)i;
    i = (_DWORD *)*i;
    *v4[1] = *v4;
    (*v4)[1] = v4[1];
    operator delete(v4);
  }
  operator delete(*((void **)this + 2));
  v5 = v6[0];
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  __writefsdword((unsigned int)&_except_list, v5);
}
// 488: using guessed type void *CProtectList::`vftable';

//----- (0000053C) --------------------------------------------------------
int __usercall _L62122@<eax>(int a1@<ebp>)
{
  return std::list<CProtectFile *>::~list<CProtectFile *>(*(_DWORD *)(a1 - 16) + 4);
}

//----- (0000057C) --------------------------------------------------------
unsigned int __thiscall CProtectList::LoadProtectListFile(CProtectList *this, const char *lpFileName)
{
  void *v2; // esp
  HANDLE v4; // ebp
  CProtectFile *v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  CProtectFile **v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // edx
  unsigned int result; // eax
  CProtectFile *v16; // [esp+18h] [ebp-11F0h]
  DWORD NumberOfBytesRead; // [esp+1Ch] [ebp-11ECh] BYREF
  unsigned int v18; // [esp+20h] [ebp-11E8h]
  unsigned int v19; // [esp+24h] [ebp-11E4h] BYREF
  int Buffer; // [esp+28h] [ebp-11E0h] BYREF
  unsigned int v21; // [esp+2Ch] [ebp-11DCh]
  unsigned int v22; // [esp+30h] [ebp-11D8h]
  int v23[3]; // [esp+34h] [ebp-11D4h] BYREF
  char v24[36]; // [esp+40h] [ebp-11C8h] BYREF
  unsigned __int8 v25[336]; // [esp+64h] [ebp-11A4h] BYREF
  char v26[4168]; // [esp+1B4h] [ebp-1054h] BYREF
  unsigned int v27[2]; // [esp+11FCh] [ebp-Ch] BYREF
  int v28; // [esp+1204h] [ebp-4h]

  v28 = -1;
  v27[1] = (unsigned int)&_L62673;
  v27[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v27);
  v2 = alloca(4580);
  CProtectList::ClearList(this);
  v4 = CreateFileA(lpFileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
  if ( v4 == (HANDLE)-1 )
    goto LABEL_19;
  ReadFile(v4, &Buffer, 0xCu, &NumberOfBytesRead, 0);
  if ( (_WORD)Buffer != 20550 )
    goto LABEL_19;
  CProtectList::MakePassword(this, lpFileName, v24);
  CBlowfish::CBlowfish((CBlowfish *)v26);
  CBlowfish::SetPassword((CBlowfish *)v26, v24);
  v19 = 0;
  v18 = 0;
  if ( v21 )
  {
    do
    {
      ReadFile(v4, v25, 0x150u, &NumberOfBytesRead, 0);
      CCrc32Static::BufferCrc32(v25, 0x150u, &v19);
      CBlowfish::Decrypt((CBlowfish *)v26, v25, 0x150u);
      v5 = (CProtectFile *)operator new(0x40u);
      v28 = 0;
      if ( v5 )
        v16 = CProtectFile::CProtectFile(v5, (const struct _PTFILE_ITEM *)v25);
      else
        v16 = 0;
      v6 = (_DWORD *)*((_DWORD *)this + 2);
      v28 = -1;
      v7 = (_DWORD *)v6[1];
      v8 = operator new(0xCu);
      v9 = v6;
      if ( !v6 )
        v9 = v8;
      *v8 = v9;
      if ( !v7 )
        v7 = v8;
      v8[1] = v7;
      v6[1] = v8;
      *(_DWORD *)v8[1] = v8;
      v10 = (CProtectFile **)(v8 + 2);
      if ( v10 )
        *v10 = v16;
      v11 = v21;
      v12 = v18 + 1;
      ++*((_DWORD *)this + 3);
      v18 = v12;
    }
    while ( v12 < v11 );
  }
  if ( ReadFile(v4, v23, 0xCu, &NumberOfBytesRead, 0) && NumberOfBytesRead == 12 )
  {
    v13 = v23[1];
    *((_DWORD *)this + 4) = v23[0];
    v14 = v23[2];
    *((_DWORD *)this + 5) = v13;
    *((_DWORD *)this + 6) = v14;
    CProtectList::GetLastWriteTime(this, v4, (struct _SYSTEMTIME *)((char *)this + 28));
  }
  CloseHandle(v4);
  result = v22;
  if ( v19 != v22 )
  {
    CProtectList::ClearList(this);
LABEL_19:
    result = 0;
  }
  __writefsdword((unsigned int)&_except_list, v27[0]);
  return result;
}

//----- (0000078C) --------------------------------------------------------
void __usercall _L62449(int a1@<ebp>)
{
  operator delete(*(void **)(a1 - 4592));
}

//----- (000007CC) --------------------------------------------------------
int __thiscall CProtectList::VerityList(CProtectList *this, LPCSTR lpString2, int a3)
{
  CProtectList *v3; // esi
  __int16 v4; // ax
  int result; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // ebp
  int v8; // edi
  const CHAR *v9; // esi
  int v11; // [esp+8h] [ebp-158h]
  int v12; // [esp+Ch] [ebp-154h]
  char v13[12]; // [esp+10h] [ebp-150h] BYREF
  LPCSTR v14; // [esp+1Ch] [ebp-144h]
  int v15; // [esp+20h] [ebp-140h]
  char v16[44]; // [esp+24h] [ebp-13Ch] BYREF
  CHAR String1[260]; // [esp+50h] [ebp-110h] BYREF
  unsigned int v18[2]; // [esp+154h] [ebp-Ch] BYREF
  int v19; // [esp+15Ch] [ebp-4h]

  v19 = -1;
  v18[1] = (unsigned int)&_L62812;
  v18[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v18);
  v3 = this;
  v4 = *((_WORD *)this + 8);
  if ( !v4
    || v4 == *((_WORD *)this + 14)
    && *((_WORD *)this + 9) == *((_WORD *)this + 15)
    && *((_WORD *)this + 10) == *((_WORD *)this + 17) )
  {
    v6 = (_DWORD *)*((_DWORD *)this + 2);
    v12 = 1;
    v11 = 0;
    v7 = (_DWORD *)*v6;
    if ( (_DWORD *)*v6 == v6 )
    {
LABEL_22:
      result = 0;
    }
    else
    {
      do
      {
        v8 = v7[2];
        lstrcpyA(String1, lpString2);
        lstrcatA(String1, *(LPCSTR *)(v8 + 8));
        CProtectFile::CProtectFile((CProtectFile *)v13);
        v19 = 0;
        if ( IsFileExist(String1) )
        {
          CProtectFile::GetAttribute((CProtectFile *)v13, String1);
          if ( strcmp(v16, (const char *)(v8 + 20))
            || v15 != *(_DWORD *)(v8 + 16)
            || (v9 = *(const CHAR **)(v8 + 12)) != 0 && lstrlenA(*(LPCSTR *)(v8 + 12)) > 0 && lstrcmpA(v9, v14) )
          {
            v12 = 0;
            if ( *(_DWORD *)(v8 + 4) == 1 )
            {
              v11 = 1;
            }
            else if ( a3 == 1 )
            {
              DeleteFileA(String1);
            }
          }
          v3 = this;
        }
        else if ( *(_DWORD *)(v8 + 4) == 1 )
        {
          CProtectFile::~CProtectFile((CProtectFile *)v13);
          result = 3;
          goto LABEL_25;
        }
        v19 = -1;
        CProtectFile::~CProtectFile((CProtectFile *)v13);
        v7 = (_DWORD *)*v7;
      }
      while ( v7 != *((_DWORD **)v3 + 2) );
      if ( v12 == 1 )
        goto LABEL_22;
      result = 2 - (v11 != 1);
    }
  }
  else
  {
    result = 4;
  }
LABEL_25:
  __writefsdword((unsigned int)&_except_list, v18[0]);
  return result;
}

//----- (0000098C) --------------------------------------------------------
void __usercall _L62701(int a1@<ebp>)
{
  CProtectFile::~CProtectFile((CProtectFile *)(a1 - 336));
}

//----- (000009CC) --------------------------------------------------------
void __thiscall CProtectList::ClearList(CProtectList *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  _DWORD **v5; // ebx
  _DWORD *i; // esi
  _DWORD **v7; // eax

  v2 = (_DWORD *)*((_DWORD *)this + 2);
  v3 = (_DWORD *)*v2;
  if ( (_DWORD *)*v2 != v2 )
  {
    do
    {
      v4 = (void (__thiscall ***)(_DWORD, int))v3[2];
      if ( v4 )
        (**v4)(v4, 1);
      v3 = (_DWORD *)*v3;
    }
    while ( v3 != *((_DWORD **)this + 2) );
  }
  v5 = (_DWORD **)*((_DWORD *)this + 2);
  for ( i = *v5; i != v5; --*((_DWORD *)this + 3) )
  {
    v7 = (_DWORD **)i;
    i = (_DWORD *)*i;
    *v7[1] = *v7;
    (*v7)[1] = v7[1];
    operator delete(v7);
  }
}

//----- (00000A2C) --------------------------------------------------------
void __thiscall CProtectList::MakePassword(CProtectList *this, const char *String, char *lpString1)
{
  const CHAR *v3; // esi

  v3 = (const CHAR *)(_mbsrchr((const unsigned __int8 *)String, 0x5Cu) + 1);
  lstrcpyA(lpString1, "4@#$()*Q(920af#$&U43");
  lstrcatA(lpString1, v3);
  _mbsupr((unsigned __int8 *)lpString1);
}

//----- (00000A84) --------------------------------------------------------
BOOL __thiscall CProtectList::GetLastWriteTime(CProtectList *this, HANDLE hFile, struct _SYSTEMTIME *lpSystemTime)
{
  BOOL result; // eax
  struct _FILETIME LastWriteTime; // [esp+0h] [ebp-20h] BYREF
  struct _FILETIME LocalFileTime; // [esp+8h] [ebp-18h] BYREF
  struct _FILETIME LastAccessTime; // [esp+10h] [ebp-10h] BYREF
  struct _FILETIME CreationTime; // [esp+18h] [ebp-8h] BYREF

  result = GetFileTime(hFile, &CreationTime, &LastAccessTime, &LastWriteTime);
  if ( result )
  {
    result = FileTimeToLocalFileTime(&LastWriteTime, &LocalFileTime);
    if ( result )
    {
      FileTimeToSystemTime(&LocalFileTime, lpSystemTime);
      result = 1;
    }
  }
  return result;
}

//----- (00000AE4) --------------------------------------------------------
int __thiscall std::list<CProtectFile *>::~list<CProtectFile *>(int this)
{
  _DWORD **v2; // ebx
  _DWORD *i; // esi
  _DWORD **v4; // eax
  int result; // eax

  v2 = *(_DWORD ***)(this + 4);
  for ( i = *v2; i != v2; --*(_DWORD *)(this + 8) )
  {
    v4 = (_DWORD **)i;
    i = (_DWORD *)*i;
    *v4[1] = *v4;
    (*v4)[1] = v4[1];
    operator delete(v4);
  }
  operator delete(*(void **)(this + 4));
  result = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  return result;
}

// nfuncs=53 queued=19 decompiled=19 lumina nreq=0 worse=0 better=0
// ALL OK, 19 function(s) have been successfully decompiled
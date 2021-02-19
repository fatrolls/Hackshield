/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: Visual C++
*/

#include <windows.h>
#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

#define __thiscall __cdecl // Test compile in C mode

void __cdecl MakePassword(int, char *Buffer); // idb
DWORD __cdecl GetFileVersion(LPCSTR lptstrFilename, LPSTR lpString1);
unsigned __int8 *__cdecl GetAttribute(LPCSTR lpFileName, LPSTR lpString1);
int __stdcall IsValidDLLFile(LPCSTR lpFileName); // idb
// void __usercall _L57713(int a1@<ebp>);
// int sprintf(char *const Buffer, const char *const Format, ...);
// void __cdecl free(void *Block);
// LPSTR __stdcall lstrcpyA(LPSTR lpString1, LPCSTR lpString2);
// int _wsprintfA(LPSTR, LPCSTR, ...);
// BOOL __stdcall VerQueryValueA(LPCVOID pBlock, LPCSTR lpSubBlock, LPVOID *lplpBuffer, PUINT puLen);
// BOOL __stdcall GetFileVersionInfoA(LPCSTR lptstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData);
// void *__cdecl malloc(size_t Size);
// DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename, LPDWORD lpdwHandle);
// unsigned __int8 *__cdecl MDbinary(const char *); idb
// BOOL __stdcall CloseHandle(HANDLE hObject);
// BOOL __stdcall GetFileTime(HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime);
// DWORD __stdcall GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh);
// HANDLE __stdcall CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
// void __thiscall CBlowfish::~CBlowfish(CBlowfish *__hidden this); idb
// void __thiscall CBlowfish::Decrypt(CBlowfish *__hidden this, void *, unsigned int); idb
// void __thiscall CBlowfish::SetPassword(CBlowfish *__hidden this, char *); idb
// CBlowfish *__thiscall CBlowfish::CBlowfish(CBlowfish *__hidden this); idb
// int __cdecl rand();
// FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName);

//-------------------------------------------------------------------------
// Data declarations

_UNKNOWN loc_4; // weak
_UNKNOWN _L57726; // weak
// extern HMODULE g_hInstLib; idb
// extern _UNKNOWN _except_list; weak


//----- (00000000) --------------------------------------------------------
void __cdecl MakePassword(int a1, char *Buffer)
{
  sprintf(Buffer, "%4xAEDXP*&#&$UONAK#&@K:JSA*&#@Q", a1);
}

//----- (00000040) --------------------------------------------------------
DWORD __cdecl GetFileVersion(LPCSTR lptstrFilename, LPSTR lpString1)
{
  DWORD result; // eax
  DWORD v3; // esi
  void *v4; // edi
  DWORD v5; // ebp
  LPVOID lpBuffer; // [esp+8h] [ebp-210h] BYREF
  unsigned int puLen; // [esp+Ch] [ebp-20Ch] BYREF
  unsigned int v8; // [esp+10h] [ebp-208h] BYREF
  DWORD dwHandle; // [esp+14h] [ebp-204h] BYREF
  CHAR SubBlock[512]; // [esp+18h] [ebp-200h] BYREF

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
          if ( VerQueryValueA(v4, SubBlock, &lpBuffer, &v8) )
          {
            if ( v8 )
            {
              if ( lpBuffer )
              {
                lstrcpyA(lpString1, (LPCSTR)lpBuffer);
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

//----- (00000174) --------------------------------------------------------
unsigned __int8 *__cdecl GetAttribute(LPCSTR lpFileName, LPSTR lpString1)
{
  unsigned __int8 *result; // eax
  HANDLE v3; // eax
  void *v4; // esi
  DWORD v5; // eax
  unsigned __int8 *v6; // esi

  result = (unsigned __int8 *)GetFileVersion(lpFileName, lpString1);
  if ( result )
  {
    v3 = CreateFileA(lpFileName, 0, 1u, 0, 3u, 0, 0);
    v4 = v3;
    if ( v3 == (HANDLE)-1 )
    {
      result = 0;
    }
    else
    {
      v5 = GetFileSize(v3, 0);
      *((_DWORD *)lpString1 + 8) = v5;
      if ( v5 == -1 )
      {
        result = 0;
      }
      else
      {
        result = (unsigned __int8 *)GetFileTime(v4, 0, 0, (LPFILETIME)(lpString1 + 36));
        if ( result )
        {
          CloseHandle(v4);
          result = MDbinary(lpFileName);
          if ( result )
          {
            v6 = result;
            result = (_BYTE *)(MakePassword + 1);
            qmemcpy(lpString1 + 44, v6, 0x14u);
          }
        }
      }
    }
  }
  return result;
}

//----- (00000214) --------------------------------------------------------
int __stdcall IsValidDLLFile(LPCSTR lpFileName)
{
  void *v1; // esp
  FARPROC v2; // edi
  int v3; // esi
  int v4; // eax
  int result; // eax
  int (__stdcall *v6)(); // [esp+10h] [ebp-10FCh]
  char v7[32]; // [esp+14h] [ebp-10F8h] BYREF
  int v8; // [esp+34h] [ebp-10D8h]
  int v9; // [esp+38h] [ebp-10D4h]
  int v10; // [esp+3Ch] [ebp-10D0h]
  char v11[20]; // [esp+40h] [ebp-10CCh]
  CHAR String1[32]; // [esp+54h] [ebp-10B8h] BYREF
  int v13; // [esp+74h] [ebp-1098h]
  int v14; // [esp+78h] [ebp-1094h]
  int v15; // [esp+7Ch] [ebp-1090h]
  char v16[20]; // [esp+80h] [ebp-108Ch]
  char Buffer[36]; // [esp+94h] [ebp-1078h] BYREF
  char v18[4168]; // [esp+B8h] [ebp-1054h] BYREF
  unsigned int v19[2]; // [esp+1100h] [ebp-Ch] BYREF
  int v20; // [esp+1108h] [ebp-4h]

  v20 = -1;
  v19[1] = (unsigned int)&_L57726;
  v19[0] = __readfsdword((unsigned int)&_except_list);
  __writefsdword((unsigned int)&_except_list, (unsigned int)v19);
  v1 = alloca(4336);
  if ( lpFileName )
  {
    if ( g_hInstLib )
      v2 = GetProcAddress(g_hInstLib, (LPCSTR)&loc_4 + 2);
    else
      v2 = v6;
    v3 = rand();
    ((void (__stdcall *)(int, char *))v2)(v3, v7);
    MakePassword(v3, Buffer);
    CBlowfish::CBlowfish((CBlowfish *)v18);
    v20 = 0;
    CBlowfish::SetPassword((CBlowfish *)v18, Buffer);
    CBlowfish::Decrypt((CBlowfish *)v18, v7, 0x40u);
    GetAttribute(lpFileName, String1);
    if ( !strcmp(v7, String1) && v8 == v13 && v10 == v15 && v9 == v14 )
    {
      v4 = 0;
      while ( v11[v4] == v16[v4] )
      {
        if ( ++v4 >= 20 )
        {
          v20 = -1;
          CBlowfish::~CBlowfish((CBlowfish *)v18);
          result = 1;
          goto LABEL_15;
        }
      }
    }
    v20 = -1;
    CBlowfish::~CBlowfish((CBlowfish *)v18);
  }
  result = 0;
LABEL_15:
  __writefsdword((unsigned int)&_except_list, v19[0]);
  return result;
}
// 25A: variable 'v6' is possibly undefined

//----- (00000394) --------------------------------------------------------
void __usercall _L57713(int a1@<ebp>)
{
  CBlowfish::~CBlowfish((CBlowfish *)(a1 - 4180));
}

// nfuncs=27 queued=5 decompiled=5 lumina nreq=0 worse=0 better=0
// ALL OK, 5 function(s) have been successfully decompiled

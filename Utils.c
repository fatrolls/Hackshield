/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: Visual C++
*/

#include <windows.h>
#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

DWORD __cdecl GetProcessPath(LPSTR lpFilename, DWORD nSize);
DWORD __cdecl GetModulePath(HINSTANCE hModule, LPSTR lpFilename, DWORD nSize);
DWORD __cdecl GetProcessFileName(LPSTR lpString1);
UINT __cdecl GetProgramFilesPath(LPSTR lpString1);
int __cdecl IsFileExist(LPCSTR lpFileName); // idb
HANDLE __cdecl FindProcess(const char *Substr);
void __cdecl ConvertPathToString(char *Str); // idb
void __cdecl ValueToHex(const unsigned __int8 *, unsigned int, char *); // idb
void __cdecl HexToValue(const char *, unsigned int, unsigned __int8 *); // idb
// unsigned __int8 *__cdecl _mbsrchr(const unsigned __int8 *String, unsigned int C);
// DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize);
// LPSTR __stdcall lstrcpyA(LPSTR lpString1, LPCSTR lpString2);
// LPSTR __stdcall lstrcatA(LPSTR lpString1, LPCSTR lpString2);
// unsigned __int8 *__cdecl _mbschr(const unsigned __int8 *Str, unsigned int C);
// UINT __stdcall GetSystemDirectoryA(LPSTR lpBuffer, UINT uSize);
// BOOL __stdcall CloseHandle(HANDLE hObject);
// HANDLE __stdcall CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
// HANDLE __stdcall OpenProcess(DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwProcessId);
// BOOL __stdcall Process32Next(HANDLE hSnapshot, LPPROCESSENTRY32 lppe);
// unsigned __int8 *__cdecl _mbsstr(const unsigned __int8 *Str, const unsigned __int8 *Substr);
// LPSTR __stdcall CharUpperA(LPSTR lpsz);
// BOOL __stdcall Process32First(HANDLE hSnapshot, LPPROCESSENTRY32 lppe);
// HANDLE __stdcall CreateToolhelp32Snapshot(DWORD dwFlags, DWORD th32ProcessID);

//-------------------------------------------------------------------------
// Data declarations

char HexaChar[16] =
{
  '0',
  '1',
  '2',
  '3',
  '4',
  '5',
  '6',
  '7',
  '8',
  '9',
  'A',
  'B',
  'C',
  'D',
  'E',
  'F'
}; // idb


//----- (00000010) --------------------------------------------------------
DWORD __cdecl GetProcessPath(LPSTR lpFilename, DWORD nSize)
{
  DWORD result; // eax

  result = GetModuleFileNameA(0, lpFilename, nSize);
  if ( result )
  {
    *_mbsrchr((const unsigned __int8 *)lpFilename, 0x5Cu) = 0;
    result = 1;
  }
  return result;
}

//----- (00000040) --------------------------------------------------------
DWORD __cdecl GetModulePath(HINSTANCE hModule, LPSTR lpFilename, DWORD nSize)
{
  DWORD result; // eax

  result = GetModuleFileNameA(hModule, lpFilename, nSize);
  if ( result )
  {
    *_mbsrchr((const unsigned __int8 *)lpFilename, 0x5Cu) = 0;
    result = 1;
  }
  return result;
}

//----- (00000080) --------------------------------------------------------
DWORD __cdecl GetProcessFileName(LPSTR lpString1)
{
  DWORD result; // eax
  unsigned __int8 *v2; // eax
  CHAR Filename[260]; // [esp+0h] [ebp-104h] BYREF

  result = GetModuleFileNameA(0, Filename, 0x104u);
  if ( result )
  {
    v2 = _mbsrchr((const unsigned __int8 *)Filename, 0x5Cu);
    lstrcpyA(lpString1, &Filename[v2 - (unsigned __int8 *)Filename + 1]);
    result = 1;
  }
  return result;
}

//----- (000000E0) --------------------------------------------------------
UINT __cdecl GetProgramFilesPath(LPSTR lpString1)
{
  UINT result; // eax
  CHAR Buffer[260]; // [esp+0h] [ebp-104h] BYREF

  result = GetSystemDirectoryA(Buffer, 0x104u);
  if ( result )
  {
    *_mbschr((const unsigned __int8 *)Buffer, 0x5Cu) = 0;
    lstrcpyA(lpString1, Buffer);
    lstrcatA(lpString1, "\\Program Files");
    result = 1;
  }
  return result;
}

//----- (00000150) --------------------------------------------------------
int __cdecl IsFileExist(LPCSTR lpFileName)
{
  HANDLE v1; // eax

  v1 = CreateFileA(lpFileName, 0x80000000, 1u, 0, 3u, 0x80u, 0);
  if ( v1 == (HANDLE)-1 )
    return 0;
  CloseHandle(v1);
  return 1;
}

//----- (00000190) --------------------------------------------------------
HANDLE __cdecl FindProcess(const char *Substr)
{
  HANDLE v1; // ebp
  HANDLE v2; // esi
  void (__stdcall *v4)(LPSTR); // ebx
  PROCESSENTRY32 pe; // [esp+Ch] [ebp-128h] BYREF

  v1 = 0;
  pe.dwSize = 0;
  memset(&pe.cntUsage, 0, 0x124u);
  v2 = CreateToolhelp32Snapshot(2u, 0);
  if ( v2 == (HANDLE)-1 )
    return 0;
  pe.dwSize = 296;
  if ( Process32First(v2, &pe) )
  {
    v4 = (void (__stdcall *)(LPSTR))CharUpperA;
    while ( 1 )
    {
      v4(pe.szExeFile);
      if ( _mbsstr((const unsigned __int8 *)pe.szExeFile, (const unsigned __int8 *)Substr) )
        break;
      if ( !Process32Next(v2, &pe) )
        goto LABEL_9;
    }
    v1 = OpenProcess(0x1F0FFFu, 0, pe.th32ProcessID);
  }
LABEL_9:
  CloseHandle(v2);
  return v1;
}

//----- (00000240) --------------------------------------------------------
void __cdecl ConvertPathToString(char *Str)
{
  char *v1; // esi
  unsigned __int8 *i; // eax

  v1 = Str;
  for ( i = _mbschr((const unsigned __int8 *)Str, 0x5Cu); i; i = _mbschr(i + 1, 0x5Cu) )
  {
    v1 = (char *)(i + 1);
    *i = 95;
  }
  CharUpperA(v1);
}

//----- (00000280) --------------------------------------------------------
void __cdecl ValueToHex(const unsigned __int8 *a1, unsigned int a2, char *a3)
{
  int v3; // ecx
  unsigned int v4; // esi
  unsigned int v5; // ebx
  int v6; // ecx

  v3 = 0;
  v4 = 0;
  if ( a2 )
  {
    do
    {
      v5 = a1[v4];
      v6 = v3 + 1;
      a3[v6 - 1] = HexaChar[v5 >> 4];
      a3[v6] = HexaChar[v5 & 0xF];
      v3 = v6 + 1;
      ++v4;
    }
    while ( v4 < a2 );
    a3[v3] = 0;
  }
  else
  {
    *a3 = 0;
  }
}

//----- (000002E0) --------------------------------------------------------
void __cdecl HexToValue(const char *a1, unsigned int a2, unsigned __int8 *a3)
{
  unsigned int i; // edx
  char v5; // al
  char v6; // al
  char v7; // cl
  char v8; // cl

  for ( i = 0; i < a2 >> 1; ++i )
  {
    v5 = *a1;
    if ( *a1 < 0x41u )
      v6 = v5 - 48;
    else
      v6 = v5 - 55;
    v7 = a1[1];
    if ( (unsigned __int8)v7 < 0x41u )
      v8 = v7 - 48;
    else
      v8 = v7 - 55;
    a1 += 2;
    a3[i] = v8 + 16 * v6;
  }
}

// nfuncs=23 queued=9 decompiled=9 lumina nreq=0 worse=0 better=0
// ALL OK, 9 function(s) have been successfully decompiled

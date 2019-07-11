#ifndef GENERALLOADLIBRARY_H
#define GENERALLOADLIBRARY_H

#include <windows.h>

HMODULE MyLoadLibrary(LPCSTR, void *, void *);
HMODULE MyGetModuleHandle(LPCSTR);
BOOL MyFreeLibrary(HMODULE);
FARPROC MyGetProcAddress(HMODULE, LPCSTR);
FARPROC MyFindProcAddress(LPCSTR modulename, LPCSTR procname);

#endif

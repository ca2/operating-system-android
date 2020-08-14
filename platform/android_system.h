#pragma once



#if defined(_LP64)

    typedef long int int_ptr, *pint_ptr;
    typedef unsigned long int uint_ptr, *puint_ptr;

    typedef long long long_ptr, *plong_ptr;
    typedef unsigned long long ulong_ptr, *pulong_ptr;

#else

    typedef int int_ptr, *pint_ptr;
    typedef unsigned int uint_ptr, *puint_ptr;

    typedef long long_ptr, *plong_ptr;
    typedef unsigned int ulong_ptr, *pulong_ptr;

#endif


//typedef void * HANDLE;
//typedef void * HDC;
typedef unsigned char BYTE;
typedef unsigned int UINT;
//typedef int_ptr WPARAM;
//typedef int_ptr LPARAM;



#define __cdecl
#define _stdcall

// dbg alloc MS VC CRT
#define _NORMAL_BLOCK  1




#if ! defined(lint)
#define UNREFERENCED_PARAMETER(P)          (P)
#define DBG_UNREFERENCED_PARAMETER(P)      (P)
#define DBG_UNREFERENCED_LOCAL_VARIABLE(V) (V)

#else // lint

// Note: lint -e530 says don't complain about uninitialized variables for
// this varible.  Error 527 has to do with unreachable code.
// -restore restores checking to the -save state

#define UNREFERENCED_PARAMETER(P)          \
    /*lint -save -e527 -e530 */ \
    { \
        (P) = (P); \
    } \
    /*lint -restore */
#define DBG_UNREFERENCED_PARAMETER(P)      \
    /*lint -save -e527 -e530 */ \
    { \
        (P) = (P); \
    } \
    /*lint -restore */
#define DBG_UNREFERENCED_LOCAL_VARIABLE(V) \
    /*lint -save -e527 -e530 */ \
    { \
        (V) = (V); \
    } \
    /*lint -restore */

#endif // lint



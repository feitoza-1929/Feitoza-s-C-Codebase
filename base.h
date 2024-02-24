#ifndef BASE_H
#define BASE_H

///////////////////////////////////
//  NOTE Context Macros

#if defined(__GNUC__)
#define COMPILER_GCC 1
#elif defined(__clang__)
#define COMPILER_CLANG 1
#else
#error "Unsuported Compiler"
#endif

#if defined(__linux__)
#define OS_LINUX 1
#elif defined(__WIN32)
#define OS_WIN32 1
#elif defined(__WIN64)
#define OS_WIN64 1
#else
#error "Unsuported OS"
#endif

#if !defined(__linux__)
#define OS_LINUX 0
#endif
#if !defined(__WIN32)
#define OS_WIN32 0
#endif
#if !defined(__WIN64)
#define OS_WIN64 0
#endif
#if !defined(__GNUC__)
#define COMPILER_GCC 0
#endif
#if !defined(__clang__)
#define COMPILER_CLANG 0
#endif

#endif
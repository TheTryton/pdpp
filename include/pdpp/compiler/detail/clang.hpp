#pragma once

#define PDPP_COMPILER_CLANG 2
#define PDPP_COMPILER_CLANG_STRING "clang"

#ifdef __clang__

#define PDPP_COMPILER PDPP_COMPILER_CLANG
#define PDPP_COMPILER_STRING PDPP_COMPILER_CLANG_STRING

#define PDPP_CLANG_VERSION (__clang_major__ * 10000 + __clang_minor__ * 100 + __clang_patchlevel__)

#ifdef __COUNTER__
#define PDPP_COUNTER_AVAILABLE 1
#define PDPP_COUNTER __COUNTER__
#else
#define PDPP_COUNTER_AVAILABLE 0
#endif

#endif
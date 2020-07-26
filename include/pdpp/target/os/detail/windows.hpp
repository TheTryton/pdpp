#pragma once

#include <pdpp/compiler/compiler.hpp>
#include <pdpp/target/os/detail/common.hpp>

#if (PDPP_COMPILER == PDPP_COMPILER_GCC) || (PDPP_COMPILER == PDPP_COMPILER_CLANG) || (PDPP_COMPILER == PDPP_COMPILER_INTEL) || (PDPP_COMPILER == PDPP_COMPILER_MSVC)

#if defined(_WIN32) || defined(_WIN64) 
#define PDPP_TARGET_OS PDPP_OS_WINDOWS
#define PDPP_TARGET_OS_STRING PDPP_OS_WINDOWS_STRING
#endif

#endif
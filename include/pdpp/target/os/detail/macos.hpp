#pragma once

#include <pdpp/compiler/compiler.hpp>
#include <pdpp/target/os/detail/common.hpp>

#if (PDPP_COMPILER == PDPP_COMPILER_GCC) || (PDPP_COMPILER == PDPP_COMPILER_CLANG) || (PDPP_COMPILER == PDPP_COMPILER_INTEL) || (PDPP_COMPILER == PDPP_COMPILER_MSVC)

#ifdef __APPLE__
#define PDPP_TARGET_OS PDPP_OS_DARWIN
#define PDPP_TARGET_OS_STRING PDPP_OS_DARWIN_STRING
#endif

#endif
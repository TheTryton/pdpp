#pragma once

#include <pdpp/compiler/detail/gcc.hpp>
#include <pdpp/compiler/detail/clang.hpp>
#include <pdpp/compiler/detail/intel.hpp>
#include <pdpp/compiler/detail/msvc.hpp>

#define PDPP_COMPILER_UNKNOWN 0
#define PDPP_COMPILER_UNKNOWN_STRING "Unknown"

#ifndef PDPP_COMPILER
#define PDPP_COMPILER PDPP_COMPILER_UNKNOWN
#endif

#ifndef PDPP_COMPILER_STRING
#define PDPP_COMPILER_STRING PDPP_COMPILER_UNKNOWN_STRING
#endif
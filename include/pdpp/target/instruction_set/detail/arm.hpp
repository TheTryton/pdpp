#pragma once

#include <pdpp/compiler/compiler.hpp>

#if (PDPP_COMPILER == PDPP_COMPILER_GCC) || (PDPP_COMPILER == PDPP_COMPILER_CLANG) || (PDPP_COMPILER == PDPP_COMPILER_INTEL) ||  (PDPP_COMPILER == PDPP_COMPILER_MSVC)

#if defined(__ARM_FEATURE_SIMD32) || defined(__ARM_NEON)
#define PDPP_ARCH_ARM_NEON 1
#else
#define PDPP_ARCH_ARM_NEON 0
#endif

#else

#define PDPP_ARCH_ARM_NEON 0

#endif
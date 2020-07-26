#pragma once

#include <pdpp/compiler/compiler.hpp>
#include <pdpp/target/cpu_arch/detail/common.hpp>

#if (PDPP_COMPILER == PDPP_COMPILER_GCC) || (PDPP_COMPILER == PDPP_COMPILER_CLANG) || (PDPP_COMPILER == PDPP_COMPILER_INTEL)

#if defined(__arm__) && !defined(__aarch64__)
#define PDPP_TARGET_CPU_ARCH PDPP_ARCH_ARM
#define PDPP_TARGET_CPU_ARCH_STRING PDPP_ARCH_ARM_STRING
#endif

#ifdef __aarch64__
#define PDPP_TARGET_CPU_ARCH PDPP_ARCH_ARM_64
#define PDPP_TARGET_CPU_ARCH_STRING PDPP_ARCH_ARM_64_STRING
#endif

#elif (PDPP_COMPILER == PDPP_COMPILER_MSVC)

#if defined(_M_ARM) && !defined(_M_ARM64)
#define PDPP_TARGET_CPU_ARCH PDPP_ARCH_ARM
#define PDPP_TARGET_CPU_ARCH_STRING PDPP_ARCH_ARM_STRING
#endif

#ifdef _M_ARM64
#define PDPP_TARGET_CPU_ARCH PDPP_ARCH_ARM_64
#define PDPP_TARGET_CPU_ARCH_STRING PDPP_ARCH_ARM_64_STRING
#endif

#endif
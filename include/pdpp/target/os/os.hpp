#pragma once

#include <pdpp/target/os/detail/android.hpp>
#include <pdpp/target/os/detail/linux.hpp>
#include <pdpp/target/os/detail/macos.hpp>
#include <pdpp/target/os/detail/windows.hpp>

#ifndef PDPP_TARGET_OS
#define PDPP_TARGET_OS PDPP_OS_UNKNOWN
#endif

#ifndef PDPP_TARGET_OS_STRING
#define PDPP_TARGET_OS_STRING PDPP_OS_UNKNOWN_STRING
#endif
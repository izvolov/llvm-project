//===-- Implementation header for strncasecmp_l -----------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_SRC_STRINGS_STRNCASECMP_L_H
#define LLVM_LIBC_SRC_STRINGS_STRNCASECMP_L_H

#include "hdr/types/locale_t.h"
#include "src/__support/macros/config.h"
#include <stddef.h>

namespace LIBC_NAMESPACE_DECL {

int strncasecmp_l(const char *left, const char *right, size_t n,
                  locale_t locale);

} // namespace LIBC_NAMESPACE_DECL

#endif // LLVM_LIBC_SRC_STRINGS_STRNCASECMP_L_H

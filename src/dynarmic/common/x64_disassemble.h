/* This file is part of the dynarmic project.
 * Copyright (c) 2021 MerryMage
 * SPDX-License-Identifier: 0BSD
 */

#pragma once

#include "dynarmic/common/common_types.h"
#include <vector>
#include <string>

namespace Dynarmic::Common {

std::vector<std::string> DisassembleX64(const void* ptr, size_t size);
void DumpDisassembledX64(const void* ptr, size_t size);

}  // namespace Dynarmic::Common

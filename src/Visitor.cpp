/* Copyright 2017 R. Thomas
 * Copyright 2017 Quarkslab
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "LIEF/Visitor.hpp"

namespace LIEF {
Visitor::Visitor(void) = default;
Visitor::~Visitor(void) = default;


void Visitor::operator()(void) {
}


// visit methods
// =============

// Fundamental types
// =================
void Visitor::visit(size_t) {
}

void Visitor::visit(const std::string&) {
}

void Visitor::visit(const std::u16string&) {
}

void Visitor::visit(const std::vector<uint8_t>&) {
}



}

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
#include <algorithm>

#include <string>
#include <sstream>

#include "LIEF/visitors/Hash.hpp"
#include "LIEF/MachO/RelocationDyld.hpp"

#include "pyMachO.hpp"

template<class T>
using getter_t = T (RelocationDyld::*)(void) const;

template<class T>
using setter_t = void (RelocationDyld::*)(T);


void init_MachO_RelocationDyld_class(py::module& m) {

  py::class_<RelocationDyld, Relocation>(m, "RelocationDyld")

    .def("__eq__", &RelocationDyld::operator==)
    .def("__ne__", &RelocationDyld::operator!=)
    .def("__hash__",
        [] (const RelocationDyld& relocation) {
          return LIEF::Hash::hash(relocation);
        })

    .def("__str__",
        [] (const RelocationDyld& relocation)
        {
          std::ostringstream stream;
          stream << relocation;
          std::string str = stream.str();
          return str;
        });

}

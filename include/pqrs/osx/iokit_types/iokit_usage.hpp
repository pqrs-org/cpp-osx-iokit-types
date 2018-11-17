#pragma once

// (C) Copyright Takayama Fumihiko 2018.
// Distributed under the Boost Software License, Version 1.0.
// (See http://www.boost.org/LICENSE_1_0.txt)

#include <iostream>
#include <type_safe/strong_typedef.hpp>
#include <unordered_set>

namespace pqrs {
namespace osx {
struct iokit_usage : type_safe::strong_typedef<iokit_usage, int32_t>,
                     type_safe::strong_typedef_op::equality_comparison<iokit_usage>,
                     type_safe::strong_typedef_op::relational_comparison<iokit_usage> {
  using strong_typedef::strong_typedef;
};

inline std::ostream& operator<<(std::ostream& stream, const iokit_usage& value) {
  return stream << type_safe::get(value);
}
} // namespace osx
} // namespace pqrs

namespace std {
template <>
struct hash<pqrs::osx::iokit_usage> : type_safe::hashable<pqrs::osx::iokit_usage> {
};
} // namespace std

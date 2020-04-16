#include <catch2/catch.hpp>

#include <pqrs/osx/iokit_types/extra/boost.hpp>

TEST_CASE("boost") {
  {
    pqrs::osx::iokit_hid_location_id::value_t v(100);
    REQUIRE(std::hash<pqrs::osx::iokit_hid_location_id::value_t>{}(v) ==
            pqrs::osx::iokit_hid_location_id::hash_value(v));
  }

  {
    pqrs::osx::iokit_keyboard_type::value_t v(100);
    REQUIRE(std::hash<pqrs::osx::iokit_keyboard_type::value_t>{}(v) ==
            pqrs::osx::iokit_keyboard_type::hash_value(v));
  }

  {
    pqrs::osx::iokit_registry_entry_id::value_t v(100);
    REQUIRE(std::hash<pqrs::osx::iokit_registry_entry_id::value_t>{}(v) ==
            pqrs::osx::iokit_registry_entry_id::hash_value(v));
  }
}

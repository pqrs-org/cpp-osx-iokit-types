#include <pqrs/osx/iokit/types.hpp>
#include <unordered_map>

int main(void) {
  pqrs::osx::iokit::registry_entry_id registry_entry_id(12345);
  std::cout << "registry_entry_id:" << registry_entry_id << std::endl;

  std::unordered_map<pqrs::osx::iokit::registry_entry_id, std::string> map;
  map[registry_entry_id] = "12345";

  return 0;
}

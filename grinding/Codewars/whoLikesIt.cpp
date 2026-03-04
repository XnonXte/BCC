#include <string>
#include <vector>
#include <fmt/core.h>

using namespace fmt;

std::string likes(const std::vector<std::string> &names)
{
    if (names.size() == 0) {
      return "no one likes this"; 
    } else if (names.size() == 1) {
      return format("{} likes this", names[0]);
    } else if (names.size() == 2) {
      return format("{} and {} like this", names[0], names[1]);
    } else if (names.size() == 3) {
      return format("{}, {} and {} like this", names[0], names[1], names[2]);
    } else {
      return format("{}, {} and {} others like this", names[0], names[1], names.size() - 2);
    }
}
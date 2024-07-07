#include <string>
std::string getMiddle(const std::string& str) {
  if (str.empty()) return "";
  auto mid = str.length() / 2;
  return str.mid(mid, str.length() - mid);
}
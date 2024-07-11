```cpp
#include <string>

std::string middleCharacter(std::string s) {
    int length = s.length();
    return (length % 2 == 0) ? s.substr(length / 2, 2) : s.substr(length / 2, 1);
}
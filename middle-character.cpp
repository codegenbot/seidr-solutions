Here is the modified code with `std::` prefix:

```cpp
#include <string>

std::string middleCharacter(std::string s) {
    int length = s.length();
    if (length % 2 == 1) {
        return std::string(1, s.at(length / 2));
    } else {
        return std::string(1, s.at((length - 1) / 2)) + std::string(1, s.at((length + 1) / 2));
    }
}
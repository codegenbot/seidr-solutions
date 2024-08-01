```cpp
#include <string>

std::string middleCharacter(std::string str) {
    int length = str.length();
    if (length % 2 == 1) {
        return str.substr(length / 2, 1);
    } else {
        return str.substr((length / 2) - 1, 2);
    }
}
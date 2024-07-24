```cpp
#include <string>

std::string middleCharacter(std::string str) {
    int len = str.length();
    std::string result;

    if (len % 2 != 0) { 
        result = str.substr(len / 2, 1);
    } else { 
        result = str.substr((len / 2) - 1, 2);
    }

    return result;
}
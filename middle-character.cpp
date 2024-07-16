```cpp
#include <iostream>
#include <string>

std::string middleCharacter(const std::string& str) {
    int length = str.length();
    if (length % 2 == 0) {
        return std::string(1, str.substr(length / 2 - 1, 2)); 
    } else {
        return std::string(1, str.substr(length / 2, 1));
    }
}

int main() {
    std::cout << middleCharacter("hello") << std::endl;
    std::cout << middleCharacter("world") << std::endl;
    return 0;
}
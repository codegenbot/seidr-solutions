```cpp
#include <iostream>
#include <string>

std::string middleCharacter(const std::string& str) {
    int size = str.size();
    if (size % 2 == 0) {
        return str.substr(size / 2 - (size % 2), 2); 
    } else {
        return str.substr(size / 2, 1);
    }
}

int main() {
    std::cout << middleCharacter("hello") << std::endl;
    std::cout << middleCharacter("world") << std::endl;
    return 0;
}
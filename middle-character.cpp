```cpp
#include <string>
#include <iostream>

std::string middleCharacter(std::string s) {
    int length = s.length();
    if (length % 2 == 0) {
        return s.substr(length / 2 - 1, 2);
    } else {
        return s.substr(length / 2, 1);
    }
}

int main() {
    std::string s = "your test input here";
    std::cout << middleCharacter(s) << std::endl;
    return 0;
}
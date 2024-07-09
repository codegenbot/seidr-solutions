```cpp
#include <iostream>
#include <string>

namespace std {
std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len % 2 == 0) {
        return s.substr(len/2 - 1, 2);
    } else {
        return s.substr(len/2, 1);
    }
}
}

int main() {
    std::cout << middleCharacter("your_string_here") << std::endl;
    return 0;
}
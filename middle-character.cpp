```cpp
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if (len % 2 == 0) { 
        return std::string(1, s.substr(len / 2 - (len % 2 == 0), 1).c_str());
    } else { 
        return std::string(1, s.substr(len / 2, 1).c_str());
    }
}

int main() {
    std::cout << middleCharacter("your_test_string");
    return 0;
}
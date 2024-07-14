```cpp
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if (len % 2 == 0) { 
        return std::string(1, s.at(len / 2 - 1)) + std::string(1, s.at(len / 2));
    } else { 
        return std::string(1, s.at(len / 2));
    }
}

int main() { std::cout << middleCharacter("your_test_string"); return 0; }
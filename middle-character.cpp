```cpp
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    return len % 2 == 0 ? std::string(1, s[len/2-1]) + std::string(1, s[len/2])
                         : std::string(1, s[len/2]);
}

int main() { std::cout << middleCharacter("your_test_string"); return 0; }
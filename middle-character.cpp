```cpp
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int len = s.length();
    if(len % 2 == 0) {
        return s.substr(len/2 - 1, 2);
    } else {
        return s.substr(len/2, 1);
    }
    return 0;
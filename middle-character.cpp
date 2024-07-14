```cpp
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    int mid = std::min(len / 2, len / 2 + 1);

    if (len % 2 == 0) { 
        return s.substr(mid - 1, 2);
    } else { 
        return s.substr(mid, 1);
    }
}

int main() { middleCharacter("your_test_string"); return 0; }
```cpp
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    int startMid = len / 2;
    int endMid = len / 2 + 1;

    if (len % 2 == 0) { 
        return s.substr(len / 2 - 1, 2);
    } else { 
        return s.substr(len / 2, 1);
    }
}

int main() { std::cout << middleCharacter("your_test_string"); return 0; }
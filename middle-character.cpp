#include <string>
#include <iostream>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len % 2 == 0) {
        return s.substr(len/2 - 1, 2);
    } else {
        return s.substr(len/2, 1);
    }
}

int main() {
    std::cout << middleCharacter("your_test_string") << std::endl;
    return 0;
}
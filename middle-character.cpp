```cpp
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
    std::string input;
    // Read user input or provide a test string
    input = "your_test_string";

    std::cout << middleCharacter(input) << std::endl;

    return 0;
}
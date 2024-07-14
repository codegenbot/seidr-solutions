```cpp
#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        output += std::to_string((int)(c - '0') * (int)(c - '0'));
    }
    return output;
}

int main() {
    std::cout << squareDigits("1234") << std::endl;
    return 0;
}
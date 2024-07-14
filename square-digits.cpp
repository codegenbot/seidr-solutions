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
    std::string input = "1234";
    std::cout << squareDigits(input) << std::endl;
    return 0;
}
```cpp
#include <string>
#include <iostream>

int main() {
    std::string input = "1234";
    std::cout << squareDigits(input) << std::endl;
    return 0;
}

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        output += std::to_string((c - '0') * (c - '0'));
    }
    return output;
}
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
        int squared = (c - '0') * (c - '0');
        output += std::to_string(squared);
    }
    return output;
}
```cpp
#include <string>
#include <sstream>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        std::string str = std::to_string(digit * digit);
        output += str;
    }
    return output;
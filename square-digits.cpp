```c++
#include <string>
#include <sstream>

std::string squareDigits(std::string input) {
    std::stringstream ss;
    for (char c : input) {
        int digit = c - '0';
        ss << std::to_string(digit * digit);
    }
    return ss.str();
}
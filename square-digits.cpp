#include <string>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        long long squared = (long long)digit * digit;
        output += to_string(squared);
    }
    return output;
}
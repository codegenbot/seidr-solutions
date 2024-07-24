#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        long long squared = (long long)digit * digit;
        output += std::to_string(squared);
    }
    return output;
}
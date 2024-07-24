#include <vector>
#include <iostream>
#include <string>
#include <sstream>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        int squared = digit * digit;
        output += std::to_string(squared);
    }
    return output;
}

int main() {
    // Your test code here
    return 0;
}
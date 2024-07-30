#include <vector>
#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}

int main() {
    // Your code here
    std::cout << squareDigits("9") << std::endl;  // Output: "81"
    return 0;
}
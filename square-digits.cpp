#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        // Convert integer back to string and concatenate with other squared digits
        output += std::to_string(digit * digit);
    }
    return output;
}

int main() {
    std::cout << squareDigits("411881") << std::endl;
    return 0;
}
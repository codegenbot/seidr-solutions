#include <string>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) { 
        int digit = (c - '0') * (c - '0'); 
        output += std::to_string(digit);
    }
    return output;
}

int main() {
    std::cout << squareDigits("3141") << std::endl; // Example usage
    return 0;
}
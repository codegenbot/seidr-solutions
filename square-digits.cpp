```cpp
#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) { 
        if (std::isdigit(c)) { 
            int digit = (c - '0') * (c - '0'); 
            output += std::to_string(digit);
        } else {
            output += c;
        }
    }
    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a number: ";
    std::getline(std::cin, input);

    if (input.empty()) {
        std::cout << "Error: Input cannot be empty." << std::endl;
    } else {
        std::cout << "Squared digits: " << squareDigits(input) << std::endl;
    }
}
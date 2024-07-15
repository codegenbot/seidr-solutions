#include <iostream>
#include <string>
#include <sstream>

std::string squareDigits(std::string input) {
    std::stringstream output;
    for (char c : input) {
        int digit = c - '0';
        output << std::to_string(digit * digit);
    }
    return output.str();
}

int main() {
    std::string input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input;  
    input.erase(0, input.find_first_not_of(' '));  
    input.erase(input.find_last_not_of(' ') + 1);  

    std::string result = squareDigits(input);

    return 0;
}
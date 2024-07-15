#include <iostream>
#include <string>
#include <sstream>

std::string squareDigits(std::string input) {
    std::stringstream output;
    for (char c : input.erase(0, input.find_first_of(" "))) { 
        int digit = c - '0';
        output << (c - '0') * (c - '0');
    }
    return output.str();
}

int main() {
    std::string input;
    while(true) {
        std::cout << "Enter a positive integer: ";
        std::cin >> input;  
        if(input.find_first_not_of("0123456789") == std::string::npos) { 
            break;
        }
        std::cout << "Invalid input. Please enter a positive integer.\n";
    }

    std::string result = squareDigits(input);

    return 0;
}
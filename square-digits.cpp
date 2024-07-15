#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        if(c != ' ') { 
            int digit = std::stoi(std::string(1, c)) * std::stoi(std::string(1, c));
            output += to_string(digit);
        }
    }
    return output;
}

int main() {
    while(true) {
        std::cout << "Enter a positive integer as string: ";
        std::string input;
        std::cin >> input;  
        if(input.find_first_not_of("0123456789") == std::string::npos) { 
            break;
        }
        std::cout << "Invalid input. Please enter a positive integer.\n";
    }

    std::string result = squareDigits(input);

    return 0;
}
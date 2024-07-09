```cpp
#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) { 
        int digit = c - '0'; 
        digit *= digit; 
        if(digit >= 10){
            return "";
        }
        output += std::to_string(digit); 
    }
    return output;
}

int main() { 
    std::string input;
    std::cout << "Enter a number: ";
    std::getline(std::cin, input);
    if(input.empty()) {
        std::cout << "Error: Input cannot be empty." << std::endl;
    } else {
        std::string output = squareDigits(input);
        if (output.empty()) {
            std::cout << "Error: Input contains a number greater than or equal to 100." << std::endl;
        } else {
            std::cout << "Squared digits: " << output << std::endl;
        }
    }
    return 0;
}
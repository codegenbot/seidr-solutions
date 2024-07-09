```cpp
#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) { 
        int digit = c - '0'; 
        digit *= digit; 
        if(digit >= 10){
            std::cout << "Error: Input contains a number greater than or equal to 100." << std::endl;
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
    std::cout << "Squared digits: " << squareDigits(input) << std::endl;
    return 0;
}
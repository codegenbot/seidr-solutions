```cpp
#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (int i = 0; i < input.length(); i++) {
        int digit = (input[i] - '0') * (input[i] - '0');
        output += std::to_string(digit);
    }
    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input;
    
    if (input.length() > 0) {
        std::cout << squareDigits(input) << "\n";
    } else {
        std::cout << "Invalid input.\n";
    }
    
    return 0;
}
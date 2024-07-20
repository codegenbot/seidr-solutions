```cpp
#include <string>
#include <iostream>

int main() {
    std::string input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input;
    std::string output = squareDigits(input);
    std::cout << "Square digits of " << input << ": " << output << std::endl;
    return 0;
}

std::string squareDigits(std::string input) {
    std::string output = "";
    for(int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        output += std::to_string(digit * digit);
    }
    return output;
}
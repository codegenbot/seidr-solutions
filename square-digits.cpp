#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    std::string output = "";
    for(int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        output += to_string(digit * digit);
    }
    return output;
}

int main() {
    std::cout << squareDigits("0") << "\n";
    std::cout << squareDigits("1") << "\n";
    std::cout << squareDigits("2") << "\n";
    std::cout << squareDigits("3") << "\n";
    std::cout << squareDigits("4") << "\n";
    return 0;
}
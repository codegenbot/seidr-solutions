#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += static_cast<char>(digit * digit + '0'); 
    }
    return output;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << squareDigits(input) << std::endl;
    return 0;
}
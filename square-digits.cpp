#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0'; // Convert character to integer
        long long square = (long long)digit * digit; // Square the digit
        char c = (char)(square + '0'); // Convert back to character and add to output string
        output += c;
    }
    return output;
}

int main() {
    std::cout << squareDigits("0") << std::endl;
    std::cout << squareDigits("1") << std::endl;
    std::cout << squareDigits("2") << std::endl;
    std::cout << squareDigits("3") << std::endl;
    std::cout << squareDigits("4") << std::endl;
    return 0;
}
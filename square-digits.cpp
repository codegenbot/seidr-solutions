#include <iostream>
#include <string>

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}

int main() {
    std::cout << squareDigits("0") << std::endl;  // Output: 0
    std::cout << squareDigits("1") << std::endl;  // Output: 1
    std::cout << squareDigits("2") << std::endl;  // Output: 4
    std::cout << squareDigits("3") << std::endl;  // Output: 9
    std::cout << squareDigits("4") << std::endl;  // Output: 16

    return 0;
}
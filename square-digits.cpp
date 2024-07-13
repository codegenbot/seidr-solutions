#include <vector>
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
    std::cout << squareDigits("0") << std::endl; // 0
    std::cout << squareDigits("1") << std::endl; // 1
    std::cout << squareDigits("2") << std::endl; // 4
    std::cout << squareDigits("3") << std::endl; // 9
    std::cout << squareDigits("4") << std::endl; // 16
    return 0;
}
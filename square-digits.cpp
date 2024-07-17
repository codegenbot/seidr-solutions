#include <string>

std::string squareDigitsStr(std::string n) {
    std::string result = "";
    for (char c : n) {
        int digit = c - '0';
        result += std::to_string(digit * digit);
    }
    return result;
}

int main() {
    long long input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input;
    std::string str = std::to_string(input);
    std::cout << "The square of the digits is: " << squareDigitsStr(str) << std::endl;
    return 0;
}
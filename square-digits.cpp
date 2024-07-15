#include <string>
#include <sstream>

int main() {
    std::string input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input;

    std::string result = squareDigits(input);

    return 0;
}

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += std::to_string(digit * digit);
    }
    return output;
}
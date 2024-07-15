#include <string>

std::string squareDigits(std::string input) {
    for(int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        std::string squared = std::to_string(digit * digit);
        input.replace(i, 1, squared);
    }
    return input;
}

int main() {
    std::string input;
    input = "493193";
    std::cout << squareDigits(input) << std::endl;
    return 0;
}
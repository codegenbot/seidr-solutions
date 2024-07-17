#include <string>
#include <iostream>

std::string squareDigitsStr(std::string n) {
    std::string result = "";
    for (char c : n) {
        int digit = c - '0';
        result += std::to_string(digit * digit);
    }
    return result;
}

int main() {
    std::cout << squareDigitsStr("8174") << std::endl;
    return 0;
}
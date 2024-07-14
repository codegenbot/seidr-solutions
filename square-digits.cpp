#include <string>
#include <iostream>
#include <sstream>

std::string squareDigits(std::string input) {
    std::stringstream output;
    for (char c : input) {
        output << std::to_string((int)(c - '0') * (int)(c - '0'));
    }
    return output.str();
}

int main() {
    std::cout << squareDigits("1234") << std::endl;
    return 0;
}
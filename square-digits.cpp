```cpp
#include <string>

std::string squareDigitsStr(std::string n) {
    std::string result = "";
    const char *str = n.c_str();
    for (int i = 0, len = strlen(str); i < len; ++i) {
        int digit = str[i] - '0';
        result += std::to_string(digit * digit);
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input;
    std::cout << "The square of the digits is: " << squareDigitsStr(input) << std::endl;
    return 0;
}
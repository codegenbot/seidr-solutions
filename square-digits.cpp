#include <iostream>
#include <string>

int main() {
    std::string num;
    std::cin >> num;
    std::string result = "";
    for (char c : num) {
        char digit = c;
        result += std::to_string((digit - '0') * (digit - '0'));
    }
    std::cout << result << std::endl;
    return 0;
}
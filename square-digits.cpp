#include <iostream>
#include <string>

int main() {
    std::string num;
    std::cin >> num;
    std::string result = "";
    for (char c : num) {
        int digit = c - '0';
        result += std::to_string(digit * digit);
    }
    std::cout << result << std::endl;
    return 0;
}
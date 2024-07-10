#include <iostream>
#include <string>

int main() {
    std::string num;
    std::cin >> num;
    std::string result = "";
    for (char digit : num) {
        int n = digit - '0';
        result += std::to_string(n * n);
    }
    std::cout << result;
    return 0;
}
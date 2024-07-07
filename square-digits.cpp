```cpp
#include <string>
#include <iostream>

std::string squareDigits(int n) {
    std::string str = std::to_string(n);
    std::string result;
    for (char c : str) {
        result += std::to_string((c - '0') * (c - '0'));
    }
    return result;
}

int main() {
    std::cout << squareDigits(614) << std::endl;
    return 0;
}
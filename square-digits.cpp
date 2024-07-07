```c++
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
    int n; 
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::string output = squareDigits(n);
    std::cout << output << std::endl;
    return 0;
}
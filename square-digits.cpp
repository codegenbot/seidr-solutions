#include <iostream>
#include <string>

int main() {
    long long num;
    std::cin >> num;
    std::string result = "";
    
    while (num > 0) {
        int digit = num % 10;
        long long square = digit * digit;
        result = std::to_string(square) + result;
        num /= 10;
    }
    
    std::cout << result << std::endl;
    return 0;
}
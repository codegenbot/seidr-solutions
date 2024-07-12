#include <iostream>
#include <string>

int main() {
    std::string digits;
    std::cin >> digits;
    
    if (digits.size() < 2) {
        std::cout << "String must have at least 2 characters." << std::endl;
        return 0;
    }
    
    int sum = 0;
    for (int i = 0; i < digits.size() - 1; ++i) {
        if (digits[i] == digits[i + 1]) {
            sum += digits[i] - '0';
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}
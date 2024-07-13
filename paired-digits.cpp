#include <iostream>
#include <string>

int main() {
    std::string digits;
    std::cin >> digits;
    
    int sum = 0;
    for (int i = 0; i < digits.size() - 1; ++i) {
        if (digits[i] == digits[i + 1]) {
            sum += digits[i] - '0';
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}
#include <iostream>
#include <string>

int main() {
    std::string digits;
    std::cin >> digits;
    
    int sum = 0;
    for (int i = 0; i < digits.size(); ++i) {
        if (digits[i] - '0' == digits[(i + 1) % digits.size()] - '0') {
            sum += digits[i] - '0';
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}
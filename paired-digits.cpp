#include <iostream>
#include <string>

int main() {
    std::string digits;
    std::cin >> digits;
    
    if (digits.empty()) {
        std::cout << "Input string is empty." << std::endl;
        return 0;
    }
    
    int sum = 0;
    for (int i = 0; i < digits.size(); ++i) {
        if (i < digits.size() - 1 && digits[i] == digits[i + 1]) {
            sum += digits[i] - '0';
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}
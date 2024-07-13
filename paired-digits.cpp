#include <string>
#include <iostream>

int pairedDigits(const std::string& s) {
    int sum = 0;
    size_t i = 0; 
    for (; i < s.size() - 1; ++i) { 
        int num1 = s[i] - '0';
        int num2 = s[i + 1] - '0';
        if (num1 == num2) {
            sum += num1 * 2;
        } else {
            sum += num1;
        }
    }
    return sum; 
}
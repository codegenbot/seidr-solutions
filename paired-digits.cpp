#include <iostream>
#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    int prevDigit = -1;
    for (char c : s) {
        int digit = c - '0';
        if (digit == prevDigit) {
            sum += digit;
        }
        prevDigit = digit;
    }
    return sum;
}

int main() {
    std::string s;
    std::cout << "Enter a string of digits: ";
    std::cin >> s;
    int result = pairedDigits(s);
    std::cout << "Sum of the paired digits is: " << result << std::endl;
}
```c++
#include <string>
#include <iostream>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        char current_digit = s[i];
        char next_digit = s[i + 1];
        if (current_digit == next_digit) {
            sum += current_digit - '0';
        }
    }
    return sum;
}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::cin >> input;
    int result = pairedDigits(input);
    std::cout << "The sum of the paired digits is: " << result << std::endl;
    return 0;
}
#include <vector>
#include <iostream>
#include <string>

int pairedDigits(const std::string& str) {
    int sum = 0;
    for (int i = 0; i < str.length() - 1; ++i) {
        if (str[i] == str[i + 1]) {
            sum += str[i] - '0';
        }
    }
    return sum;
}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::cin >> input;

    int result = pairedDigits(input);

    std::cout << "Sum of the paired digits is: " << result << std::endl;

    return 0;
}
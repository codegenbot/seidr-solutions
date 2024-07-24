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
    std::string str;
    std::cout << "Enter a string of digits: ";
    std::cin >> str;
    std::cout << "Sum of paired digits is: " << pairedDigits(str) << std::endl;
    return 0;
}
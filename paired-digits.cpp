#include <vector>
#include <iostream>
#include <string>

int pairedDigits(const std::string& str) {
    int total = 0;
    for (char c : str) {
        total += c - '0';
    }
    return total - (str.length() - 1) * 9;
}

int main() {
    std::string str;
    std::cout << "Enter a string of digits: ";
    std::cin >> str;
    std::cout << "The sum of the paired digits is: " << pairedDigits(str) << std::endl;
    return 0;
}
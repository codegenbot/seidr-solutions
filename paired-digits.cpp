#include <vector>
#include <iostream>
#include <string>

int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += std::stoi(std::string(1, s[i]));
        }
    }
    return sum;
}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::getline(std::cin, input);
    std::cout << "Sum of paired digits: " << pairedDigits(input) << std::endl;
    return 0;
}
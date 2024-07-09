#include <vector>
#include <iostream>
#include <string>

int pairedDigits(const std::string& input) {
    int sum = 0;
    for (int i = 0; i <= input.length() - 2; i++) {
        if (input[i] == input[i + 1] && input[i] == input[i + 2]) {
            sum += input[i] - '0';
        }
    }
    return sum;
}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::cin >> input;
    std::cout << "Sum of paired digits is: " << pairedDigits(input) << std::endl;
    return 0;
}
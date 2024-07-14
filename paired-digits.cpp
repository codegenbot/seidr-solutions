```c
#include <iostream>
#include <string>
#include <limits>

int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if ((s[i] - '0') == (s.at(i + 1) - '0')) {
            sum += (s[i] - '0');
        }
    }
    return sum;

}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::cin >> input;
    int result = pairedDigits(input);
    std::cout << "Sum of paired digits is: " << result << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return 0;
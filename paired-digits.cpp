```cpp
#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string of digits: ";
    std::getline(std::cin, str);
    int result = pairedDigits(str);
    std::cout << "Sum of the paired digits is: " << result << std::endl;
    return 0;
}

int pairedDigits(const std::string& str) {
    int sum = 0;
    for (size_t i = 0; i < str.length() - 1; ++i) {
        if (str[i] == str[i + 1]) {
            sum += str[i] - '0';
        }
    }
    return sum;
}
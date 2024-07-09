```cpp
#include <iostream>
#include <string>

int pairedDigits(const std::string& input) {
    int sum = 0;
    bool pairedFound = false;
    for (int i = 0; i < input.length(); i++) {
        if (i > 0 && input[i] == input[i - 1]) {
            sum += input[i] - '0';
            pairedFound = true;
        }
    }
    if (!pairedFound) return 0;
    return sum;
}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::cin >> input;
    std::cout << "Sum of paired digits is: " << pairedDigits(input) << std::endl;
    return 0;
}
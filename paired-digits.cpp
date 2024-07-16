```c++
#include <iostream>
#include <string>

int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if ((s[i] - '0') == (s[i+1] - '0')) && i > 0 || s[i+1] - '0' == '0' {
            sum += (s[i] - '0');
        }
    }
    return sum;
}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    getline(std::cin, input);  
    int output = pairedDigits(input);
    std::cout << "Sum of paired digits is: " << output << std::endl;
    std::cout << "Program has finished." << std::endl;
}
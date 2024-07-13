```c++
#include <string>
#include <iostream>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if ((s[i] - '0') == (s[i + 1] - '0')) { 
            sum += std::stoi(s.substr(i, 2)) - 10; 
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
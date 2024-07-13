#include <cstring>
#include <iostream>

int pairedDigits(const char* s) {
    int sum = 0;
    for (int i = 0; i < strlen(s); i++) {
        if ((i > 0 && s[i] - '0' == s[i-1] - '0') || (i < strlen(s) - 1 && s[i] - '0' == s[i+1] - '0')) { 
            sum += (s[i] - '0'); 
        }
    }
    return sum;
}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::cin >> input;
    int result = pairedDigits(input.c_str());
    std::cout << "The sum of the paired digits is: " << result << std::endl;
    return 0;
}
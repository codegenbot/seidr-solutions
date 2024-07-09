#include <string>
#include <iostream>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() - 1 && s[i] == s[i + 1]) {
            sum += s[i] - '0';
        } else if (s[i] == s[i]) {
            sum += s[i] - '0';
        }
    }
    return sum;

}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::cin >> input;
    int result = pairedDigits(input);
    if (result == -1) {
        std::cerr << "Error: The input string must have an even number of digits." << std::endl;
        return -1;
    } else {
        std::cout << "Sum of paired digits is: " << result << std::endl;
        return 0;
    }
}
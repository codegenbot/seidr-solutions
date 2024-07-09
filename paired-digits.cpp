#include <string>
#include <iostream>

int pairedDigits(std::string s) {
    int sum = 0;
    int prevDigit = s[0] - '0';
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            sum += prevDigit + (s[i] - '0');
            if(sum > 9) return -1;
            prevDigit = (s[i] - '0');
        }
    }
    // Add the first digit to the total sum
    sum += prevDigit;
    return sum;

}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::cin >> input;  
    int result = pairedDigits(input);
    if(result == -1) {
        std::cout << "Error! Sum exceeds 9." << std::endl;
    } else {
        std::cout << "Sum of paired digits: " << result << std::endl;
    }
    return 0;
}
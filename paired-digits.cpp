#include <string>
#include <iostream>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            int currentSum = (s[i] - '0') + (s[i-1] - '0');
            while(currentSum > 9) {
                currentSum = (currentSum / 10) + (currentSum % 10);
            }
            sum += currentSum;
        }
    }
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
#include <string>
#include <iostream>

int pairedDigits(std::string s) {
    int sum = 0;
    int prev = -1;
    for (int i = 0; i < s.length(); i++) {
        int curr = s[i] - '0';
        if (curr == prev) {
            sum += curr;
        }
        prev = curr;
    }
    return sum;

}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::getline(std::cin, input);
    int result = pairedDigits(input);
    std::cout << "Sum of paired digits: " << result << std::endl;
    return 0;
}
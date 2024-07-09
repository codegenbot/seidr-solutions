```cpp
#include <iostream>
#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            sum += (s[i] - '0') + (s[i-1] - '0');
            if(sum > 100) return -1;
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
        std::cerr << "Error: The sum of paired digits exceeds 100." << std::endl;
        return -1;
    } else {
        std::cout << "Sum of paired digits is: " << result << std::endl;
        return 0;
    }
}
```cpp
#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if ((s[i] - '0') == (s[i+1] - '0')) {
            sum += (s[i] - '0');
        }
    }
    return sum;
}

int main() {
    std::string s;
    // Take input from user
    std::cout << "Enter a string of digits: ";
    std::cin >> s;

    int result = pairedDigits(s);
    std::cout << "Sum of the digits whose following digit is the same is: " << result << std::endl;
    
    return 0;
}
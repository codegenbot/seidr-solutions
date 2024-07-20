#include <vector>
#include <iostream>
#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}

int main() {
    std::string input;
    cout << "Enter a string of digits: ";
    cin >> input;
    cout << "The sum of the paired digits is: " << pairedDigits(input) << std::endl;
    return 0;
}
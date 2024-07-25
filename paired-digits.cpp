#include <vector>
#include <iostream>
#include <string>

int pairedDigits(const string& digits) {
    int sum = 0;
    for (int i = 0; i < digits.length() - 1; i++) {
        if (digits[i] == digits[i + 1]) {
            sum += digits[i] - '0';
        }
    }
    return sum;
}

int main() {
    string input;
    cout << "Enter a string of digits: ";
    cin >> input;
    cout << "Sum of paired digits is: " << pairedDigits(input) << endl;
    return 0;
}
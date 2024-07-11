#include <vector>
#include <iostream>
#include <string>

int pairedDigits(string str) {
    int sum = 0;
    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == str[i + 1]) {
            sum += str[i] - '0';
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
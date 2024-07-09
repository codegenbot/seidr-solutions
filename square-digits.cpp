#include <vector>
#include <iostream>
#include <string>

string squareDigits(string);

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;
    cout << squareDigits(input) << std::endl;
    return 0;
}

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}
#include <vector>
#include <iostream>
#include <string>

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}

int main() {
    // Read the input from user
    string input;
    cin >> input;

    // Write your code here

    cout << squareDigits(input);

    return 0;
}
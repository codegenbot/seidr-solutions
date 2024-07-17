#include <vector>
#include <iostream>
#include <string>

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        long long square = (long long)digit * digit;
        output += to_string(square);
    }
    return output;
}

int main() {
    string input;
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}
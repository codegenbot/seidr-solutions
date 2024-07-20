#include <string>
#include <iostream>

using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}

int main() {
    string input;
    cout << "Enter an integer: ";
    cin >> input;
    cout << "Square digits of " << input << ": " << squareDigits(input) << endl;
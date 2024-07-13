#include <vector>
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
    cout << "Enter a positive integer: ";
    cin >> input;
    cout << "The square digits of " << input << " is " << squareDigits(input) << endl;
    return 0;
}
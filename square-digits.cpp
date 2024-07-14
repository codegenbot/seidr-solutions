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
    string s;
    cout << "Enter a positive integer: ";
    cin >> s;
    cout << squareDigits(s) << endl;
    return 0;
}
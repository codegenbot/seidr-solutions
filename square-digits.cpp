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
    cout << squareDigits("0") << endl;  // Output: 0
    cout << squareDigits("1") << endl;  // Output: 1
    cout << squareDigits("2") << endl;  // Output: 4
    cout << squareDigits("3") << endl;  // Output: 9
    cout << squareDigits("4") << endl;  // Output: 16
    return 0;
}
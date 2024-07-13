#include <vector>
#include <iostream>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0'; // convert character to integer
        int squaredDigit = digit * digit;
        char c = '0' + squaredDigit; // convert integer back to character
        output += c; // add the character to the output string
    }
    return output;
}

int main() {
    cout << squareDigits("0") << endl;
    cout << squareDigits("1") << endl;
    cout << squareDigits("2") << endl;
    cout << squareDigits("3") << endl;
    cout << squareDigits("4") << endl;
    return 0;
}
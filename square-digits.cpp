#include <iostream>
#include <string>
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
    cout << squareDigits("0") << endl;
    cout << squareDigits("1") << endl;
    cout << squareDigits("2") << endl;
    cout << squareDigits("3") << endl;
    cout << squareDigits("4") << endl;

    return 0;
}
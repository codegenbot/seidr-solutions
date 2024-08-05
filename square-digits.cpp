#include <vector>
#include <iostream>
using namespace std;

string squareDigits(string n) {
    string res = "";
    for (char c : n) {
        int digit = c - '0';
        res += to_string(digit * digit);
    }
    return res;
}

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}
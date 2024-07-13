#include <iostream>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int num = c - '0';
        output += to_string(num * num);
    }
    return output;
}

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;
    cout << "Square digits of " << input << ": " << squareDigits(input) << endl;
    return 0;
}
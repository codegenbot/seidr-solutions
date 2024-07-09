```
#include <string>
#include <iostream>

using namespace std;

int main() {
    int input;
    cout << "Enter a positive integer: ";
    cin >> input;
    string output = squareDigits(to_string(input));
    cout << "Squared digits: " << output << endl;
    return 0;
}

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}
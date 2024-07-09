```cpp
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
    cout << "Enter a positive integer: ";
    cin >> input;  // Remove spaces from the input string
    string output = squareDigits(input);
    cout << "Squared digits: " << output << endl;
    return 0;
}
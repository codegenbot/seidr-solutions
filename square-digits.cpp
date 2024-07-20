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
    string number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Square digits of " << number << ": " << squareDigits(number) << endl;
}
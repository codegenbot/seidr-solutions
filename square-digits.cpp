```
#include <vector>
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
    string input;
    cout << "Enter a positive integer: ";
    getline(cin, input);
    cout << squareDigits(input) << std::endl;
    return 0;
}
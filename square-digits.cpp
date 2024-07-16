#include <iostream>
#include <string>
using namespace std;

string squareDigits(string input) {
    string result;
    for (char c : input) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input; 
    cout << "Squared digits: " << squareDigits(input) << endl;
    return 0;
}
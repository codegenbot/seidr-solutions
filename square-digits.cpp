#include <vector>
#include <iostream>
#include <string>

using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        long long squared = (long long)digit * digit;
        output += to_string(squared);
    }
    return output;
}

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}
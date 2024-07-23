#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        int digit = c - '0';
        if (!isdigit(c)) { 
            result += c;
        } else {
            result += to_string(digit * digit);
        }
    }
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}
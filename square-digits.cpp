#include <vector>
#include <iostream>
#include <string>

using namespace std;

string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        if (c >= '0' && c <= '9') { 
            int digit = c - '0';
            result += to_string(digit * digit);
        } else {
            result += c;
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
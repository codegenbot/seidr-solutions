#include <vector>
#include <iostream>
#include <string>

using namespace std;

string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        if (isdigit(c)) { 
            int digit = c - '0';
            result += to_string(digit * digit);
        } else {
            result += c; // add non-digit characters as is
        }
    }
    return result;
}

int main() {
    string input;
    getline(cin, input);  
    cout << squareDigits(input) << endl;
    return 0;
}
#include <string>
#include <sstream>

string squareDigits(string n) {
    string result = "";
    stringstream ss(n);
    char c;
    while (ss >> c) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
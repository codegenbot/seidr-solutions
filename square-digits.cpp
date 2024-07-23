#include <vector>
#include <iostream>
#include <string>

using namespace std;

string squareDigitsFunc(string n) {
    string result = "";
    for (char c : n) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}

int main() {
    cout << squareDigitsFunc("17") << endl;
    return 0;
}
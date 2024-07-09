#include <string>
#include <iostream>
#include <sstream>
using namespace std;

string squareDigits(string input) {
    ostringstream output;
    for (char c : input) {
        int digit = c - '0';
        output << to_string(digit * digit);
    }
    return output.str();
}

int main() {
    string input = "34";
    cout << squareDigits(input) << endl;
}
Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        int squared = digit * digit;
        output += to_string(squared);
    }
    return output;
}

int main() {
    string input;
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}
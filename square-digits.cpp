#include <vector>
#include <iostream>
#include <string>

using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        long long squared = (long long) digit * digit;
        output += to_string(squared);
    }
    return output;
}

int main() {
    cout << squareDigits("0") << endl;  // Should print: 0
    cout << squareDigits("1") << endl;  // Should print: 1
    cout << squareDigits("2") << endl;  // Should print: 4
    cout << squareDigits("3") << endl;  // Should print: 9
    cout << squareDigits("4") << endl;  // Should print: 16
    return 0;
}
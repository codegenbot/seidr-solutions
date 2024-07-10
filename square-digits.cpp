#include <vector>
#include <iostream>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}

int main() {
    // Test cases
    cout << squareDigits("0") << endl;  // Expected: "0"
    cout << squareDigits("1") << endl;  // Expected: "1"
    cout << squareDigits("2") << endl;  // Expected: "4"
    cout << squareDigits("3") << endl;  // Expected: "9"
    cout << squareDigits("4") << endl;  // Expected: "16"

    return 0;
}
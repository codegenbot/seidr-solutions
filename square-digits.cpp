```c++
#include <iostream>
#include <string>
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
    cout << squareDigits("17") << endl;  // Output: "289"
    cout << squareDigits("961") << endl;  // Output: "6949"

    return 0;
}
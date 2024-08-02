#include <iostream>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            return true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '&') {
            result &= true;
        } else if (s[i] == '|') {
            result |= true;
        }
    }
    return result;
}

int main() {
    string s1 = "T|F";
    cout << solveBoolean(s1) << endl;  // Expected output: 1

    string s2 = "&T|F";
    cout << solveBoolean(s2) << endl;  // Expected output: 0

    string s3 = "T&T&F";
    cout << solveBoolean(s3) << endl;  // Expected output: 0

    return 0;
}
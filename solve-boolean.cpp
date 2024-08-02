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
    cout << boolalpha;
    cout << solveBoolean("T") << endl;  // Expected: TRUE
    cout << solveBoolean("F") << endl;  // Expected: FALSE
    cout << solveBoolean("|T&F|") << endl;  // Expected: TRUE
    cout << solveBoolean("T&F") << endl;   // Expected: FALSE
    return 0;
}
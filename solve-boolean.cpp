#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            return true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '&') {
            result &= false;
        } else if (s[i] == '|') {
            result |= false;
        }
    }
    return result;
}

int main() {
    cout << solveBoolean("T") << endl;  // Expected output: 1
    cout << solveBoolean("F") << endl;  // Expected output: 0
    cout << solveBoolean("|T&F|") << endl;  // Expected output: 1
    cout << solveBoolean("|T&T|F|") << endl;  // Expected output: 1
    return 0;
}
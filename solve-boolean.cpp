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
            result &= true;
        } else if (s[i] == '|') {
            result |= true;
        }
    }
    return result;
}

int main() {
    cout << boolalpha;
    cout << solveBoolean("T") << endl;  // Expected: True
    cout << solveBoolean("F") << endl;  // Expected: False
    cout << solveBoolean("T|F") << endl;  // Expected: True
    cout << solveBoolean("F&T") << endl;  // Expected: False
    cout << solveBoolean("|T&F") << endl;  // Expected: True
    return 0;
}
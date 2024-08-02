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
    cout << solveBoolean("T") << endl;  // Should print: true
    cout << solveBoolean("F") << endl;  // Should print: false
    cout << solveBoolean("T|F") << endl;  // Should print: true
    cout << solveBoolean("T&F") << endl;  // Should print: false
    cout << solveBoolean("|F") << endl;   // Should print: true
    return 0;
}
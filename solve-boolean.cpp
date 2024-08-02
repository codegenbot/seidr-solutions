```cpp
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'T') {
            return true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '|') {
            result = !result;
        } else if (s[i] == '&') {
            if (!result) {
                return false;
            }
            result = false;
        }
        i++;
    }
    return result;
}

int main() {
    cout << boolalpha << solveBoolean("T") << endl; // Expected output: true
    cout << boolalpha << solveBoolean("F") << endl; // Expected output: false
    cout << boolalpha << solveBoolean("|T") << endl; // Expected output: true
    cout << boolalpha << solveBoolean("&F") << endl; // Expected output: false
    cout << boolalpha << solveBoolean("|&F") << endl; // Expected output: false
    return 0;
}
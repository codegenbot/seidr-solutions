```
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    int operation = 0; // 0 for T/F, 1 for &, 2 for |
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            return 1;
        } else if (s[i] == 'F') {
            return 0;
        } else if (s[i] == '&') {
            operation = 1;
        } else if (s[i] == '|') {
            operation = 2;
        } else if (operation > 0) {
            if (s[i] == 'T') {
                result = (operation == 1);
            } else if (s[i] == 'F') {
                result = !((operation == 1));
            }
        }
    }
    return result;
}

int main() {
    cout << solveBoolean("T") << endl; // Expected: 1
    cout << solveBoolean("F") << endl; // Expected: 0
    cout << solveBoolean("T&T") << endl; // Expected: 1
    cout << solveBoolean("F&F") << endl; // Expected: 0
    cout << solveBoolean("T|T") << endl; // Expected: 1
    cout << solveBoolean("F|F") << endl; // Expected: 0
    cout << solveBoolean("T&T|T") << endl; // Expected: 1
    cout << solveBoolean("F&F|T") << endl; // Expected: 0
    return 0;
}
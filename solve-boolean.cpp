#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'f') {
            result = false;
            break;
        } else if (s[i] == '&') {
            result &= true;
        } else if (s[i] == '|') {
            result |= true;
        }
    }
    return result;
}

int main() {
    // Test cases
    cout << boolalpha << solveBoolean("t") << endl;  // Output: True
    cout << boolalpha << solveBoolean("f") << endl;  // Output: False
    cout << boolalpha << solveBoolean("f&f") << endl;  // Output: False
    cout << boolalpha << solveBoolean("f&t") << endl;  // Output: False
    cout << boolalpha << solveBoolean("t&f") << endl;  // Output: False

    return 0;
}
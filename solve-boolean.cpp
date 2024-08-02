```cpp
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    int lastOpWasAnd = true; // initialize as if last operation was AND
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            return !lastOpWasAnd; // negate if not the last AND operation
        } else if (s[i] == 'F') {
            return !lastOpWasAnd; // negate if not the last AND operation
        } else if (s[i] == '&') {
            lastOpWasAnd = true;
        } else if (s[i] == '|') {
            lastOpWasAnd = false;
        }
    }
    return result;
}

int main() {
    cout << solveBoolean("T") << endl; // True
    cout << solveBoolean("F") << endl; // False
    cout << solveBoolean("T&F") << endl; // False
    cout << solveBoolean("T|F") << endl; // True
    cout << solveBoolean("F&T") << endl; // False
    cout << solveBoolean("F|T") << endl; // True
    return 0;
}
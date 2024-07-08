```cpp
#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool isAnd = false;
    bool isOr = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            isAnd = true;
            isOr = false;
        } else if (s[i] == '|') {
            isOr = true;
            isAnd = false;
        } else if ((isAnd && s[i] == 'T') || (isOr && s[i] == 'F')) {
            return !isOr;
        } else if ((isAnd && s[i] == 'F') || (isOr && s[i] == 'T')) {
            return isOr;
        }
    }
    return !isAnd;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}
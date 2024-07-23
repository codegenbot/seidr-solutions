#include <string>
#include <iostream>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'F') {
            res = false;
            break;
        } else if (c == '&') {
            res &= true;
        } else if (c == '|') {
            res |= true;
        }
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}
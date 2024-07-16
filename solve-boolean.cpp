#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    for (char c : s) {
        if (c == 'T') {
            return true;
        } else if (c == 'F') {
            return false;
        } else if (c == '|') {
            result = true;
        } else if (c == '&') {
            result &= true;
        }
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}
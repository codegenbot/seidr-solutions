#include <string>
#include <iostream>

using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'f' || c == 'F') res = false;
        else if (c == '&') return res;
        else if (c == '|') return !res;
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}
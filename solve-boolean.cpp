#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    for (char c : s) {
        if (c == 't') {
            result = true;
        } else if (c == 'f') {
            return false;
        } else if (c == '|') {
            return true; // | operator always returns True
        } else if (c == '&') {
            return false; // & operator always returns False
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
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') {
            result = true;
            break;
        } else if (s[i] == 'f') {
            return false;
        } else if (s[i] == '&') {
            bool left = solveBoolean(s.substr(0, i));
            bool right = solveBoolean(s.substr(i + 1));
            return left && right;
        } else if (s[i] == '|') {
            bool left = solveBoolean(s.substr(0, i));
            bool right = solveBoolean(s.substr(i + 1));
            return left || right;
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
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') continue;
        if (s[i] == 'F') return false;
        if (s[i] == '|') {
            res = false;
            break;
        }
        if (s[i] == '&') {
            res = true;
            break;
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
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'f') {
            res = false;
            break;
        } else if (s[i] == '|') {
            res = !res;
        } else if (s[i] == '&') {
            if (!res) return false;
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
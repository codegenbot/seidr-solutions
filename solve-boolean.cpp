#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') {
            res = true;
            break;
        } else if (s[i] == 'f') {
            return false;
        } else if (s[i] == '|') {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == 't') {
                    res = true;
                    break;
                } else if (s[j] == 'f') {
                    return false;
                }
            }
        } else if (s[i] == '&') {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == 't' && res) {
                    break;
                } else if (s[j] == 'f') {
                    return false;
                }
            }
        }
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False");
    return 0;
}
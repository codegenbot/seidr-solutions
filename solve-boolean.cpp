#include <string>

bool solveBoolean(string s) {
    bool res = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'f') {
            res = false;
            break;
        } else if (s[i] == '|') {
            if (i > 0 && s[i - 1] == '&') return true;
        }
    }
    return res;
}
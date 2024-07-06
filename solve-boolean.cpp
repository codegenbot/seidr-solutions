#include <string>

bool solveBoolean(std::string s) {
    bool t = true;
    bool f = false;
    bool res = t;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            res &= f;
            f = false;
        } else if (s[i] == '|') {
            res |= f;
            f = !f;
        } else if (s[i] == 'T' || s[i] == 't') {
            res = t;
            break;
        } else if (s[i] == 'F' || s[i] == 'f') {
            res = f;
            break;
        }
    }

    return res;
}
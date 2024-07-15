#include <string>

bool solveBoolean(string s) {
    bool res = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'T') res = true;
        else if (s[i] == 'F') return !res;
        else if (s[i] == '&') res &= (i + 1 < s.size() && s[++i] != 'F');
        else if (s[i] == '|') res |= (i + 1 < s.size() && s[++i] != 'F');
    }
    return res;
}
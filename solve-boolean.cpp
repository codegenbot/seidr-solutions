#include <string>

bool solveBoolean(string s) {
    bool res = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'T') res = true;
        else if (s[i] == 'F') return !res;
        else if (s[i] == '&') res = res && (i == s.size() - 1 || s[i+1] == 'T');
        else if (s[i] == '|') res = res || (i == s.size() - 1 || s[i+1] == 'T');
    }
    return res;
}
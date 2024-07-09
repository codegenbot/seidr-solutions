#include <string>

std::string solveBoolean(std::string s) {
    int res = s[0] == 'T' ? 1 : 0;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == '&') {
            res &= s[i + 1] == 'T';
            i++;
        } else if (s[i] == '|') {
            res |= s[i + 1] == 'T';
            i++;
        }
    }
    return res ? "True" : "False";
}
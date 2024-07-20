#include <string>

std::string solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            result &= (i + 1 < s.size() && s[i+1] != '&');
        } else if (s[i] == '|') {
            result |= (i + 1 < s.size() && s[i+1] != '|');
        }
    }
    return result ? "True" : "False";
}
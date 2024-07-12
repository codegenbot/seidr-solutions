#include <string>

string solveBoolean(string s) {
    bool result = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') {
            result = true;
        } else if (s[i] == 'f') {
            return result ? "True" : "False";
        } else if (s[i] == '|') {
            bool temp = false;
            for (; i < s.length() && s[i] != '&'; i++) {
                if (s[i] == 't') {
                    temp = true;
                } else if (s[i] == 'f') {
                    return temp ? "True" : "False";
                }
            }
        } else if (s[i] == '&') {
            bool temp = true;
            for (; i < s.length() && s[i] != '|'; i++) {
                if (s[i] == 't') {
                    temp &= true;
                } else if (s[i] == 'f') {
                    return "False";
                }
            }
            result &= temp;
        }
    }
    return result ? "True" : "False";
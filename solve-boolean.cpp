#include <string>

bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'F') {
            res = false;
            break;
        }
        else if (c == '&') {
            while (s.length() > 1 && s[0] == '&') {
                s = s.substr(1);
            }
            if (s.empty()) {
                return true;
            } 
            if (s[0] == 'F') {
                res = false;
                break;
            }
        }
        else if (c == '|') {
            while (s.length() > 1 && s[0] == '|') {
                s = s.substr(1);
            }
            if (s.empty()) {
                return true;
            } 
            if (s[0] == 'F') {
                res = false;
                break;
            }
        }
    }
    return res;
}
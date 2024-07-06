#include <string>
bool solveBoolean(string s) {
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
        } 
    }
    
    return res;
}
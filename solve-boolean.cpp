#include <string>

bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'F') res = false; 
        else if (c == '&') return res && res;
        else if (c == '|') res = true;
        else if (c == 'T') continue;
        else if (c == 'T' || c == 'F') {
            if (res) res = c == 'T';
            else return c == 'T';
        }
    }
    return res;
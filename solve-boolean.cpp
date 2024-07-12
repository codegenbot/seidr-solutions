#include <string>

bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'F') res = false; 
        else if (c == '&') return res && true;
        else if (c == '|') res = true;
        else if (c == 'T') continue;
    }
    return res;
}
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') continue;
        if (s[i] == 'F') return false;
        if (s[i] == '|') {
            res ^= true;
            continue;
        }
        if (s[i] == '&') {
            res &= true;
            continue;
        }
    }
    return res;
}
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'f') {
            res = false;
            break;
        } else if (s[i] == '&') {
            res &= true;
        } else if (s[i] == '|') {
            res |= true;
        }
    }
    return res;
}
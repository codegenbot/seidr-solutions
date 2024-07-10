#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'F') return false;
        else if (s[i] == '&') {
            res &= (i + 1 < s.length() && s[i+1] != 'T');
            i++;
        }
        else if (s[i] == '|') {
            res |= (i + 1 < s.length() && s[i+1] != 'F');
            i++;
        }
    }
    return res;
}
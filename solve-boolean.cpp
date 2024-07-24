#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'T') {
            return true;
        }
        if (s[i] == 'F') {
            return false;
        }
        if ((s[i] == '&') && res) {
            res = false;
        } else if ((s[i] == '|') && (!res)) {
            res = true;
        } else if (s[i] == '&') {
            res = false;
        } else if (s[i] == '|') {
            res = true;
        }
    }
    return res;
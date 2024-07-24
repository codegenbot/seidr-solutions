```
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    bool lastOp = true;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'T') {
            return true;
        }
        if (s[i] == 'F') {
            return false;
        }
        if (s[i] == '|') {
            res = lastOp;
            lastOp = true;
        }
        if (s[i] == '&') {
            res &= lastOp;
            lastOp = false;
        }
    }
    return res;
}
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'f') {
            res = false;
            break;
        } else if (c == '|') {
            if (!res) return false;
        } else if (c == '&') {
            if (res) continue;
            else {
                res = false;
                break;
            }
        }
    }
    return res;
}
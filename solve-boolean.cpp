#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'f') {
            res = false;
            break;
        }
        else if (c == '&') {
            continue;
        }
        else if (c == '|') {
            return !res;
        }
    }
    return res;
}
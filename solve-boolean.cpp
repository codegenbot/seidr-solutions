#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'F') {
            res = false;
            break;
        }
        else if (c == '&') {
            res &= !res;
        }
        else if (c == '|') {
            res |= !res;
        }
    }
    return res;
}
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = false;
    for (char c : s) {
        if (c == 't') res = true;
        else if (c == 'f') return false;
        else if (c == '&') return res;
        else if (c == '|') res ^= true;
    }
    return res;
}
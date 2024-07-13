#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    for (char c : s) {
        if (c == 't') {
            result = true;
        } else if (c == 'f') {
            return false;
        } else if (c == '&') {
            result &= true;
        } else if (c == '|') {
            result |= true;
        }
    }
    return result;
}
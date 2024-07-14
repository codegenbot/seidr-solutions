#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'T') continue;
        if (c == 'F') return false;
        if (c == '|') {
            result = !result;
        } else {
            result &= false;
        }
    }
    return result;
}
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'T') {
            return true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '|') {
            result = !result;
            i++;
        } else if (s[i] == '&') {
            i++;
        }
    }
    return result;
}
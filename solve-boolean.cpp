#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            return true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '|') {
            continue;
        } else if (s[i] == '&') {
            break;
        }
    }
    
    while (i < s.length()) {
        if (s[i] == '&') {
            result &= solveBoolean(s.substr(i + 1));
        } else if (s[i] == '|') {
            i++;
            result = true;
        } else if (s[i] == 'F' || s[i] == 'f') {
            return false;
        }
    }
    
    return result;
}
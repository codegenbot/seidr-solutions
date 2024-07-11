#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'F') {
            result = false;
            break;
        }
        else if (s[i] == '|') {
            if (i > 0 && s[i-1] == '&') return true;
        }
        else if (s[i] == '&') {
            if (i < s.length() - 1 && s[i+1] != '&') result = false;
        }
    }
    return result;
}
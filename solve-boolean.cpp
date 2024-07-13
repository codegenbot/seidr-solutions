#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') {
            res = true;
            break;
        }
        else if (s[i] == 'f') {
            return false;
        }
        else if (s[i] == '&') {
            if (i + 1 >= s.length() || s[i+1] != '&')
                return false;
            i++;
        }
        else if (s[i] == '|') {
            if (i + 1 >= s.length() || s[i+1] != '|')
                return true;
            i++;
        }
    }
    return res;
}
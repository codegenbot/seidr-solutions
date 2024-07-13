#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'f') {
            res = false;
            break;
        } else if (s[i] == '|') {
            for (int j = i + 1; j < s.size(); j++) {
                if (s[j] == 'f') {
                    return false;
                }
            }
            res = true;
            break;
        } else if (s[i] == '&') {
            for (int j = i + 1; j < s.size(); j++) {
                if (s[j] != 't' && s[j] != 'f') {
                    return false;
                }
            }
            res = true;
            break;
        }
    }
    return res;
}
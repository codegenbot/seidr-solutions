#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'f') {
            result = false;
            break;
        } else if (s[i] == '|') {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == 'f') {
                    return false;
                }
            }
            result = true;
            i = s.length();
        } else if (s[i] == '&') {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] != 't' && s[j] != '&') {
                    return false;
                }
            }
            result = true;
            i = s.length();
        }
    }
    return result;
}
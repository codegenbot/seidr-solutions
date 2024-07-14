#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') {
            result = true;
        } else if (s[i] == 'f') {
            return false;
        } else if (s[i] == '|') {
            bool temp = result;
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == 't') {
                    result = true;
                } else if (s[j] == 'f') {
                    return false;
                }
                i = j - 1;
                break;
            }
            result = temp;
        } else if (s[i] == '&') {
            bool temp = result;
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == 't') {
                    result = true;
                } else if (s[j] == 'f') {
                    return false;
                }
                i = j - 1;
                break;
            }
            result &= temp;
        }
    }
    return result;
}
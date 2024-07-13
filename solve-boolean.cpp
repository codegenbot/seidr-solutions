#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 't') {
            result = true;
            break;
        } else if (s[i] == 'f') {
            break;
        } else if (s[i] == '&') {
            i++;
            bool left = false;
            while (i < s.length() && s[i] != '&') {
                if (s[i] == 't')
                    left = true;
                i++;
            }
            result &= left;
        } else if (s[i] == '|') {
            i++;
            bool left = false;
            while (i < s.length() && s[i] != '|') {
                if (s[i] == 't')
                    left = true;
                i++;
            }
            result = result || left;
        }
    }
    return result;
}
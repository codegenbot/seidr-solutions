#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    int i = 0;

    while (i < s.length()) {
        if (s[i] == '&') {
            i++;
            if (s[i] == '&') {
                result &= (s[i++] == 'T');
            } else if (s[i] == '|') {
                result = false;
                break;
            } else {
                result &= (s[i] == 'T');
                i++;
            }
        } else if (s[i] == '|') {
            i++;
            if (s[i] == '|') {
                result |= (s[i++] == 'T');
            } else if (s[i] == '&') {
                break;
            } else {
                result |= (s[i] == 'T');
                i++;
            }
        } else {
            result = (s[i] == 'T');
            i++;
        }
    }

    return result;
#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.size(); ) {
        if (s[i] == 'T') {
            i++;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '|') {
            if (i == s.size() - 1) {
                return true;
            }
            i++;
        } else if (s[i] == '&') {
            bool foundT = false;
            for (int j = i; j < s.size(); ) {
                if (s[j] == 'T') {
                    foundT = true;
                    break;
                } else if (s[j] == 'F') {
                    return false;
                }
                j++;
            }
            result = foundT && !foundT ? false : result;
        }
    }
    return result;
}
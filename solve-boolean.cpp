#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.size(); ) {
        if (s[i] == 'F') {
            return false;
        } else if (s[i] == '|') {
            i++;
            if (i >= s.size() || s[i] == '&') {
                return true;
            } else if (i >= s.size()) {
                return false;
            }
        } else if (s[i] == '&') {
            bool foundT = false;
            while (i < s.size()) {
                if (s[i] == 'T') {
                    foundT = true;
                    break;
                } else if (s[i] == 'F') {
                    return false;
                }
                i++;
            }
            result = foundT;
        }
    }
    return result;
}
#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'F') {
            return false;
        }
        else if (s[i] == '|') {
            result = !result;
        }
        else if (s[i] == '&') {
            while(i+1<s.length() && s[i+1] == '&') i++;
            if (!result) return false;
        }
    }
    return true;
}
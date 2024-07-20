#include <string>

std::string solveBoolean(std::string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            if (i > 0 && s[i-1] == 'T')
                return "False";
            else
                result = "True";
        } else if (s[i] == '|') {
            if (i > 0 && s[i-1] == 'F')
                return "False";
            else
                result = "True";
        }
    }
    return result;
}
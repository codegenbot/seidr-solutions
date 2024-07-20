#include <string>

std::string solveBoolean(std::string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            if (i > 0 && s[i-1] == 'T')
                return "False";
            else if (i < s.size() - 1 && s[i+1] == 'T')
                return "True";
            else
                result = "False";
        } else if (s[i] == '|') {
            if (i > 0 && s[i-1] == 'F')
                return "False";
            else if (i < s.size() - 1 && s[i+1] == 'F')
                return "True";
            else
                result = "True";
        }
    }
    return result;
}
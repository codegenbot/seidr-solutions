#include <string>

std::string solveBoolean(std::string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            if (i > 0 && s[i-1] == '|') return "False";
            if (i < s.size() - 1 && s[i+1] == '|') return "True";
            if (i < s.size() - 1 && s[i+1] == '&') {
                result = "False";
                i++;
            }
        } else if (s[i] == '|') {
            if (i > 0 && s[i-1] == '&') return "True";
            if (i < s.size() - 1 && s[i+1] == '&') return "False";
            if (i < s.size() - 1 && s[i+1] == '|') {
                result = "True";
                i++;
            }
        }
    }
    return result;
}
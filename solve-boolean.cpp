#include <string>

std::string solveBoolean(std::string s) {
    if (s.size() == 0)
        return "True";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            if (result == "True" && s[i+1] != '&')
                return "False";
            result = "False";
        } else if (s[i] == '|') {
            if (result == "False" && s[i+1] != '|')
                return "False";
            result = "True";
        }
    }
    return result;
}
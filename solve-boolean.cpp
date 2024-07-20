#include <string>

std::string solveBoolean(std::string s) {
    std::string result = "True";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            if (result == "True" && i+1 < s.size() && s[i+1] != '&')
                return "False";
        } else if (s[i] == '|') {
            if (result == "False" && i+1 < s.size() && s[i+1] != '|')
                return "False";
        }
    }
    return result;
}
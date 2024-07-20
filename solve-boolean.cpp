#include <string>

std::string solveBoolean(std::string s) {
    std::string result = "True";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            if (result == "True") {
                if (i+1 >= s.size() || s[i+1] != '&')
                    return "False";
            }
        } else if (s[i] == '|') {
            if (result == "False") {
                if (i+1 >= s.size() || s[i+1] != '|')
                    return "False";
            } else {
                result = "True";
            }
        } else if (s[i] == 'T' && s[i+1] == 'r' && s[i+2] == 'u' && s[i+3] == 'e') {
            i += 3;
            result = "True";
        } else if (s[i] == 'F' && s[i+1] == 'a' && s[i+2] == 'l' && s[i+3] == 's' && s[i+4] == 'e') {
            i += 4;
            result = "False";
        }
    }
    return result;
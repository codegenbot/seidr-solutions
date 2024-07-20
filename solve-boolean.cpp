#include <string>

std::string solveBoolean(std::string s) {
    bool result = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            if (!result)
                return "False";
            else
                result = false;
        } else if (s[i] == '|') {
            if (result)
                return "True";
            else
                result = true;
        }
    }
    return result ? "True" : "False";
}
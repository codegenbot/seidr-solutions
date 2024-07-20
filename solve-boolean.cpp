#include <string>

std::string solveBoolean(std::string s) {
    std::string result = "True";
    bool prevBit = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            if (result == "True" && !prevBit)
                return "False";
        } else if (s[i] == '|') {
            if (result == "False" && prevBit)
                return "False";
        }
        prevBit = s[i] != 'F';
    }
    return result;
}
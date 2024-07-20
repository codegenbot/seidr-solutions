```c++
#include <string>

std::string solveBoolean(std::string s) {
    bool result = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            if (result && s[i+1] != '&')
                return "False";
            result &= true;
        } else if (s[i] == '|') {
            if (!result && s[i+1] != '|')
                return "False";
            result |= true;
        } else if (s[i] == 'T' || s[i] == 't') {
            result = true;
        } else if (s[i] == 'F' || s[i] == 'f') {
            result = false;
        }
    }
    return std::to_string(result);
}
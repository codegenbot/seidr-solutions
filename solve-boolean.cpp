#include <string>

std::string solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            if (result && s[i+1] != '&')
                return "False";
            result &= (s[i+1] == 'T');
        } else if (s[i] == '|') {
            if (!result && s[i+1] != '|')
                return "False";
            result |= (s[i+1] == 'T');
        }
    }
    if (result) 
        return "True";
    else
        return "False";
}
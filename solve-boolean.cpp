#include <string>

std::string solveBoolean(std::string s) {
    if(s == "T") return "True";
    if(s == "F") return "False";

    bool result = (s[0] == 'T');

    for(int i = 1; i < s.length(); i++) {
        switch(s[i]) {
            case '&':
                result &= (s[0] == 'T');
                break;
            case '|':
                result |= (s[0] == 'T');
                break;
            default:
                if(result) return "True";
                return "False";
        }
    }

    return result ? "True" : "False";
}
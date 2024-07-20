#include <string>
std::string solveBoolean(std::string s) {
    std::string result = "True";
    bool tempTrue = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            if (result == "True")
                tempTrue = true;
            else
                tempTrue = false;
        } 
        else if (s[i] == '|') {
            if (tempTrue)
                result = "True";
            else
                result = s[i+1] != '|' ? "False" : result;
        }
    }
    return result;
}
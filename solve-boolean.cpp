```#include <string>

std::string solveBoolean(std::string s) {
    bool result = (s == "t") ? true : false;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            std::string left = s.substr(0, i);
            std::string right = s.substr(i+1);
            result &= (left == "t") ? true : (left == "f");
            result &= (right == "t") ? true : (right == "f");
        }
        if(s[i] == '|') {
            std::string left = s.substr(0, i);
            std::string right = s.substr(i+1);
            result |= (left == "t") ? true : (left == "f");
            result |= (right == "t") ? true : (right == "f");
        }
    }
    return result ? "True" : "False";
}``
```cpp
#include <string>

std::string solveBoolean(std::string s) {
    bool result = (s == "T");
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            std::string left = s.substr(0, i);
            std::string right = s.substr(i+1);
            result &= (left == "T") ? true : (left == "F");
            result &= (right == "T") ? true : (right == "F");
        }
        if(s[i] == '|') {
            std::string left = s.substr(0, i);
            std::string right = s.substr(i+1);
            result |= (left == "T") ? true : (left == "F");
            result |= (right == "T") ? true : (right == "F");
        }
    }
    return result ? "True" : "False";
}
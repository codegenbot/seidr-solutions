```#include <string>

string solveBoolean(string s) {
    bool result = (s == "t");
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            result &= (left == "t") ? true : (left == "f");
            result &= (right == "t") ? true : (right == "f");
        }
        else if(s[i] == '|') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            result |= (left == "t") ? true : (left == "f");
            result |= (right == "t") ? true : (right == "f");
        }
    }
    return result ? "True" : "False";
}``
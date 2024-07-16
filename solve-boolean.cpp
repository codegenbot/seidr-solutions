#include <string>

string solveBoolean(string s) {
    bool result = (s == "t") || (s == "T");
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            result &= ((left == "t" || left == "T") && (right == "t" || right == "T"));
        }
        if(s[i] == '|') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            result |= ((left == "t" || left == "T") || (right == "t" || right == "T"));
        }
    }
    return result ? "True" : "False";
}
#include <string>

string solveBoolean(string s) {
    bool result = (s == "T");
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '|') {
            result = !result;
        } else if(s[i] == '&') {
            if(i+1<s.length() && s[i+1] == 'T')
                result &= true;
            else
                return "False";
            i++;
        }
    }
    return result ? "True" : "False";
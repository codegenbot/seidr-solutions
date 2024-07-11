#include <string>

string solveBoolean(string s) {
    bool result = (s == "T");
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '|') {
            result = !result;
        } else if(s[i] == '&') {
            result &= (s[i+1] == 'T');
            i++;
        }
    }
    return result ? "True" : "False";
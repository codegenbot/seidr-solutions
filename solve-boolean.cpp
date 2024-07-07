#include <string>

bool solveBoolean(string s) {
    bool result = true;
    int i = 0;
    while(i<s.size()) {
        if(s[i]=='F') {
            result = false;
            break;
        }
        else if(s[i] == '&') {
            i++;
            if(i==s.size() || s[i] == '|') return false;
        }
        else if(s[i] == '|') {
            i++;
            if(i==s.size() || s[i] == '&') return true;
        }
        i++;
    }
    return result;
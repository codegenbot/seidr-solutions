#include <string>

bool solveBoolean(string s) {
    bool res = (s[0] == 'T');
    int i = 1;
    while(i < s.size()) {
        if(s[i] == '|') {
            res = res || (s[i+1] == 'T');
            i += 2;
        }
        else if(s[i] == '&') {
            res = res && (s[i+1] == 'T');
            i += 2;
        } 
        else {
            i++;
        }
    }
    return res;
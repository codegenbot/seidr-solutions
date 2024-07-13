#include <string>

bool solveBoolean(string s) {
    bool res = (s[0] == 'T');
    for(int i = 1; i < s.size(); ++i) {
        if(s[i] == '|') {
            res = res || ((s[i+1] == 'T') ? true : false);
            i++;
        }
        else if(s[i] == '&') {
            res = res && ((s[i+1] == 'T') ? true : false);
            i++;
        }
    }
    return res;
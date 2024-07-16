#include <string>

bool solveBoolean(std::string s) {
    bool res = true;
    int i = 0;

    while(i < s.length()) {
        if(s[i] == '&') {
            while(i + 1 < s.length() && s[i+1] == '&') {
                i++;
            }
            res &= (s[i] == 'T');
        } else if(s[i] == '|') {
            while(i + 1 < s.length() && s[i+1] == '|') {
                i++;
            }
            res |= (s[i] != 'F');
        } else {
            i++;
            if(i >= s.length()) break;
            if(s[i] == 'T') res = true; 
            else res = false;
        }
    }

    return res;
}
#include <string>

bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'F') {
            res = false;
        }
        else if (c == '&') {
            while(s[s.find(c)+1] != '&' && s.find(c) != string::npos){
                c = s[s.find(c)+1];
                s.erase(s.find(c), 1);
            }
            if(s.find('F') != string::npos) res &= false;
        }
        else if (c == '|') {
            while(s[s.find(c)+1] != '|' && s.find(c) != string::npos){
                c = s[s.find(c)+1];
                s.erase(s.find(c), 1);
            }
            if(s.find('F') != string::npos) res |= false;
        }
    }
    return res;
}
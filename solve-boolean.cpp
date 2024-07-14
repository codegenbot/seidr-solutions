#include <string>
using namespace std;

bool solveBoolean(string s) {
    if(s == "T") return true;
    if(s == "F") return false;
    
    bool a = (s[0] == 'T'), b;
    int i = 1;
    while(i < s.size() && s[i] != '&') i++;
    b = (i == s.size());
    
    if(s[0] == 'f' || s[0] == 'F') a = false;
    if(b) return a;
    
    if(s[0] == '|') {
        while(i < s.size() && s[i] != '|') i++;
        b = (i == s.size());
    } else {
        while(i < s.size() && s[i] != '&') i++;
        b = (i == s.size());
    }
    
    return a || b;
}
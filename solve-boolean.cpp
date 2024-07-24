#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'f') res = false;
        else if(s[i] == '&') {
            while(i+1 < s.length() && s[i+1] != '&') i++;
        }
        else if(s[i] == '|') {
            while(i+1 < s.length() && s[i+1] != '|') i++;
        }
    }
    return res;
}
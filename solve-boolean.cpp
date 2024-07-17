#include <string>
using namespace std;

bool solveBoolean(string s) {
    if(s[0] == 'T')
        return true;
    else if(s[0] == 'F')
        return false;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            
            if(left == "T" && right == "T")
                return true;
            else
                return false;
        }
        else if(s[i] == '|') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            
            if(left == "T" || right == "T")
                return true;
            else
                return false;
        }
    }
    
    return false;  // default to False
}
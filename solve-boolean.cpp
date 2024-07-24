#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    bool temp = true;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T' || s[i] == 't') 
            temp = true;
        else if (s[i] == 'F' || s[i] == 'f') 
            temp = false;
        else if (s[i] == '&') {
            result &= temp;
            temp = false;
        } 
        else if (s[i] == '|') {
            result |= temp;
            temp = false;
        }
    }
    
    return result;
}
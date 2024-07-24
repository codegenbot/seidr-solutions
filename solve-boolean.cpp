#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    int i = 0;
    while(i < s.length()) {
        if(s[i] == 'T') {
            return true;
        }
        else if(s[i] == 'F') {
            return false;
        }
        else if(s[i] == '|') {
            i++;
            bool left = solveBoolean(s.substr(0, i));
            i++;
            bool right = solveBoolean(s.substr(i));
            result = (left || right);
        }
        else if(s[i] == '&') {
            i++;
            bool left = solveBoolean(s.substr(0, i));
            i++;
            bool right = solveBoolean(s.substr(i));
            result = (left && right);
        }
    }
    return result;
}
#include <string>
using namespace std;

bool solveBoolean(string s) {
    if(s == "T" || s == "t") return true;
    if(s == "F" || s == "f") return false;
    
    int i = 0, j = 1;
    while(j < s.length()) {
        if(s[j] == '|') {
            string left = s.substr(i,j-i);
            string right = s.substr(j+1);
            return solveBoolean(left) || solveBoolean(right);
        }
        else if(s[j] == '&') {
            string left = s.substr(i,j-i);
            string right = s.substr(j+1);
            return solveBoolean(left) && solveBoolean(right);
        }
        j++;
    }
    
    return false;
}
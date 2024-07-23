````
#include <iostream>
#include <string>

using namespace std;

string solveBoolean(string s) {
    bool result = (s == "t");
    for(int i=1; i<s.size(); i++) {
        if(s[i] == '&') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            result &= (left == "t") || (right == "t");
        } else if(s[i] == '|') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            result |= (left == "t") || (right == "t");
        }
    }
    return result ? "True" : "False";
}
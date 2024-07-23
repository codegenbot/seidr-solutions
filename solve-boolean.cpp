#include <string>
using namespace std;

std::string solveBoolean(std::string s) {
    bool result = (s == "T");
    for(int i=1; i<s.size(); i++) {
        if(s[i] == '&') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            result &= (left == "T") | (right == "T");
        } else if(s[i] == '|') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            result |= (left == "T") | (right == "T");
        }
    }
    return result ? "True" : "False";
}
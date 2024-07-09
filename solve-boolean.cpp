Here is the modified code:

#include <string>

std::string solveBoolean(std::string s) {
    int prevOp = -1;
    for (char c : s) {
        if (c == 'T' || c == 'F') {
            if (prevOp == '|') return c == 'T'? "True" : "False";
            else if (prevOp == '&') return c == 'T'? "True" : "False";
            prevOp = -1;
        } else if (c == '|') {
            prevOp = '|';
        } else if (c == '&') {
            prevOp = '&';
        }
    }
    return s[0] == 'T'? "True" : "False";
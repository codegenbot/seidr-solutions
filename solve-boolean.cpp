#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    bool prev = false;
    bool curr = false;

    for (char c : s) {
        if (c == 'T') {
            curr = true;
        } else if (c == 'F') {
            curr = false;
        } else if (c == '|') {
            prev = curr;
            curr = (prev || curr);
        } else if (c == '&') {
            prev = curr;
            curr = (prev && curr);
        }
    }

    return curr;
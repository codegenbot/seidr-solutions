#include <string>

bool solveBoolean(std::string s) {
    bool val = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            while (!val && i + 1 < s.size() && s[i+1] == '&') {
                i++;
            }
            val = true;
        } else if (s[i] == '|') {
            while (!val && i + 1 < s.size() && s[i+1] == '|') {
                i++;
            }
            val = false;
        } else {
            val = (s[i] == 'T');
        }
    }
    return val;
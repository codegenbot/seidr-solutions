```
#include <string>
#include <stack>

bool solveBoolean(std::string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'F') {
            result = false;
        } else if (c == '&') {
            while (!result && !s.empty() && s.back() == '&') {
                s.pop_back();
            }
        } else if (c == '|') {
            while (!result && !s.empty() && s.back() == '|') {
                s.pop_back();
            }
        }
    }
    return result;
}
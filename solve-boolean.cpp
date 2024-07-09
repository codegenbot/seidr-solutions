```
#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    bool res = false;
    std::stack<char> ops;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T' || s[i] == 'F') {
            if (!ops.empty() && (ops.top() == '&' || ops.top() == '|')) {
                res = (res && (s[i] == T)) || (s[i] == F);
                ops.pop();
            } else {
                res = (s[i] == 'T');
            }
        } else if (s[i] == '&') {
            while (!ops.empty() && ops.top() != '|') {
                ops.pop();
            }
            ops.push(s[i]);
        } else if (s[i] == '|') {
            while (!ops.empty()) {
                ops.pop();
            }
            ops.push(s[i]);
        }
    }
    return res;
}
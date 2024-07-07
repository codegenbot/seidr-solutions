#include <stack>
using namespace std;

bool solveBoolean(string s) {
    bool t = true;
    bool f = false;
    bool res = true;
    stack<char> ops;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == 't') {
            res = (ops.empty() || c == '&') ? t : f;
        } else if (c == 'f') {
            res = (ops.empty() || c == '&') ? f : t;
        } else if (c == '&') {
            ops.push('&');
            res = t;
        } else if (c == '|') {
            while (!ops.empty() && ops.top() == '&') {
                ops.pop();
                res = false;
            }
            ops.push('|');
        }
    }

    return res;
}
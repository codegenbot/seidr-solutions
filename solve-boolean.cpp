#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> operation;
    stack<bool> value;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T' || s[i] == 't') {
            value.push(true);
        } else if (s[i] == 'F' || s[i] == 'f') {
            value.push(false);
        } else if (s[i] == '&') {
            bool b1 = value.top(); value.pop();
            bool b2 = value.top(); value.pop();
            value.push(b1 && b2);
        } else if (s[i] == '|') {
            bool b1 = value.top(); value.pop();
            bool b2 = value.top(); value.pop();
            value.push(b1 || b2);
        }
    }

    return value.top();
}
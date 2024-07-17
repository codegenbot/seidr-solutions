#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBoolean(string s) {
    if (s.size() == 0) return false;
    
    stack<char> ops;
    stack<string> values;
    
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            ops.push('(');
        } else if (s[i] == ')') {
            while (ops.top() != '(') {
                char op = ops.top();
                ops.pop();
                values.push(op == '&' ? "and" : "|");
            }
            ops.pop(); // pop the '('
        } else if (s[i] == '&' || s[i] == '|') {
            while (!ops.empty() && ops.top() != '(') {
                char op = ops.top();
                ops.pop();
                values.push(op == '&' ? "and" : "|");
            }
            ops.push(s[i]);
        } else if (s[i] == 'T' || s[i] == 'F') {
            string val;
            while (i + 1 < s.size() && (s[i+1] >= '0' && s[i+1] <= '9' || s[i+1] >= 'A' && s[i+1] <= 'Z')) {
                val += s[i++];
            }
            values.push(val);
        }
    }
    
    while (!ops.empty()) {
        char op = ops.top();
        ops.pop();
        string leftVal = values.top();
        values.pop();
        string rightVal = values.top();
        values.pop();
        
        if (op == '&') {
            values.push(leftVal + " and " + rightVal);
        } else {
            values.push(leftVal + " or " + rightVal);
        }
    }
    
    return values.top() == "T";
}
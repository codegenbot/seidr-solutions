#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> ops;
    stack<string> values;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!ops.empty() && ops.top() == '|')
                ops.pop(), values.push("(" + values.top() + ")");
            ops.push('&');
        } else if (expression[i] == '|') {
            while (!ops.empty()) 
                ops.pop(), values.push("(" + values.top() + ")");
            ops.push('|');
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            string val = "";
            while (i < expression.length() && (expression[i] == 'T' || expression[i] == 'F')) 
                val += expression[i++];
            values.push(val);
            i--;
        } else if (expression[i] == '(') {
            ops.push(expression[i]);
        } else if (expression[i] == ')') {
            while (ops.top() != '(') {
                string temp = values.top(), values_top = values.top();
                values.pop(); 
                values.pop();
                values.push("(" + temp + "&" + values_top + ")");
                ops.pop();
            }
            ops.pop();
        } 
    }

    return values.top() == "T";
}
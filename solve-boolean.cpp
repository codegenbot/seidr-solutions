#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> ops;
    stack<string> values;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&' || expression[i] == '|') {
            while (!ops.empty() && ops.top() != '(') {
                values.push(string(1, expression[i]));
                ops.pop();
            }
            ops.push(expression[i]);
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            string val = "";
            do {
                val += expression[i];
                i++;
            } while (i < expression.length() && (expression[i] == 'T' || expression[i] == 'F'));
            values.push(val);
        } else if (expression[i] == '(') {
            ops.push(expression[i]);
        } else if (expression[i] == ')') {
            while (!ops.empty() && ops.top() != '(') {
                values.push(string(1, values.top()[0]));
                values.pop();
                ops.pop();
            }
            ops.pop(); // Remove the '('
        }
    }

    string result = values.top();
    values.pop();

    while (!values.empty()) {
        string op = values.top();
        values.pop();
        if (op == "&") {
            result = (result == "True") ? "False" : "True";
        } else if (op == "|") {
            result = (result == "True") ? "True" : "False";
        }
    }

    return result == "True";
}
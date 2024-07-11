#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> ops;
    stack<string> values;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            string right = values.top();
            values.pop();
            string left = values.top();
            values.pop();
            values.push(to_string((left[0] == 'T' && right[0] == 'T') ? 'T' : 'F'));
            ops.push('&');
        } else if (expression[i] == '|') {
            string right = values.top();
            values.pop();
            string left = values.top();
            values.pop();
            values.push(to_string((left[0] == 'T' && right[0] == 'T') ? 'T' : (left[0] == 'F' && right[0] == 'F') ? 'F' : 'T'));
            ops.push('|');
        } else if (expression[i] == 't' || expression[i] == 'T') {
            values.push("T");
        } else if (expression[i] == 'f' || expression[i] == 'F') {
            values.push("F");
        }
    }

    return values.top()[0] == 'T';
}
```
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> opStack;
    stack<string> valStack;
    string v2;
    char temp;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|')
                opStack.pop(), valStack.pop();
            opStack.push('&');
        } else if (expression[i] == '|') {
            opStack.push('|');
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            string temp = "";
            while (i > 0 && (expression[i-1] == '&' || expression[i-1] == '|')) {
                i--;
            }
            for (; i > 0 && (expression[i-1] != '&' && expression[i-1] != '|'); i--)
                temp = string(1, expression[--i]);
            valStack.push(temp);
        }
    }

    while (!opStack.empty()) {
        v2 = valStack.top();
        valStack.pop();
        if (opStack.top() == '&') {
            opStack.pop();
            valStack.push((valStack.top() == "T" && v2 == "T") ? "T" : "F");
            valStack.pop();
        } else {
            opStack.pop();
            valStack.push((valStack.top() == "T" || v2 == "T") ? "T" : "F");
            valStack.pop();
        }
    }

    return valStack.top() == "T";
}
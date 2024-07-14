```
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> opStack;
    stack<string> valStack;
    stack<string> v2Stack;

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
        string v1 = valStack.top(), v2;
        valStack.pop();
        if (opStack.top() == '&') {
            opStack.pop();
            v2Stack.push((v1 == "T" && v2Stack.top() == "T") ? "T" : "F");
            valStack.pop();
        } else {
            opStack.pop();
            valStack.push((v1 == "T" || v2Stack.top() == "T") ? "T" : "F");
        }
    }

    return valStack.top() == "T";
}
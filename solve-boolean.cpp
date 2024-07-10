#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(string expression) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|')
                opStack.pop(), valStack.push(valStack.top()), valStack.pop();
            opStack.push('&');
        } else if (expression[i] == '|') {
            opStack.push('|');
        } else {
            string currVal = "";
            while (i < expression.length() && (expression[i] == 'T' || expression[i] == 'F')) {
                currVal += expression[i];
                i++;
            }
            i--;
            valStack.push(currVal);
        }
    }

    while (!opStack.empty()) {
        char op = opStack.top();
        opStack.pop();
        string v1 = valStack.top();
        valStack.pop();
        string v2;
        if (!opStack.empty())
            opStack.pop(), valStack.pop();
        else
            v2 = "T";
        if (op == '&')
            valStack.push((v1 == "T" && v2 == "T") ? "T" : "F");
        else
            valStack.push((v1 == "T" || v2 == "T") ? "T" : "F");
    }

    return valStack.top() == "T";
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    if (expression.size() > 0) {
        cout << "Resulting Boolean: " << (solveBoolean(expression) ? "True" : "False") << endl;
    }
    return 0;
}
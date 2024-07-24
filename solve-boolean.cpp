#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<char> opstack;
    stack<string> valstack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '(') {
            opstack.push(expression[i]);
        } else if (expression[i] == ')') {
            while (opstack.top() != '(') {
                valstack.push(getValue(&expression[i+1]));
                opstack.pop();
            }
            opstack.pop();  // Remove the '('
        } else if ((expression[i] >= 'a' && expression[i] <= 'f') || 
                   (expression[i] >= 'A' && expression[i] <= 'F')) {
            string temp = "";
            while (i < expression.length() && ((expression[i] >= 'a' && expression[i] <= 'f') || 
                                               (expression[i] >= 'A' && expression[i] <= 'F'))) {
                temp += expression[i];
                i++;
            }
            valstack.push(temp);
        } else if (expression[i] == '&' || expression[i] == '|') {
            while (!opstack.empty() && opstack.top() != '(') {
                valstack.push(getValue(&expression[i]));
                opstack.pop();
            }
        }
    }

    return getValue(NULL);
}

string getValue(char **exp) {
    if (*exp != NULL) {
        return *exp;
    } else {
        string temp = valstack.top();
        valstack.pop();
        return temp;
    }
}
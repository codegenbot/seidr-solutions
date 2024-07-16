```cpp
#include <iostream>
#include <stack>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<bool> s;
    string op = "";
    for (int i = 0; i < expression.length(); ++i) {
        if (expression[i] == '(' || expression[i] == '|') {
            op = "|";
        } else if (expression[i] == ')' || expression[i] == '&') {
            while ((op != "(" && s.size() > 1) || op == "&") {
                bool b2 = s.top(); s.pop();
                bool b1 = s.top(); s.pop();
                if (op == "|")
                    s.push(b1 || b2);
                else
                    s.push(b1 && b2);
            }
            op = "";
        } else {
            if (expression[i] == 'T')
                s.push(true);
            else if (expression[i] == 'F')
                s.push(false);
        }
    }
    return s.top();
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
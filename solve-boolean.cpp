#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<string> s;
    string temp = "";

    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '(') {
            s.push(expression.substr(0, i + 1));
            temp = "";
        } else if (expression[i] == ')') {
            while (!s.empty() && s.top() != "(") {
                temp += s.top();
                s.pop();
            }
            if (!s.empty()) {
                s.pop();
            }
            expression.replace(0, i + 1 - expression.find('('), temp);
            i = 0;
        } else if (expression[i] == '&' || expression[i] == '|') {
            while (!s.empty() && precedence(expression[i]) <= precedence(s.top()[0])) {
                temp += s.top();
                s.pop();
            }
            temp += expression[i];
        } else {
            temp += expression[i];
        }

        if (i == expression.size() - 1 || expression[i + 1] == '(' || expression[i + 1] == ')' || (expression[i + 1] == '&' && precedence(expression[i]) > precedence(expression[i + 1])) || (expression[i + 1] == '|' && precedence(expression[i]) >= precedence(expression[i + 1]))) {
            s.push(temp);
            temp = "";
        }
    }

    while (!s.empty()) {
        temp += s.top();
        s.pop();
    }

    if (temp == "t") return true;
    if (temp == "f") return false;

    bool left = solveBoolean(temp.substr(0, temp.find("|")));
    string right = temp.substr(temp.find("|") + 1);
    if (!right.empty() && right[0] == '&') {
        return (solveBoolean(left) && solveBoolean(right.substr(1)));
    }

    return left || solveBoolean(right);
}

int precedence(char c) {
    if (c == '|') return 1;
    if (c == '&') return 2;
    return 3;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}
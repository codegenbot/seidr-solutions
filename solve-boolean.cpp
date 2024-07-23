#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<string> s;
    string temp = "";

    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '(') {
            s.push(expression.substr(0, i));
            expression = expression.substr(i + 1);
            i = -1;
        }
        else if (expression[i] == ')') {
            expression = s.top() + expression;
            s.pop();
        }
        temp += expression[i];

        if (i + 1 < expression.size() && ((temp[temp.size() - 1] == '&' && expression[i + 1] == '&') || 
                                            (temp[temp.size() - 1] == '|' && expression[i + 1] == '|'))) {
            s.push(temp);
            temp = "";
        }
    }

    if (expression.find("T") != string::npos)
        return true;
    else
        return false;
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
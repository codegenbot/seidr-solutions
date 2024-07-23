#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<string> s;
    
    for (int i = 0; i < expression.size(); ++i) {
        if (expression[i] == '(') {
            s.push("(" + expression.substr(i));
            i++;
        }
        else if (expression[i] == ')') {
            string subexpr = s.top();
            s.pop();
            string temp = "";
            
            while (!s.empty() && s.top().compare("(") != 0) {
                temp += s.top() + " ";
                s.pop();
            }
            
            if (!s.empty()) {
                s.pop();
            }
            expression.replace(expression.find(subexpr), subexpr.size(), solveBoolean(temp + subexpr + " ") + ")");
        }
        else if (expression[i] == '&' || expression[i] == '|') {
            string op = expression[i];
            i++;
            
            while (i < expression.size() && (expression[i] == 'T' || expression[i] == 'F')) {
                string val = expression.substr(0, ++i);
                if (val.compare("T") == 0)
                    s.push(string("true"));
                else
                    s.push(string("false"));
            }
            
            while (!s.empty() && s.top().compare("(") != 0) {
                string temp = s.top();
                s.pop();
                if (op == '&')
                    op = " && ";
                else
                    op = " || ";
                expression.replace(expression.find(temp), temp.size(), "(solveBoolean(" + temp + "))" + op);
            }
        }
    }
    
    return (expression.compare(string("true")) == 0)? true : false;
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
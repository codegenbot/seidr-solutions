#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

bool evaluate(string expression) {
    vector<char> operators = {'|', '&'};
    map<char, int> precedence = {{'|', 1}, {'&', 2}};
    stack<char> output;

    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '(') {
            output.push(expression[i]);
        } else if (expression[i] == ')') {
            while (!output.empty() && output.top() != '(') {
                char op = output.top();
                output.pop();
                if (op == '|') {
                    bool a = output.top();
                    output.pop();
                    bool b = output.top();
                    output.pop();
                    output.push(a || b);
                } else if (op == '&') {
                    bool a = output.top();
                    output.pop();
                    bool b = output.top();
                    output.pop();
                    output.push(a && b);
                }
            }
        } else if (operators.find(expression[i]) != string::npos) {
            while (!output.empty() && precedence[output.top()] >= precedence[expression[i]]) {
                char op = output.top();
                output.pop();
                if (op == '|') {
                    bool a = output.top();
                    output.pop();
                    bool b = output.top();
                    output.pop();
                    output.push(a || b);
                } else if (op == '&') {
                    bool a = output.top();
                    output.pop();
                    bool b = output.top();
                    output.pop();
                    output.push(a && b);
                }
            }
            output.push(expression[i]);
        } else {
            output.push(expression[i] == 't');
        }
    }

    while (!output.empty()) {
        char op = output.top();
        output.pop();
        if (op == '|') {
            bool a = output.top();
            output.pop();
            bool b = output.top();
            output.pop();
            output.push(a || b);
        } else if (op == '&') {
            bool a = output.top();
            output.pop();
            bool b = output.top();
            output.pop();
            output.push(a && b);
        }
    }

    return output.top();
}

int main() {
    string expression;
    cin >> expression;
    cout << evaluate(expression) << endl;
    return 0;
}
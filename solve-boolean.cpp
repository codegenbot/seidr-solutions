#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
*/
int main() {
    string expression;
    cin >> expression;
    bool result = evaluate(expression);
    cout << (result ? "True" : "False") << endl;
    return 0;
}

bool evaluate(string expression) {
    // Implement the logic to evaluate the Boolean expression here
    // You can use a stack or recursion to parse the expression
    // and apply the appropriate operations
    if (expression.empty()) {
        return false;
    }
    vector<char> operators = {'&', '|'};
    queue<char> operatorQueue;
    for (int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if (c == '(') {
            operatorQueue.push(c);
        } else if (c == ')') {
            while (!operatorQueue.empty() && operatorQueue.front() != '(') {
                evaluate(expression.substr(0, i));
                expression = expression.substr(i + 1);
                i = 0;
            }
            operatorQueue.pop();
        } else if (operators.find(c) != string::npos) {
            while (!operatorQueue.empty() && precedence(c) <= precedence(operatorQueue.front())) {
                evaluate(expression.substr(0, i));
                expression = expression.substr(i + 1);
                i = 0;
            }
            operatorQueue.push(c);
        } else {
            return false;
        }
    }
    while (!operatorQueue.empty()) {
        evaluate(expression);
        expression = "";
    }
    return true;
}

int precedence(char op) {
    if (op == '&') {
        return 1;
    } else if (op == '|') {
        return 0;
    } else {
        return -1;
    }
}
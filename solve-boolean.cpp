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

bool evaluate(string s) {
    if (s.empty()) {
        return false;
    }
    stack<char> operators;
    stack<bool> operands;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            continue;
        }
        if (s[i] == 't') {
            operands.push(true);
        } else if (s[i] == 'f') {
            operands.push(false);
        } else if (s[i] == '|') {
            operators.push('|');
        } else if (s[i] == '&') {
            operators.push('&');
        } else if (s[i] == ')') {
            bool op1 = operands.top();
            operands.pop();
            bool op2 = operands.top();
            operands.pop();
            char op = operators.top();
            operators.pop();
            if (op == '|') {
                operands.push(op1 || op2);
            } else if (op == '&') {
                operands.push(op1 && op2);
            }
        }
    }
    return operands.top();
}
int main() {
    string s = "t | f";
    cout << evaluate(s) << endl;
    return 0;
}

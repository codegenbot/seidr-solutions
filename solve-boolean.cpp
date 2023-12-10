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
bool evaluate(string expression) {
    vector<char> operators;
    vector<bool> operands;
    for (int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if (c == 'T' || c == 'F') {
            operands.push_back(c == 'T');
        } else if (c == '|') {
            operators.push_back('|');
        } else if (c == '&') {
            operators.push_back('&');
        }
    }

    for (int i = 0; i < operators.size(); i++) {
        char op = operators[i];
        bool result = false;
        if (op == '|') {
            result = operands[i] || operands[i + 1];
        } else if (op == '&') {
            result = operands[i] && operands[i + 1];
        }
        operands.erase(operands.begin() + i);
        operands.push_back(result);
    }

    return operands[0];
}
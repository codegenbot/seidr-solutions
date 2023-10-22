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

bool toBool(string s) {
    return s == "t";
}
bool calc(bool left, string op, bool right) {
    if (op == "&") {
        return left && right;
    } else if (op == "|") {
        return left || right;
    }
}

/* "t   &  (f   | t)"
 *   0   1      2   3
 *   left++
 *            left++
 *                 left--
 */
bool evaluate(string expression) {
    int n = expression.length();
    int left = 1;
    string leftExpression = expression.substr(2, left);
    bool leftVal = toBool(leftExpression);
    string oper;
    while (left < n) {
        if (left == n - 2 || expression[left + 1] == ' ') {//t & t || t & (f|t)  || (f & f)
            oper = expression[left];
            string rightExpression = expression.substr(left + 2, n - left - 2);
            bool rightVal = toBool(rightExpression);
            return calc(leftVal, oper, rightVal);
        } else if (expression[left + 1] == ')') {//t & (t) && (t & t)
            oper = expression[left];
            bool rightVal = evaluate(expression.substr(2, left - 2));
            return calc(leftVal, oper, rightVal);
        } else { //(t & (t & t)
            left++;
        }
    }
    return false;
}


int main() {
    bool ans = evaluate("t & (f | t)");
    return 0;
}

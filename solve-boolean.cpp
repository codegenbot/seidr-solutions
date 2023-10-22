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
https://dev.to/devmount/daily-coding-problem-190-b2q
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
bool Evaluate(string expression)
{
    stack<char> exprStack;
    for (int i = 0; i < expression.size(); ++i)
    {
        char c = expression[i];
        if (c == '&' || c == '|')
        {
            if (exprStack.size() < 2)
                return false;
            char val1 = exprStack.top();
            exprStack.pop();
            char val2 = exprStack.top();
            exprStack.pop();
            bool boolVal1 = val1 == 'T' ? true : false;
            bool boolVal2 = val2 == 'T' ? true : false;
            bool result = c == '&' ? boolVal1 & boolVal2 : boolVal1 | boolVal2;
            if (result)
                exprStack.push('T');
            else
                exprStack.push('F');
        }
        else
            exprStack.push(c);
    }

    return exprStack.top() == 'T' ? true : false;
}

void test()
{
    string s1 = "T&F", s2 = "T|F", s3 = "F|T";
    cout << Evaluate(s1) << endl; // false
    cout << Evaluate(s2) << endl; // true
    cout << Evaluate(s3) << endl; // true
}

int main() {
    test();
    return 0;
}

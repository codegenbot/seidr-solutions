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
    string s;
    cin >> s;
    stack<char> stk;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ')') {
            char a = stk.top();
            stk.pop();
            char b = stk.top();
            stk.pop();
            char op = stk.top();
            stk.pop();
            if (op == '&') {
                if (a == 'T' && b == 'T') {
                    stk.push('T');
                } else {
                    stk.push('F');
                }
            } else if (op == '|') {
                if (a == 'F' && b == 'F') {
                    stk.push('F');
                } else {
                    stk.push('T');
                }
            }
        } else {
            stk.push(s[i]);
        }
    }
    if (stk.top() == 'T') {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}

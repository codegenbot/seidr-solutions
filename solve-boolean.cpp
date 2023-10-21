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
    getline(cin, s);
    stack<char> stk;
    for (char c : s) {
        if (c == ' ') continue;
        if (c == '&' || c == '|') {
            stk.push(c);
        } else if (c == 't') {
            if (stk.empty()) {
                stk.push('t');
            } else {
                char op = stk.top();
                stk.pop();
                if (op == '&') {
                    stk.push(c);
                } else {
                    if (stk.top() == 't') {
                        stk.push(c);
                    } else {
                        stk.pop();
                        stk.push('f');
                    }
                }
            }
        } else {
            if (stk.empty()) {
                stk.push('f');
            } else {
                char op = stk.top();
                stk.pop();
                if (op == '&') {
                    stk.push(stk.top() == 'f' ? 'f' : 't');
                    stk.pop();
                    stk.push('f');
                } else {
                    stk.push('f');
                }
            }
        }
    }
    cout << (stk.top() == 't' ? "True" : "False") << endl;
    return 0;
}

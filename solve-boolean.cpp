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
    stack<char> stk;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '&' || s[i] == '|') {
            stk.push(s[i]);
        } else if(s[i] == 't') {
            if(stk.empty()) {
                stk.push(s[i]);
            } else {
                char op = stk.top();
                stk.pop();
                if(op == '&') {
                    stk.push('t');
                } else {
                    if(stk.top() == 't') {
                        stk.push('t');
                    } else {
                        stk.push('f');
                    }
                }
            }
        } else if(s[i] == 'f') {
            if(stk.empty()) {
                stk.push(s[i]);
            } else {
                char op = stk.top();
                stk.pop();
                if(op == '&') {
                    stk.push('f');
                } else {
                    if(stk.top() == 't') {
                        stk.push('t');
                    } else {
                        stk.push('f');
                    }
                }
            }
        }
    }
    return stk.top() == 't';
}

int main() {
    cout << evaluate("t&f") << endl;
    cout << evaluate("t&t") << endl;
    cout << evaluate("t|f") << endl;
    cout << evaluate("t|t") << endl;
    cout << evaluate("f|f") << endl;
    cout << evaluate("f&f") << endl;
    cout << evaluate("f&t") << endl;
    cout << evaluate("t") << endl;
    cout << evaluate("f") << endl;
    return 0;
}

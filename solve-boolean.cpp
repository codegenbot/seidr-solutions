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
t&f
output:
True
input:
f&t
output:
False
*/
int main() {
    string s;
    cin >> s;
    stack<char> stk;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == '&' || s[i] == '|') {
            stk.push(s[i]);
            i++;
        } else if (s[i] == 't') {
            stk.push(s[i]);
            i++;
        } else if (s[i] == 'f') {
            char op = stk.top();
            stk.pop();
            char tmp = stk.top();
            stk.pop();
            if (op == '&') {
                if (tmp == 't' && s[i] == 't') {
                    stk.push('t');
                } else {
                    stk.push('f');
                }
            } else {
                if (tmp == 't' || s[i] == 't') {
                    stk.push('t');
                } else {
                    stk.push('f');
                }
            }
            i++;
        }
    }
    if (stk.top() == 't') {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}

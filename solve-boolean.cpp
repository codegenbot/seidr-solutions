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
    string str;
    cin >> str;
    stack<char> s;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '&' || str[i] == '|') {
            s.push(str[i]);
        } else if (str[i] == 't') {
            if (s.empty()) {
                s.push('t');
            } else {
                char op = s.top();
                s.pop();
                char op2 = s.top();
                s.pop();
                if (op == '&') {
                    if (op2 == 't') {
                        s.push('t');
                    } else {
                        s.push('f');
                    }
                } else {
                    s.push('t');
                }
            }
        } else {
            if (s.empty()) {
                s.push('f');
            } else {
                char op = s.top();
                s.pop();
                char op2 = s.top();
                s.pop();
                if (op == '&') {
                    s.push('f');
                } else {
                    if (op2 == 't') {
                        s.push('t');
                    } else {
                        s.push('f');
                    }
                }
            }
        }
    }
    if (s.top() == 't') {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}

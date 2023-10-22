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
    while (cin >> str) {
        stack<char> ops;
        stack<bool> values;
        for (int i = 0; i < str.size(); i++) {
            char c = str[i];
            if (c == '&' || c == '|') {
                ops.push(c);
            } else if (c == 'T') {
                values.push(true);
            } else if (c == 'F') {
                values.push(false);
            } else if (c == ')') {
                bool v2 = values.top();
                values.pop();
                bool v1 = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                if (op == '&') {
                    values.push(v1 && v2);
                } else if (op == '|') {
                    values.push(v1 || v2);
                }
            }
        }
        cout << (values.top() ? "True" : "False") << endl;
    }
    return 0;
}

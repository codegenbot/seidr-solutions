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
bool eval(string str) {
    stack<char> ops;
    stack<bool> vals;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') continue;
        if (str[i] == '(') continue;
        if (str[i] == '|') ops.push(str[i]);
        else if (str[i] == '&') ops.push(str[i]);
        else if (str[i] == ')') {
            char op = ops.top(); ops.pop();
            bool val2 = vals.top(); vals.pop();
            bool val1 = vals.top(); vals.pop();
            if (op == '|') vals.push(val1 || val2);
            else if (op == '&') vals.push(val1 && val2);
        } else vals.push(str[i] == 'T');
    }
    return vals.top();
}
int main() {
    cout << eval("T") << endl;
    cout << eval("F") << endl;
    cout << eval("F&F") << endl;
    cout << eval("F&T") << endl;
    cout << eval("T&F") << endl;
    cout << eval("T&T") << endl;
    cout << eval("T|F") << endl;
    cout << eval("T|T") << endl;
    cout << eval("F|F") << endl;
    cout << eval("F|T") << endl;
    cout << eval("T&(F|T)") << endl;
    cout << eval("T&(F|F)") << endl;
    cout << eval("(T&(F|F))|F") << endl;
    return 0;
}

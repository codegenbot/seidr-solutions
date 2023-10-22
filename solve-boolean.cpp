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

bool evaluate(string boolExpr) {
    stack<bool> st;
    for (int i = 0; i < boolExpr.length(); i++) {
        if (boolExpr[i] != '&' && boolExpr[i] != '|' && boolExpr[i] != '!') {
            if (boolExpr[i] == 't') {
                st.push(true);
            } else {
                st.push(false);
            }
        } else {
            bool right = st.top();
            st.pop();
            bool left = st.top();
            st.pop();
            if (boolExpr[i] == '&') {
                st.push(left & right);
            } else if (boolExpr[i] == '|') {
                st.push(left | right);
            } else {
                st.push(!left);
            }
        }
    }
    return st.top();
}

int main() {
    cout << evaluate("t|f") << endl;
    cout << evaluate("t|t") << endl;
    cout << evaluate("f&f") << endl;
    cout << evaluate("f&t") << endl;
    cout << evaluate("t&f") << endl;
}

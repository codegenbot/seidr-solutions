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

bool parseBoolExpr(string expression) {
    if (expression.size() == 1) {
        return expression[0] == 't' || expression[0] == 'T';
    }
    stack<char> st;
    for (int i = 0; i < expression.size(); ++i) {
        if (expression[i] == ')') {
            vector<char> values;
            while (st.top() != '(') {
                values.push_back(st.top());
                st.pop();
            }
            st.pop();
            char op = st.top();
            st.pop();
            bool ans = false;
            if (op == '&') {
                ans = true;
                for (auto c : values) {
                    if (c == 'f' || c == 'F') {
                        ans = false;
                        break;
                    }
                }
            } else if (op == '|') {
                for (auto c : values) {
                    if (c == 't' || c == 'T') {
                        ans = true;
                        break;
                    }
                }
            } else {
                for (auto c : values) {
                    if (c == 't') {
                        ans = false;
                        break;
                    }
                }
                ans = true;
            }
            st.push(ans ? 't' : 'f');
        } else {
            st.push(expression[i]);
        }
    }
    return st.top() == 't';
}

int main() {
    cout << parseBoolExpr("t") << endl;
    cout << parseBoolExpr("f") << endl;
    cout << parseBoolExpr("f&f") << endl;
    cout << parseBoolExpr("f&t") << endl;
    cout << parseBoolExpr("t&f") << endl;
    return 0;
}

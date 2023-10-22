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
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c == ' ') continue;
        if (c == ')') {
            char a = st.top(); st.pop();
            char b = st.top(); st.pop();
            char op = st.top(); st.pop();
            char res;
            if (op == '&') {
                res = a == 't' && b == 't' ? 't' : 'f';
            } else {
                res = a == 'f' && b == 'f' ? 'f' : 't';
            }
            st.push(res);
        } else {
            st.push(c);
        }
    }
    cout << (st.top() == 't' ? "True" : "False") << endl;
    return 0;
}

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
    //freopen("/Users/xxx/Desktop/input.txt", "r", stdin);
    //freopen("/Users/xxx/Desktop/out.txt", "w", stdout);
    string s;
    cin >> s;
    stack<bool> st;
    vector<char> ops;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c == '(') continue;
        if (c == 'T' || c == 'F') {
            st.push(c == 'T' ? true : false);
        } else if (c == ')') {
            bool t = st.top();
            st.pop();
            while (ops.size() && ops.back() != '(') {
                char op = ops.back();
                ops.pop_back();
                bool t1 = st.top();
                st.pop();
                t = (op == '&' && t1 && t) || (op == '|' && (t1 || t));
            }
            ops.pop_back();
            st.push(t);
        } else {
            ops.push_back(c);
        }
    }
    if (st.top()) cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}

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
    bool cur = false;
    if (s.empty()) return false;
    if (s[0] == 'T') cur = true;
    bool res = cur;
    stack<bool> st;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '&') {
            st.push(cur);
            res = res && cur;
        } else if (s[i] == '|') {
            st.push(cur);
            res = res || cur;
        } else if (s[i] == 'T') {
            cur = true;
        } else if (s[i] == 'F') {
            cur = false;
        } else if (s[i] == ')') {
            cur = st.top();
            st.pop();
        }
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << evaluate(s) << endl;
    return 0;
}

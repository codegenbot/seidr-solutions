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
    while (cin >> s) {
        int len = s.size();
        if (len == 1) {
            if (s[0] == 't') cout << "True" << endl;
            else cout << "False" << endl;
            continue;
        }
        stack<char> st;
        bool ans = false;
        for (int i = 0; i < len; i++) {
            if (s[i] == '&' || s[i] == '|') {
                char op = s[i];
                char c1 = st.top();
                st.pop();
                char c2 = st.top();
                st.pop();
                if (op == '&') {
                    ans = (c1 == 't' && c2 == 't');
                } else {
                    ans = (c1 == 't' || c2 == 't');
                }
                st.push(ans ? 't' : 'f');
            } else {
                st.push(s[i]);
            }
        }
        cout << (st.top() == 't' ? "True" : "False") << endl;
    }
    return 0;
}

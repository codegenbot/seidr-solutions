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
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&' || s[i] == '|') {
            char c1 = st.top();
            st.pop();
            char c2 = st.top();
            st.pop();
            if (s[i] == '&') {
                if (c1 == 'T' && c2 == 'T') {
                    st.push('T');
                } else {
                    st.push('F');
                }
            } else {
                if (c1 == 'T' || c2 == 'T') {
                    st.push('T');
                } else {
                    st.push('F');
                }
            }
        } else {
            st.push(s[i]);
        }
    }
    if (st.top() == 'T') {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}

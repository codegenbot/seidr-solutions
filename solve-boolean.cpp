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
            st.push(s[i]);
        } else if (s[i] == 't') {
            if (st.empty()) {
                st.push('t');
            } else {
                char op = st.top();
                st.pop();
                if (op == '&') {
                    st.push('t');
                } else if (op == '|') {
                    if (st.top() == 't') {
                        st.pop();
                        st.push('t');
                    } else {
                        st.pop();
                        st.push('t');
                    }
                }
            }
        } else if (s[i] == 'f') {
            if (st.empty()) {
                st.push('f');
            } else {
                char op = st.top();
                st.pop();
                if (op == '&') {
                    st.push('f');
                } else if (op == '|') {
                    if (st.top() == 't') {
                        st.pop();
                        st.push('t');
                    } else {
                        st.pop();
                        st.push('f');
                    }
                }
            }
        }
    }
    if (st.top() == 't') {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}

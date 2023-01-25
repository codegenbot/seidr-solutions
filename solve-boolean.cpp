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
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&' || s[i] == '|') {
            st.push(s[i]);
        } else {
            if (st.empty()) {
                st.push(s[i]);
            } else {
                char c = st.top();
                st.pop();
                if (c == '&') {
                    if (s[i] == 'f' || st.top() == 'f') {
                        st.pop();
                        st.push('f');
                    } else {
                        st.pop();
                        st.push('t');
                    }
                } else {
                    if (s[i] == 't' || st.top() == 't') {
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

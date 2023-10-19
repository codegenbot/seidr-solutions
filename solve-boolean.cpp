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
Given a string representing a Boolean expression consisting of T, F, |, and &,
evaluate it and return the resulting Boolean.
For example,
input:
True
output:
True
input:
False
output:
False
input:
False&False
output:
False
input:
False&True
output:
False
input:
True&False
output:
False
*/
int main() {
    string s, t;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'T') {
            t += 'T';
        } else if (s[i] == 'F') {
            t += 'F';
        } else {
            t += s[i];
        }
    }
    cout << t << endl;
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&' || s[i] == '|') {
            char c = s[i];
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            if (c == '&') {
                if (a == 'T' && b == 'T') {
                    st.push('T');
                } else {
                    st.push('F');
                }
            } else {
                if (a == 'F' && b == 'F') {
                    st.push('F');
                } else {
                    st.push('T');
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

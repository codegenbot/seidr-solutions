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
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ')') {
            char op = st.top();
            st.pop();
            bool b = st.top() == 't';
            st.pop();
            st.pop();
            if(op == '&') {
                b = b & (st.top() == 't');
            } else {
                b = b | (st.top() == 't');
            }
            st.pop();
            if(b) {
                st.push('t');
            } else {
                st.push('f');
            }
        } else {
            st.push(s[i]);
        }
    }
    if(st.top() == 't') {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}

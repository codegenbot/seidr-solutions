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
T
output:
True
input:
F
output:
False
input:
F&F
output:
False
input:
F&T
output:
False
input:
T&F
output:
False
*/
int main() {
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&' || s[i] == '|') {
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            if (s[i] == '&') {
                if (a == 'T' && b == 'T') {
                    st.push('T');
                } else {
                    st.push('F');
                }
            } else {
                if (a == 'T' || b == 'T') {
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
        cout << "True" << endl; // make sure that t -> True 
    } else {
        cout << "False" << endl;
    }
    return 0;
}

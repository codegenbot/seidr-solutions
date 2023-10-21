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
    string input;
    cin >> input;
    stack<char> st;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'T') {
            st.push('t');
        } else if (input[i] == 'F') {
            st.push('f');
        } else if (input[i] == '&') {
            char c1 = st.top();
            st.pop();
            char c2 = st.top();
            st.pop();
            if (c1 == 'f' || c2 == 'f') {
                st.push('f');
            } else {
                st.push('t');
            }
        } else if (input[i] == '|') {
            char c1 = st.top();
            st.pop();
            char c2 = st.top();
            st.pop();
            if (c1 == 't' || c2 == 't') {
                st.push('t');
            } else {
                st.push('f');
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

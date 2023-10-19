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
    getline(cin, s);
    stack<int> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'T' || s[i] == 't') {
            st.push(1);
        } else if (s[i] == 'F' || s[i] == 'f') {
            st.push(0);
        } else if (s[i] == '|') {
            int left = st.top();
            st.pop();
            int right = st.top();
            st.pop();
            st.push(left | right);
        } else if (s[i] == '&') {
            int left = st.top();
            st.pop();
            int right = st.top();
            st.pop();
            st.push(left & right);
        }
    }
    if (st.top()) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}

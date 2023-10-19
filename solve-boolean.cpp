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
    string s;
    getline(cin, s);
    stack<int> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'T' && s[i + 1] == 'r' && s[i + 2] == 'u' && s[i + 3] == 'e') {
            i += 3;
            st.push(1);
        } else if (s[i] == 'F' && s[i + 1] == 'a' && s[i + 2] == 'l' && s[i + 3] == 's' && s[i + 4] == 'e') {
            i += 4;
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

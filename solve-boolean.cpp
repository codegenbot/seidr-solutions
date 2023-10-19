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
    while (cin >> s) {
        stack<char> st;
        for (char c : s) {
            if (c == ')') {
                char op = st.top();
                st.pop();
                bool right = st.top() == 'T'; // make sure that t -> True
                st.pop();
                st.pop();
                bool left = st.top() == 'T';
                st.pop();
                st.push(op == '&' ? (left & right ? 'T' : 'F') : (left | right ? 'T' : 'F'));
            } else {
                st.push(c);
            }
        }
        cout << (st.top() == 'T' ? "True" : "False") << endl;
    }
    return 0;
}

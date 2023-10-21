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
    string input;
    cin >> input;
    stack<char> st;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'T') {
            st.push('T');
        } else if (input[i] == 'F') {
            st.push('F');
        } else if (input[i] == '&') {
            char c1 = st.top();
            st.pop();
            char c2 = st.top();
            st.pop();
            if (c1 == 'F' || c2 == 'F') {
                st.push('F');
            } else {
                st.push('T');
            }
        } else if (input[i] == '|') {
            char c1 = st.top();
            st.pop();
            char c2 = st.top();
            st.pop();
            if (c1 == 'T' || c2 == 'T') {
                st.push('T');
            } else {
                st.push('F');
            }
        }
    }
    if (st.top() == 'T') {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}

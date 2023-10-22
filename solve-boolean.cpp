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
't'
output:
True
input:
'f'
output:
False
input:
'f&f'
output:
False
input:
'f&t'
output:
False
input:
't&f'
output:
False
*/
int main() {
    string input;
    cin >> input;
    int n = input.size();
    bool res = true;
    stack<char> st;
    for (int i = 0; i < n; i++) {
        if (input[i] == 't') {
            st.push(input[i]);
        } else if (input[i] == 'f') {
            st.push(input[i]);
        } else if (input[i] == '|' || input[i] == '&') {
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            if (input[i] == '|') {
                if (a == 't' || b == 't') {
                    st.push('t');
                } else {
                    st.push('f');
                }
            } else if (input[i] == '&') {
                if (a == 'f' || b == 'f') {
                    st.push('f');
                } else {
                    st.push('t');
                }
            }
        }
    }
    if (st.top() == 't') {
        cout << "True" << endl;
    } else if (st.top() == 'f') {
        cout << "False" << endl;
    }
    return 0;
}

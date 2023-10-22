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
    string str;
    while (cin >> str) {
        stack<char> st;
        for (char ch : str) {
            if (st.empty()) {
                st.push(ch);
            } else {
                if (ch == '&' || ch == '|') {
                    st.push(ch);
                } else {
                    char op = st.top();
                    st.pop();
                    char ch1 = st.top();
                    st.pop();
                    if (op == '&') {
                        if (ch1 == 'T' && ch == 'T') {
                            st.push('T');
                        } else {
                            st.push('F');
                        }
                    }
                    if (op == '|') {
                        if (ch1 == 'F' && ch == 'F') {
                            st.push('F');
                        } else {
                            st.push('T');
                        }
                    }
                }
            }
        }
        cout << (st.top() == 'T' ? "True" : "False") << endl;
    }
    return 0;
}

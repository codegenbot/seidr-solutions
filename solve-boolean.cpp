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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    while (cin >> s) {
        int n = s.size();
        stack<int> st;
        for (int i = 0; i < n; i++) {
            if (s[i] == 't') st.push(1);
            else if (s[i] == 'f') st.push(0);
            else {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if (s[i] == '&') st.push(a & b);
                else st.push(a | b);
            }
        }
        if (st.top()) cout << "True" << endl;
        else cout << "False" << endl;
    }
    return 0;
}

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
t&f
output:
False
For concatenation use operator ^
*/
int main() {
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ')
            continue;
        if(s[i] == 't' || s[i] == 'f')
            st.push(s[i]);
        else {
            char b = st.top();
            st.pop();
            char a = st.top();
            st.pop();
            if(s[i] == '&') {
                if(a == 'f' || b == 'f')
                    st.push('f');
                else
                    st.push('t');
            } else {
                if(a == 't' || b == 't')
                    st.push('t');
                else
                    st.push('f');
            }
        }
    }
    if(st.top() == 't')
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}

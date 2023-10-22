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

bool eval(string s) {
    stack<bool> st;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '&') {
            bool a = st.top();
            st.pop();
            bool b = st.top();
            st.pop();
            st.push(a&b);
        } else if(s[i] == '|') {
            bool a = st.top();
            st.pop();
            bool b = st.top();
            st.pop();
            st.push(a|b);
        } else if(s[i] == 't') {
            st.push(true);
        } else if(s[i] == 'f') {
            st.push(false);
        }
    }
    return st.top();
}

int main() {
    string s;
    cin>>s;
    cout<<eval(s)<<endl;
    return 0;
}

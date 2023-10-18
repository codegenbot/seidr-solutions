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

string eval(string s) {
    stack<string> st;
    for(int i = s.size() - 1; i >= 0; i--) {
        if(s[i] == '|' || s[i] == '&') {
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            string c = "(" + a + s[i] + b + ")";
            st.push(c);
        } else {
            if(s[i] == 't' || s[i] == 'T') {
                st.push("True");
            } else {
                st.push("False");
            }
        }
    }
    return st.top();
}

int main() {
    cout << eval("T|f&f") << endl;
    cout << eval("T|f") << endl;
    cout << eval("T&f") << endl;
    cout << eval("T|T") << endl;
    cout << eval("T") << endl;
    cout << eval("f") << endl;
    cout << eval("f&f") << endl;
    cout << eval("f&T") << endl;
    cout << eval("T&f") << endl;
    return 0;
}

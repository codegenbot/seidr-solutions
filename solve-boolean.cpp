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

string eval(string s) {
    stack<string> st;
    for(int i = s.size() - 1; i >= 0; i--) {
        if(s[i] == '|' || s[i] == '&') {
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            string c = "(" + a + (s[i] == '|' ? "||" : "&&") + b + ")";
            st.push(c);
        } else {
            st.push(s[i] == 't' ? "True" : "False");
        }
    }
    return st.top();
}

int main() {
    cout << eval("T|F&F") << endl;
    cout << eval("T|F") << endl;
    cout << eval("T&F") << endl;
    cout << eval("T|t") << endl;
    cout << eval("T") << endl;
    cout << eval("F") << endl;
    cout << eval("F&F") << endl;
    cout << eval("F&T") << endl;
    cout << eval("T&F") << endl;
    return 0;
}

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
bool evaluate(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') continue;
        if (s[i] == ')') {
            char op = st.top(); st.pop();
            bool val1 = st.top() == 't'; st.pop();
            st.pop();
            bool val2 = st.top() == 't'; st.pop();
            st.pop();
            if (op == '&') st.push(val1 & val2 ? 't' : 'f');
            else if (op == '|') st.push(val1 | val2 ? 't' : 'f');
        } else st.push(s[i]);
    }
    return st.top() == 't';
}
int main() {
    cout << evaluate("t") << endl;
    cout << evaluate("f") << endl;
    cout << evaluate("f&f") << endl;
    cout << evaluate("f&t") << endl;
    cout << evaluate("t&f") << endl;
    cout << evaluate("(t&f)") << endl;
    cout << evaluate("(f&t)") << endl;
    cout << evaluate("(t&f)|f") << endl;
    cout << evaluate("(t&f)|t") << endl;
    cout << evaluate("(t&f)|(t&f)") << endl;
    cout << evaluate("(t&f)|(t&t)") << endl;
    cout << evaluate("(t&t)|(t&f)") << endl;
    cout << evaluate("(t&t)|(t&t)") << endl;
    return 0;
}

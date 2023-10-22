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

bool get_eval(string expr) {
    int len = expr.length();
    stack<bool> st;
    for (int i = 0; i < len; i++) {
        char c = expr[i];
        if (c == 'T' || c == 'F') {
            st.push(c == 'T' ? true : false);
        } else if (c == '|') {
            bool v1 = st.top();
            st.pop();
            bool v2 = st.top();
            st.pop();
            st.push(v1 || v2);
        } else if (c == '&') {
            bool v1 = st.top();
            st.pop();
            bool v2 = st.top();
            st.pop();
            st.push(v1 && v2);
        }
    }
    return st.top();
}


int main() {
    string input = "F&F";
    cout << "input: " << input << endl;
    bool output = get_eval(input);
    cout << "output: " << (output ? "True" : "False") << endl;

    input = "T";
    cout << "input: " << input << endl;
    output = get_eval(input);
    cout << "output: " << (output ? "True" : "False") << endl;

    input = "F";
    cout << "input: " << input << endl;
    output = get_eval(input);
    cout << "output: " << (output ? "True" : "False") << endl;

    input = "F&F";
    cout << "input: " << input << endl;
    output = get_eval(input);
    cout << "output: " << (output ? "True" : "False") << endl;

    input = "F&T";
    cout << "input: " << input << endl;
    output = get_eval(input);
    cout << "output: " << (output ? "True" : "False") << endl;

    input = "T&F";
    cout << "input: " << input << endl;
    output = get_eval(input);
    cout << "output: " << (output ? "True" : "False") << endl;
    return 0;
}

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
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ')') {
            string temp;
            while (st.top() != '(') {
                temp += st.top();
                st.pop();
            }
            st.pop();
            bool flag = eval(temp);
            if (flag) st.push('t');
            else st.push('f');
        }
        else {
            st.push(s[i]);
        }
    }
    string temp;
    while (!st.empty()) {
        temp += st.top();
        st.pop();
    }
    reverse(temp.begin(), temp.end());
    bool flag = eval(temp);
    if (flag) cout << "True" << endl;
    else cout << "False" << endl;
    return flag;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        eval(s);
    }
    return 0;
}

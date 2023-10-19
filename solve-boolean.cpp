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
    string s;
    cin >> s;
    bool result = false;
    stack<char> op;
    stack<bool> val;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'T' || s[i] == 'F') {
            result = s[i] == 'T' ? true : false;
            val.push(result);
        } else if (s[i] == '&' || s[i] == '|') {
            op.push(s[i]);
        } else {
            char c = op.top();
            op.pop();
            bool v1 = val.top();
            val.pop();
            bool v2 = val.top();
            val.pop();
            if (c == '&') {
                val.push(v1 && v2);
            } else {
                val.push(v1 || v2);
            }
        }
    }
    result = val.top();
    val.pop();
    cout << (result ? "True" : "False") << endl;
    return 0;
}

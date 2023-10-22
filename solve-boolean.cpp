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
    cin >> str;
    stack<bool> s;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'T') {
            s.push(true);
        } else if (str[i] == 'F') {
            s.push(false);
        } else if (str[i] == '&') {
            bool b1 = s.top();
            s.pop();
            bool b2 = s.top();
            s.pop();
            s.push(b1 && b2);
        } else if (str[i] == '|') {
            bool b1 = s.top();
            s.pop();
            bool b2 = s.top();
            s.pop();
            s.push(b1 || b2);
        }
    }
    if (s.top()) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}

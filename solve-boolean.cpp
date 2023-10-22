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
    stack<bool> stk;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'F') stk.push(false);
        else if (s[i] == 'T') stk.push(true);
        else if (s[i] == '|') {
            bool a = stk.top(); stk.pop();
            bool b = stk.top(); stk.pop();
            stk.push(a || b);
        }
        else {
            bool a = stk.top(); stk.pop();
            bool b = stk.top(); stk.pop();
            stk.push(a && b);
        }
    }
    cout << boolalpha << stk.top() << endl;
}

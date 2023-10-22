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
    int n = s.length();
    vector<int> stk;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'T' || s[i] == 'F') {
            stk.push_back(s[i] == 'T');
        } else if (s[i] == '&') {
            int a = stk.back();
            stk.pop_back();
            int b = stk.back();
            stk.pop_back();
            stk.push_back(a & b);
        } else if (s[i] == '|') {
            int a = stk.back();
            stk.pop_back();
            int b = stk.back();
            stk.pop_back();
            stk.push_back(a | b);
        }
    }
    cout << (stk.back() ? "True" : "False") << endl;
    return 0;
}

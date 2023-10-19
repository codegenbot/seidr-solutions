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
    /**
     T -> True
     */
    map<char, int> mapping;
    mapping['T'] = 1;
    mapping['F'] = 0;
    string ln;
    cin >> ln;
    stack<int> stk;
    for (int i = 0; i < ln.length(); i++) {
        char node = ln[i];
        if (node == '|') {
            int right = stk.top();
            stk.pop();
            int left = stk.top();
            stk.pop();
            bool res = left | right;
            stk.push(res);
        } else if (node == '&') {
            int right = stk.top();
            stk.pop();
            int left = stk.top();
            stk.pop();
            bool res = left & right;
            stk.push(res);
        } else {
            stk.push(mapping[node]);
        }
    }
        if (stk.top()) {
            cout << "T" << endl;
        } else {
            cout << "F" << endl;
        }
    }
    return 0;

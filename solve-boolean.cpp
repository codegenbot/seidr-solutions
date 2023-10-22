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
    stack<string> stk;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 't') {
            stk.push("t");
        }
        else if (s[i] == 'f') {
            stk.push("f");
        }
        else if (s[i] == '|') {
            string a = stk.top();
            stk.pop();
            string b = stk.top();
            stk.pop();
            if (a == "t" || b == "t") {
                stk.push("t");
            }
            else {
                stk.push("f");
            }
        }
        else {
            string a = stk.top();
            stk.pop();
            string b = stk.top();
            stk.pop();
            if (a == "t" && b == "t") {
                stk.push("t");
            }
            else {
                stk.push("f");
            }
        }
    }
    return stk.top() == "t";
}

int main() {
    string a = "t";
    cout << eval(a) << endl;
    string b = "f";
    cout << eval(b) << endl;
    string c = "f&f";
    cout << eval(c) << endl;
    string d = "f&t";
    cout << eval(d) << endl;
    string e = "t&f";
    cout << eval(e) << endl;
}

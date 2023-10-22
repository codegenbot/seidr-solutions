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

bool and_op(bool a, bool b) {
    return a && b;
}

bool or_op(bool a, bool b) {
    return a || b;
}

bool not_op(bool a) {
    return !a;
}

bool T = true;
bool F = false;

map<char, bool> truthTable;


bool eval(string s) {
    if (s.size() == 1) {
        return truthTable[s[0]];
    }
    int num = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            num++;
        } else if (s[i] == ')') {
            num--;
        }
        if (num == 0 && s[i] == '&') {
            return and_op(eval(s.substr(0, i)), eval(s.substr(i + 1, s.size() - i - 1)));
        }
        if (num == 0 && s[i] == '|') {
            return or_op(eval(s.substr(0, i)), eval(s.substr(i + 1, s.size() - i - 1)));
        }
    }
    if (s[0] == '(' && s.back() == ')') {
        return eval(s.substr(1, s.size() - 2));
    }
    return not_op(eval(s.substr(1, s.size() - 1)));
}

int main() {
    truthTable['t'] = true;
    truthTable['f'] = false;
    
    string s;
    while (cin >> s) {
        cout << eval(s) << endl;
    }
}

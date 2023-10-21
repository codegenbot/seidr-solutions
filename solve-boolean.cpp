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
True
input:
t&f
output:
False
*/
bool evaluate(string& s, int& i) {
    if (s[i] == 't') {
        i += 2;
        return true;
    } else if (s[i] == 'f') {
        i += 2;
        return false;
    } else {
        i += 1;
        bool left = evaluate(s, i);
        char op = s[i];
        i += 2;
        bool right = evaluate(s, i);
        if (op == '&')
            return left && right;
        else if (op == '|')
            return left || right;
        else
            return !left;
    }
}

int main() {
    string s;
    cin >> s;
    int i = 0;
    bool res = evaluate(s, i);
    cout << (res ? "True" : "False") << endl;
    return 0;
}

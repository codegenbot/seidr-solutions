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
    if (s.length() == 1) {
        return s[0] == 'T';
    }
    int n = s.length();
    int i = 0;
    while (i < n) {
        if (s[i] == '&') {
            return eval(s.substr(0, i)) && eval(s.substr(i + 1, n - i - 1));
        } else if (s[i] == '|') {
            return eval(s.substr(0, i)) || eval(s.substr(i + 1, n - i - 1));
        }
        i++;
    }
    return false;
}
int main() {
    string s;
    while (cin >> s) {
        cout << eval(s) << endl;
    }
    return 0;
}

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
    int n = s.size();
    bool res = s[0] == 't';
    for (int i = 1; i < n; i += 2) {
        if (s[i] == '&') {
            res &= s[i + 1] == 't';
        } else {
            res |= s[i + 1] == 't';
        }
    }
    cout << (res ? "True" : "False") << endl;
    return 0;
}

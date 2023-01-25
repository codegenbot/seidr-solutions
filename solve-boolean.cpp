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
    while (cin >> s) {
        int len = s.size();
        int i = 0;
        bool res = true;
        while (i < len) {
            if (s[i] == 't' || s[i] == 'T') {
                i++;
            } else if (s[i] == 'f' || s[i] == 'F') {
                res = false;
                i++;
            } else if (s[i] == '&') {
                if (s[i + 1] == 't' || s[i + 1] == 'T') {
                    i += 2;
                } else {
                    res = false;
                    i += 2;
                }
            } else if (s[i] == '|') {
                if (s[i + 1] == 't' || s[i + 1] == 'T') {
                    res = true;
                    i += 2;
                } else {
                    i += 2;
                }
            }
        }
        if (res) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }
    return 0;
}

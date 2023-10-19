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
    string a;
    while (cin >> a) {
        int len = a.length();
        bool ans = false;
        bool flag = false;
        for (int i = 0; i < len; i++) {
            if (a[i] == 't') {
                if (flag) {
                    ans = ans & true;
                } else {
                    ans = true;
                }
                flag = false;
            } else if (a[i] == 'f') {
                if (flag) {
                    ans = ans & false;
                } else {
                    ans = false;
                }
                flag = false;
            } else if (a[i] == '&') {
                flag = true;
            } else if (a[i] == '|') {
                flag = false;
            }
        }
        if (ans) {
            cout << "True\n";
        } else {
            cout << "False\n";
        }
    }
}

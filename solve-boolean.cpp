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
    vector<int> dp(n, 0);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'T') {
            dp[i] = 1;
        } else if (s[i] == 'F') {
            dp[i] = 0;
        } else {
            if (i == 0) {
                continue;
            }
            if (s[i] == '&') {
                dp[i] = dp[i - 1] & dp[i - 2];
            } else if (s[i] == '|') {
                dp[i] = dp[i - 1] | dp[i - 2];
            }
        }
    }
    if (dp[n - 1] == 1) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}

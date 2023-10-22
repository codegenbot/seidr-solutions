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

bool parsing(string s, int start, int end) {
    if (start == end) {
        return s[start] == 'T';
    }
    int count = 0;
    for (int i = start; i <= end; i++) {
        if (s[i] == '(') {
            count++;
        } else if (s[i] == ')') {
            count--;
        } else if (count == 0 && (s[i] == '&' || s[i] == '|')) {
            char operatorChar = s[i];
            if (operatorChar == '&') {
                return parsing(s, start, i - 1) & parsing(s, i + 1, end);
            } else {
                return parsing(s, start, i - 1) | parsing(s, i + 1, end);
            }
        }
    }
    return parsing(s, start + 1, end - 1);
}

int main() {
    string s;
    getline(cin, s);
    bool res = parsing(s, 0, s.length() - 1);
    cout << (res ? "True" : "False") << endl;
    return 0;
}
